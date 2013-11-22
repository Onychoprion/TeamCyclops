/***************
 * testEncryption.cpp
 *
 * Description: For testing whether the master password is encrypted properly
 *
 * Pre-cons:    The user has an account, etc. The user has provided a master
 *				password that has yet to be encrypted
 * Post-cons:	The user's master-password is encrypted properly
 *
 * Author:		Elliott Gladden
 * Date:		2013-11-22
 *
 * Notes:		
 ***************/

#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

string encrypt(string password)	// Obivously a placeholder for the real encryption function
{
	return "DEADBEEF";
}

int _tmain(int argc, _TCHAR* argv[])
{
	string s_target;	// The target, end result after encryption
	string s_password;	// The password (duh!)
	string s_returned;	// The value returned from the encryption fucntion

	// Initialize all to null
	s_target = "";
	s_password = "";
	s_returned = "";

	// Initialize s_target to whatever we need it to be (can be a function)

	// Test encryption
	s_returned = encrypt(s_password);
	if (s_target.compare(s_returned)){
		return 1;	// True
	} else {
		return 0;	// False
	}
	return 0;
}

