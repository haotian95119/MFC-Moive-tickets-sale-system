#if !defined(AFX_PASS_H__B4786C64_B876_406B_BC4C_912818EEE4BA__INCLUDED_)
#define AFX_PASS_H__B4786C64_B876_406B_BC4C_912818EEE4BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PASS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// PASS dialog

class PASS : public CDialog
{
// Construction
public:
	PASS(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(PASS)
	enum { IDD = IDD_DIALOG_DL };
	CString	m_User;
	CString	m_Pass;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(PASS)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(PASS)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PASS_H__B4786C64_B876_406B_BC4C_912818EEE4BA__INCLUDED_)
