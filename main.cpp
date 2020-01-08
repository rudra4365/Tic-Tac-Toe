#include<bits/stdc++.h>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';

void draw()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<matrix[i][j]<<"	";
		cout<<endl<<endl;
	}

}


void toggle()
{
	if (player=='X')
	{
		player='O';
	}
	else
		player='X';
}

void input()
{
	int a;
	cout<<"Enter the field number you want to place "<<player<<" to: ";
	cin>>a;
	switch(a)
}

int main()
{
	draw();
}
