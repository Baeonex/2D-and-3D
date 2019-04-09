#include "Hash.h"

namespace HashFunction
{
	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; ++i)
			hash += data[i];
		return hash;
	}
	unsigned int hash(const char* str, unsigned int length)
	{
		unsigned int b = 378551;
		unsigned int a = 63689;
		unsigned int hash = 0;
		unsigned int i = 0;
		for (int i = 0; i < length; ++str, ++i)
		{
			hash = hash * a + (*str);
			a = a * b;
		}
		return hash;
	}


}


Hash::Hash()
{
}


Hash::~Hash()
{
}
