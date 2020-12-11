
#include "Screen.h";
#include "Entermark.h"
#include "Extras.h"
#include "DisplayStudent.h"
#include "UpdateMark.h"
#include "Delete.h"
#include "RankList.h"



void main()
{
textcolor(WHITE);
textbackground(BLUE);

Extras E1;
Screen Sw;
Sw.WelcomeScreen();
getch();
Abc:
E1.DelayCreatorShort();
clrscr();
Sw.StartPage();
cout<<"\n\t\tEnter Serial Number of Your Choice     :::  ";
int ch;
cin>>ch;
switch(ch){
	case 1:{
	clrscr();
	Sw.CreatePage();
	cout<<"\n\t\tEnter Serial Number of Your Choice     :::  ";
	cin>>ch;
	switch(ch)
	{
////////////////////////////////////////////////////////////////////////////////
	case 1:
	clrscr();
	SaveMark SM;
	SM.SavingMark();
	break;
////////////////////////////////////////////////////////////////////////////////
       case  2:
       clrscr();
       UpdateAttendance AER;
       AER.Update();
       break;

////////////////////////////////////////////////////////////////////////////////
	case 3:
	clrscr();
	SavingClassDetailsFile D1;
	D1.SaveFile();
	break;

////////////////////////////////////////////////////////////////////////////////
	case 4:
	clrscr();
	Save S1;
	S1.SaveRegister();
	break;

////////////////////////////////////////////////////////////////////////////////
	case 5:
	clrscr();
	SaveRemainder SR;
	SR.Save();
	break;
////////////////////////////////////////////////////////////////////////////////
	case 6:
	clrscr();
	SaveCollection SWX;
	SWX.SaveCol();
	break;
	}
////////////////////////////////////////////////////////////////////////////////
	clrscr();
	goto Abc;
////////////////////////////////////////////////////////////////////////////////
	case 3:
	clrscr();
	Sw.DisplayPage();
	cout<<"\n\t Enter the Seriel Number of your Choice  :: ";
	cin>>ch;
	switch(ch){
		case 1:
			 clrscr();
			 DisplayStudentDetails D1;
			 D1.WriteStudentDetails();
			 getch();
			 break;
////////////////////////////////////////////////////////////////////////////////
	  case 2:
	  clrscr();
	  DisplayEventDetails DWX;
	  DWX.DisplayEvent();
	  getch();
	  break;
////////////////////////////////////////////////////////////////////////////////
	  case 3:
	  clrscr();
	  DisplayRemainder R1;
	  R1.DispRemainder();
	  getch();
	  break;
////////////////////////////////////////////////////////////////////////////////
	 case 4:
	  clrscr();
	  DisplayAttendance DWwX;
	  DWwX.Display();

	break;
////////////////////////////////////////////////////////////////////////////////
	 case 5:
	 clrscr();
	 D1.WriteMarks();
	 getch();
	 break;
//////////////////////////////////////////////////////////////////////////////
	 case 6:
	 clrscr();
	 Rank RW;
	 RW.RankListDisplay();
	getch();
	 break;

}
clrscr();
goto Abc;
////////////////////////////////////////////////////////////////////////////////
		case 2:
		clrscr();
		Sw.UpdatePage();
		int Cch;
		cout<<"\n\tEnter Your Choice                   :: ";
		cin>>Cch;
		switch(Cch)
		{
			case 1:
			clrscr();
			UpdateRegister UVX;
			UVX.Update();
			break;
////////////////////////////////////////////////////////////////////////////////
			case 2:
			clrscr();
			UpdateCollection ZXW;
			ZXW.UCollection();
////////////////////////////////////////////////////////////////////////////////
			case 3:
			clrscr();
			UpdateRemainder RWX;
			RWX.Update();
////////////////////////////////////////////////////////////////////////////////
			case 4:
			clrscr();
			UpdateMark WER;
			WER.UMark();
			break;
		 }
		getch();
		clrscr();
		goto Abc;


}//case
		case 4: {
		clrscr();
		Delete DWE;
		int CDW;
		Sw.DeletePage();
		cout<<"\n\t Enter Your Choice :::: ";
		cin>>CDW;
		switch(CDW){
		case 1:
		clrscr();
		DWE.DeleteStudent();
		break;
		case 2:
		clrscr();
		DWE.DeleteCollection();
		break;
		case 3:
		clrscr();
		DWE.DeleteRemainder();
		break;
		case 4:
		clrscr();
		DWE.DeleteMark();
		break;
	       }
	      goto Abc;
	      }

   case 5:
   exit (0);
} //Switch 1
} //void main

