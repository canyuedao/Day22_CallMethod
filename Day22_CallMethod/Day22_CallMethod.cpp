// Day22_CallMethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <memory.h>
#include <stdio.h>
//class test{
//private:
//	int a;
//
//protected:
//	int b;
//public:
//	static void _cdecl call(int b,int d,int i,int k,int j){
//		int c=b;
//	}
//	test(){
//		printf("created\n");
//	}
//	~test(){
//		printf("destroied\n");
//	}
//};
////void _stdcall call(int a,int b,int c){
////	
////}
//class sun:private test{
//public:
//	sun(){
//		printf("sun created\n");
//	}
//	~sun(){
//		printf("sun destroied\n");
//	}
//	void pFunc(){
//		b=10;
//	}
//};
//class A{
//	char *p;
//public:
//	A(){
//		p=new char[10];
//	}
//	~A(){
//		delete p;
//	}
//};
class shape{
public:
	shape(){
		//memset(this,0,sizeof(shape));
		printf("shape start\n");
	}
	/*virtual*/ ~shape(){
		printf("shape end\n");
	};
};
class rangle:public shape{
public:
	rangle(){
		memset(this,0,sizeof(rangle));	
	}
	/*virtual*/ ~rangle(){		
		printf("rangle end\n");
	};
};  
int _tmain(int argc, _TCHAR* argv[])
{
	//shape s;
	//rangle r;
	shape *s=new shape;
	rangle *r=new rangle;
	delete s;
	delete r;
	//char *p=new char[10];
	//A *pA=new A[10];
	//delete []pA;
	//test t;
	//t.test::test();
	//t.call(10,20,30,40,50);
	//
	//sun s;
	
	/*call(10,20,30);*/
	return 0;
}









