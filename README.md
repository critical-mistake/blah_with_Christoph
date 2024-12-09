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


## Session 3 - Paradigm Shift

* show "paradigm tree"
* questions about OOP?
* learn FP (functional programming) by using Haskell

## Session 4 - Finish old, start Python

old stuff:

* old homework: go through & finish together what's unfinished (see down below in this document)
* haskell: paula programs herself basic functionals
* programming theory: statically-dynamically, strong-weak, compiled-scripted (next to paradigms)

new stuff (all in python):

* exception handling
* TDD (TestDrivenDevelopment/-Design) + test kata

## Session 5 - ???

TBD

## Session 6 - ???

TBD

## Ideas Backlog

* CODE: Logic Oriented Programming (ASP/clojure)
* OS: advanced terminal/shell features -become a proper nerd
* THEORY: runtime complexity analysis (big-O-notation)

* CODE: use python with some powerful libraries out there (cloud/serverless? machine learning?)
* CODE: design pattern: template pattern (structural reuse VS functional)
* CODE: small project: expose python functionality via webservice+frontend

### OOP

... each about 20-30 minutes. make it a single session.

* polymorphism on stereoids: multi-methods simulated ;)
* Coherence and Coupling
* Co-/Contra-/Invariance
* Inheritance (Subclassing) VS Subtyping
  * misusing OOP for grouping procedural code (header interfaces) VS "real" OOP (roles)
* "diamond problem" solved (vs C++ with multiple-inheritance)

### New Ideas (not went through with paula yet)

* more languages: LISP, ASP
* matlab (R?)

### Some time later

* i18n = internationalization (localization)
* NERD: RegExps (regular expressions)
* CODE: Java+Maven+Eclipse and Kotlin+Gradle+IntelliJ (ktor, tests, ... ultimate workshop showcase)
* CODE: 2D/3D for programmatic animations; eg: manim library (animate stuff from 3blue1brown.com)
* CODE: smalltalk (OOP), objective-C/swift (apple), rust, go, C#/F# (MS, nuget)
* WEB DEV (react, angular); typescript/HTML/CSS, vanilla JS
* TOOLS: GitLab
* TOOLS: dependency injection; spring/CDI/koin/hand-written (software design/reusability, test)
* TOOLS: databases (DBMS/SQL)
* TOOLS: CI/CD; maven/gradle; cloud builds
* PROJECT: neuronal network for machine learning - write your own playground
* PROJECT: blockchain - write your own playground

### For sure not

* mobile apps (native, flutter)

# Homework

## Session 1

* [x] finish implementation of the CLI tool (reading input from std:in)
* [x] implement another sort algorithm: quicksort

## Session 2

MUST:

* [x] setup haskell environment ... done together
* [x] clean github from ide-specific files

OPTIONAL:

* [x] learn/look at some UML class diagrams
* [x] get accustomed to GIT command line interface (use git aliases)
* [x] be an expert in your IDE: use shortcut (to save + compile + run with one hit); but also text editing shortcut

## Session 3

* [x] teach yourself basics of graph theory
* [x] have a look at the "lambda calculus"

## Session 4

* [ ] watch uncle bob's clean code lessons: https://www.youtube.com/watch?v=7EmboKQH8lM (yes, all 6 of them)
* [ ] rewrite functionals (filter, map; also forEach) from haskell to python