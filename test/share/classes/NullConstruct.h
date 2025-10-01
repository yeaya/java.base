#ifndef _NullConstruct_h_
#define _NullConstruct_h_
//$ class NullConstruct
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullConstruct : public ::java::lang::Object {
	$class(NullConstruct, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullConstruct();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullConstruct_h_