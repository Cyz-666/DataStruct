#pragma once
#ifndef RABIN_KARP_H_
#define RABIN_KARP_H_

#include <string>


using namespace std;
struct cyzt
{
	short ashort : 16;
	int aint : 32;
	unsigned int auint : 32;
};
class RabinKarpAl
{
public:
	static int strstr(const string& haystack, const string& needle);
};

#endif // RABIN_KARP_H_