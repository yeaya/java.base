#ifndef _ConstructorNull_h_
#define _ConstructorNull_h_
//$ class ConstructorNull
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ConstructorNull : public ::java::lang::Object {
	$class(ConstructorNull, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstructorNull();
	void init$();
	static void main($StringArray* argv);
};

#endif // _ConstructorNull_h_