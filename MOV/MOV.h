// MOV.h : main header file for the MOV application
//

#if !defined(AFX_MOV_H__00691E8B_42E9_4CB9_A6EB_09A597F8ABE7__INCLUDED_)
#define AFX_MOV_H__00691E8B_42E9_4CB9_A6EB_09A597F8ABE7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMOVApp:
// See MOV.cpp for the implementation of this class
//

class CMOVApp : public CWinApp
{
public:
	CMOVApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMOVApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMOVApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOV_H__00691E8B_42E9_4CB9_A6EB_09A597F8ABE7__INCLUDED_)
