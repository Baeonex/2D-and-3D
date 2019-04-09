#pragma once
#include <string>
#include <memory>
#include <vector>
#include <iostream>
#include <Renderer2D.h>
using std::vector;
using std::string;
using std::shared_ptr;
using std::unique_ptr;
using namespace aie;

template<class T>
class Resource
{
public:
	Resource(const std::string& filename) : m_filename(filename) {
		m_data = std::unique_ptr<T>(new T(filename.c_str()));
	}
	~Resource() {};
	std::string getFilename() { return m_filename; }

	T* getData() const
	{
		return m_data.get();
	}
private:
	std::unique_ptr<T> m_data;
	std::string m_filename;
};

