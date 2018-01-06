// ABOUT.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "ABOUT.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ABOUT dialog


ABOUT::ABOUT(CWnd* pParent /*=NULL*/)
	: CDialog(ABOUT::IDD, pParent)
{
	//{{AFX_DATA_INIT(ABOUT)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ABOUT::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ABOUT)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ABOUT, CDialog)
	//{{AFX_MSG_MAP(ABOUT)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ABOUT message handlers
