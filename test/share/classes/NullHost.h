#ifndef _NullHost_h_
#define _NullHost_h_
//$ class NullHost
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullHost : public ::java::lang::Object {
	$class(NullHost, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullHost();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullHost_h_