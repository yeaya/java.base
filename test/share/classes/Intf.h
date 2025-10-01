#ifndef _Intf_h_
#define _Intf_h_
//$ interface Intf
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Intf : public ::java::lang::Object {
	$interface(Intf, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t i = 0;
};

#endif // _Intf_h_