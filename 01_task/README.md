# Question №_1:

The original variable does not change its value when it is passed by value because the function receives a copy of the variable, not the original variable itself. 
Therefore, changes affect only the local copy, while the original variable stays unchanged.

# Question №_2:

A pointer stores the address of another variable. Using this address, we can access or change the value of the variable with the * operator. 
A reference is another name for an existing variable and allows us to work with it directly.

# Question №_3:

A reference is safer to use when the object definitely exists. 
A pointer is more useful when the object may not exist or when we need to work  with its address.

# Question №_4:

For passing a large object that should not be changed, it is better to use a const reference. 
In this case, no copy of the large object is created, and the function cannot change its value.

# Question №_5:

When passing by value, the value of the variable is copied, so changes to the copy do not affect the original variable.
When passing by pointer, the address of the variable is copied. Using this address, the function can change the value of the original variable with *pointer.
When passing by reference, no separate copy of the value is created. The reference works with the original variable, so changing the reference also changes the original variable.