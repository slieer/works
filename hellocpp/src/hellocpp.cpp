//============================================================================
// Name        : hellocpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "testheader/test.h"
#include "stud.cpp"
#include "com.cplusplus/test_cplusplus.cpp"
#include "com.stroustrup/test.cpp"
#include "container/container_test.cpp"
#include "a-basic/ABasic.cpp"

using namespace std;
static void basic_test();
static void testComCPlusPlus();
static void testStroustrup();
static void testContainer();
static void aBasicTest();

#define TEST_THIS  1
int main() {
	int flag = TEST_THIS;
	if(flag == 1){
		//正在做的测试
		aBasicTest();
	}else{
		//4、
		testContainer();
		//3、
		testStroustrup();
		//2、接着测试过的
		testComCPlusPlus();
		//1、先测试过的
		basic_test();
	}
}

static void aBasicTest(){
	ABasic a;
	a.test_construct();

}

static void testContainer(){
	ContainerTest t;
	t.test();
}

static void testStroustrup(){
	Test t;
	int swit = 1;
	swit = 5;
	switch(swit){
	case 1 :
		t.test_chapter2();
		break;
	case 2 :
		t.test_chapter5();
		break;
	case 3 :
		//四则运算字符串计算
		t.test_chapter6();
		break;
	case 4 :
		//dc namespace
		t.test_chapter8();
		break;
	case 5 :
		t.test_Chapter11();
		break;
	case 6 :
		t.test_Chapter18();
		break;
	case 7 :
		t.test_AppendixC();
		break;
	}
}

static void testComCPlusPlus(){
	TestCPlus t;
	int swit = 1;
	swit = 2;
	swit = 3;
	swit = 4;
	swit = 5;
	switch(swit){
	case 1 :
		//cpp new的三种方式
		t.test_dynamic();
		break;
	case 2 :
		//class定义和实例方法实现分离，命名空间的使用
		t.test_classes();
		break;
	case 3 :
		//加号的重载, this, 及指针
		t.test_classes1();
		break;

	case 4 :
		//struct使用
		t.test_structres();
		break;
	case 5 :
		/*虚函数，纯虚函数*/
		t.test_polymorphism();
		break;
	}
}


static void basic_test(){
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	test();

	int a, b, s;
	cin >> a >> b;
	s = sum(a, b);

	cout << "a+b=" << s << endl;

	Student st;
	Student st1;
	st.display();
	st1.display();
}

