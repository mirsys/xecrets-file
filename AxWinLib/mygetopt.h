#ifndef	_GETOPT
#define	_GETOPT
/*
    @(#) $Id$

	Ax Crypt - Compressing and Encrypting Wrapper and Application Launcher for Secure Local,
	Server or Web Storage of Document Files.

	Copyright (C) 2001 Svante Seleborg/Axon Data, All rights reserved.

	This program is free software; you can redistribute it and/or modify it under the terms
	of the GNU General Public License as published by the Free Software Foundation;
	either version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
	See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along with this program;
	if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
	Boston, MA 02111-1307 USA

	The author may be reached at mailto:software@axantum.com and http://www.axantum.com
----
	GetOption.h						Parse the command line, standard stuff.

	E-mail							YYYY-MM-DD				Reason
	software@axantum.com 			2001					Initial
                                    2003-05-26              Switch to Hans Dietrich XGetopt. Thanks!

*/
// XGetopt.h  Version 1.2
//
// Author:  Hans Dietrich
//          hdietrich2@hotmail.com
//
// This software is released into the public domain.
// You are free to use it in any way you like.
//
// This software is provided "as is" with no expressed
// or implied warranty.  I accept no liability for any
// damage or loss of business that this software may cause.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef _MSC_VER

#ifndef TCHAR
#define TCHAR char
#endif
#ifndef _TCHAR
#define _TCHAR char
#endif
#ifndef _T
#define _T(x) x
#endif
#ifndef NULL
#define NULL (0)
#endif
#ifndef _tcscmp
#define _tcscmp strcmp
#endif
#ifndef _tcschr
#define _tcschr strchr
#endif

#else
#include <tchar.h>
#endif

#include <string.h>

extern int optind, opterr;
extern TCHAR *optarg;

int mygetopt(int argc, TCHAR *argv[], TCHAR *optstring);

#endif