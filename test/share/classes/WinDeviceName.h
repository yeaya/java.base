#ifndef _WinDeviceName_h_
#define _WinDeviceName_h_
//$ class WinDeviceName
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WinDeviceName : public ::java::lang::Object {
	$class(WinDeviceName, 0, ::java::lang::Object)
public:
	WinDeviceName();
	void init$();
	static void main($StringArray* args);
	static $StringArray* devnames;
};

#endif // _WinDeviceName_h_