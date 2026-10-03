# Question №_1:

The difference between const int* p and int* const p is that with const int* p we can change the address stored in the pointer, but we cannot change the value through this pointer. 
With int* const p, we cannot change the address stored in the pointer, but we can change the value of the variable it points to.

Example:

const int* p1 = &a;
p1 = &b;      // correct
*p1 = 666;  // error

int* const p2 = &a;
*p2 = 666;     // correct
p2 = &b;   // error

# Question №_2:

The value cannot be changed through const int* because this pointer gives read-only access to the data. 
Even if the original variable is not const, the compiler does not allow changing it through this pointer.

# Question №_3:

Yes, a non-const variable can be passed to a function that accepts const int&. The function gets a reference to the original variable but cannot modify it through this reference.
The original variable itself is still non-const and can be changed outside the function.

# Question №_4:

If we try to assign a new address to int* const, the compiler will give an error because the pointer cannot be redirected after initialization.

# Question №_5:

Using const in function parameters is considered good practice because it protects data from accidental changes. It shows that the function is not allowed to modify the passed object.

# Question №_6:

const T& is preferable for passing large objects that do not need to be changed because it avoids copying the object and does not allow the function to modify it through the reference.