#include "Header.h"
//This is not for you now...  just for managing code..

int main()
{
	switchstatement();
	forloop();
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
	//
	//do while loop us jaga use hota ha.. jab hameen koy program at least 1 time chalana ho
	//agr condition false ho tab be... or while loop..  while loop me agr condition false
	//ho to 1 bar b ne chale ga..pta kesy chlta k abhi hmy ye loop use krna..  wohi to btaya..okk
	//thora or ho jaye to phir example program bnayeen gay to cleare ho jaye ga.
}

void forloop()
{
	//for loop
	//  for loop tab use kia jata ha jab hameen already maloom ho k kitne bar chale ga..
	//  for loop me 1 or b faida ha..  is me jo loop itterator hota ha... jase while loop me
	//  x use kia tha..  itterator se wo condition check krta ha.. false ya true..
	//  itterator?  loop k andar jo variable use krte hen.. condition me..  or usy increment ya
	//  decrement krte hen loop k andar...  jase abe do-while me  x variable tha...
	//  itterator ke smaj aye..g
	//
	//  for loop k bad () k andar itterator variable create kia jata ha.. us k bad condition
	//  and us k bad phir increment ya decrement...  sab kuch 1 sath he aa jata ha..
	//  bad me phir us ke body..
	//
	for (int x = 0; x < 10; x++)		//here... 1 bar chalne k bad wapis jab start pr ata ha to
		// us waqt last wale statement execute hote ha..  x++ wale...   x ko increment kre ga phir
		// condition check kre ga or phir loop ke body execute hoge agr true hua to.. false pr loop end.
	{//ye sara kam for loop krta..yes..or khud sy hi ye condition lganiii.. ham jo lagayeen gay   in this...  x < 10
		//uper wale line me dekho...  teeno statements is ke brackets me he hen..
		cout << x << endl;

		//x 1 ho gia or condition abi true ha.. as 1 < 10

		//now x will be 10   and  10 <10  is false..
	}
}   //loop se bahir aa gia...ye kesy hwa  condition flase ha... is liey  loop end ho gia..k x less than 10   yes..  x jab 10 ho gia to phir wo less than to ne raha..g 


void switchstatement()
{
	//switch statement...
	//Switch statement b   condition ko check krte ha.. and us k mutabiq operation perform krte
	//ha like if statement...  is me farq sirf itna ha k ye multiple choices se se agr koy 1
	//select krna ho to phir use hote ha.. condition is me 1 bar he test hote ha..
	//normaly is ko 1 value de jate ha.. jise compare krte ha or jiss case se match jo wo chalta
	//ha..
	//
	//switch start with switch keyword  along with a variable  or expression in ()
	//is ke body me case statement hote hen..     like    case 1:
	//case k bad value likhe jate ha.. switch is value se variable ko match krta ha or jis case
	//se match ho wo execute hota ha..   case  k bad colon ata ha    :
	//
	int x = 4;

	switch (x)
	{
	case 1:
		cout << "Case 1 executed." << endl;
		//is me jo b case match hota ha is se agay  sara code chalta ha...
		//lakin agr sirf 1 he case ko chlana ho to us k liey case block k end me break krna hoga
		//break program k us hissa ko stop kr k bahir aa jta ha...  and agay chalne lagta ha///
		break;
	case 2:
		cout << "Case 2 executed." << endl;
		break;
	case 3:
		cout << "Case 3 executed." << endl;
		break;
		//these brakes will stop after execution one case block...
		//isy hum apni marzi se lagayeen gay jahan zrorat ho..
	default:
		cout << "Default executed." << endl;
	}
	//default us waqt execute hoge jab ko b case match ne hota..
	//default likhna zrori ne hota...   isy chor b sakte hen agr zrorat ne..
	//is me x ke value ko compare kre ga case k sath or jo match hoge.. wahan se agay program chale
	//ga...
	//
	//switch ka faida ye ha k ye sirf 1 comparison krta ha.. ho matching value tak directely
	//ponch jata ha..  if else me shuru se end tak sab conditions check krta ha...
	//
	//eg:
	if (x == 1) cout << "x = 1" << endl;
	if (x == 2) cout << "x = 2" << endl;
	if (x == 3) cout << "x = 3" << endl;
	else cout << "x = " << x;

	//is me sare if chalte hen...  and this is over head for CPU... switch has better performance.
	//ok? kis mai sary iff chlty... if me he...   mutlab.. k   if me sare conditions check krta ha...
	//agr 10 if statements hon  or condition last wale ke true ho to us tak poonchtay poonchtay phale
	//sare 9 condition check krta ha...  lakin agr switch use kreen to sirf 1 bar he condition
	//check kre ga or directely jis case se match kr raha ha us per jump kr jaye ga...
	//agr 10 values ho or last wale true ho tab b sirf 1 compare me 10 number wale pr jump kr jaye ga..
	//har ak value ko check ne krta...
	//is se CPU ke power bachtee ha...  or program b fast chalta ha..
	//cleare hua???g sir ho gya cmplt   yes...achaa ye jo roz ap sara smjhaty ho ye kahan hai mjhy ni miltaa
	//.
}