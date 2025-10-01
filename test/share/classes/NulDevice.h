#ifndef _NulDevice_h_
#define _NulDevice_h_
//$ class NulDevice
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NulDevice : public ::java::lang::Object {
	$class(NulDevice, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NulDevice();
	void init$();
	static void main($StringArray* args);
};

#endif // _NulDevice_h_