#include  <fstream.h>

#include  <conio.h>
#include  <string.h>
#include <limits.h>
class Rank{
public:
void DisplayName(int ,int);
void InsertionSort(int[],int);
void RankListDisplay();
};

void Rank:: RankListDisplay()

{
clrscr();
MarkEntry M1;
int i=1;
int Total;
char Title[100];
int Array[100];
ifstream ifile("Mark.tea",ios::binary|ios::in);
cout<<"\n\tEnter the Test Title :: ";
gets(Title);
while(ifile){
	ifile.read((char*)&M1,sizeof(M1));
	 if(strcmpi(Title,M1.GetTestName())==0){
	 Array[i]=M1.GetTotal();
	 i++;
	 }
	 }
	 InsertionSort(Array,i+1);

	int n=0;
   for(int m=i;m>=1;m--){
	 Total=Array[m];
	 n=0;
	 DisplayName(Total,n);
	 }



	}

void Rank:: InsertionSort(int Array[],int Size){
int tmp,j;
Array[0]=INT_MIN;
for(int i=1;i<=Size;i++)
{tmp=Array[i];
j=i-1;
while(tmp<Array[j])
{Array[j+1]=Array[j];
j--;
}
Array[j+1]=tmp;
}}
void Rank:: DisplayName(int Total ,int Position){
MarkEntry MWE;
ifstream ifile("Mark.tea",ios::in|ios::binary);
while(ifile){
	   ifile.read((char*)&MWE,sizeof(MWE));
	   if(MWE.GetTotal()==Total) {
	   cout<<"\n\t  "<<"\t is Roll Number  "<<MWE.GetRollNumber()<<"\tWith total = "<<Total;
	   break;
	  }
	  }

}
