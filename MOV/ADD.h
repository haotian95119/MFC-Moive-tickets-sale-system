#if !defined(AFX_ADD_H__ECA24E0C_0333_4CD3_BD28_C610E0F0BAE1__INCLUDED_)
#define AFX_ADD_H__ECA24E0C_0333_4CD3_BD28_C610E0F0BAE1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ADD.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ADD dialog

class ADD : public CDialog
{
// Construction
public:
	ADD(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ADD)
	enum { IDD = IDD_DIALOG_ADD };
	CString	m_jg;
	CString	m_mc;
	CString	m_sj;
	CString	m_yp;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ADD)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ADD)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADD_H__ECA24E0C_0333_4CD3_BD28_C610E0F0BAE1__INCLUDED_)
