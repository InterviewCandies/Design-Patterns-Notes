# DESIGN PATTERN NOTES
## Introduction
### Pattern
The outline of reuasble solution to a general problem encounter in a particular context.
### Types of design patterns
* Behavioral patterns: Deal with responsibles and communication between objects (Ex: Strategy)
* Creational patterns: Deal with instantialation of objects (Ex: Singleton)
* Structural patterns: Deal with composition and relations (Ex: Adapter)  
## Stratergy pattern
### Notes:
  * Define a family of algorithms, encapsulate each one and make them interchangable
  * Let the algorithm vary independently from clients that use it.
  * The stratergy pattern useful for situations where it is necessary to dynamically swap the algorithms used in application.
  * Use composition instead of inheritance
### Model:
![model](https://v1study.com/public/images/article/1550310969_strategy-uml-diagram.png)

## Singleton pattern
### Notes
* Singleton pattern is a convention for ensuring  one and only one object  is instantiated for a given class.
* The Singleton pattern ensures a class has only be instance and provides a point to access to it.
* Use private constructor to guarantee that no morethan one instance will be created. 
* The single instance must also be accessible to all classes that require it.
* 2 types of initializations:
  * Eager initialization: initiating the class at the time of class loading. Drawbacks: always initialized whether it is being used or not.
  * Lazy initatialization: initiated only when it is required, save you form instanting the class when you don't need it.
* Thread safe solutions:
  * Synchroized GetInstance(): expensive 
  * Eager initialization:  always initialized whether it is being used or not.
  * Double checked locking: best practice

### Model 
![model](https://refactoring.guru/images/patterns/diagrams/singleton/structure-en-indexed.png)