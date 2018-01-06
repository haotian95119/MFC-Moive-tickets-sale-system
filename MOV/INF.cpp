// INF.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "INF.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// INF dialog


INF::INF(CWnd* pParent /*=NULL*/)
	: CDialog(INF::IDD, pParent)
{
	//{{AFX_DATA_INIT(INF)
	m_jg = _T("");
	m_mc = _T("");
	m_sj = _T("");
	m_yp = _T("");
	//}}AFX_DATA_INIT
}


void INF::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(INF)
	DDX_Text(pDX, IDC_EDIT_jg, m_jg);
	DDX_Text(pDX, IDC_EDIT_mc, m_mc);
	DDX_Text(pDX, IDC_EDIT_sj, m_sj);
	DDX_Text(pDX, IDC_EDIT_yp, m_yp);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(INF, CDialog)
	//{{AFX_MSG_MAP(INF)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// INF message handlers
