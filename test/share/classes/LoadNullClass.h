#ifndef _LoadNullClass_h_
#define _LoadNullClass_h_
//$ class LoadNullClass
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export LoadNullClass : public ::java::lang::Object {
	$class(LoadNullClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LoadNullClass();
	void init$();
	static void main($StringArray* args);
};

#endif // _LoadNullClass_h_