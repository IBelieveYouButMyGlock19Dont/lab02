# Question №_1:

When int* arr is passed to a function, a copy of the pointer is created. Changing the local pointer itself does not change the original pointer in the calling code. So its impossible to
change pointer data itself. To change the original pointer, we need to pass it by reference using int*& arr.

# Question №_2:

int*& arr means a reference to a pointer to int. It allows the pointer to be changed because the function gets access to the original pointer, not to a copy of it.

# Question №_3:

Yes, a dynamic array can be passed by value. Function receives a copy of the array address, not a copy of all its elements. 
The copied pointer still points to the same array, so its elements can be changed.

# Question №_4:

If we forget to update size in reallocateArray and our program will try to fill array with the old size, compiler can give us an error.

# Question №_5:

It is important to free the old array before assigning the pointer to a new array because oыgit --versiontherwise the address of the old allocated memory may be lost. 
This memory will remain allocated and cause a memory leak.

# Question №_6:

The main risk is that a pointer stores only the address of the first element, but it does not store the number of elements in the array.
Because of this, a function may read or write outside the array bounds, which can cause incorrect results.
To avoid this, the array size should be passed to the function together with the pointer.