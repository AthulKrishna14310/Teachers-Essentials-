
#include <dos.h>
#include <stdio.h>
#include<iostream.h>
#include<conio.h>

	class Date{
	void WriteDatetoFile(){
	struct date d;
	ofstream ofile(" Date.tea",ios::out);
	getdate(&d);
	int Year= d.da_year;
	int Day= d.da_day;
	int Month= d.da_mon;
	ofile<<Day<<"/"<<Month<<"/"<<Year;
	getch();
	return 0;
}