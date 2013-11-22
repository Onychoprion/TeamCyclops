/***************
 * testPrompt.cpp
 *
 * Description: For testing whether or not the Passpal correctly prompts the
 *              user for their two security questions
 *
 * Pre-cons:    The user has an account, etc. The prompting function has not
 *              yet produced a prompt.
 * Post-cons:	The prompting function has produced the correct prompt.
 *
 * Author:		Elliott Gladden
 * Date:		2013-11-22
 *
 * Notes:		A variation of this test can be used for both the password
 *				checker and the security question checker.
 ***************/

#include <stdio.h>
#include "stdafx.h"
#include <string>

using namespace std;

string promptUserForQuestions()		// Honestly, this is just a placeholder. We need to pass in the ACTUAL prompt function,
{
	return "This is a prompt! Yay!";// whenever it's actually written, that is.
}

int _tmain(int argc, _TCHAR* argv[])
{
	string s_properPrompt;	// Contains the proper prompt, against which we need to check the output of the function in question
	string s_producedPmpt;	// Contains the prompt outputted by the function in question.

	s_properPrompt = "";	// Initialize both strings
	s_producedPmpt = "";		//   to null. Just in case.

	/*****
	 * Here is where one should initialize s_properPrompt into whatever we want the prompt to be
	 *****/

	s_producedPmpt = promptUserForQuestions();	// I'm not sure what this function will actually be. To be updated later.
												//  I'm assuming it returns a string, which is the prompt itself.
												//  Concievably, it could also return that value through pass-by-reference.

	if (s_properPrompt.compare(s_producedPmpt) == 0){
		return 1;			// True
	} else {
		return 0;			// False
	}
}