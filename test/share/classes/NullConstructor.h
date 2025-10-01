#ifndef _NullConstructor_h_
#define _NullConstructor_h_
//$ class NullConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullConstructor : public ::java::lang::Object {
	$class(NullConstructor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullConstructor();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullConstructor_h_