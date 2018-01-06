#if !defined(AFX_ABOUT_H__B5D2D4A1_1B07_440F_AB85_D6CD00948668__INCLUDED_)
#define AFX_ABOUT_H__B5D2D4A1_1B07_440F_AB85_D6CD00948668__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ABOUT.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ABOUT dialog

class ABOUT : public CDialog
{
// Construction
public:
	ABOUT(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ABOUT)
	enum { IDD = IDD_ABOUTBOX1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ABOUT)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ABOUT)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUT_H__B5D2D4A1_1B07_440F_AB85_D6CD00948668__INCLUDED_)
