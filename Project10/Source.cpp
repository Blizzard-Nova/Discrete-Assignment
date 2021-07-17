/*#include <iostream>
#include <string>
using namespace std;
class DiscreteMathematics
{
public:
	void Display();
private:
	void ReflexiveInt(int x, int y);
	void ReflexiveSt(string a, string b);

};

void DiscreteMathematics::ReflexiveInt(int x, int y)
{
	if (x == y)
	{
		cout << "This relation holds Reflexive property \n";
	 }
}

void DiscreteMathematics::ReflexiveSt(string a, string b)
{
	if (a == b)
	{
		cout << "This relation holds reflexive \n";
	 }
}

void DiscreteMathematics::Display()
{
	string a,b,y,choice;
	int z,e,j,g,d;
	int *SetOfStrings=new int [x];
	int* SetOfIntigers = new int[u];
	cout << "Do you want to enter set of intigers or set of strings ? \n";
	cin >> choice;
	if (choice == "strings")
	{
		cout << "Enter number of elements for your set \n";
		cin >> x;
		
		cout << "Enter elements of your set \n";
		for (int i = 0; i < x; i++)
		{
			cin >>SetOfStrings[i];
		}
		cout << "Enter the number of tuples of your relation \n";
		cin >> z;
		cout << "Enter tuples of your relation \n";
		for (int j = 0; j < z; j++)
		{
			cin >> b; cin >> y;
			cout << endl;
			cout << endl;

		}
		if (a == b && a == y)
		{
			cout << "Correct relation \n";
		}
		else
			cout << "Wrong relation  \n";
	}
	ReflexiveSt(b, y);
	if (choice == "intigers")
	{
		cout << "Enter number of elements in your set \n";
		cin >> u;
		cout << "Enter elements of your set \n";
		for (int k = 0; k < u; k++)
		{
			cin >> SetOfIntigers[k];
		}
		cout << "Enter number of tuples in your relation \n";
		cin >> e;
		cout << "Enter tuples of your relation \n";
		for (int s = 0; s < e; s++)
		{
			cin >> j; cin >> g;
			cout << endl;
			cout << endl;
		}
		if (j == u && g == u)
			cout << "Correct relation  \n";
		else
			cout << "Wrong relation \n";
	}
	ReflexiveInt(j, g);
	
}
int main()
{
	DiscreteMathematics  dm;
	dm.Display();
	//tuple <char, int> baka;


	return 0;
}*/

#include <iostream>

using namespace std;

void reflexive(int a[], int sizeOfA, int b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (b[j] == a[i])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Reflexive - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "Reflextive - Yes" << endl;
	}
}

void charReflexive(char a[], int sizeOfA, char b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (b[j] == a[i])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Reflexive - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "Reflextive - Yes" << endl;
	}
}

void symmetric(int a[], int sizeOfA, int b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (a[i] == a[j] && a[i + 1] == a[j - 1])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Symmetric - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "Symmetric - Yes" << endl;
	}
}

void charSymmetric(char a[], int sizeOfA, char b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (a[i] == a[j] && a[i + 1] == a[j - 1])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Symmetric - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "Symmetric - Yes" << endl;
	}
}

void antiSymmetric(int a[], int sizeOfA, int b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (a[i] <= b[j] && b[j] <= a[i])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Antisymmetric - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "Antisymmetric - Yes" << endl;
	}
}

void charAntiSymmetric(char a[], int sizeOfA, char b[], int sizeOfB)
{
	int i, j;
	bool test;
	bool hold = true;

	for (i = 0; i < sizeOfA; i++)
	{
		if (hold == true)
		{
			for (j = 0; j < sizeOfB;)
			{
				if (a[i] <= b[j] && b[j] <= a[i])
				{
					hold = true;
					break;
				}
				else
				{
					hold = false;
					cout << "Antisymmetric - No" << endl;
					break;
				}
			}
		}
	}
	if (hold == true)
	{
		test = true;
		cout << "AntiSymmetric - Yes" << endl;
	}
}

void transitive(int a[], int sizeOfA, int b[], int sizeOfB)
{

}

void charTransitive(char a[], int sizeOfA, char b[], int sizeOfB)
{

}


int main()
{
	char keepGoing = 'y';
	while (keepGoing == 'y') {

		int set1[4] = { 0, 1, 2, 3 };
		int rel1[8] = { 0, 0, 1, 1, 2, 2, 3, 3 };
		cout << "Set 1: " << endl;
		reflexive(set1, 3, rel1, 4);
		symmetric(set1, 3, rel1, 4);
		antiSymmetric(set1, 3, rel1, 4);

		cout << endl;
		char x, y, z;
		char set2[4] = { 'x', 'y', 'z' };
		char rel2[8] = { 'x', 'y', 'y', 'z', 'y', 'y', 'z', 'z' };
		cout << "Set 2: " << endl;
		charReflexive(set2, 4, rel2, 8);
		charSymmetric(set2, 4, rel2, 8);
		charAntiSymmetric(set2, 4, rel2, 8);

		cout << endl;
		char set3[3] = { 'x', 'y', 'z' };
		char rel3[18] = { 'x', 'x', 'y', 'z', 'x', 'y', 'z', 'y', 'x',
						 'z', 'y', 'y', 'z', 'x', 'y', 'x', 'z', 'z' };
		cout << "Set 3: " << endl;
		charReflexive(set3, 3, rel3, 18);
		charSymmetric(set3, 3, rel3, 18);
		charAntiSymmetric(set3, 3, rel3, 18);

		cout << endl;
		int set4[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
		int rel4[20] = { 1, 7, 2, 5, 2, 8, 3, 6, 4, 7, 5, 8, 6, 6, 1, 1,
						2, 2 };
		cout << "Set 4: " << endl;
		reflexive(set4, 8, rel4, 20);
		symmetric(set4, 8, rel4, 20);
		antiSymmetric(set4, 8, rel4, 20);

		cout << endl << "Would you like to test it again? (y/n): ";
		cin >> keepGoing;
	}

	return 0;
}