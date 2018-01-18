#include <stdio.h>
#include <iostream>
#include<locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	cout << "¬ведите задание" << "\n";
	cin >> N;
	switch (N)
	{
		// не успела сделать всЄ ^^^^^ :(
	case 1:
	{
		//не успела сделать :(
		int n,sum=0,kol=0;
		cin >> n;
		int i;
		for (i = 1; i < 64; i = i * 2)
		{
			kol += i;
			sum = kol / n;
			cout << kol<<"\n";
		}
		cout << sum<<"\n";
	}
	break;
	case 2:
	{
		//не вышло :(
		int n,  sum=0;
				
		for (n = 0; n <50; n++)
		{
		

			if (n%2>0)
		{
				
				sum += n;
			
		
			}
				
		cout << sum << endl;
		}
	
	}
	break;
	case 3:
	{
		int tovar,sum=0;
	
		srand(time(NULL));
		for (tovar = 1; tovar <= 10; tovar++)
		{
			float stoimest = 1000 + rand() % 4000;
			if (stoimest > 1000)
			{
				sum += stoimest;
			
			}
			cout  << tovar<< " " << sum << endl;
		}
	}
	break;
	case 4:
	{
		int stranica, gurnal,sum=0, kol=0;
		srand(time(NULL));
		for (gurnal  = 1; gurnal<19; gurnal++)
		{
			stranica = 1 + rand() % 90;
             if (stranica>16)
		{
				 sum += stranica;
				 kol++;
		}
			
			cout << gurnal << " " << sum << endl;
		}
		 
	}
	break;
	case 5:
	{
		int klass, ch_detei, sum1 = 0,sum2=0,sum3=0, sum=0;
		srand(time(NULL));
		for (klass = 1; klass <11; klass++)
		{
			if (klass == 1)
			{
				sum1 = 1 + rand() % 20;
			}
			if (klass == 2)
			{
				sum2 = 1 + rand() % 40;
			}
			if (klass == 3)
			{
				sum3 = 1 + rand() % 50;
			}
			sum = sum1 + sum2 + sum3;
		}
		cout << klass<<" "<<sum << endl;
	}
	break;
	case 6:
	{ 
		int god, chel, sum1=0, sum2=0,sum=0;
		srand(time(NULL));
		for (god = 1975; god < 2009; god++)
		{
			if (god < 1985)
			{
				chel = 1 + rand() % 5;
				sum1++;
			}
			if (god > 1990)
			{
				chel = 1 + rand() % 9;
				sum2++;
			}
			
		}
		cout << sum1<<" - родившихс€ до 1985 года" << " " << sum2<<" - родившихс€ после 1990 года" << endl;
	}
	break;
	case 7:
	{
		int komanda, futtboll, kol1=0,kol2=0, v_komandy, p_komandy;
		srand(time(NULL));
         komanda = 1 + rand() % 6;
		do
		{		
			v_komandy = 1 + rand() % 7;
			p_komandy = 1 + rand() % 9;
			if (v_komandy > p_komandy)
			{
				cout << komanda <<" команды имеют выйгрыш "<< v_komandy<<"\n";
				kol1++;
		cout <<"команд имеют больше выигрышей "<< kol1 << "\n";	
			}
			else if (v_komandy < p_komandy)
			{
				cout << komanda<< " команды имеют прогирышей " << p_komandy<<"\n";
				kol2++;
				cout <<" команд имеют больше проигрышей "<< kol2 << "\n";
			}

			
			
		} while (komanda>5);
		
	}
	break;
	case 8:
	{
		int studenty, exzamen, kol = 0;
		srand(time(NULL));
		for (exzamen=1; exzamen<=2; exzamen++)
		{
			studenty = 1 + rand() % 5;
			if (studenty == 2)
			{
				kol++;
		cout << kol << endl;	
			}

			
		}
	}
	break;
	default:
		break;
	}











}
