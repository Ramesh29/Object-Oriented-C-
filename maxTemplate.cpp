/****************************************************
 *
 *  FileName:    /net/data/ftp/pub/class/170/ftp/cpp/maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

//Make a template out of this function. Don't forget the return type.
template<typename T>
T myMax(T one, T two)
{
	T bigger;
	if (one < two)
	{
		bigger = two;
	}
	else
	{
		bigger = one;
	}
	return bigger;
}


int main()
{
   int i_one = 3, i_two = 5;
   float f_one = 2.2, f_two = 3.3;
   string s_one = "stringone", s_two = "stringtwo";


   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl;


   cout << "The max of " << f_one << " and " << f_two << " is "
	   << myMax(f_one, f_two) << endl;

   cout << "The max of " << s_one << " and " << s_two << " is "
	   << myMax(s_one, s_two) << endl;


   //Test your template on float and string types

   
	
   return 0;
}


