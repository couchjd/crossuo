/***********************************************************************************
**
** GUIDataBox.h
**
** ���������� ��� �������� �����-���� ������.
** ������������ ��� �������� ������������ ������, ��������: ���������� �����������, ������ ����� (�������), ������ ��������.
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef GUIDATABOX_H
#define GUIDATABOX_H
//----------------------------------------------------------------------------------
#include "GUIPolygonal.h"
//----------------------------------------------------------------------------------
class CGUIDataBox : public CGUIPolygonal
{
public:
	CGUIDataBox();
	virtual ~CGUIDataBox();

	virtual bool EntryPointerHere();

	virtual bool Select() { return true; }
};
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
