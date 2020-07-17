# Observer pattern
## Notes 
* The Observer design pattern defines a **one-to-many** dependency between objects, so that when one object changes states, all of its dependents are notified and updated automatically.
* A **newspaper subscription service** with its publisher and subscribers is a good way to visualize observer pattern.
* The Observer pattern provides an object design where subjects and observers are **loosely coupled**.
* You should use this pattern in your application where multiple objects are dependent on the state of one object.
* Applications: Event Listener, Email subscription, Youtube Notification.
## Model
![model](https://www.researchgate.net/profile/Armando_Rene_Narvaez_Contreras/publication/314175216/figure/fig6/AS:467513608806407@1488475338457/Observer-pattern-class-diagram.png)    

## Implementation
![implementation](https://media.geeksforgeeks.org/wp-content/uploads/ObserverPatternSet-2.png)

## References
* [Head First Design Patterns: A Brain-Friendly Guide by Eric Freeman](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)
* [GeeksforGeeks](https://www.geeksforgeeks.org/observer-pattern-set-2-implementation/?ref=rp)
* [Refactoring Guru](https://refactoring.guru/design-patterns/observer)