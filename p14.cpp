
#include <iostream>
using namespace std;
class pattern
{
	private:
		int i,j, s,rows;
		public:
			pattern()
			{
				cout<<"enter any no of rows"<<endl;
				cin>>rows;
				for(i=1; i<=rows; i++)
				{
					for(s=i; s<rows; s++)
					{
						cout<<" ";
					}
					for(j=1; j<=2*i-1; j++)
					{
						cout<<"*";
					}
					cout<<endl;
				}
			}
			friend int row(pattern t);
};
int row(pattern t)
{
	cout<<"enter rows are:"<<t.rows;
}
int main()
{
	pattern t;
	row(t);
}