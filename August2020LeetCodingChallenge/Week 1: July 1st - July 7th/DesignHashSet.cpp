class MyHashSet {
    vector<list<int> *> myHashSet;
    const int size = 1000;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        myHashSet = vector<list<int> *>(size, nullptr);
    }
    
    void add(int key) {
         if(contains(key))
            return;
        
        int hashValue = getHashValue(key);
        
        if(myHashSet[hashValue] == nullptr)
            myHashSet[hashValue] = new list<int>();
        
       
        myHashSet[hashValue] -> push_back(key);
        
    }
    
    void remove(int key) {
        if(!contains(key))
            return;
        
        int hashValue = getHashValue(key);

        myHashSet[hashValue]->remove(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int hashValue = getHashValue(key);
        
        if(myHashSet[hashValue] == nullptr)
            return false;

        for(auto &x : *myHashSet[hashValue])
        {
            if(x == key)
                return true;
        }
        
        return false;
        
    }
    
    int getHashValue(int key)
    {
        return key % size;
        
    }
    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
