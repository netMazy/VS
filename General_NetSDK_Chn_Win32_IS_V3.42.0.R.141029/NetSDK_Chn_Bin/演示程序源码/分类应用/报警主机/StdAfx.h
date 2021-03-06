// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__D30A0C81_2AD3_4EFC_8E13_A06D790FC362__INCLUDED_)
#define AFX_STDAFX_H__D30A0C81_2AD3_4EFC_8E13_A06D790FC362__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
#pragma warning(disable : 4786)
#include <string>
#include <list>
#include <vector>
#include <assert.h>
#include "Include/mdump.h"

#include "PlayApi.h"
#include "Include/dhnetsdk.h"
#include "Include/dhconfigsdk.h"

#pragma comment(lib, "Lib/dhnetsdk.lib")
#pragma comment(lib, "Lib/dhconfigsdk.lib")


#ifndef _countof
#define _countof(array) (sizeof(array)/sizeof(array[0]))
#endif

#endif // !defined(AFX_STDAFX_H__D30A0C81_2AD3_4EFC_8E13_A06D790FC362__INCLUDED_)
