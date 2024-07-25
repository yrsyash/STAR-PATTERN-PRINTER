
#include<stdio.h>
#include<string.h>
int s=42;char a[6][150];int y=0;
void alphabet_a()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==3|| i==1)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}	
}
void alphabet_b()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==3 || i==5)
			arr[i][j]=(char)s;
			else if(i==2 || i==4)
			{
				if(j==5 || j==1)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}	
}
void alphabet_c()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(j==1)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}	
}
void alphabet_d()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(j==1 || j==5)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
	
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_e()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2!=0)
			arr[i][j]=(char)s;
			else if(j==1)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_f()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==3)
			arr[i][j]=(char)s;
			else if(j==1)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_g()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(j==1)
			arr[i][j]=(char)s;
			else if(i==3)
			{
				if(j!=2)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==4 && j==5)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_h()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==3)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
	
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_i()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(j==3)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_j()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1)
			arr[i][j]=(char)s;
			
			else if(j==3)
			arr[i][j]=(char)s;
			else if(i==5)
			{
				if(j==2)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==4 && j==1)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
	
}

void alphabet_k()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			{
				if(j==1 || j==4)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==2 || i== 4)
			{
				if(j==1 || j==3)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==3)
			{
				if(j==1 || j==2)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_l()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1)
			arr[i][j]=(char)s;
			else if(i==5)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_m()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==2)
			{
				if(j%2==0)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==3 && j==3)
			arr[i][j]=(char)s;
			
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_n()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(j==i)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_o()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==1 || i==5)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_p()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{   
	
		
	
		for(j=1;j<=5;j++)
		{
			if(i<=3)
			{
			
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==1 || i==3)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		else if(i>3 && j==1)
		arr[i][j]=(char)s;
		else
		arr[i][j]=' ';
		}
	}
  for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_q()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(i==3 && j==3 || i==4 && j==4)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_r()
{
	int i,j,c=3;char arr[6][6];
	for(i=1;i<=5;i++)
	{   if(i<=3)
	{
		
	
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==1 || i==3)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
		
	}
	else
	{
	
	for(j=1;j<=5;j++)
	{
		if(j==1 || j==c)
		arr[i][j]=(char)s;
		else
		arr[i][j]=' ';
		
	}
	c++;
   }
   
  }
  for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_s()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==3 || i==5)
			arr[i][j]=(char)s;
			else if(i==2)
			{
				if(j==1)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			 }
				else if(i==4)
				{
					if(j==5)
					arr[i][j]=(char)s;
					else
					arr[i][j]=' ';
				}
				
							else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_t()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1)
			arr[i][j]=(char)s;
			else if(j==3)
				arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_u()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==5)
			arr[i][j]=(char)s;
			else if(j==1 || j==5)
			{
				arr[i][j]=(char)s;
			
			}
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_v()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1)
			{
				if(j==1 || j==5)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==3)
			{
				if(j==2 || j==4)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			else if(i==5)
			{
				if(j==3)
				arr[i][j]=(char)s;
				else
				arr[i][j]=' ';
			}
			
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_w()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5)
			arr[i][j]=(char)s;
			else if(i==3 && j==3 || i==4 && j==2 || i==4 && j==4)
			{
				
				arr[i][j]=(char)s;
	
			}
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_x()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==(3-(3-i)) || j==(3+(3-i)))
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_y()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		if(i<=3)
		{
		for(j=1;j<=5;j++)
		{
		    if(j==(3-(3-i)) || j==(3+(3-i)))	
		    arr[i][j]=(char)s;
		    else
		arr[i][j]=' ';
		}
		
	}
	else
	{
		for(j=1;j<=5;j++)
		{
			if(j==3)
			arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
	}

	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}
void alphabet_z()
{
	int i,j;char arr[6][6];
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5)
			arr[i][j]=(char)s;
			else if(j==(5-i+1))
				arr[i][j]=(char)s;
			else
			arr[i][j]=' ';
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		a[i][j+y]=arr[i][j];
		
	}
}

int main()
{
	int i,j,s,k=0;
	char name[100],name1[100],n;
	
	printf("Enter your name/text\n");
	gets(name);
	while(name[k])
	{
	  n=tolower(name[k]);
	  if(n=='a')
	  alphabet_a();
	  else if(n=='b')
	  alphabet_b();
	  else if(n=='c')
	  alphabet_c();
	  else if(n=='d')
	  alphabet_d();
	  else if(n=='e')
	  alphabet_e();
	  else if(n=='f')
	  alphabet_f();
	  else if(n=='g')
	  alphabet_g();
	  else if(n=='h')
	  alphabet_h();
	  else if(n=='i')
	  alphabet_i();
	  else if(n=='j')
	  alphabet_j();
	  else if(n=='k')
	  alphabet_k();
	  else if(n=='l')
	  alphabet_l();
	  else if(n=='m')
	  alphabet_m();
	  else if(n=='n')
	  alphabet_n();
	  else if(n=='o')
	  alphabet_o();
	  else if(n=='p')
	  alphabet_p();
	  else if(n=='q')
	  alphabet_q();
	  else if(n=='r')
	  alphabet_r();
	  else if(n=='s')
	  alphabet_s();
	  else if(n=='t')
	  alphabet_t();
	  else if(n=='u')
	  alphabet_u();
	  else if(n=='v')
	  alphabet_v();
	  else if(n=='w')
	  alphabet_w();
	  else if(n=='x')
	  alphabet_x();
	  else if(n=='y')
	  alphabet_y();
	  else if(n=='z')
	  alphabet_z();
	  y=y+8;
	  k++;
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=y;j++)
		printf("%c",a[i][j]);
		printf("\n");
	}
	return 0;
}



