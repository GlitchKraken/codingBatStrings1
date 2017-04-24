/*
	Chad Fry & Jessy Loy | ITSE 2421   | Prof Welch
	April 24, 2017
	Extra Credit points!
	String Challenges

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
	assert(firstTwo("Hello") == "He");
	assert(firstTwo("abcdefg") == "ab");
	assert(firstTwo("ab") == "ab");
	assert(firstTwo("X") == "X");
	assert(firstTwo("") == "");

	return 0;
}


string makeTags(string tag, string word)
{
	string result;

	result = ("<" + tag + ">" + word + "</" + tag + ">" );


	return result;
}

string makeOutWord(string out, string word)
{
	string result;

	result = out.substr(0,2) + word + out.substr(2,2);

	return result;
}

string extraEnd(string str)
{
	string result;


	result = (str.substr( (str.length() - 2), (2) )  );
	result += (str.substr( (str.length() - 2), (2) )  );
	result += (str.substr( (str.length() - 2), (2) )  );

	return result;
}

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

}