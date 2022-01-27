# What will we do?

Try doing it yourself with the information, then study the code _"class1.c"_

## Before anything

Open a new repository called _"classes"_ and clone it to your pc using `git clone _insert the repository link here_ ` on Visual Studio Code. Then create a file named _"class1.c"_ and use it for the exercise.

## Warning

There will be parts of the code using _"//"_ at the begining. These are **comments**, and they don't do anything, they just exist

## The objective:

In this class we will understand functions and make a basic program in C that gets data and store it into a variable, printing the end result. So basically we want a program that says "Hello, what's your first name?", gets the name of the person, says "Hi, _name of the person_, what's your age?", gets the age of the person and says "Cool, We're _x_ years apart", _x_ being the difference between your age and theirs.

## For starters

### Functions

In C we use functions for basically everything. We can create functions from zero adding a type and a name like:
`int soma(){}`
But the functions we're going to focus on today are:

```
printf();
scanf();
```

For this lesson you're going to need the following:

- `printf("%d", value);`
- `printf("%s", string);`
- `scanf("%d", &value);`
- `scanf("%s", string);`
- `pow(value * _your age here_);`
- `sqrt(valueSquared);`

### Starting off

To start, you're going to need two libraries, math.h and stdio.h

```
#include <stdio.h>
#include <math.h>
```

And a main function:

```
int main(){

}
```

Set some variables such as:

```
int value;
int valueSquared;
int difference;
char string[100];
```

#### And try to use the functions above, in the main function, to get the correct output. If you have some difficulty, just look at the code class1.c, capture the idea and do it yourself!

### Notes

- Use `valueSquared = pow(value \* _your age_);` and `difference = sqrt(valueSquared)`
- Everything except the includes, must be inside the main
- Have some fun, do other stuff too

# Next class is variables
