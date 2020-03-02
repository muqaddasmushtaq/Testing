#include "Header.h"
//This is not for you now...  just for managing code..

int main()
{
	dowhile();
	//Start with the loops.
	//Loop wahan use hote hen jab hum ksi same code ko bar bar chlana chate hon..
	//on some condition..
	//like  if  x <  100   print  x..
	//is tarha ke condition me...
	//first loop is while loop..
	//while loop us waqt tak chalta ha jab tak condition true rahte ha..
	//
	//it starts with   while   keyword..  then condition  in ()
	//and  body of the loop  in  {}
	int x = 0;
	while (x < 100)
	{
		cout << x << endl;
		x++;
		//remember here.. x ko har bar increase krna hoga.. ne to kabi b conditon
		//false ne hoge or progeamme chalta he rahe ga..
	}
	//smaj aye?   ye jo coding hm krty hain kesy pta chlta hai k yhan ye likhna jaisy
	//cout<<....   kuch basic yad krne pareen gay.. baqi  documentation se dekh kr..
	//ya jab ye course pura hoga to smaj aa jaye ge...  hum khud b bnate hen ase bhoot sare
	//cheezeen..
	//or iowo basic kahan sy yad kron
	//
	//yehi jo bta raha hon abe...   phale to if statement btaye..  ab ye while loop and next..
	//cin  and cout...while loop jb b lgayn gyy yhiii condition lgy gii..  no  jo b condition
	//zrorat ho ge wo lage ge..  jab program bhara hoga to ye b smaj aa jaye ge...okk
	//condition can be anything...
	while (x > 0)
	{
		cout << x << endl;
		x--;
		//ab ye x ko decrease krta rahe ga..  and condition is
		// while x  grater.. than   zero
		// phale loop me 100 tak gia tha..  ab reverse...
		// ok?ye sb kch c++ mai use hota..  Kia?while loop wgera  sab languages me.. likhne ka style ye C++ ka ha..  har language me
		// likha thor differentely jata ha... basic cheez same he ha...
		// abhiii hm cs201 kr rhy.... yes...  in examples ko dekh lena..
	}


	//next is do-while loop...kl kr lyn plzz    okay..kl 7 bjy theek hai
//cs201 mai c++ language hi hai...yes mt...lb cs201 krny sy c++ a jaye giii  yes.. java ha lakin about 6 ya 7 semester me..
//6thsemester mai java ho gii
	system("pause");
	//used to stop program 
}

void dowhile()
{
	//Do-While loop..
	// ye b while loop jesa he ha.. farq sirf itna ha while loop phale condition check
	// krta ha phir body execute hote ha us ke..  do-while loop me phale body execute hote ha
	// phir condition check hote ha..  ye 1 ya ziada dafa chalta ha..
	// do  keyword se start hota ha phir us ke body and end me condition..
	// is me condition k bad semicolon b lagta ha..
	//
	int x = 0;
	do
	{
		cout << x++ << endl;
		//ye x++ post increment ha..  ye phale x ko print kre ga phir usy increment kre ga..
		// ++x  pre increment x ko increase krne k bad print krta ha..increment mtlb.. value
		// increase krna..  1 add ho jaye ga is me..okk decrement me substract hota ha  x--  or --x  etc;
	} while (x < 10);

	//okay? bss debug kr diaa  debug to dikhane k liey kia   kase chalta ha..program ho gya finish
	//program to folder me create hota ha  .exe file..
}