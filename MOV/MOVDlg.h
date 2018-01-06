// MOVDlg.h : header file
//

#if !defined(AFX_MOVDLG_H__FB4F9346_479F_49F6_AD2C_3D73BF033771__INCLUDED_)
#define AFX_MOVDLG_H__FB4F9346_479F_49F6_AD2C_3D73BF033771__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMOVDlg dialog

class CMOVDlg : public CDialog
{
// Construction
public:
	CMOVDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMOVDlg)
	enum { IDD = IDD_MOV_DIALOG };
	CListCtrl	m_list;
	CString	m_jg;
	CString	m_mc;
	CString	m_sj;
	CString	m_yp;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMOVDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMOVDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonDel();
	afx_msg void OnButtonInf();
	afx_msg void OnButtonSave();
	afx_msg void OnButtonRead();
	afx_msg void OnButtonExit();
	afx_msg void OnButtonAbout();
	afx_msg void OnButtonS();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOVDLG_H__FB4F9346_479F_49F6_AD2C_3D73BF033771__INCLUDED_)
