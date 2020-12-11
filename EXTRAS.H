#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
class Extras{

		public:
		void DelayCreatorShort()
		{
		cout<<"\n\t\t\tLoading\t";
		for(long double j=0;j<20;j++){
		cout<<".";
		for(long double k=0;k<100000;k++);
		for(long double i=0;i<100000;i++);}}

		void DelayCreatorMedium()
		{
		cout<<"\n\t\t\tLoading\t";
		for(long double j=0;j<20;j++){
		cout<<".";
		for(long double k=0;k<400000;k++);
		for(long double i=0;i<800000;i++);
		for( i=0;i<80000;i++);}}

	void DelayCreatorLong()
		{
		cout<<"\n\t\t\tLoading\t";
		for(long double j=0;j<20;j++){
		cout<<".";
		for(long double k=0;k<9999900;k++);
		for(long double i=0;i<999990;i++);
		for( i=0;i<99999;i++);}
	       }
	};
