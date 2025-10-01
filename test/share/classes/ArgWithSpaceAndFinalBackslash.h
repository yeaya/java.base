#ifndef _ArgWithSpaceAndFinalBackslash_h_
#define _ArgWithSpaceAndFinalBackslash_h_
//$ class ArgWithSpaceAndFinalBackslash
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ArgWithSpaceAndFinalBackslash : public ::java::lang::Object {
	$class(ArgWithSpaceAndFinalBackslash, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArgWithSpaceAndFinalBackslash();
	void init$();
	static $String* getJavaCommand();
	static void main($StringArray* args);
};

#endif // _ArgWithSpaceAndFinalBackslash_h_