#ifndef _EmptySet_h_
#define _EmptySet_h_
//$ class EmptySet
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export EmptySet : public ::java::lang::Object {
	$class(EmptySet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EmptySet();
	void init$();
	static void main($StringArray* args);
};

#endif // _EmptySet_h_