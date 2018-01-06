#if !defined(AFX_FIND_H__6F1F3A3E_DD7E_4FC8_A9E4_E14C67FA6CF4__INCLUDED_)
#define AFX_FIND_H__6F1F3A3E_DD7E_4FC8_A9E4_E14C67FA6CF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Find.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Find dialog

class Find : public CDialog
{
// Construction
public:
	Find(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Find)
	enum { IDD = IDD_DIALOG_SEARCH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Find)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Find)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIND_H__6F1F3A3E_DD7E_4FC8_A9E4_E14C67FA6CF4__INCLUDED_)
