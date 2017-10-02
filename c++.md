# C++ notes

```cpp
#include <iostream>
```
stdin
```cpp
cin>>var
```
stdout
```cpp
cout<< "Hello World!" << endl;
```
byte size
```cpp
sizeof(int)
```

# Strings

find substrings
```cpp
if (s1.find(s2) != std::string::npos);
```

# File IO
```cpp
#include <fstream>
#include <string>
```
Create a stream (input, output, both)
```cpp
ofstream myfile; //(for writing to a file)
ifstream myfile; //(for reading a file)
fstream myfile; //(for reading and writing a file)

myfile.open("filename");   //open
myfile.close();            //close

fstream myfileI ("input.txt", fstream::app | fstream::out);
if (myfileI.is_open());
```

## extra functions
enumerate list
```cpp
enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
```
