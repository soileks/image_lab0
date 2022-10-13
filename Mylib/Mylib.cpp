#include"Mylib.h"
#include<cstring>
#include<iostream>
using namespace std;


image::image(int _h = NULL, int _w = NULL) {
	//int p;
	h = _h;
	w = _w;
	arr = new unsigned char* [h];
	arr[0] = new unsigned char[h * w];
	memset(arr[0], 0, h * w);
	for (int i = 1; i < h; i++)
	{
		arr[i] = arr[0] + i * w;
	}
	for (int i = 0; i < h * w; i++) {
		arr[0][i] = 1;
		// cout << "input: ";
		//scanf_s("%d", &arr[0][i]);
		//cin >> arr[0][i];
		//arr[0][i]= (int)arr[0][i];;
		//arr[0][i] = rand() % 100 + 2;
	}

	/*h = _h;
	w = _w;
	arr = new unsigned char* [h];
	arr[0] = new unsigned char[h * w];
	for (int i = 0; i < h; i++) {
		arr[i] = arr[0] + i * w;
	}*/

}

image::image(const image& a) {
	h = a.h;
	w = a.w;
	arr = new unsigned char* [h];
	arr[0] = new unsigned char[h * w];
	
	for (int i = 0; i < h; i++) {
		//arr[i] = new unsigned char[w];
		arr[i] = a.arr[i];
	}
	/*for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			arr[i][j] = a.arr[i][j];
		}
	}*/
}

image& image:: operator =(const image& a)
{
	if (this == &a)
	{
		return *this;
	}
	for (int i = 0; i < h; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	h = a.h;
	w = a.w;
	arr = new unsigned char* [h];
	for (int i = 0; i < h; i++)
	{
		arr[i] = new unsigned char[w];
		for (int k = 0; k < w; k++)
		{
			arr[i][k] = a.arr[i][k];
		}
	}
	return *this;
}

unsigned char& image::pixel(int _w, int _h) {
	if (_w<0 || _h<0 || _w>=w || _h>=h) {
		throw 1;
	}
	return arr[_h][_w];
}


image:: ~image() {
	delete[] arr[0];
	delete[] arr;
}
