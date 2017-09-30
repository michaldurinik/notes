
#include <iostream>

//input to variable
cin>>var

//stdout
cout<<

//byte size
sizeof(int)

//define MONTHS as having 12 possible values
enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

//file IO
#include <fstream>
#include <string>
Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open("filename");
 - Write or read the file
 - Close the file myfile.close();

fstream myfileI ("input.txt", fstream::app | fstream::out);
if (myfileI.is_open())


