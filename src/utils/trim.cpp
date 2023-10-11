#include "utils.hpp"

#include <algorithm>


std::string &trim(std::string &s)
{
	return (ltrim(rtrim(s)));
}

std::string &ltrim(std::string &s)
{
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun(isspace))));
	return s;
}

std::string &rtrim(std::string &s)
{
	s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun(isspace))).base(), s.end());
	return s;
}
