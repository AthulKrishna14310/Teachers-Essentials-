#include "CreateClass.h"
#include "StudentRegister.h"
 class MarkEntry{
 int Total;
 float Percent;
 char  TestName[50];
 float MathematicsMark;
 float EnglishMark;
 float PhysicsMark;
 float ChemistryMark;
 float ComputerMark;
 float BiologyMark;
 float AccountancyMark;
 float BuisnessStudiesMark;
 float EconomicsMark;
 float IPMark;
 int RollNumber;
 int len;
 Register Stud;
  public:

////////////////////////////////////////////////////////////////////////////////
 void GetLen()
	{
	ClassDetails L1;
	ifstream ifile("ClassDetails.tea",ios::in|ios::binary);
	ifile.read((char*)&L1,sizeof(L1));

	len=L1.GetStrength();
}
int GetPercent(){
	return Percent;
	}
////////////////////////////////////////////////////////////////////////////////
int GetStream(){
ClassDetails C1;
ifstream ifile("ClassDetails.tea",ios::in|ios::binary);
ifile.read((char*)&C1,sizeof(C1));
return C1.GetStream();
}
////////////////////////////////////////////////////////////////////////////////

void ReadMarkComputerScience(int RollNumber){
	cout<<"\n Physics Mark           ::Student  Roll"<<RollNumber<<"=";
	cin>>PhysicsMark;
	cout<<"\n Chemistry Mark         :: Student Roll"<<RollNumber<<"=";
	cin>>ChemistryMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cin>>MathematicsMark;
	cout<<"\n Computer Science Mark  :: Student Roll"<<RollNumber<<"=";
	cin>>ComputerMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cin>>EnglishMark;
	Total=PhysicsMark+ChemistryMark+MathematicsMark+ComputerMark+EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	Percent=Total/5;
	cout<<"\t\t\tPercent ::"<<Percent;

}
////////////////////////////////////////////////////////////////////////////////
void ReadMarkBiologyScience(int RollNumber){
	cout<<"\n Physics Mark           ::Student  Roll"<<RollNumber<<"=";
	cin>>PhysicsMark;
	cout<<"\n Chemistry Mark         :: Student Roll"<<RollNumber<<"=";
	cin>>ChemistryMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cin>>MathematicsMark;
	cout<<"\n Biology Science Mark   :: Student Roll"<<RollNumber<<"=";
	cin>>BiologyMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cin>>EnglishMark;
	Total=PhysicsMark+ChemistryMark+MathematicsMark+BiologyMark+EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	Percent=Total/5;
	cout<<"\t\t\tPercent ::"<<Percent;

}
////////////////////////////////////////////////////////////////////////////////
void ReadMarkCommerceMaths(int RollNumber){
	cout<<"\n Accountancy Mark       ::Student  Roll"<<RollNumber<<"=";
	cin>>AccountancyMark;
	cout<<"\n Economics   Mark       :: Student Roll"<<RollNumber<<"=";
	cin>>EconomicsMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cin>>MathematicsMark;
	cout<<"\n Buisness Studies Mark  :: Student Roll"<<RollNumber<<"=";
	cin>>BuisnessStudiesMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cin>>EnglishMark;
	Total=AccountancyMark+EconomicsMark+MathematicsMark+BuisnessStudiesMark+EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	Percent=Total/5;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
void ReadMarkCommerceIP(int RollNumber){

	cout<<"\n Accountancy Mark       ::Student  Roll"<<RollNumber<<"=";
	cin>>AccountancyMark;
	cout<<"\n Economics   Mark       :: Student Roll"<<RollNumber<<"=";
	cin>>EconomicsMark;
	cout<<"\n IP Mark                :: Student Roll"<<RollNumber<<"=";
	cin>>IPMark;
	cout<<"\n Buisness Studies Mark  :: Student Roll"<<RollNumber<<"=";
	cin>>BuisnessStudiesMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cin>>EnglishMark;
	Total=AccountancyMark+EconomicsMark+IPMark+BuisnessStudiesMark+EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	Percent=Total/5;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
 char* GetTestName()              {return TestName;};
 int   GetRollNumber()            {return RollNumber;}
 float GetMathematicsMark()       {return MathematicsMark;};
 float GetEnglishMark()           {return EnglishMark;};
 float GetPhysicsMark()           {return PhysicsMark;};
 float GetChemistryMark()         {return ChemistryMark;};
 float GetComputerMark()          {return ComputerMark;};
 float GetBiologyMark()           {return BiologyMark;};
 float GetAccountancyMark()       {return AccountancyMark;};
 float GetBuisnessStudiesMark()   {return BuisnessStudiesMark;};
 float GetEconomicsMark()         {return EconomicsMark;};
 float GetIPMark()                {return IPMark;};
 int GetTotal()                   {return Total;};
///////////////////////////////////////////////////////////////////////////////

void DisplayMarkComputerScience(int RollNumber){
	cout<<"\n Physics Mark           ::Student  Roll"<<RollNumber<<"=";
	cout<<PhysicsMark;
	cout<<"\n Chemistry Mark         :: Student Roll"<<RollNumber<<"=";
	cout<<ChemistryMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cout<<MathematicsMark;
	cout<<"\n Computer Science Mark  :: Student Roll"<<RollNumber<<"=";
	cout<<ComputerMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cout<<EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
void DisplayMarkBiologyScience(int RollNumber){
	cout<<"\n Physics Mark           ::Student  Roll"<<RollNumber<<"=";
	cout<<PhysicsMark;
	cout<<"\n Chemistry Mark         :: Student Roll"<<RollNumber<<"=";
	cout<<ChemistryMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cout<<MathematicsMark;
	cout<<"\n Biology Science Mark   :: Student Roll"<<RollNumber<<"=";
	cout<<BiologyMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cout<<EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
void DisplayMarkCommerceMaths(int RollNumber){
	cout<<"\n Accountancy Mark       ::Student  Roll"<<RollNumber<<"=";
	cout<<AccountancyMark;
	cout<<"\n Economics   Mark       :: Student Roll"<<RollNumber<<"=";
	cout<<EconomicsMark;
	cout<<"\n Mathematics Mark       :: Student Roll"<<RollNumber<<"=";
	cout<<MathematicsMark;
	cout<<"\n Buisness Studies Mark  :: Student Roll"<<RollNumber<<"=";
	cout<<BuisnessStudiesMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cout<<EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
void DisplayMarkCommerceIP(int RollNumber){

	cout<<"\n Accountancy Mark       ::Student  Roll"<<RollNumber<<"=";
	cout<<AccountancyMark;
	cout<<"\n Economics   Mark       :: Student Roll"<<RollNumber<<"=";
	cout<<EconomicsMark;
	cout<<"\n IP Mark                :: Student Roll"<<RollNumber<<"=";
	cout<<IPMark;
	cout<<"\n Buisness Studies Mark  :: Student Roll"<<RollNumber<<"=";
	cout<<BuisnessStudiesMark;
	cout<<"\n English  Mark          :: Student Roll"<<RollNumber<<"=";
	cout<<EnglishMark;
	cout<<"\t\t\nTotal   ::"<<Total;
	cout<<"\t\t\tPercent ::"<<Percent;
}
////////////////////////////////////////////////////////////////////////////////
void MarkiEntry(){
 cout<<"\n\t Mark Entry Page allows you to record the mark of student\n whom you have registered  ... ";
 cout<<"\n\tEnter the RollNumber ::";
 cin>>RollNumber;
 ifstream ifile("Student.tea",ios::in|ios::binary);
 while(ifile){
 ifile.read((char*)&Stud,sizeof(Stud));
 if(Stud.GetRollNumber()==RollNumber){
 cout<<"\n\tEnter the Test Title :: ";
 gets(TestName);
 int Stream=GetStream();
 if(Stream==1){
 ReadMarkComputerScience(RollNumber);
 break;
 }
 else if(Stream==2){
 ReadMarkBiologyScience(RollNumber);
 break;
 }
 else if(Stream==3){
 ReadMarkCommerceMaths(RollNumber);
 break;
 }
 else if(Stream==4){
 ReadMarkCommerceIP(RollNumber);
 break;
 }
}

 }
 }
};
class SaveMark{
public:
void SavingMark(){
clrscr();
MarkEntry M1;
M1.MarkiEntry();
ofstream ofile("Mark.tea",ios::app|ios::binary);
if(!ofile)
cout<<"\n\t Error openning file.......";
ofile.write((char*)&M1,sizeof(M1));
ofile.close();

getch();
}
};
