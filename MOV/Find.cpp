// Find.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "Find.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Find dialog


Find::Find(CWnd* pParent /*=NULL*/)
	: CDialog(Find::IDD, pParent)
{
	//{{AFX_DATA_INIT(Find)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Find::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Find)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Find, CDialog)
	//{{AFX_MSG_MAP(Find)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Find message handlers
