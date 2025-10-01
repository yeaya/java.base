#ifndef _NullArguments_h_
#define _NullArguments_h_
//$ class NullArguments
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullArguments : public ::java::lang::Object {
	$class(NullArguments, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullArguments();
	void init$();
	static void main($StringArray* args);
};

#endif // _NullArguments_h_