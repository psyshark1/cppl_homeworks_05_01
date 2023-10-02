#include <iostream>
#include <vector>

template<typename T>
T pow2(T v)
{
	return v * v;
}

std::vector<int>& operator * (std::vector<int>& l, std::vector<int>& r)
{
	unsigned i{ 0 };
	for (auto it : r)
	{
		r[i] = it * it;
		++i;
	}
	return l;
}
std::ostream& operator << (std::ostream& l, std::vector<int>& r)
{
	for (auto it : r)
	{
		l << it << ' ';
	}
	return l;
}

int main()
{	
	std::vector<int> v{ -1, 4, 8 };
	constexpr unsigned val{ 4 };
	std::cout << "[IN]: " << val << std::endl;
	std::cout << "[OUT]: " << pow2(4) << std::endl;

	std::cout << "[IN]: " << v << std::endl;
	std::cout << "[OUT]: " << pow2(v) << std::endl;
	return 0;
}
