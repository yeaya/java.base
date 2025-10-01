#ifndef _ArrayMethods_h_
#define _ArrayMethods_h_
//$ class ArrayMethods
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ArrayMethods : public ::java::lang::Object {
	$class(ArrayMethods, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayMethods();
	void init$();
	static void main($StringArray* args);
	virtual void testGetDeclaredMethod();
	virtual void testGetDeclaredMethods();
	virtual void testGetInterfaces();
	virtual void testGetMethod();
	virtual void testGetMethods();
	int32_t failed = 0;
};

#endif // _ArrayMethods_h_