#pragma once
#include <string>
namespace utils
{
	std::string  Utf8ToGB2312(const char* utf8);
	std::string  GB2312ToUtf8(const char* gb2312);
	std::wstring StringToWstring(const std::string str);
	std::string WstringToString(const std::wstring str);
}


template <typename T>
inline void SafeDelete(T * &pointer)
{
	if (pointer != nullptr)
	{
		delete pointer;
		pointer = nullptr;
	}
}