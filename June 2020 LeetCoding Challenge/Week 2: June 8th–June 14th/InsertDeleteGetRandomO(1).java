class RandomizedSet {
    HashMap<Integer, Integer> valueMap;
    HashMap<Integer, Integer> indexMap;
    /** Initialize your data structure here. */
    public RandomizedSet() {
        valueMap = new HashMap<>();
        indexMap = new HashMap<>();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    public boolean insert(int val) {
        if(valueMap.containsKey(val)){
            return false;
        }
 
        valueMap.put(val, valueMap.size());
        indexMap.put(indexMap.size(), val);
 
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    public boolean remove(int val) {
        if(valueMap.containsKey(val)){
            int index = valueMap.get(val);
            valueMap.remove(val);
            indexMap.remove(index);
 
            Integer lastElement = indexMap.get(indexMap.size());
            if(lastElement != null){
                indexMap.put(index, lastElement);
                valueMap.put(lastElement, index);
            }
 
            return true;
        }
 
        return false;
        
    }
    
    /** Get a random element from the set. */
    public int getRandom() {
        if(valueMap.size()==0){
            return -1;
        }
 
        if(valueMap.size()==1){
            return indexMap.get(0);
        }
 
        Random r = new Random();
        int index = r.nextInt(valueMap.size());
 
        return indexMap.get(index);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
