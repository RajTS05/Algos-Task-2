#include <iostream>
#include<stack>
#include<string>

using namespace std;
 
int HandleExpression(string exp)
{  int flag =0;
	stack<char>  List;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '<')
			List.push(exp[i]);
		else if(exp[i] == '>')
		{
			if(!List.empty()){
                flag++;
				List.pop();
			}
		}
	}
	return flag;

}

int main()
{   
    int n;
    cin>>n;
    int flag[n];
    for(int i=0;i<n;i++)
    {
      string expression;
	  cin>>expression;
	  flag[i] = HandleExpression(expression);
    }
    for(int i=0;i<n;i++)
    {
     cout<<"\n"<<flag[i]*2;
    }
}
