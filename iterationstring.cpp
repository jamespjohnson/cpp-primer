#include <vector>
#include <string>
#include <iostream>

int main()
{
	string s("some string");
	if(s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}
}
