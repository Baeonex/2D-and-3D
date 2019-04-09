#pragma once
#include <functional>
#include <string>
using namespace std;

namespace HashFunction 
{
	typedef function<unsigned int(const char*, unsigned int)> HashFunc;

	unsigned int badHash(const char* data, unsigned int length);
	unsigned int hash(const char* str, unsigned int length);
	static HashFunc default = hash;
}


class Hash
{
public:
	Hash();
	~Hash();
};

