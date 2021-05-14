#pragma once

#include "explorer1.h"
#include "WebPage.h"

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"

class JavaScriptAgent {
public:
	CExplorer1 browser;
	CWebPage web;

    JavaScriptAgent();
	void init();

	void callJSFunc(const CString& jsFuncName, CComVariant& varResult=CComVariant());
	void JavaScriptAgent::callJSFunc(const CString& jsFuncName, const CString& arg);
	void JavaScriptAgent::callJSFunc(const CString& jsFuncName, const CString& arg1, const CString& arg2);
	CExplorer1& getBrowser();

}; 
