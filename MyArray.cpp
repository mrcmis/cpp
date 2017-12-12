#include "MyArray.h"
#include <iostream>

	
MyArray::MyArray(int t_size):size(this->trueSize){
	array = new int [t_size];
	for (int i = 0 ; i < t_size ; i++){
		array[i] = 0;
	}
	
	this->trueSize = t_size;
}

MyArray::MyArray(const MyArray &myArray):size(this->trueSize){
	
	array = new int [myArray.size];
	
	for (int i = 0; i < myArray.size; i++){
		array[i] = myArray.array[i];
	}
	
	trueSize = myArray.size;
	
}

MyArray::~MyArray(){
	delete [] array;
}

void MyArray::print(){
	for (int i = 0; i < size; i++){
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
}

int &MyArray::at(int index)const{
	return array[index];
}

void MyArray::resize(int newSize){
	
	int *newArray = new int [newSize];
	
	for (int i = 0; i < newSize; i++){
		newArray[i] = 0;
	}
	
	for (int i = 0; i < size; i++){
		newArray[i] = array[i];
	}
	
	this->trueSize = newSize;
	
	delete [] array;
	array = newArray;
}
