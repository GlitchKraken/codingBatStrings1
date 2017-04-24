#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cassert>

using namespace std;


string makeTags(string tag, string word);





int main()
{


	assert(makeTags("i", "Yay") == "<i>Yay</i>");
	assert(makeTags("i", "Hello") == "<i>Hello</i>");
	assert(makeTags("cite", "Yay") == "<cite>Yay</cite>");
	assert(makeTags("b", "Bold") == "<b>Bold</b>");
	assert(makeTags("I", "Italics") == "<I>Italics</I>");




	return 0;
}


string makeTags(string tag, string word)
{
	string result;

	result = ("<" + tag + ">" + word + "</" + tag + ">" );


	return result;
}