#include <string>
#include <algorithm>

bool is_integer(const std::string& s) {
	return !s.empty() && std::find_if(s.begin(),
		s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}