#include <iostream> 
using namespace std;
void main()
{
	struct s1
	{
		char c[4]; //abc ,jkl 
		char *s; //def ,mno
	} s1 = { "abc", "def" };

	struct s2
	{
		char *cp; //ghi
		struct s1 ss1;
	} s2 = { "ghi",{ "jkl", "mno" } };

	cout << " s1.c[0]= " << s1.c[0] << '\t' << "*s1.s= " << *s1.s << endl;
	      //s1.c[0]=a   , s1.s=d
	cout << " s1.c= " << s1.c << '\t' << "s1.s= " << s1.s << endl;
	      //s1.c=abc  , s1.s= def
	cout << " s2.cp= " << s2.cp << '\t' << "s2.ss1.s= " << s2.ss1.s << endl;
	      //ghi  ,  mno
	cout << " ++s2.cp= " << ++s2.cp << '\t' << "++s2.ss1.s= " << ++s2.ss1.s << endl;
	     //hi  , no
	system("pause");
}

