#ifndef _Args_h_
#define _Args_h_
//$ class Args
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Args$Thunk;

class $export Args : public ::java::lang::Object {
	$class(Args, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Args();
	void init$();
	static void fail($String* s);
	static void main($StringArray* args);
	static void tryCatch($Class* ex, ::Args$Thunk* thunk);
};

#endif // _Args_h_