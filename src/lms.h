/* lms.h - Class to represent the laser management system
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

#include <vector>
#include <iostream>


class lms
{
	public:
		lms();
		bool StartUp();
		bool Scan();
		virtual ~lms() {};

	protected:
		bool ScanRequest();
		bool read();

	protected: // Configuration Variables
		int error_state;
};

