/*********************************************************
*
*  Multi Theft Auto: San Andreas - Deathmatch
*
*  ml_base, External lua add-on module
*
*  Copyright � 2003-2008 MTA.  All Rights Reserved.
*
*  Grand Theft Auto is � 2002-2003 Rockstar North
*
*  THE FOLLOWING SOURCES ARE PART OF THE MULTI THEFT
*  AUTO SOFTWARE DEVELOPMENT KIT AND ARE RELEASED AS
*  OPEN SOURCE FILES. THESE FILES MAY BE USED AS LONG
*  AS THE DEVELOPER AGREES TO THE LICENSE THAT IS
*  PROVIDED WITH THIS PACKAGE.
*
*********************************************************/

#ifndef _MLSOCK_H
#define _MLSOCK_H

// Disable Visual Studio warnings
#ifdef WIN32
    #pragma warning (disable : 4267) // DISABLE: conversion from 'size_t' to 'int', possible loss of data
    #pragma warning (disable : 4996) // DISABLE: 'strcpy': This function or variable may be unsafe.
    #pragma warning (disable : 4244) // DISABLE: conversion from 'SOCKET' to 'int', possible loss of data
#endif

/** MODULE SPECIFIC INFORMATION **/
#define MODULE_NAME			"Postgres SQL module"
#define	MODULE_AUTHOR		"Disi"
#define MODULE_VERSION		0.5f

// Include default MTA module SDK includes
#include "Common.h"
#include "CFunctions.h"
#include "include/ILuaModuleManager.h"
#include "include/CLuaArguments.h"

// Set the using namespace to std, so we don't need the annoying std:: anymore
using namespace std;

// Function for making sure a pointer has a value before deleting it; possibly prevents crashes
#define SAFE_DELETE(p) { if (p) { delete (p); (p) = NULL; } }

// List item removal
template < class TL, class T >
void ListRemove ( TL& itemList, const T& item )
{
    typename TL ::iterator it = itemList.begin ();
    for ( ; it != itemList.end () ; ++it )
        if ( item == *it )
        {
            itemList.erase ( it );
            break;
        }
}

#endif
