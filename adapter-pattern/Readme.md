# Adapter pattern
## Notes
* A wrapper allows 2 incompatible interfaces to work together.
* The Adapter pattern onverts the interface of a class into another interface the client expect.
* How clients use adapter
  * The client makes a request to the adapter by calling a method on it using the target interface.
  * The adapter translates the request into one or more calls on the adaptees ising adaptee interface.
  * The client recieves the results of the call and never knows there is an adpter doing the translation.
* There are two types of adapters 
  * Object adapter: Use composition, Adapter has an Adaptee.
  * Class adapter: Use inheritance, Adapter is subclass of both Target and Adaptee.
* Remember that adapter pattern doesn't create new responsibilities.
## Illustration
![illustration](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcSD6MXYLGxC7SB5SSzujANO4ezBkpw7YsHcbQ&usqp=CAU)\
(source: https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)
## Model
### Class Adapter
![Class adapter](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcQZHcfcqkH1fKrzoaiwgL7AEctvSGGMGGZGqg&usqp=CAU)\
(source: https://vngeeks.com/adapter-design-pattern/)
### Object Adapter 
![Object adapter](https://dotnettrickscloud.blob.core.windows.net/img/designpatterns/adapter.png)\
(source: https://www.dotnettricks.com/learn/designpatterns/adapter-design-pattern-dotnet)
## Implementation
![Implementation](https://i.ibb.co/YdFPjnQ/adapter.png)
## References
* [Head First Design Patterns: A Brain-Friendly Guide by Eric Freeman](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)
* [GeeksforGeeks](https://www.geeksforgeeks.org/adapter-pattern/?ref=rp)
* [Refactoring Guru](https://refactoring.guru/design-patterns/adapter)