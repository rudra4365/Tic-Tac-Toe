#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';

void draw()
{
    system("cmd /c cls");
    //system("clear");
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
	{
		case 1: if(matrix[0][0]=='1')
					matrix[0][0]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;
		case 2: if(matrix[0][1]=='2')
					matrix[0][1]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;
		case 3: if(matrix[0][2]=='3')
					matrix[0][2]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 4: if(matrix[1][0]=='4')
					matrix[1][0]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 5: if(matrix[1][1]=='5')
					matrix[1][1]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 6: if(matrix[1][2]=='6')
					matrix[1][2]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 7: if(matrix[2][0]=='7')
					matrix[2][0]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 8: if(matrix[2][1]=='8')
					matrix[2][1]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;

		case 9: if(matrix[2][2]=='9')
					matrix[2][2]=player;
				else
					{cout<<"Well that's already occupied. Let's try again."<<endl;
						input();
					}
					break;
		default: cout<<"Enter a valid digit."<<endl;
				input();
	}
}

char win()
{
	if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
	{
		return ('X');
	}
	else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
	{
		return ('X');
	}
	else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
	{
		return ('X');
	}
	else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
	{
		return ('X');
	}
	else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
	{
		return ('X');
	}
	else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
	{
		return ('X');
	}
	else if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
	{
		return ('X');
	}
	else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
	{
		return ('X');
	}




	else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
	{
		return ('O');
	}
	else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
	{
		return ('O');
	}
	else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
	{
		return ('O');
	}
	else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
	{
		return ('O');
	}
	else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
	{
		return ('O');
	}
	else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
	{
		return ('O');
	}
	else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
	{
		return ('O');
	}
	else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
	{
		return ('O');
	}

	else return('N');


}

void comp()
{
	if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='3')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}
	else if(matrix[0][0]=='X' && matrix[0][1]=='2' && matrix[0][2]=='X')
	{
		matrix[0][1]='O';
		cout<<"O placed at field number 2";
	}
	else if(matrix[0][0]=='1' && matrix[0][1]=='X' && matrix[0][2]=='X')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='6')
	{
		matrix[1][2]='O';
		cout<<"O placed at field number 6";
	}
	else if(matrix[1][0]=='X' && matrix[1][1]=='5' && matrix[1][2]=='X')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[1][0]=='4' && matrix[1][1]=='X' && matrix[1][2]=='X')
	{
		matrix[1][0]='O';
		cout<<"O placed at field number 4";
	}

	else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[2][0]=='X' && matrix[2][1]=='8' && matrix[2][2]=='X')
	{
		matrix[2][1]='O';
		cout<<"O placed at field number 8";
	}
	else if(matrix[2][0]=='7' && matrix[2][1]=='X' && matrix[2][2]=='X')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 7";
	}

	else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='7')
	{
		matrix[2][0]='O';
		cout<<"O placed at field number 7";
	}
	else if(matrix[0][0]=='X' && matrix[1][0]=='4' && matrix[2][0]=='X')
	{
		matrix[1][0]='O';
		cout<<"O placed at field number 4";
	}
	else if(matrix[0][0]=='1' && matrix[1][0]=='X' && matrix[2][0]=='X')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='8')
	{
		matrix[2][1]='O';
		cout<<"O placed at field number 8";
	}
	else if(matrix[0][1]=='X' && matrix[1][1]=='5' && matrix[2][1]=='X')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][1]=='2' && matrix[1][1]=='X' && matrix[2][1]=='X')
	{
		matrix[0][1]='O';
		cout<<"O placed at field number 2";
	}

	else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[0][2]=='X' && matrix[1][2]=='6' && matrix[2][2]=='X')
	{
		matrix[1][2]='O';
		cout<<"O placed at field number 6";
	}
	else if(matrix[0][2]=='3' && matrix[1][2]=='X' && matrix[2][2]=='X')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}

	else if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[0][0]=='X' && matrix[1][1]=='5' && matrix[2][2]=='X')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][0]=='1' && matrix[1][1]=='X' && matrix[2][2]=='X')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='7')
	{
		matrix[2][0]='O';
		cout<<"O placed at field number 7";
	}
	else if(matrix[0][2]=='X' && matrix[1][1]=='5' && matrix[2][0]=='X')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][2]=='3' && matrix[1][1]=='X' && matrix[2][0]=='X')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}



	//above done for 2 X's game

	else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='3')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}
	else if(matrix[0][0]=='O' && matrix[0][1]=='2' && matrix[0][2]=='O')
	{
		matrix[0][1]='O';
		cout<<"O placed at field number 2";
	}
	else if(matrix[0][0]=='1' && matrix[0][1]=='O' && matrix[0][2]=='O')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='6')
	{
		matrix[1][2]='O';
		cout<<"O placed at field number 6";
	}
	else if(matrix[1][0]=='O' && matrix[1][1]=='5' && matrix[1][2]=='O')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[1][0]=='4' && matrix[1][1]=='O' && matrix[1][2]=='O')
	{
		matrix[1][0]='O';
		cout<<"O placed at field number 4";
	}

	else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[2][0]=='O' && matrix[2][1]=='8' && matrix[2][2]=='O')
	{
		matrix[2][1]='O';
		cout<<"O placed at field number 8";
	}
	else if(matrix[2][0]=='7' && matrix[2][1]=='O' && matrix[2][2]=='O')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 7";
	}

	else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='7')
	{
		matrix[2][0]='O';
		cout<<"O placed at field number 7";
	}
	else if(matrix[0][0]=='O' && matrix[1][0]=='4' && matrix[2][0]=='O')
	{
		matrix[1][0]='O';
		cout<<"O placed at field number 4";
	}
	else if(matrix[0][0]=='1' && matrix[1][0]=='O' && matrix[2][0]=='O')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='8')
	{
		matrix[2][1]='O';
		cout<<"O placed at field number 8";
	}
	else if(matrix[0][1]=='O' && matrix[1][1]=='5' && matrix[2][1]=='O')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][1]=='2' && matrix[1][1]=='O' && matrix[2][1]=='O')
	{
		matrix[0][1]='O';
		cout<<"O placed at field number 2";
	}

	else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[0][2]=='O' && matrix[1][2]=='6' && matrix[2][2]=='O')
	{
		matrix[1][2]='O';
		cout<<"O placed at field number 6";
	}
	else if(matrix[0][2]=='3' && matrix[1][2]=='O' && matrix[2][2]=='O')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}



	else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='9')
	{
		matrix[2][2]='O';
		cout<<"O placed at field number 9";
	}
	else if(matrix[0][0]=='O' && matrix[1][1]=='5' && matrix[2][2]=='O')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][0]=='1' && matrix[1][1]=='O' && matrix[2][2]=='O')
	{
		matrix[0][0]='O';
		cout<<"O placed at field number 1";
	}

	else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='7')
	{
		matrix[2][0]='O';
		cout<<"O placed at field number 7";
	}
	else if(matrix[0][2]=='O' && matrix[1][1]=='5' && matrix[2][0]=='O')
	{
		matrix[1][1]='O';
		cout<<"O placed at field number 5";
	}
	else if(matrix[0][2]=='3' && matrix[1][1]=='O' && matrix[2][0]=='O')
	{
		matrix[0][2]='O';
		cout<<"O placed at field number 3";
	}
	// added above for two comp fields

	


}


int main()
{
	int n=0;
	char s;
	draw();
	while(1)
	{
		n++;
		input();
		draw();
		comp();
		draw();
		
		s=win();
		if(s=='X')
		{
			cout<<"X won the game. ";
			break;
		}
		else if(s=='Y')
		{
			cout<<"Y won the game. ";
			break;
		}
		else if(s=='N' && n==9)
		{
			cout<<"It's a TIE. ";
			break;
		}

	}
	system("pause");
	return 0;
}
