# [Basic Concepts in ML - Machine Learning 101](https://leetcode.com/explore/featured/card/machine-learning-101/)

This was one of the card in explore section of leetcode which got to my attention as I was thinkig to revise some concept of ML. So I liked how they briefly explained topics. Here are some notes from that section.
 
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

#### [Machine Learning Model](https://leetcode.com/explore/featured/card/machine-learning-101/287/what_is_ml/1617/)

- The term, `Machine Learning`, often mystifies its nature of computer science, as its name might suggest that the machine is learning as human does, or even better. 

- What distinguishes a machine learning algorithm from a non-machine-learning algorithm, such as a program that controls traffic lights, is its ability to `adapt` its behaviors to new input. And this adaptation, which seems to have no human intervention, occasionally leads to the impression that the machine is actually `learning`.

- **So what is a machine learning model?**
  - A machine learning algorithm is the process that uncovers the underlying relationship within the data. 
  - The outcome of a machine learning algorithm is called **machine learning model**, which can be considered as a `function` _F_, which outputs certain results, when given the input.
  - Rather than a predefined and fixed function, a machine learning model is derived from historical data. Therefore, when fed with different data, the output of machine learning algorithm changes, i.e. the machine learning model changes.

> The task of machine learning, is to **learn** the function, from the vast mapping space.

- Most of the time, what we learn at the end, is an `approximation` to this underlying relationship. Due to its nature of approximation, one should not be disappointed to find that the results of a machine learning model is often not 100% accurate. Before the wide application of deep learning in 2012, the best machine learning model can only achieve around 75% accuracy in the [ImageNet visual recognition challenge](http://www.image-net.org/). Till now, still, no machine learning model can claim 100% accuracy, although there are models that make fewer errors (<5%) than humans in this task. 

#### [Supervised VS. Unsupervised](https://leetcode.com/explore/featured/card/machine-learning-101/287/what_is_ml/1620/)

- Given a machine learning problem, first of all, one can determine whether it is a `supervised` or `unsupervised` problem.

- For any machine learning problem, we start from a data set, which consists of a group of `samples`. Each sample can be represented as a tuple of `attributes`.

##### ***Supervised Learning***

- In a `supervised` learning task, the data sample would contain a target attribute y, also known as ground truth. And the task is to learn a function F, that takes the non-target attributes X and output a value that approximates the target attribute, i.e. _F(X)≈y_. The target attribute y serves as a teacher to guide the learning task, since it provides a benchmark on the results of learning. Hence, the task is called supervised learning. 

- The data with a target attribute is often called "**labeled**" data. 

##### ***Unsupervised Learning***

- In contrary to the supervised learning task, we do not have the ground truth in an `unsupervised` learning task. One is expected to learn the underlying patterns or rules from the data, without having the predefined ground truth as the benchmark.

- Here are a few examples of the unsupervised learning tasks:
  - **Clustering**: given a data set, one can cluster the samples into groups, based on the similarities among the samples within the data set. For instance, a sample could be a customer profile, with attributes such as the number of items that the customer bought, the time that the customer spent on the shopping site etc. One can cluster the customer profiles into groups, based on the similarities of the attributes. With the clustered groups, one could devise specific commercial campaigns targeting each group, which might help attract and retain customers. 

  - **Association**: given a data set, the association task is to uncover the hidden association patterns among the attributes of a sample. For instance,  a sample could be a shopping cart of a customer, where each attribute of the sample is a merchandise. By looking into the shopping carts, one might discover that customers who bought beers often bought diapers as well, i.e. there is a strong association between the beer and the diaper in the shopping cart. With this learned insight, the supermarket could rearrange those strongly associated merchandise into the nearby corners, in order to promote the sales of one or another.

##### ***Semi-supervised Learning***

- In a scenario where the data set is massive but the labeled sample are few, one might find the application of both supervised and unsupervised learning. We can call this task as `semi-supervised` learning.

- In many scenarios, it is prohibitively time-consuming and expensive to collect a large amount of labeled data, which often involves manual efforts. 

> By combining both the supervised and unsupervised learning in a data set with few labels, one could exploit the data set to a better extend and obtain a better result than just applying each of them individually. 

------
