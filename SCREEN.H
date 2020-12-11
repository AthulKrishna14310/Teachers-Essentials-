#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>
#include "Remainder.h"
#include "TeacessDate.h"
class Screen{
public:
void WelcomeScreen()
		{
		clrscr();
		cout<<"\n\n";
		cout<<"\n\t\t+========================================+";
		cout<<"\n\t\t|..........Teachers  Essentials..........|";
		cout<<"\n\t\t+========================================+";

		getch();
		clrscr();
		cout<<"\n\t====================Today'S Review=====================\n\n";
		Date SDR;
		SDR.WriteDatetoFile();

		SDR.CompareDateToDisplayRemainder();
		}
////////////////////////////////////////////////////////////////////////////////
void StartPage()
{     cout<<"\n\t                  Teachers Essentials                         ";








		for(double i=0;i<=500000;i++);

		cout<<"\n  \t+-----------------------------------+       |";
		cout<<"\n  \t|                 1                 |       |\t\t+----------+";
		cout<<"\n  \t|             |Create|              |       |\t\t|     4    |";
		cout<<"\n  \t|                                   |       |\t\t| |Delete| |";
		cout<<"\n  \t|You can Create Class ,Event Details|       |\t\t|          |";
		cout<<"\n  \t|Remainders,Attendance Register.etc |       |\t\t|          |";
		cout<<"\n  \t+-----------------------------------+       |\t\t+----------+";


		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-----------------------------------+       |";
		cout<<"\n  \t|                2                  |       |";
		cout<<"\n  \t|             |Update|              |       |\t\t+----------+";
		cout<<"\n  \t|                                   |       |\t\t|    5     |";
		cout<<"\n  \t| You can update the Records that   |       |\t\t|   Exit   |";
		cout<<"\n  \t| you have created.........         |       |\t\t|          |";
		cout<<"\n  \t+-----------------------------------+       |\t\t+----------+";

		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-----------------------------------+       |";
		cout<<"\n  \t|               3                   |       |";
		cout<<"\n  \t|           |Display|               |       |";
		cout<<"\n  \t|                                   |       |";
		cout<<"\n  \t|You can display the Records that   |       |";
		cout<<"\n  \t|you have created.........          |       |";
		cout<<"\n  \t+-----------------------------------+       |";

		}
////////////////////////////////////////////////////////////////////////////////
void CreatePage(){     cout<<"\n\t                  Create Page     ";
		for(double i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          1              |       ";
		cout<<"\n  \t|       Mark Entry        |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=90000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          2              |       ";
		cout<<"\n  \t|   Attendance Register   |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=90000;i++);
		cout<<"\n  \t+-------------------------+  +-------------------------+   ";
		cout<<"\n  \t|          3              |  |          6              |   ";
		cout<<"\n  \t|    Create Class         |  |    Event Collections    |   ";
		cout<<"\n  \t+-------------------------+  +-------------------------+   ";

		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          4              |       ";
		cout<<"\n  \t|   Create Student Record |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          5              |       ";
		cout<<"\n  \t|   Remainder Creation    |       ";
		cout<<"\n  \t+-------------------------+       ";
		}

////////////////////////////////////////////////////////////////////////////////
  void DisplayPage(){
		cout<<"\n\t                       ";
		for(double i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          1              |       ";
		cout<<"\n  \t|  Student Register       |                 Display Page      ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          2              |       ";
		cout<<"\n  \t|   Event Collection      |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          3              |       ";
		cout<<"\n  \t|       Remainder         |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          4              |       ";
		cout<<"\n  \t|   Attendance Register   |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          5              |       ";
		cout<<"\n  \t|     Mark Register       |       ";
		cout<<"\n  \t+-------------------------+       ";
			for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          6              |       ";
		cout<<"\n  \t|     Rank List           |       ";
		cout<<"\n  \t+-------------------------+       ";

	  }
  void UpdatePage()
  {
  cout<<"\n\t                  Update Page     ";
		for(double i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          1              |       ";
		cout<<"\n  \t|  Student Register       |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=5000000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          2              |       ";
		cout<<"\n  \t|   Event Collection      |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          3              |       ";
		cout<<"\n  \t|       Remainder         |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          4              |       ";
		cout<<"\n  \t|       Mark Register     |       ";
		cout<<"\n  \t+-------------------------+       ";

		 }
  void DeletePage()
  {
  cout<<"\n\t                  Delete Page     ";
		for(double i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          1              |       ";
		cout<<"\n  \t|  Student Register       |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=5000000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          2              |       ";
		cout<<"\n  \t|   Event Collection      |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          3              |       ";
		cout<<"\n  \t|       Remainder         |       ";
		cout<<"\n  \t+-------------------------+       ";
		for( i=0;i<=500000;i++);
		cout<<"\n  \t+-------------------------+       ";
		cout<<"\n  \t|          4              |       ";
		cout<<"\n  \t|       Mark Register     |       ";
		cout<<"\n  \t+-------------------------+       ";

		 }

		};