#include "stack.h"
#include <iostream>
#include <sstream>
using namespace std;

typedef Stack<std::string> StackString;
typedef Stack<int> StackInt;

int main(int argc, char* argv[]){
  
	// check string stack
	vector<string> words = {"a", "b", "c", "e", "f"};
	StackString stack;

	for (unsigned int i = 0; i < words.size(); ++i){
		stack.push(words[i]);
	}

	bool checkEmpty = stack.empty();

	cout << checkEmpty << endl;

	cout << "size: " << stack.size() <<endl;

	// test push
	stack.push("m");
	stack.push("g");
  
	cout << "size: " << stack.size() <<endl;
  cout << "top: " << stack.top() <<endl;

	// test pop
	stack.pop();
	stack.pop();
	stack.pop();

	cout << "size: " << stack.size() <<endl;
  cout << "top: " << stack.top() <<endl;


	// check int stack
	vector<int> numbers = {2,4,7,1,9};
	StackInt stack2;

	for (unsigned int i = 0; i < numbers.size(); ++i){
		stack2.push(numbers[i]);
	}

	bool checkEmpty2 = stack2.empty();

	cout << checkEmpty2 << endl;

	cout << "size: " << stack2.size() <<endl;

	// test push
	stack2.push(1);
	stack2.push(5);
  
	cout << "size: " << stack2.size() <<endl;
  cout << "top: " << stack2.top() <<endl;

	// test pop
	stack2.pop();
	stack2.pop();
	stack2.pop();

	cout << "size: " << stack2.size() <<endl;
  cout << "top: " << stack2.top() <<endl;


	return 0;
}