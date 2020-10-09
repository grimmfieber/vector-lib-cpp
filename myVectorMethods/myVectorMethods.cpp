/*
owner of this code : Musa Furkan Keskin
*/
#include <iostream>
#include "myVector.h"
#include <string>
using namespace std;

template <class T>
myVector<T>::myVector(int num){
    
    numAllocated = num;
    numUsed = 0;
    arr = new T[num];
    
}


template <class T>
myVector<T>::~myVector(){
    
    if(arr)
        delete[] arr;
}


template <class T>
int myVector<T>::size()
{
    return numUsed;
}



template<class T>
void myVector<T>::add(T s){
    
    if(numUsed == numAllocated || numUsed>numAllocated)
        
        cout<<"Out of space."<<endl;
    else{
        arr[numUsed] = s;
        numUsed++;
    }

}

template<class T>
T myVector<T>::getAt(int index){
    
    return arr[index];
}

template<class T>
void myVector<T>::getElement(int index)
{
    
    if(index > numAllocated || index < 0)
        
        cout<<"Out of space."<<endl;
    else{
            
            cout<<arr[index]<<endl;
        }
    }

template<class T>
void myVector<T>::remove(T s)
{
	int i,temp;
	for(i=0;i<size();i++)
		{
			if(arr[i]==s) 
				{
					for(i;i<size()-1;i++)
					arr[i]=arr[i+1];
						numUsed--;
				}
				
			
		}
	
}

template<class T>
void myVector<T>::erase(int index)
{

	for(index;index<size()-1;index++)
	arr[index]=arr[(index+1)];
	numUsed--;
}







template<class T>
void myVector<T>::sort(){
    for (int i = 1; i < numUsed; i++)
     for (int j = 0; j < numUsed-i; j++)
     if (arr[j] > arr[j+1]){
    T temp = arr[j];
     arr[j] = arr[j+1];
     arr[j+1] = temp;
    }
    }







int main()
{
	int vector_size;  
	cin>> vector_size;  //takes vector_size
  	myVector <char> vec(vector_size);  //vector created
	
	char temp;
	for(int i=0; i< vector_size; i++)
	{
		cin>>temp;		
		vec.add(temp);       //pushed values
	}
  	
  	vec.add('c'); //pushed c char


  	for(int i=0; i<vec.size(); i++)     
  		vec.getElement(i);
    	vec.getElement(-1);             
	vec.getElement(vec.size()+2);       

	vec.sort(); 						//sorting		
	cout<<"After sorting:"<<endl;
	for(int i=0; i<vec.size(); i++)        //elements printed after sorting
  		vec.getElement(i);	

	
	cin>> vector_size;                          //taken vector size
	myVector <int> vec2(vector_size);           //new vector constructed
  	int temp2; 
	for(int i=0; i<vector_size; i++)
	{
		cin>>temp2;		                         //pushing the values into vector
		vec2.add(temp2);
	}  	
  	
  	for(int i=0; i<vec2.size(); i++)                          //print vectores
  		vec2.getElement(i);
    	
	vec2.remove(2);  								

	cout<<"After element-wise deletion:"<<endl;
	for(int i=0; i<vec2.size(); i++)
  		vec2.getElement(i);

	vec2.erase(2);

	cout<<"After index-wise deletion:"<<endl;
	for(int i=0; i<vec2.size(); i++)
  		vec2.getElement(i);

	vec2.sort();
	cout<<"After sorting:"<<endl;
	for(int i=0; i<vec2.size(); i++)
  		vec2.getElement(i);
  	return 0;
}
