// Allocator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Allocator.h"
#include <stdio.h>



int _tmain(int argc, _TCHAR* argv[])
{
	std::cin.get();

	for (int i = 0; i < 100; i++){
		Allocator<int> vector(10000000);
		vector[9000000] = 100; 
		//std::cout << vector[2];
	}


	system("PAUSE");
	return 0;
}
