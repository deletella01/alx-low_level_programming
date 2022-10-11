## C - Structures, Typedef

### Structure declaration
 You can define a structure in the global scope of your program (outside of all your functions, just like the functions prototypes). You can declare elements of your structure in its scope.

### Pointers to structures
To access elements of a pointer to a structure, you have to dereference the pointer and then access to the data using the . symbol. BUT There is a simple way to do that, just by using the -> symbol. 
This symbol is equivalent to dereferencing + using .

### Typedef
The C programming language provides a keyword called typedef, which you can use to give a type, a new name.
After this type definition, the identifier can be used as an abbreviation for the type.
You can also use typedef with structures to define a new data type. Then use that data type to define structure variables directly.
