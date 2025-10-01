#ifndef _NullArgs_h_
#define _NullArgs_h_
//$ class NullArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullArgs : public ::java::lang::Object {
	$class(NullArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullArgs();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullArgs_h_