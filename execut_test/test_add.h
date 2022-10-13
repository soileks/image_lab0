//#include "add.h"
#include"Mylib.h"
#include <gtest.h>
using namespace std;

TEST(Mylib, one_test)
{
	image img(2, 2);
	
	unsigned char **array = new unsigned char* [img.h ];
	array[0] = new unsigned char[img.h * img.w];
	for (int i = 1; i < img.h; i++)
	{
		array[i] = array[0] + i * img.w;
	}
	for (int i = 0; i < img.h * img.w; i++) {
		array[0][i] = 1;
	}
	img.increase();
	for (int i = 0; i < img.h * img.w; i++) {
		EXPECT_EQ(1,(int)img.arr[0][i]);
	}
	delete[] array[0];
	delete[] array;
}
TEST(Mylib, two_test)
{
	image img2(2, 2);

	unsigned char** array = new unsigned char* [img2.h];
	array[0] = new unsigned char[img2.h * img2.w];
	for (int i = 1; i < img2.h; i++)
	{
		array[i] = array[0] + i * img2.w;
	}
	for (int i = 0; i < img2.h * img2.w; i++) {
		array[0][i] = 1;
	}
	img2.increase();
	for (int i = 0; i < img2.h * img2.w; i++) {
		EXPECT_EQ(2, (int)img2.arr[0][i]);
	}
	delete[] array[0];
	delete[] array;
}
TEST(Mylib, three_test)
{
	image img3(2, 2);

	unsigned char** array = new unsigned char* [img3.h];
	array[0] = new unsigned char[img3.h * img3.w];
	for (int i = 1; i < img3.h; i++)
	{
		array[i] = array[0] + i * img3.w;
	}
	for (int i = 0; i < img3.h * img3.w; i++) {
		array[0][i] = 1;
	}
	img3.increase();
	for (int i = 0; i < img3.h * img3.w; i++) {
		EXPECT_NE(3, (int)img3.arr[0][i]);
	}
	delete[] array[0];
	delete[] array;
}
TEST(Mylib, four_test)
{
	image img4(2, 2);

	unsigned char** array = new unsigned char* [img4.h];
	array[0] = new unsigned char[img4.h * img4.w];
	for (int i = 1; i < img4.h; i++)
	{
		array[i] = array[0] + i * img4.w;
	}
	for (int i = 0; i < img4.h * img4.w; i++) {
		array[0][i] = 1;
	}
	img4.increase();
	for (int i = 0; i < img4.h * img4.w; i++) {
		EXPECT_GE(2, (int)img4.arr[0][i]);
	}
	delete[] array[0];
	delete[] array;
}
TEST(Mylib, five_test)
{
	image img5(2, 2);

	unsigned char** array = new unsigned char* [img5.h];
	array[0] = new unsigned char[img5.h * img5.w];
	for (int i = 1; i < img5.h; i++)
	{
		array[i] = array[0] + i * img5.w;
	}
	for (int i = 0; i < img5.h * img5.w; i++) {
		array[0][i] = 1;
	}
	img5.increase();
	for (int i = 0; i < img5.h * img5.w; i++) {
		EXPECT_LE(3, (int)img5.arr[0][i]);
	}
	delete[] array[0];
	delete[] array;
}


//TEST(Mylib, one_test)
//{
//  int v  = add(2,2);
//  EXPECT_EQ(4, v);
//}
//TEST(Mylib, one_test)
//{
//  int v  = add(2,2);
//  EXPECT_EQ(4, v);
//}
//TEST(Mylib, one_test)
//{
//  int v  = add(2,2);
//  EXPECT_EQ(4, v);
//}
//TEST(Mylib, one_test)
//{
//  int v  = add(2,2);
//  EXPECT_EQ(4, v);
//}
