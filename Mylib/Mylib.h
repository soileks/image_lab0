#pragma once
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
class image {
public:
	int h;
	int w;
	unsigned char** arr;
//public:
	image() {
		h = 0;
		w = 0;
		arr = nullptr;
		
	};
	image(int _h , int _w);

	image(const image& a);


	image& operator =(const image& a);

	unsigned char& pixel(int _w, int _h);

	void increase() {
		int H = h * 2;
		int W = w * 2;
		 
		 unsigned char ** Arr = new unsigned char* [H];
		 Arr[0] = new unsigned char[H * W];
		 for (int i = 1; i < H; i++) {
			 Arr[i] = Arr[0] + i * W;
		 }
		 for (int i = 0; i < H; i+=2) {
			 for (int j = 0; j < W; j+=2) {
				 Arr[i][j] = arr[i/2][j /2];
			 }
		 }
		
		 for (int i = 0; i < H - 1; i +=2) {
			 for (int j = 1; j < W - 1; j +=2) {

				 Arr[i][j] = (Arr[i][j-1] + Arr[i][j+1]) / 2;
				 
			 }
		 }
		 for (int i = 1; i < H - 1; i += 2) {
			 for (int j = 0; j < W; j++) {

				 Arr[(i)][j] = (Arr[i - 1][j] + Arr[i + 1][j]) / 2;

			 }
		 }
		
		 for (int i = 0; i < W; i++) {
			 Arr[H-1][i] = Arr[H - 2][i];
		 }
		 for (int i= 0; i < H ; i++) {
			 Arr[i][W-1] = Arr[i][W-2];
		 }
		 delete[] arr[0];
		 delete[] arr;

		 arr = Arr;
		 h = H;
		 w = W;
	}
	 void printImage() {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				//printf("%d ", arr[i][j]);
				cout << (int)arr[i][j]<<" ";
			}
			cout << endl;
		}
	}

	~image();

	/*image(int _h = 0, int _w = 0) {
		h = _h;
		w = _w;
		arr = new unsigned char* [h];
		arr[0] = new unsigned char[h * w];
		for (int i = 0; i < h; i++) {
			arr[i] = arr[0] + i * w;
		}	
	}
	~image() {
		delete[] arr[0];
		delete[] arr;
	}*/
};

class load :public image {
public:
	load(int h, int w) :image(h, w) {};
	/*load(int h,int w,image& other) {
		this->h = h;
		this->w = w;
		unsigned char** arr;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				this->arr[i][j] = other.arr[i][j];
			}
		}
	}*/
		
	
	 void f() {
		//FILE* file = fopen("image.txt", "w");
		//fscanf(file, "%d ", &other.w);
		//fscanf(file, "%d ", &other.h);
		ofstream fout("load_img.txt");
		cout << endl;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				//printf("%d ", arr[i][j]);
				//fscanf(file, "%d ", (int)other.arr[i][j]);
				printf("%d ", arr[i][j]);
				
				fout << (int)arr[i][j] << " ";
			}
			cout << endl;
			fout << "\n";
		}
		
		fout.close();
		//fclose(file);
	}
	 void wr() {
		 ifstream fin("write.txt");
		 int p;
		 int m;

		 fin >> p;
		 fin >> m;
		 int tmp;

		 unsigned char** Array = new unsigned char* [p];

		 Array[0] = new unsigned char[p * m];
		 for (int i = 1; i < p; i++) {
			 Array[i] = Array[0] + i * m;
		 }
		 for (int i = 0; i < p; i++) {
			 for (int j = 0; j < m; j++) {
				 fin >> tmp;
				 Array[i][j] = (int)tmp;

				 // printf("%d ", );
				 cout << tmp << " ";
			 }
			 cout << endl;
		 }
		 //delete[] arr[0];
		 //delete[] arr;
		 delete[] Array[0];
		 delete[] Array;

		 fin.close();
	 }

	
	 

};

class loading {
public:
	//int h;
	//int w;
	image *im;
	//unsigned char**  array = new unsigned char* [h];
	//unsigned char *array[0] = new unsigned char[h * w];
	//image i(int h, int w);

	loading(image* i):im(i) {

		//im=i;


		//this->h = h;
		//this->w = w;
		//image *i(h, w);

		
		//h = i->h;
		//w = i->w;
		//array = im.arr;
		//array[0] = im.arr[0];
		
	}
	
	
	//image im(int h,int w);
	void foo() {
		//loading l(h, w);
		
		 
		//FILE* file;
		ofstream fout("image.txt");
		//file= fopen("image.txt", "w");
		//fscanf(file, "%d ", im.w);
		//fscanf(file, "%d ", im.h);

		cout << endl;
		for (int i = 0; i < im->h; i++) {
			for (int j = 0; j < im->w; j++) {
				
				printf("%d ", im->arr[i][j]);
				//fscanf(file, "%d \t", (int)im.arr[i][j]);
				fout << (int)im->arr[i][j] << " ";

				//fwrite(&im.arr[i][j], sizeof(int), 1, file);
				
			}
			cout << endl;
			fout << "\n";
		}
		//delete[] arr[0];
		//delete[] arr;
		//arr = array;
		//fwrite((int)im.arr, sizeof(int), im.h * im.w, file);
		fout.close();
		//fclose(file);
	}
	

};