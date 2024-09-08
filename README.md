# Experiment 12 To study and implement Constructors and Destructors

## Aim: -
To run and execute a code in C++ using Constructors and Destructors

## Theory: - 
A constructor in C++ is a special member function of a class that is automatically invoked when an object of that class is created.
The primary purpose of a constructor is to initialize the object's data members and to perform any setup or allocation required for the object to be in a valid state.

### Key Characteristics of Constructors:
1. Same Name as Class: A constructor has the same name as the class in which it is defined.
2. No Return Type: Constructors do not have a return type, not even void.
3. Automatic Invocation: Constructors are called automatically when an object is created. The programmer does not need to explicitly invoke them.
4. Overloading: Constructors can be overloaded, meaning a class can have multiple constructors with different parameters.


### Types of constructors 

1. A __default constructor__ is a constructor that takes no arguments and initializes objects with default values. If no constructor is provided in a class, C++ automatically generates a default constructor.

2. A __parameterized constructor__ takes one or more arguments, allowing objects to be initialized with specific values. These constructors can be overloaded, providing multiple ways to create an object with different initializations.

3. A __copy constructor__ is a special constructor that creates a new object as a copy of an existing object by taking a reference to another object of the same class. If not explicitly defined, C++ provides a default copy constructor.

4. A __move constructor__ transfers resources from a temporary object (rvalue) to a new object, preventing unnecessary deep copies and enhancing performance, particularly with dynamic memory or large objects.

### Advantages of default constructor :
1. Automatic Initialization: It automatically initializes object members to default values, ensuring that the object is in a valid state.
2. Ease of Use: Simplifies object creation when no specific initialization is needed.
3. No Arguments Required: Objects can be created without providing any arguments.

### Disadvantages of default constructor :
1. Limited Flexibility: It doesn't allow initialization of objects with specific values. All objects are initialized with the same default values.
2. Unintended Default Values: The default values may not always be meaningful or appropriate for the intended use of the object.

### Advantages of parameterized constructor :

1. Custom Initialization: Allows the creation of objects with specific initial values, providing greater control over object state.
2. Flexibility: Supports overloading, enabling multiple parameterized constructors with different sets of parameters.
3. Explicit Initialization: Ensures that important data members are set to meaningful values at the time of object creation.

### Disadvantages of parsametrized constructor :

1. No Default Construction: If only parameterized constructors are defined, objects can't be created without passing arguments, which can lead to inflexibility.
2. Increased Complexity: Overloading with multiple parameterized constructors can make the class more complex and harder to manage.

### Constructor Defined Outside the Class
### Advantages:

1. Clear Separation: Separating the declaration and definition of the constructor can make the class definition cleaner and more readable.
2. Code Organization: Helps in organizing large classes by separating implementation details from the class interface.
3. Reusability: Allows constructors to be reused across different classes in the form of common helper functions or utilities.

### Disadvantages:

1. Code Fragmentation: The class definition and constructor implementation are in different places, which can make the code harder to follow, especially in large projects.
2. Maintenance Overhead: Maintaining and debugging the code can be slightly more difficult as the constructor's implementation is separated from the class.



## Code 
~~~
#include <iostream>
#include <string>
// Varun Pendem
// PRN: 23070123149

// Experiment 12 Constructors 

class Person {
    std::string name;
    int age;

public:
    // Default constructor 
    Person() : name("Unknown"), age(0) {
        std::cout << "Default constructor called.\n";
    }

    // Parameterized constructor 
    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Parameterized constructor called.\n";
    }

    // Constructor defined outside the class
    Person(std::string n);

    // Copy constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        std::cout << "Copy constructor called.\n";
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Constructor defined outside the class
Person::Person(std::string n) : name(n), age(0) {
    std::cout << "Constructor defined outside the class called.\n";
}

int main() {

    // Using the default constructor
    Person p1;
    p1.display();

    // Using the parameterized constructor
    Person p2("jarvis", 44);
    p2.display();

    // Using the constructor defined outside the class
    Person p3("vision");
    p3.display();

    // Using the copy constructor
    Person p4 = p2;
    p4.display();

    return 0;
}
~~~

## Code Output 


## Conclusion 
- We learnt how to execute a code using different types of constructors in C++ programming language
- We learnt the different types of constructors , their advantages, the disadvantages and the applications
  
