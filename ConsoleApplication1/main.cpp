#include <iostream>
#include <memory>
#include "test.h"

using namespace std;


int main()
{
	//testA * testAPtr = new testA();
	
	std::shared_ptr<testA> testAPtr = make_shared<testA>();
	testA testAobj;
	int a = testAobj.GetValue();
	//int a = testAPtr->GetValue();

	cout << a << endl;

	return 0;
}



