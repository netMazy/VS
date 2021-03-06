#if !defined(AFX_DHOCXSYSTEMSET_H__91C34382_1764_473B_A50E_30FCF7AC0691__INCLUDED_)
#define AFX_DHOCXSYSTEMSET_H__91C34382_1764_473B_A50E_30FCF7AC0691__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;

/////////////////////////////////////////////////////////////////////////////
// CDHOCXSYSTEMSET wrapper class

class CDHOCXSYSTEMSET : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDHOCXSYSTEMSET)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x55a0fd0c, 0xe3f1, 0x4647, { 0x8f, 0x67, 0x5a, 0xc8, 0xb8, 0xeb, 0xb, 0xf8 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	BOOL GetAutoScroll();
	void SetAutoScroll(BOOL bNewValue);
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	long GetAxBorderStyle();
	void SetAxBorderStyle(long nNewValue);
	long GetBorderWidth();
	void SetBorderWidth(long nNewValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	COleFont GetFont();
	void SetFont(LPDISPATCH newValue);
	void SetRefFont(LPDISPATCH* newValue);
	BOOL GetKeyPreview();
	void SetKeyPreview(BOOL bNewValue);
	long GetPixelsPerInch();
	void SetPixelsPerInch(long nNewValue);
	long GetPrintScale();
	void SetPrintScale(long nNewValue);
	BOOL GetScaled();
	void SetScaled(BOOL bNewValue);
	void SetDeviceShowType(long* lpDeviceInfo);
	void SetDetectWinRGB(unsigned long unRed, unsigned long unGreen, unsigned long unBlue, unsigned long unType);
	void SendDeviceInfoData(long DeviceID, long lConfigType, long* lpReData, unsigned long ReDataLength);
	void CreateDeviceFram(unsigned long unLagType);
	void SetDetectAreaHandle(long DetectParentHandle, unsigned long unDetectType);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DHOCXSYSTEMSET_H__91C34382_1764_473B_A50E_30FCF7AC0691__INCLUDED_)
