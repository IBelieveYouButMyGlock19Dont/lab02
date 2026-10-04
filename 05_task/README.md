# Question №_1:

You can't use void f(int arr[][]) without known sizes, because the compiler needs to know the row size to correctly calculate the address arr[][].

# Question №_2:

int** stores an array of pointers, and each row is allocated separately. But true two-dimensional array stores all elements in one continuous block of memory.

# Question №_3:

Each string was allocated separately, so first you need to free the memory of each string, and then free the array of pointers.

# Question №_4:

If we call only delete[] matrix, without deleting each element, the array of pointers will be deleted, but the memory allocated for each row remains allocated.

# Question №_5:

because when using int**& (reference to pointer to a pointer) matrix, our resizeMatrix function gets the ability to modify the matrix directly. 
Without int**&, our function could only change a created copy.

# Question №_6:

Main risks:
1. You can lose the address of the allocated memory
2. Delete memory twice (double free error)
3. Forget to delete some rows (memory leak)