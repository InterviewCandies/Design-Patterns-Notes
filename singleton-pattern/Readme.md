# Singleton pattern
## Notes
* Singleton pattern is a convention for ensuring **one and only one object  is instantiated** for a given class.
* The Singleton pattern ensures a class has only be instance and provides a point to access to it.
* Use **private constructor** to guarantee that no more than one instance will be created. 
* The single instance must also be accessible to all classes that require it.
* 2 types of initializations:
  * Eager initialization: initiating the class at the time of class loading. Drawbacks: always initialized whether it is being used or not.
  * Lazy initatialization: initiated only when it is required, save you form instanting the class when you don't need it.
* Thread safe solutions:
  * Synchroized GetInstance(): expensive 
  * Eager initialization:  always initialized whether it is being used or not.
  * Double checked locking: best practice

## Model 
![model](https://refactoring.guru/images/patterns/diagrams/singleton/structure-en-indexed.png)