# Observer pattern
## Notes 
* The Observer design pattern defines a **one-to-many** dependency between objects, so that when one object changes states, all of its dependents are notified and updated automatically.
* A **newspaper subscription service** with its publisher and subscribers is a good way to visualize observer pattern.
* The Observer pattern provides an object design where subjects and observers are **loosely coupled**.
* You should use this pattern in your application where multiple objects are dependent on the state of one object.
* Applications: Event Listener, Email subscription, Youtube Notification.
## Model
![model](https://lh3.googleusercontent.com/proxy/ZO2ReEyADNINow9QVxqX523awFKFFtpVUu0J_3IRNM4zMC35lTr2AgXyE24aBBYyOhRzszamLoE84mEspgIXn-UBk67hzkyUm3CAaHZXKr2xROkuOvZ_GS3vw_y6A0xz0gfvNXG1rg)    

## Implementation
![implementation](https://media.geeksforgeeks.org/wp-content/uploads/ObserverPatternSet-2.png)

## References
* [Head First Design Patterns: A Brain-Friendly Guide by Eric Freeman](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)
* [GeeksforGeeks](https://www.geeksforgeeks.org/observer-pattern-set-2-implementation/?ref=rp)
* [Refactoring Guru](https://refactoring.guru/design-patterns/observer)