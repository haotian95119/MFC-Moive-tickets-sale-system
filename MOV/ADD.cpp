// ADD.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "ADD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ADD dialog


ADD::ADD(CWnd* pParent /*=NULL*/)
	: CDialog(ADD::IDD, pParent)
{
	//{{AFX_DATA_INIT(ADD)
	m_jg = _T("");
	m_mc = _T("");
	m_sj = _T("");
	m_yp = _T("");
	//}}AFX_DATA_INIT
}


void ADD::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ADD)
	DDX_Text(pDX, IDC_EDIT_jg, m_jg);
	DDX_Text(pDX, IDC_EDIT_mc, m_mc);
	DDX_Text(pDX, IDC_EDIT_sj, m_sj);
	DDX_Text(pDX, IDC_EDIT_yp, m_yp);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ADD, CDialog)
	//{{AFX_MSG_MAP(ADD)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ADD message handlers
