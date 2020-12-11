#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
		class ClassDetails{
				int   ClassStandard;
				char  ClassGrade;
				int   ClassStream;
				int   ClassStrength;
				char  ClassTeacher[100];
		public:
				void GetData(){
						cout<<"\n\t\t--------------Create Class--------------- ";
						cout<<"\n\t Enter the Class Standard (11/12)        :: ";
						cin>>ClassStandard;
						cout<<"\n\t Enter the Class Grade    (A,B,C)        :: ";
						cin>>ClassGrade;
						cout<<"\n\t Your Stream (Select from the following) :: ";
						cout<<"\n\t 1.Computer Mathematics  ";
						cout<<"\n\t 2.Biology Mathematics   ";
						cout<<"\n\t 3.Commerce Mathematics  ";
						cout<<"\n\t 4.Commerce IP           ";

						cin>>ClassStream;
						cout<<"\n\t Enter the Class Strenght                :: ";
						cin>>ClassStrength;
						cout<<"\n\t Enter the Class Teacher Name            :: ";
						gets(ClassTeacher);

					  }
				int GetStrength(){return ClassStrength;}
				int GetStream(){return ClassStream;}
				int GetStandard(){return ClassStandard;}};



				class SavingClassDetailsFile{
				 ClassDetails C1;
				 public:
				 void SaveFile(){
				 C1.GetData();
				 ofstream ClassFile("ClassDetails.tea",ios::binary|ios::out);
				 ClassFile.write((char*)&C1,sizeof(C1));
				 cout<<"\n\t Record Creation Successfull.........";
				 } };

