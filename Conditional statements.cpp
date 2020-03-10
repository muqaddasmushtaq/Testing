// Conditional statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //conditional statement jab koy code spacific condition me chalana ho to use krte hen.
    //normaly program sequence me chalta ha.. phale 1 line phir 2 and then onward...
    //C++ me condition lagane k liey if keyword use hota ha..
    int x;
    //int datatype whole numbers store krta ha.decimal point wlae ne... is liey isy float kia.
    // float decimal point number save krta ha.. eg 1.5
    // int can only store 1 2 3 etc

    //ye wali condition jo if k sath lgayi hai kesy lgayi..khud sy jo dil kry  abe to kud se he bna raha hon.. example k liey...
    cin >> x;
    //yahan user jab value enter kre ga to wo x me store ho jaye ge..
    // phir wo value condition me use hoge or pta chale ga k result kia ha...kahan

    //cin and cout C++ k keywords hen..
    // cout data ko screen pr show krne k liey ha..
    // or cin user se data le kr variable me store krta ha..thik or ye >>
    // >> stream extraction operator ha...  stream k bare me agay parhen gay..
    // >> simply ye cin se data le kr variable me dalta ha... 
    // << or ye stream insertion operator ha..   ye program se data le kr cout ko deta ha..
    // phir cout usy display kr deta ha...okk ye sara dlt ni krna
    if (x % 2 != 0)

        //galti kr beetha...  answer check ne krna reminder check krna ha...  operators ka btata on sare abe.. wait..
        //x ko divide kro 2 pr agr answer 0 k equall na ho to condition ture hoge..  !=  this is not equal sign.thik
    {
        cout << "Even Number";  //is me jo "" k andar likha ha isy string khatey hen.
        // "" k andar jo b likhen gay wo screen pr wase he show ho jata ha...
    }
    //hum multiple conditions b check kr saktay hen...
    //us k liey else if use hota ha..
    else if (x % 2 == 0)  // == this is equal sign..  programming me equall k liey == hota ha.  single = assignment operator ha... ye kia hota hai..  values assign krne k liey.. jase x = 6   x me 6 store kr de ga..okk
    {  //phale condition false the.. ab ye dosre check kre ga..
        // or agr phale true ho jaye to phir agay check ne krta..
        cout << "Odd Number";
    }
    else
    {
        cout << " prime Number";
        //agr condition flase ho jaye to ye else wala code chale ga..
    }
    //is bar is k body ko skip kr gia because x  -8  tha...  okay?kahan hai -8
    //value phale se ne ha...  program chalte waqt enter krne hote ha..okk  us value pr denend krta ha..
    //it will get value from user.
    //if condition me check kr raha ha value ko.. or agr ye expression ( x > 0 ) ture hoge to
    //ye code chale ga..or ye condition ap ny khud lgayii hai..
    //yes condition hum khud he lagate hen jis ke zrorat ho program me..kaisy pta chlta hai k is ki zrorat hai abhi
    //wo program pr depend krta ha...  jase adult find krna ho to us me condition lagayen gay
    // age > 18     in above number grater than 0 is positive.. or yahi check kr rahe hen...okk
    // if condition check krta ha or agr ture ho jo us k andar wala code chalta ha ne to skip
    // ho jata ha..  if condition check krta hai.. yes..
    // agr hum ne koy dosra code chlana ho agr condition false ho to us k liey if k sath else 
    //  use hota ha..

}
//smaj aye multiple if statements ke?hannn ..konsi condition false hai positive no. walii
//  ye true false ka pta program chalte waqt us ke value se pta chalta ha... kabi true hoge kabi false...ye q
// yahi to programming ha..  agr phale he sab pta ho to phir softwares ka kia faida...hmm
// is me value programme chalte waqt enter krte hen... phir program us value se calculation krta ha
// phir true false ka pta chalta ha..
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
