#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void emoji()
{
			system("color 12");
			system("cls");
			cout << endl ;
			cout << endl ;
			cout << endl ;
			cout << "                                                \11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                               \11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                              \11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                             \11\11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                            \11\11\11\1   \11\11\11     1\11\11\11\11\1" << endl;
    		cout << "                                           \11\11\11\1     \11\11       1\11\11\11\11\1" << endl;
    		cout << "                                          \11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                         \11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                          \11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                           \11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    		cout << "                                            \11\11\11\1          1\11\11\11\11\11\11\1" << endl;
    		cout << "                                             \11\11\1  1\11\11\11\1  1\11\11\11\11\11\1" << endl;
    		cout << "                                              \11\1 \11\11\11\11\11\11 1\11\11\11\11\1" << endl;
    		cout << "                                               \1 \11\11\11\11\11\11\11 1\11\11\11\1" << endl;
    		cout << "                                                \11\11\11\11\11\11\11\11\11\11\11\1" << endl;
    
    		cout << endl << "                                                  By Cloaki team \1" << endl << "                                                 Hope you like it :)" << endl ;
			for(int i=3;i>=0;i--)
			{
				Sleep(1000);
				cout << endl ;
				cout << endl ;
				cout<<"                                                         "<< i <<endl;
			}
	
}
string mors(char p)
{
	string A = ".-";
    string B = "-...";
    string C = "-.-.";
    string D = "-..";
    string E = ".";
    string F = "..-.";
    string G = "--.";
    string H = "....";
    string I = "..";
    string J = ".---";
    string K = "-.-";
    string L = ".-..";
    string M = "--";
    string N = "-.";
    string O = "---";
    string P = ".--.";
    string Q = "--.-";
    string R = ".-.";
    string S = "...";
    string T = "-";
    string U = "..-";
    string V = "...-";
    string W = ".--";
    string X = "-..-";
    string Y = "-.--";
    string Z = "--..";
    string D1 = ".----";
    string D2 = "..---";
    string D3 = "...--";
    string D4 = "....-";
    string D5 = ".....";
    string D6 = "-....";
    string D7 = "--...";
    string D8 = "---..";
    string D9 = "----.";
    string D10 = "-----";
	
        if ((p == 'A') || (p == 'a'))
        return  A ;
        else if ((p == 'B') || (p == 'b'))
        return  B ;
        else if ((p == 'C') || ( p == 'c'))
        return  C ;
        else if (p == 'D' || p=='d')
        return  D ;
        else if (p == 'E' || p=='e')
        return  E ;
        else if (p == 'F' || p=='f')
        return  F ;
        else if (p == 'G' || p=='g')
        return  G ;
        else if (p == 'H' || p=='h')
        return  H ;
        else if (p == 'I' || p=='i')
        return  I ;
        else if (p == 'J' || p=='j' )
        return  J ;
        else if (p == 'K' || p=='k')
        return  K ;
        else if (p == 'L' || p=='l')
        return  L ;
        else if (p == 'M' || p=='m')
        return  M ;
        else if (p == 'N' || p=='n')
        return  N ;
        else if (p == 'O' || p=='o')
        return  O ;
        else if (p == 'P' || p=='p')
        return  P ;
        else if (p == 'Q' || p=='q')
        return  Q ;
        else if (p == 'R'|| p=='r')
        return  R ;
        else if (p == 'S' || p=='s')
        return  S ;
        else if (p == 'T'|| p=='t')
        return  T ;
        else if (p == 'U' || p=='u')
        return  U ;
        else if (p == 'V' || p=='v')
        return  V ;
        else if (p == 'W' || p=='w')
        return  W ;
        else if (p == 'X' || p=='x')
        return  X ;
        else if (p == 'Y' || p=='y')
        return  Y ;
        else if (p == 'Z' || p=='z')
        return  Z ;
        else if (p == '1')
        return  D1 ;
        else if (p == '2')
        return  D2 ;
        else if (p == '3')
        return  D3 ;
        else if (p == '4')
        return  D4 ;
        else if (p == '5')
        return  D5 ;
        else if (p == '6')
        return  D6 ;
        else if (p == '7')
        return  D7 ;
        else if (p == '8')
        return  D8 ;
        else if (p == '9')
        return  D9 ;
        else if (p == '0')
        return  D10 ;
        else
        	return "";
}
void color()
{
		int w;
		srand(time(0));
		w=rand()%6+1;
		if(w==1)
		{
			system("color 60");
		}	
		else if(w==2)
		{
			system("color 74");
		}
		else if(w==3)
		{
			system("color b5");
		}
		else if(w==4)
		{
			system("color 37");
		}
		else if(w==5)
		{
			system("color c7");
		}
		else if(w==6)
		{
			system("color e2");
		}
}
void dash() 
{
	Beep(500,600);
	
	cout<<"-";
}

void dit() 
{
	Beep(900,200);
	
	cout<<".";	
}



void pakhsh_kalame(string s)
{
	int tedad_horoof=s.size();
	for(int i = 0 ; i<tedad_horoof ; i++)
	{
		if(s[i]=='-')
			dash();
		else if(s[i]=='.')
			dit();
		else
			cout<<"bug\nbug\nbug\nbug\nbug\nbug\nbug\n";
		color();
		if (i!=tedad_horoof-1)
			Sleep(0);
	}
	cout<<" ";
	
}

void ersal(string s)
{
	int tedad_horoof=s.size();
	string harf;
	for(int i = 0 ; i<tedad_horoof ; i++)
	{
		
		harf =  mors(s[i]);
		pakhsh_kalame(harf);
		if (i!=tedad_horoof-1)
			Sleep(200);
	}
	cout<<endl;
	
}

void translate()
{
	int a;
	cout<<"tedad kalamat jomle tan chand ta hast? : ";
	cin>>a;
	string kalame;
	for (int i=0 ; i<a ; i++)
	{
		cin>>kalame;
		ersal(kalame);
		Sleep(600);
	}
}


int main()
{
	color();
	cout<<"salam khosh amadid :) \ndar in barname ma jomalat shoma ra be code morse tabdil mikonim\nva sedaye an ra pakhsh mi konim."<<endl;
	string voroodi="n";
	
	
	while(voroodi=="n"||voroodi=="N")
	{
		translate();
		cout<<"Aya mikhahid az barname kharej shavid?"<<endl<<"n/y"<<endl;
		cin>>voroodi;
		while(voroodi!="n"&&voroodi!="y"&&voroodi!="N"&&voroodi!="Y")
		{
			cout<<"voroodi shoma \""<<voroodi<<"\" bood. lotfan dobare n/y ra vared kon :) "<<endl;
			cin>>voroodi;
		}
	}
	
	emoji();
	
	
}

