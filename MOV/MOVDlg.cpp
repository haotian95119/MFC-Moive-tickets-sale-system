// MOVDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MOV.h"
#include "MOVDlg.h"
#include "ADD.h"
#include"INF.h"
#include"PASS.h"
#include"fstream.h"
#include"ABOUT.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMOVDlg dialog

CMOVDlg::CMOVDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMOVDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMOVDlg)
	m_jg = _T("");
	m_mc = _T("");
	m_sj = _T("");
	m_yp = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMOVDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMOVDlg)
	DDX_Control(pDX, IDC_LIST2, m_list);
	DDX_Text(pDX, IDC_EDIT_jg, m_jg);
	DDX_Text(pDX, IDC_EDIT_mc, m_mc);
	DDX_Text(pDX, IDC_EDIT_sj, m_sj);
	DDX_Text(pDX, IDC_EDIT_yp, m_yp);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMOVDlg, CDialog)
	//{{AFX_MSG_MAP(CMOVDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DEL, OnButtonDel)
	ON_BN_CLICKED(IDC_BUTTON_INF, OnButtonInf)
	ON_BN_CLICKED(IDC_BUTTON_SAVE, OnButtonSave)
	ON_BN_CLICKED(IDC_BUTTON_READ, OnButtonRead)
	ON_BN_CLICKED(IDC_BUTTON_EXIT, OnButtonExit)
	ON_BN_CLICKED(IDC_BUTTON_ABOUT, OnButtonAbout)
	ON_BN_CLICKED(IDC_BUTTON_S, OnButtonS)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMOVDlg message handlers

BOOL CMOVDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
m_list.SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT);
	m_list.InsertColumn(0,"电影名称",LVCFMT_LEFT,80,-1);
	m_list.InsertColumn(1,"上映时间",LVCFMT_LEFT,80,-1);
	m_list.InsertColumn(2,"剩余票量",LVCFMT_LEFT,90,-1);
	m_list.InsertColumn(3,"售票价格",LVCFMT_LEFT,80,-1);
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMOVDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMOVDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{	CRect rect;
		CPaintDC dc(this);
		GetClientRect(rect);
		dc.FillSolidRect(rect,RGB(255,165,0));
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMOVDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMOVDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	ADD c;
	if(IDOK==c.DoModal())
	{
		m_list.InsertItem(0,c.m_mc);
		m_list.SetItemText(0,1,c.m_sj);
		m_list.SetItemText(0,2,c.m_yp);
		m_list.SetItemText(0,3,c.m_jg);
	}
}

void CMOVDlg::OnButtonDel() 
{
	// TODO: Add your control notification handler code here
	int i;
	BOOL fok=FALSE;
	for(i=0;i<m_list.GetItemCount();i++)
	{
		if(m_list.GetItemState(i,LVIS_SELECTED)==LVIS_SELECTED)
		{
			m_list.DeleteItem(i);
			fok=TRUE;
		}
	}
	if(fok!=TRUE)
		MessageBox("请先选中需要删除的信息！");
	UpdateData(FALSE);
}

void CMOVDlg::OnButtonInf() 
{
	// TODO: Add your control notification handler code here
		INF a;
	if(IDOK==a.DoModal())
	{
	UpdateData();
	//int countNum=0;
	int index=0;
	index=m_list.GetSelectionMark();
	m_list.InsertItem(index,a.m_mc);
	m_list.SetItemText(index,1,a.m_sj);
	m_list.SetItemText(index,2,a.m_yp);
	m_list.SetItemText(index,3,a.m_jg);
	int idx=m_list.GetSelectionMark();
	m_list.DeleteItem(idx);
	a.m_mc="";
	a.m_sj="";
	a.m_yp="";
	a.m_jg="";
		
	}
}

void CMOVDlg::OnButtonSave() 
{
ofstream fp("电影信息.dat",ios::out);
	CString mc,sj,yp,jg;
	int i=0;
	for(i=0;m_list.GetItemText(i,0)!="";i++)
	{
		mc=m_list.GetItemText(i,0);
		sj=m_list.GetItemText(i,1);
	    yp=m_list.GetItemText(i,2);
		jg=m_list.GetItemText(i,3);
        fp<<mc<<" "<<sj<<" "<<yp<<" "<<jg<<endl;
	}
	MessageBox("成功保存！文件名：电影信息.dat");
	fp.close();	
}

void CMOVDlg::OnButtonRead() 
{
	UpdateData();
	char str[50];
	BOOL end=FALSE;
    char p[100];
	int h=0,l=0;
	fstream infile("电影信息.dat",ios::in);
	if(!infile)
	{
		MessageBox("错误，不能找到 电影信息.dat");
		return;
	}
	while(1)
	{
		m_list.InsertItem(h,0);
		for(l=0;l<4;l++)
		{
			if(!(infile>>p))
			{
				end=TRUE;
				break;
			}
			m_list.SetItemText(0,l,p);
		}
		if(end==TRUE)
		{
			break;
		}
	}
	infile.close();
	for(h=0;h<m_list.GetItemCount();h++)
	{
	    itoa(h+1,str,10);
		m_list.SetItemText(h,4,str);
		if(strlen(m_list.GetItemText(h,2))==0)
		{
			m_list.DeleteItem(h);
			break;
		}
	}
	UpdateData(FALSE);		
}

void CMOVDlg::OnButtonExit() 
{
	MessageBox("感谢您使用我们的系统！估计也没有下次了！谢谢！");
	EndDialog(0);	
}

void CMOVDlg::OnButtonAbout() 
{
	ABOUT b;
	b.DoModal();	
}

void CMOVDlg::OnButtonS() 
{
	int i;
	BOOL temp=FALSE;
	UpdateData(TRUE);
	for(i=0;i<m_list.GetItemCount();i++)
	{
		if(m_mc==m_list.GetItemText(i,0))
		{
			m_yp=m_list.GetItemText(i,2);
			m_sj=m_list.GetItemText(i,1);
			m_jg=m_list.GetItemText(i,3);
			UpdateData(FALSE);
			temp=TRUE;
			break;
		}
	}
	if(temp==FALSE)
	{
		MessageBox("No Record of this Moive！");
		m_mc=" ";
		m_sj=" ";
		m_yp=" ";
		m_jg=" ";
		UpdateData(FALSE);
	}	
}
