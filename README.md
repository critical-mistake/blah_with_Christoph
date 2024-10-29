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

* [x] finish implementation of the CLI tool (reading input from std:in)
* [ ] implement another sort algorithm: quicksort

## Session 2 - C++ OOP

Get familiar with OOP (object-oriented programming) by using C++.

* Pass by value/pointer (de/reference operator)
* Interfaces
* Access Modifiers (visibility)
* Header Files
* Polymorphism
* Templates (Generics)

not covered:
* const (immutability)
* structs and unions
* operator overloading
* multiple inheritance + diamond problem

### Homework

MUST:

* [ ] setup haskell environment
* [ ] clean github from ide-specific files

OPTIONAL:

* [ ] learn/look at some UML class diagrams
* [ ] get custom with GIT command line interface (use git aliases)
* [ ] be an expert in your IDE: use shortcut (to save + compile + run with one hit); but also text editing shortcut

## Session 3 - Paradigm Shift

* show "paradigm tree"
* questions about OOP?
* learn FP (functional programming) by using Haskell
* learn Logic Oriented Programming by using ASP/clojure? (just a bit, review code for example usage; quicksort!)

## Session 4 - JVM

* learn a state-of-the-art general purpose language running on the JVM which combines OOP and FP capabilities
* Java+Maven+Eclipse and Kotlin+Gradle+IntelliJ (ktor, tests, ... ultimate workshop showcase)

## Session X - OOP advanced

* polymorphism on stereoids: multi methods simulated ;)
* Coherence and Coupling
* Co-/Contra-/Invariance
* Inheritance (Subclassing) VS Subtyping
* misusing OOP for grouping procedural code (header interfaces) VS "real" OOP (roles)
* diamond problem solved (vs C++ with multiple-inheritance)

## Session 5 - Python scripting

* because scripting with a kiddie language is so much in today, we use it to utilize some powerful libraries out there (cloud? machine learning?)

## Ideas Backlog

* design patterns
* dependency injection (software design/reusability, test)
* TDD (XP, pair programming); typical test kata
* 2D/3D for programmatic animations
* neuronal network for machine learning
* blockchain
* smalltalk, objective-C, swift, rust, go, C#/F# (nuget)
* frameworks, libraries
* databases (DBMS)
* advanced terminal
* SCM (build)
* cloud
* mobile apps (native, flutter)
* web dev (react, angular); typescript/HTML/CSS, vanilla JS
* Runtime complexity analysis
* ...
