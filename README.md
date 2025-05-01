# CafeOrderSystem
Coursework for Cafe Order System in C++ (Object-Oriented Programming (with course work) (FMF))

    Cafe Order System
Course Work – C++ Project

Author: Sabrina Yestemirova  
Course: FMITB21201  
Language: C++

1. PROJECT DESCRIPTION

This coursework simulates a simple cafe ordering system.
Users can add food, drinks, and desserts to their order,
view the full order, calculate the total cost, and filter
items by type. The program is designed using object-
oriented programming principles such as inheritance and
polymorphism, and it demonstrates real-world use of the
STL and exception handling in C++.

2. FEATURES AND CRITERIA MATCHING

* Polymorphism – Abstract base class "MenuItem" with
  virtual methods "print()" and "getType()"
* Inheritance – "MenuItem -> Food -> Dessert" (2 levels)  
* Minimum 4 classes – "MenuItem", "Food", "Drink", "Dessert"  
* Separate header/source files for each class  
* STL container – "std::vector<std::shared_ptr<MenuItem>>"  
* STL algorithms – "std::for_each", "std::accumulate"  
* Exception handling – input validation throws runtime_error  
* Realistic functionality – simulates food ordering system

3. FILE STRUCTURE

- main.cpp           – Entry point, user interface
- MenuItem.h/.cpp    – Abstract base class
- Food.h/.cpp        – Food item class
- Drink.h/.cpp       – Drink item class
- Dessert.h/.cpp     – Dessert class, inherits from Food

4. SAMPLE OUTPUT

 ~~~~Order List~~~~ 
Food: Pasta (€7.99)
Drink: Coffee (€2.5)
Dessert: Cheesecake (€4.75)

Total: €15.24

 ~~~~Desserts Only~~~~ 
Dessert: Cheesecake (€4.75)

5. NOTES

- The program uses "shared_ptr" for safe memory management.
- Input errors are  handled via try-catch blocks.

6. HOW TO COMPILE
1.Compile using g++(MacOS):
g++ -std=c++17 main.cpp MenuItem.cpp Food.cpp Drink.cpp Dessert.cpp -o cafe./cafe
2.Compile using g++(Windows):
g++ -std=c++17 main.cpp MenuItem.cpp Food.cpp Drink.cpp Dessert.cpp -o cafe.exe
cafe.exe
3.Compile using VisualStudio(Windows):
-Create a new Console Application project
-Add all .cpp and .h files to the project
-Build and run the program

