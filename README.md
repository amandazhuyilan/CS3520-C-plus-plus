## CS3520 C++ Notes

##### ```int main(int argc, char * argv[], char * envp[])```

```int argc``` counts the number of command line arguments that ```argv[]``` holds for this current program execution, includes the object program itself, hence must be >= 1, is ```main()```’s first formal parameter.

```char * argv[]``` is a pointer to the list of actual const string arguments.2nd formal parameter of ```main()```; optional; if specified, the first parameter ```argc``` must already be specified.

```char * envp[]``` holds environment variables as string constants, plus the header: ```PATH=```. 3rd formal and optional parameter of ```main()```.

#### Pointers

```&``` is the address of operator, and can be read simply as "the address of".

```*``` is the dereference operator, and can be read as "value pointed to by".

[Tutorials from cplusplus.com](http://www.cplusplus.com/doc/tutorial/pointers/) about pointers.

```int * p``` -> initalizing a memory space at 0X0112 and setting it as NULL

```p = new int(12) ``` -> initalizing a new memory space at memory location 0X2222 and setting it as 12

```cout << p ``` -> will print 0x2222

```cout << &p ``` -> will print 0x0112

```cout << *p ``` -> will print 12

When deleting a pointer:

```delete p``` -> will delete 12 in 0x2222

``` p = NULL``` -> not necessary, will set 0x0112 to NULL


