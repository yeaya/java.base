#ifndef _InitArg_h_
#define _InitArg_h_
//$ class InitArg
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export InitArg : public ::java::lang::Object {
	$class(InitArg, 0, ::java::lang::Object)
public:
	InitArg();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static void main($StringArray* args);
	static bool x123Initialized;
};

#endif // _InitArg_h_