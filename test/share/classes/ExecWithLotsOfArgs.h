#ifndef _ExecWithLotsOfArgs_h_
#define _ExecWithLotsOfArgs_h_
//$ class ExecWithLotsOfArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ExecWithLotsOfArgs : public ::java::lang::Object {
	$class(ExecWithLotsOfArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExecWithLotsOfArgs();
	void init$();
	static void failed($String* s);
	static void main($StringArray* args);
};

#endif // _ExecWithLotsOfArgs_h_