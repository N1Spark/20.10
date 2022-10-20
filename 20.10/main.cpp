#include <iostream>
#include "Header.h"
#include "List.h"
#include "Search.h"
using namespace std;

int main()
{
	Contact obj1("Dmytro", 123);
	Contact obj2("Nikita", 1321);
	List<Contact>c_list;
	c_list.Add(obj1);
	c_list.Add(obj2);
	c_list.Save();
	search_by_num(1321);
}