// MOV.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MOV.h"
#include "MOVDlg.h"
#include"PASS.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMOVApp

BEGIN_MESSAGE_MAP(CMOVApp, CWinApp)
	//{{AFX_MSG_MAP(CMOVApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMOVApp construction

CMOVApp::CMOVApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMOVApp object

CMOVApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CMOVApp initialization

BOOL CMOVApp::InitInstance()
{
MessageBox(NULL,"��ӭʹ�ô˿��Բ����!ʹ������ʹ���ڼ�����κβ������ǸŲ�����","ǧ�����",MB_OK);
	int nCount=0;
	while(nCount<3)
	{
		PASS PassDlg;
		if(PassDlg.DoModal()==IDOK)
			if((strcmp(PassDlg.m_User,"admin")!=0)||(strcmp(PassDlg.m_Pass,"12345")!=0))
			{
				MessageBox(NULL,"��������ˣ����ɵ��!","������Ϣ",MB_OK|MB_ICONERROR);
				nCount++;
			}
			else{
				MessageBox(NULL,"����TM����!","����",MB_OK);
				break;}
			else{
			
				return FALSE;}}
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CMOVDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
