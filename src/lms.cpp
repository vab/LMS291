/* lms.cpp - Class to represent the laser management system
 * Author:    V. Alex Brennen (alexbrennen@hushmail.com)
 *            [ http://vab.mit.edu/ ]
 * Created:   2013.12.25
 *
 * This file is part of the LMS291 Interface Software.
 *
 * LMS291 is free software; it has been placed in the public
 * domain.  If you wish to retain the copyright to your
 * patch, do not submit it to me.
 */

#include "lms.h"

using namespace std;

// Constructor
lms::lms()
{
  
}


// Create the connection to the laser measurement system. Get the lms ready to
// read from by the main program.
bool lms::StartUp()
{
	bool rslt = false;

	// Verify Connection
	cout << "SICK LMS291 starting up...\n\n";

	// Init Hardware
	rslt = true;

	return(rslt);
}


// Read a measurement from the lms.
bool lms::Scan()
{
	bool rslt = false;


	return(rslt);
}


// Send a measurement request to the lms.
bool lms::ScanRequest()
{
	bool rslt = false;


	return(rslt);
}


// Read data from the lms.
bool lms::read()
{
	bool rslt = false;

	// Send a command over the COM to have the LMS take a measurement.

	return(rslt);
}

