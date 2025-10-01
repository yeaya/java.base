#ifndef _NullCreate_h_
#define _NullCreate_h_
//$ class NullCreate
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullCreate : public ::java::lang::Object {
	$class(NullCreate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullCreate();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullCreate_h_