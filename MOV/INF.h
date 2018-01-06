#if !defined(AFX_INF_H__189EEF5F_0270_4DF4_A2B4_C4AAA023E29B__INCLUDED_)
#define AFX_INF_H__189EEF5F_0270_4DF4_A2B4_C4AAA023E29B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// INF.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// INF dialog

class INF : public CDialog
{
// Construction
public:
	INF(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(INF)
	enum { IDD = IDD_DIALOG_INF };
	CString	m_jg;
	CString	m_mc;
	CString	m_sj;
	CString	m_yp;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(INF)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(INF)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INF_H__189EEF5F_0270_4DF4_A2B4_C4AAA023E29B__INCLUDED_)
