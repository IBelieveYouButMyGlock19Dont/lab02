# Question №_1:

The array name represents the whole array. Therefore, according to C++ language rules the array name can be used to access the address of the first element.

Example:

int arr[3] = {1,2,3}

Then arr in most expression behaves like &arr[0] (pointer to the first element in array)

# Question №_2:

The main difference between a static and a dynamic array is the way memory is allocated and their lifetime. 
The size of a static array is usually specified when it is created, and its memory is released automatically. 
The size of a dynamic array can be determined while the program is running, and its memory must be released manually using delete[].

# Question №_3:

Based on the result obtained in main.cpp, the sizeof() values for the static and dynamic arrays are different.
In our program, the memory used by the elements of both arrays is the same because both arrays contain five int elements. 
However, sizeof gives different results: sizeof(staticArr) returns the size of the whole static array, while sizeof(dynamicArr) returns only the size of the pointer.

# Question №_4:

For the static array, sizeof(staticArray) shows the size of the whole array, which is the number of elements multiplied by the size of one element.
For the dynamic array, sizeof(dynamicArr) shows only the size of the pointer, not the size of the allocated array.

# Question №_5:

Although the addresses of &arr[1] and &arr[0] differ by 4 bytes, the expression &arr[1] - &arr[0] returns 1 because pointer subtraction gives the distance in array elements.
In this case, the elements are one position apart.

# Question №_6:

The value of staticArr cannot be changed or assigned nullptr because staticArr is an array, not a pointer variable. 
The value of dynamicArr can be changed because it is a pointer.

# Question №_7:

If we forget to call delete[] for a dynamic array, the allocated memory will not be released. This causes a memory leak. We need to call delete[] when we don't longer need our
dynamic array.

# Question №_8:

A function that takes int arr[] can work with both static and dynamic arrays because in a function int arr[] is treated as pointer to the first element of an array. 
A static array is converted to a pointer to its first element when it is passed to the function, while a dynamic array is already accessed through a pointer.