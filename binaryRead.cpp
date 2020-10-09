/*
The code that read a binary file
owner of this code : Musa Furkan Keskin
*/
#include<iostream>
#include<fstream>

using namespace std;

ifstream::pos_type size; //pos_type variable(integer)

char* memblock;  //pointer that we will reach the address while reading and writing and we will use it to write.

int main()
{
	ifstream file("example.txt",ios::in|ios::binary|ios::ate); //for input, we open  binary and end of file.
	
	if(file.is_open()){  
		
		size = file.tellg();      //assign get pointers location into size (int type of position type)
		
		memblock = new char [size];  //if my purpose to copy the file I read, I need a memblock as I read it up to you...
		
		file.seekg(0,ios::beg);  //we came from beg(position become 0 and the direction towards the top..)
		
		file.read(memblock,size); //read from mamblock as much as size
		
		file.close();  //file closed.
		
		cout<<"all contents in memory";  //in memblock
		
		//can fill with other methods
		
		
		
		delete [] memblock;   //garbage collection..
	}
		else
		cout<<"file couldn't opened.";
		
		return 0;
}
