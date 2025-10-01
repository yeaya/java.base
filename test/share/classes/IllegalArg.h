#ifndef _IllegalArg_h_
#define _IllegalArg_h_
//$ class IllegalArg
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IllegalArg : public ::java::lang::Object {
	$class(IllegalArg, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IllegalArg();
	void init$();
	static void main($StringArray* args);
};

#endif // _IllegalArg_h_