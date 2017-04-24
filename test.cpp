/*
	Chad Fry & Jessy Loy | ITSE 2421   | Prof Welch
	April 24, 2017
	Extra Credit points!
	String Challenges

	lessons learned:
	(1) how to use gitHub
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cassert>

using namespace std;


string makeTags(string tag, string word);
string makeOutWord(string out, string word);
string extraEnd(string str);
string firstTwo(string str);
string firstHalf(string str);
string withoutEnd(string str);
string comboString(string a, string b);



int main()
{


	//assert(makeTags("i", "Yay") == "<i>Yay</i>");
	//assert(makeTags("i", "Hello") == "<i>Hello</i>");
	//assert(makeTags("cite", "Yay") == "<cite>Yay</cite>");
	//assert(makeTags("b", "Bold") == "<b>Bold</b>");
	//assert(makeTags("I", "Italics") == "<I>Italics</I>");
	//assert(makeOutWord("<<>>", "Yay") == "<<Yay>>");
	//assert(makeOutWord("<<>>", "WooHoo") == "<<WooHoo>>");
	//assert(makeOutWord("[[]]", "word") == "[[word]]");
	//assert(makeOutWord("!!!!", "Wow") == "!!Wow!!");
	//assert(makeOutWord("????", "What") == "??What??");
	//assert(extraEnd("Hello") == "lololo");
	//assert(extraEnd("ab") == "ababab");
	//assert(extraEnd("Hi") == "HiHiHi");
	//assert(extraEnd("Java") == "vavava");
	//assert(extraEnd("Python") == "ononon");
	//assert(firstTwo("Hello") == "He");
	//assert(firstTwo("abcdefg") == "ab");
	//assert(firstTwo("ab") == "ab");
	//assert(firstTwo("X") == "X");
	//assert(firstTwo("") == "");
	//assert(firstHalf("WooHoo") == "Woo");
	//assert(firstHalf("HelloThere") == "Hello");
	//assert(firstHalf("abcdef") == "abc");
	//assert(firstHalf("JohnCena") == "John");
    //assert(firstHalf("Java") == "Ja");
    //assert(withoutEnd("Hello") == "ell");
    //assert(withoutEnd("java") == "av");
    //assert(withoutEnd("coding") == "odin");
    //assert(withoutEnd("Bye") == "y");
    //assert(withoutEnd("hi") == "");
    assert(comboString("Hello", "hi") == "hiHellohi");
    assert(comboString("hi", "Hello") == "hiHellohi");
    assert(comboString("aaa", "b") == "baaab");
    assert(comboString("Java", "Python") == "JavaPythonJava");
    assert(comboString("Short", "Long") == "LongShortLong");

	return 0;
}


string makeTags(string tag, string word)
{
	string result;

	result = ("<" + tag + ">" + word + "</" + tag + ">" );


	return result;
}//end makeTags(string tag, string word)

string makeOutWord(string out, string word)
{
	string result;

	result = out.substr(0,2) + word + out.substr(2,2);

	return result;
}//end makeOutWord(string out, string word)

string extraEnd(string str)
{
	string result;


	result = (str.substr( (str.length() - 2), (2) )  );
	result += (str.substr( (str.length() - 2), (2) )  );
	result += (str.substr( (str.length() - 2), (2) )  );

	return result;
}//end extraEnd(string str)

string firstTwo(string str)
{
	string result;

	if (str.length() < 2)
	{
		return str;
	}
	else
	{
		result = str.substr(0,2);
		return result;
	}

}//end firstTwo(string str)

string firstHalf(string str)
{
	string result;

	result = (str.substr(0, str.length()/2) );

	return result;
}//end firstHalf(string str)

string withoutEnd(string str)
{
	string result;

	result = str.substr(1,str.length()-2);

	return result;
}//end withoutEnd(string str)

string comboString(string a, string b)
{
	string result;
	string shortStr;
	string longStr;

	if( a.length() > b.length())
	{
		longStr = a;
		shortStr = b;
	}
	else
	{
		longStr = b;
		shortStr = a;
	}

	result = (shortStr + longStr + shortStr);


	return result;
}//end comboString