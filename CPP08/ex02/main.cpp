#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "=== Testing MutantStack ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n=== Testing std::list (for comparison) ===" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
    if (mstack.size() == lst.size())
    {
        MutantStack<int>::iterator mit = mstack.begin();
        std::list<int>::iterator lit = lst.begin();
        bool equal = true;

        while (mit != mstack.end() && lit != lst.end())
        {
            if (*mit != *lit)
            {
                equal = false;
                break;
            }
            mit++;
            lit++;
        }
        if (equal)
            std::cout << "✅ CONGRATS TEST SUCCESSFUL PASSED COMPARISION SUCCESSFUL" << std::endl;
    }
	return 0;
}