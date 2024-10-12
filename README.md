# Learning to programe (a bit)

* language has/wants: python, C++, R
* likes doing: solve math problems
* suggestion:
  * first quick overview of all paradigms (imperative {procedural/object-oriented} and declarative {functional/logic-oriented})
  * a language for each of those paradigms
* at the end more deep dive into python and C++
  * solve single problems and wrap up with implementing a useful project

## Programming Paradigms

* **Imperative Paradigm**: tell the machine HOW to do it, very low-level/explicit
  * **Procedural Paradigm**: most common way of programming, a sequence of statements telling the computer what exactly to do; cumbersome, direct, simple
  * **Object Oriented Paradigm**: a different way to structure but also think about software design/modelling; most people use OO-languages but without actually using (understanding) an OO-paradigm
* **Declarative Paradigm**: tell the machine WHAT to do, it will figure out the how, you simply describe the problem and the desired outcome
  * **Functional Paradigm**: very mathematical looking, higher order functions, stateless/timeless, extremely powerful
  * **Logic-oriented Paradigm**: no computer visible anymore, simply describe everything in terms of facts and rules, and let the machine figure it out (complex assignment/distribution problems)

## Session 1 - C basics

* setup github
* do some "pair programming" (switching every x mins)
* write a C CLI tools (use makefile)
  * read list of integers from std:in (keyboard or with the shell's `<` operator)
  * implement simple sorting algorithm (bubble sort)
  * print out sorted array of numbers

### Homework

* [ ] finish implementation of the CLI tool (reading input from std:in)
* [ ] implement another sort algorithm: quicksort

## Session 2 - C++ OOP

* get familiar with OOP (object oriented programming) by using C++
* subclassing, interfaces, access modifiers, header files, complex build
* topic: TBD
* Polymorphism
* Inheritance VS Subtyping
* Coherence and Coupling
* Co-/Contra-/Invariance
* Templates (Generics)
* misusing OOP for grouping procedural code (header interfaces) VS "real" OOP (roles)

### Homework

TBD

## Session 3 - Haskell FP

* learn FP (functional programming) by using haskell as a language

## Session 4 - JVM

* Java+Maven+Eclipse, Kotlin+Gradle+IntelliJ (ktor, test, ... ultimate workshop showcase)
* learn a state-of-the-art general purpose language running on the JVM which combines OOP and FP capabilities

## Session 5 - Python scripting

* because scripting with a kiddie language is so much in today, we use it to utilize some powerful libraries out there (cloud? machine learning?)

## Session 6 - Fun stuff

* ASP/clojure
* smalltalk, objective-C, swift, rust, go
* frameworks, libraries
* database
* advanced terminal
* SCM (build)
* cloud
* mobile apps (native, flutter)
* web dev (react, angular)
* Runtime complexity analysis
* ...
