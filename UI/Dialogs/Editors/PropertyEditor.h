#pragma once
namespace dialog::editor
{
	_Check_return_ HRESULT DisplayPropertyEditor(
		_In_ CWnd* pParentWnd,
		UINT uidTitle,
		UINT uidPrompt,
		bool bIsAB,
		_In_opt_ LPVOID lpAllocParent,
		_In_opt_ LPMAPIPROP lpMAPIProp,
		ULONG ulPropTag,
		bool bMVRow,
		_In_opt_ const _SPropValue* lpsPropValue,
		_Inout_opt_ LPSPropValue* lpNewValue);
} // namespace dialog::editor