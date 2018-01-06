// PASS.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "PASS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// PASS dialog


PASS::PASS(CWnd* pParent /*=NULL*/)
	: CDialog(PASS::IDD, pParent)
{
	//{{AFX_DATA_INIT(PASS)
	m_User = _T("");
	m_Pass = _T("");
	//}}AFX_DATA_INIT
}


void PASS::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(PASS)
	DDX_Text(pDX, IDC_EDIT_USER, m_User);
	DDX_Text(pDX, IDC_EDIT_PASSWORD, m_Pass);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(PASS, CDialog)
	//{{AFX_MSG_MAP(PASS)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// PASS message handlers
