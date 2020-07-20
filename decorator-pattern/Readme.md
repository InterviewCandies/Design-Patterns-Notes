# Decorator pattern 
## Notes 
* The Decorator pattern provide a flexible alternative to subclassing for extending functionality
* Decorators attached additional responsibilities to an object dynamically
* Decorator pattern involves a set of decorator classes that are used to wrap around concrete components
* Decorator classes mirror the type of the components (Have the same type, through inheritance or interface implementation)
* Decorators change the behavior of their components by adding new functionality before / after method class to the component.
* Drawback: Decorators can results in many small objects in design and overuse can be complex.
* Application: File reader
## Model 
![model](https://www.oreilly.com/library/view/learning-javascript-design/9781449334840/httpatomoreillycomsourceoreillyimages1547817.png)
## Implementation 
![Implementation](https://media.geeksforgeeks.org/wp-content/uploads/uml-1.jpg)

## References
* [Head First Design Patterns: A Brain-Friendly Guide by Eric Freeman](https://www.amazon.com/Head-First-Design-Patterns-Brain-Friendly/dp/0596007124)
* [GeeksforGeeks](https://www.geeksforgeeks.org/decorator-pattern-set-3-coding-the-design/?ref=rp)