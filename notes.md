# The C Programming Language

## Call by Value

- all function arguments are passed by value NOT by reference
- tmp variables (local copy) are passed instead the original variables
- if modification of original variable from inside function is needed, pointers to the variable is passed
- when array is passed, the address of the beginning of the array is passed and thus the original can be modified

## Strings

- stored like so: `|h|e|l|l|o|\n|\0`
- `\0`: null character marks end of string of chars

## External variables

- defined in outer scope, and declared inside function via `extern` e.g., `extern int max;`
- if defined within same file `extern` declartion is not needed

## Falsiness

- `0` is falsy everything else is truthy

## Pointers

- pointer is variable that points to address of a variable
- `p = &c` assigns address of `c` to `p`, now ** p points to c**
- `*`: *dereferencing* operator, **accesses the object the pointer points to**

### Pointers as Function arguments

- call swap via `swap(&x, &y)`, passing addresses (reference) to values of x and y
- dereference them via `void swap(int *px, int *py)` and use them like `*px = *py`
- changes actual values instead of just the copies (passed by value by default)

### Pointers to Arrays

- array-index expression is identical to pointer-offset expression
- adding 1 to a pointer points at next object regardless of type or size of elements in array
- if `pa` points at zeroth element in array then `pa + n` points at nth element in the same array
- name of an array is synonym for location of initial element, hence: `pa = &a[0]` is the same as `pa = a` and `a[i]` is
  the same as `*(a + i)`
- when an array name is passed to function, actually the **initial element's location** is passed
- `char s[]` and `char *s` are equivalent, but latter is preferred

### Pointers to Functions

- `qsort(.. , int (*comp) (void*, void*))` uses `comp` like so: `(*comp)(a, b)`
- `comp` is passed like so: `qsort(.. , ((int) (*)(void*, void*)) func`
- `func` could be: `int numcmp(char *, char *)`
