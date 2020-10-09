//this program copies itself to "Copy_of_4" and to the screen.
//all of rights of this code has been reserved by GNU public license.
//owner of this code : Musa Furkan Keskin..

#include<iostream>
#include<fstream>

using namespace std;

void copyTo(ifstream& in,ofstream& out);

int main()
{
	ifstream in_stream; //in_stream is an object from ifstream class
	ofstream out_stream; //out_stream is an object from ofstream class
	in_stream.open("aaa.txt");     //aaa named a doc has created
	out_stream.open("bbb");    //bbb named a doc has created
	copyTo(in_stream,out_stream);   //function that will copy in_stream to out_stream
	out_stream.close(); //file has closed.
	in_stream.close(); //file has closed.
	return 0;
}


void copyTo(ifstream& in,ofstream& out)	//we take the adress because we need path of file..
{
	char character;    //char variable 
	
	in.get(character);		//will read from "aaa"
	while(!in.fail())     //stops when fail.
		{
			cout<<character;        //will out char
			out.put(character);       //will put character "bbb" that has readen from "aaa"
			in.get(character);		// will read from "aaa" and it will be a loop that will work unless fail.
		}
	//END OF FUNCTION
}
