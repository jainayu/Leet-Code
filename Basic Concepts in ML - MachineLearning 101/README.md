# [Basic Concepts in ML - Machine Learning 101](https://leetcode.com/explore/featured/card/machine-learning-101/)

## Introduction

In this explore card, I got to know some basic concepts in the domain of machine learning.

By completing this card, I am able to:

- Identify different types of machine learning problems;
- Know what a machine learning model is;
- Know the general workflow of building and applying a machine learning model;
- Know the advantages and disadvantages about machine learning algorithms;

------

## [Machine Learning - What](https://leetcode.com/explore/featured/card/machine-learning-101/287/what_is_ml/)

In this chapter, they define the notions of Machine Learning (ML) algorithm and model. Then they clarify several types of ML algorithm, based on various criteria. 

### [Machine Learning Model](https://leetcode.com/explore/featured/card/machine-learning-101/287/what_is_ml/1617/)

- The term, `Machine Learning`, often mystifies its nature of computer science, as its name might suggest that the machine is learning as human does, or even better. 

- What distinguishes a machine learning algorithm from a non-machine-learning algorithm, such as a program that controls traffic lights, is its ability to `adapt` its behaviors to new input. And this adaptation, which seems to have no human intervention, occasionally leads to the impression that the machine is actually `learning`.

- ***So what is a machine learning model?***
  - A machine learning algorithm is the process that uncovers the underlying relationship within the data. 
  - The outcome of a machine learning algorithm is called **machine learning model**, which can be considered as a `function` _F_, which outputs certain results, when given the input.
  - Rather than a predefined and fixed function, a machine learning model is derived from historical data. Therefore, when fed with different data, the output of machine learning algorithm changes, i.e. the machine learning model changes.

> The task of machine learning, is to **learn** the function, from the vast mapping space.

- Most of the time, what we learn at the end, is an `approximation` to this underlying relationship. Due to its nature of approximation, one should not be disappointed to find that the results of a machine learning model is often not 100% accurate. Before the wide application of deep learning in 2012, the best machine learning model can only achieve around 75% accuracy in the [ImageNet visual recognition challenge](http://www.image-net.org/). Till now, still, no machine learning model can claim 100% accuracy, although there are models that make fewer errors (<5%) than humans in this task. 

------
