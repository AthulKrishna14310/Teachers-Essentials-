
#include <dos.h>
#include <stdio.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include "Collection.h"

	class Date{
	public:
	void WriteDatetoFile(){
	struct date d;
	ofstream ofile("TeacessDate.tea",ios::out);
	getdate(&d);
	int Year= d.da_year;
	int Day= d.da_day;
	int Month= d.da_mon;
	ofile<<Day<<"/"<<Month<<"/"<<Year;

	}
	void CompareDateToDisplayRemainder(){
	char DateQ[100];
	Remainder RWS;
	int found=0;
	ifstream ifileQ("TeacessDate.tea",ios::in);
	ifileQ>>DateQ;
	ifstream ifile("Remainder.tea",ios::binary|ios::in);

		while(ifile){
		ifile.read((char*)&RWS,sizeof(RWS));
		if(strcmp(RWS.GetDate(),DateQ)==0){
		cout<<"\n\t Today Remainder   :: "<<RWS.ReturnEvent();
		found=1;
		break;
		}}
		if(found!=1)
		cout<<"\n\t\t\t\t No Remainders for Today ......... ";
		}
	void CompareDateToDisplayEvent(){
	char DateQ[100];
	Collection RWS;
	int found=0;
	ofstream ofile("tp.tea",ios::binary|ios::out);
	ifstream ifileQ("TeacessDate.tea",ios::in);
	ifileQ>>DateQ;
	ifstream ifile("Collection.tea",ios::binary|ios::in);

		while(ifile){
		ifile.read((char*)&RWS,sizeof(RWS));

		if(strcmp(RWS.GetEventDate(),DateQ)!=0){
		cout<<"\n\t\t\t\t\n\n Event Details.....\n For:: "<<RWS.GetEventName();
		cout<<"\t";
	  for(int i=0;i<RWS.notg;i++)
	  cout<<"\n\t\t\t\tRoll Number :: "<<RWS.no[i];
	  cout<<"\n\t\t\t\t Have not Given their collection due....... ";
	  found=1;
	  ofile.write((char*)&RWS,sizeof(RWS));
		getch();
	  }
	  else 
	  {cout<<"\n\t "<<RWS.GetEventName()<<"\t to be held today";}
	  remove("Collection.tea");
	  rename("tp.tea","Collection.tea");

	  ofile.close();

		}
		if(found!=1)
		cout<<"\n\t No Event Details for Today ......... ";
		}

	};

	/*
	Date SDR;
	SDR.WriteDatetoFile();
	SDR.CompareDateToDisplayRemainder();
	SDR.CompareDateToDisplayEvent();  */

