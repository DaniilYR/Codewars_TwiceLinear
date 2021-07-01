#include <algorithm>
#include <set>
#include <iostream>
#include <vector>
#include <cmath>

int dblLinear(int n){
	std::set<int> u;
	u.insert(1);
	std::set<int>::iterator it = u.begin();
	while(u.size() < 2*n){
		u.insert(2*(*it)+1);
		u.insert(3*(*it)+1);
		it++;
	}
	
	it = u.begin();
	int i = 0;
	while (i != n)
	{
		i++;
		it++;
	}
	return *it;
}

int main(){
	std::cout << dblLinear(10) << std::endl;
	std::cout << dblLinear(20) << std::endl;
	std::cout << dblLinear(30) << std::endl;
	std::cout << dblLinear(50) << std::endl;
	return 0;
}
