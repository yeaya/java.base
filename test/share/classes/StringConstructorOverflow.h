#ifndef _StringConstructorOverflow_h_
#define _StringConstructorOverflow_h_
//$ class StringConstructorOverflow
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export StringConstructorOverflow : public ::java::lang::Object {
	$class(StringConstructorOverflow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringConstructorOverflow();
	void init$();
	static void main($StringArray* args);
	static $String* makeLongHexString();
};

#endif // _StringConstructorOverflow_h_