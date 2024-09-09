# CH.1 - Introducing C

- C is a by product of UNIX
- UNIX devevloped in 1969

## C Based Languages

- **C++** is C but adds classes and other features to support object-oriented programming
- **Java** is based on C++ and inherits many C features
- **C#** is a more recent language derived from C++ and Java
- **Perl** was originally a fairly simple scripting language; over time it has grown and adopted many of the features of C.

### Benefits of Learning **C**

1. Learning C provides insight into above Languages
    - Programmers who learn one of these languages often fail to master basic features that were inherited from C.
2. There is a lot of older C programs that you may need to read and maintain.
3. C is still widely used for developing new software, especially in siutations where memory is limited or where the simplicity of C is desired.

This book emphasizes data abstraction, information hiding, and other principles that play a large role in object-oriented programming. 

## 1.2 Strengths and Weaknesses of C 

- **C is a low-level language**
    - C is suitable language for systems programming
    - C provides access to machine-level concepts (bytets and addresses, for example) that other languages try to hide
    - C also provides operations that correspond closely to a computer's built-in instructions, so that programs can be fast. 
    - Operating system can't afford to be slow since application programs rely on it for input/output, storage management, and numerous other services
- **C is a small language**
    - C provides a limited set of features than many languages. 
    - Ref manual in K&R 2nd edition is covered in 49 pages.
    - To keep number of features small, C relies heavily on a "library" of standard functions.
        - A "function" is similar to what other programming languages might call a **"procedure"**, **"subroutine"**, **"method"**.
- **C is a permissive language**
    - Assumes you know what you are doing 
    - Doesn't mandate the detailed error-checking found in other languages. 

### Strengths

- **Efficiency**
    - Crucial to run quickly and in limited amounts of energy
- **Portability**
- **Power**
    - Large collection of data types and operators make it powerful
- **Flexibility**
- Standard Library
- Integration with UNIX 

### Weaknesses 

- C programs can be error-prone
- C Programs can be difficult to understand
- C programs can be difficult to modify

### Effective Use of C 
- Learn how to avoid C pitfalls 
    - Look for ! in triangle symbol in book 
    - Look into **Andrew Koenig's C Traps and Pitfalls**
- Use software tools to make programs more reliable
    - Famous tool lint; which is a more extensive error analysis
    - Another useful tool is a debugger
- Take advantage of existing code libraries
    - Libraries for common tasks, including user-interface development, graphics, communications, data-base management, and networking, are readily available
    - Some libraries are in the public domain, open source, and some sold commercially
- Adopt a sensible set of coding conventions
- Avoid tricks and overly complex code 
    - choose method that is most concise
- Stick to standard 
    - Most C compilers provide language features and lib functions that aren't apart of the C89 or C99 standards.
    - For portability, it is best to avoid using nonstandard features and libraries unless they are absolutely necessary

## Q&A

Q:What does `lint` do?
- `lint` checks a C program for a host of potential errors, including-but not limited to:
    - suspicious combinations of types, 
    - unused variables
    - unreachable code 
    - nonportable code 

Q: WHere did lint get its name? 
- `lint` isn't an acronym

Q: How to get a copy of lint?
- lint is standard UNIX utility, therefore may not be available on different operating systems.
- splint is an enhanced version of lint (Secure Programming Lint) and can be downloaded for free from www.splint.org

Q: Is there some way to force a compiler to do a more thorough job of error-checking, without having to use `lint`?
- Yes, checkout error-checking options for the GCC compiler 

Q: Other tools available other than `lint` and debuggers to make program as reliable as possible? 
- bounds-checkers adds capability to check aarray subscripts 
- leak-finders helps locate memory leaks aka blocks of memory that are dynamically allocated but never deallocated
