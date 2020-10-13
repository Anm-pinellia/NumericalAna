
// NumericalAnaView.cpp: CNumericalAnaView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "NumericalAna.h"
#endif

#include "NumericalAnaDoc.h"
#include "NumericalAnaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNumericalAnaView

IMPLEMENT_DYNCREATE(CNumericalAnaView, CView)

BEGIN_MESSAGE_MAP(CNumericalAnaView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CNumericalAnaView 构造/析构

CNumericalAnaView::CNumericalAnaView() noexcept
{
	// TODO: 在此处添加构造代码

}

CNumericalAnaView::~CNumericalAnaView()
{
}

BOOL CNumericalAnaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CNumericalAnaView 绘图

void CNumericalAnaView::OnDraw(CDC* /*pDC*/)
{
	CNumericalAnaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CNumericalAnaView 打印

BOOL CNumericalAnaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CNumericalAnaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CNumericalAnaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CNumericalAnaView 诊断

#ifdef _DEBUG
void CNumericalAnaView::AssertValid() const
{
	CView::AssertValid();
}

void CNumericalAnaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNumericalAnaDoc* CNumericalAnaView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNumericalAnaDoc)));
	return (CNumericalAnaDoc*)m_pDocument;
}
#endif //_DEBUG


// CNumericalAnaView 消息处理程序
