#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Resource.h"
#include <map>
using namespace std;
template< class T >
class ResourceManager
{
	std::map<std::string, std::shared_ptr<T>> m_map;
	//std::vector< std::shared_ptr<Resource<T>> > m_resources;
	ResourceManager(const ResourceManager&) {};
	ResourceManager& operator=(const ResourceManager&) {};
public:
	ResourceManager() {};
	~ResourceManager() {};

	std::shared_ptr<T> get(const std::string filename)
	{
		std::map<std::string, std::shared_ptr<T>>::iterator it = m_map.find(filename);
		if (it == m_map.end())
		{
			std::shared_ptr<T> resource(new T(filename.c_str()));
			it = m_map.insert(it, std::pair< std::string, std::shared_ptr<T> >(filename, resource));
		}
		return (*it).second;
	}

	int getCount()
	{
		return m_map.size();
	}
	void collectGarbage()
	{
		for (std::map<std::string, std::shared_ptr<T>>::iterator it = m_map.begin(); it != m_map.end(); )
		{
			if (it->second.use_count() == 1)
				m_map.erase(it++);
			else
				++it;
		}
	}
};
