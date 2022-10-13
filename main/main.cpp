#include<iostream>
#include<stdio.h>
#include"Mylib.h"
//#include"test_add.h"

using namespace std;
int main() {
	
	image img(2, 2);
	//image img2(img);
	img.printImage();
	cout << endl;
	img.increase();
	img.printImage();
	
	cout << "-------------------" << endl;
    //load l(img.h,img.w,img);
	
	load l(2,2);
	l.wr();
	//l.printImage();
	//cout << endl;
	l.f();

	cout << "-------------------" << endl;
	loading s(&img);
	
	s.foo();
	 

	//try {
		/*img.pixel(0, 0) = '2';
		img.pixel(0, 1) = '4';
		img.pixel(1, 0) = '5';
		img.pixel(1, 1) = '3';*/
	//}
	/*catch (...) {
		cout << "erorr" << endl;

	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << img.pixel(i, j) << "_";
		}
	}*/
}