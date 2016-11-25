// Prime_ch16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ex16.2.h"
#include <string>
#include <vector>
int _tmain(int argc, _TCHAR* argv[])
{
    int a[] = {3,4,5,6,8};
    std::string k[] = { "33", "44", "55", "66" };
    std::vector<int> v = {3,4,5,6,7,8,9,10};
    
    std::cout << * PRIM::myfind(v.begin(), v.end(), 8);
    PRIM::begin(a);
    PRIM::end(k);
    std::cout << PRIM::arysize(k);
	return 0;
}

