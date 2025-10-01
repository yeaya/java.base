#ifndef _ExitVM_h_
#define _ExitVM_h_
//$ class ExitVM
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ExitVM : public ::java::lang::Object {
	$class(ExitVM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExitVM();
	void init$();
	static void main($StringArray* args);
};

#endif // _ExitVM_h_