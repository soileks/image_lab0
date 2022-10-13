//#include "add.h"
#include"Mylib.h"
#include <gtest.h>


TEST(Mylib, one_test)
{
	image img(2, 2);
	
	array = new unsigned char* [img.h ];
	array[0] = new unsigned char[img.h * img.w];
	for (int i = 1; i < h; i++)
	{
		array[i] = array[0] + i * w;
	}
	for (int i = 0; i < img.h * img.w; i++) {
		array[0][i] = 1;
	}
	img.increase();
	for (int i = 0; i < img.h * img.w; i++) {
		EXPECT_EQ(1,img.arr[0][i]);
	}
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
