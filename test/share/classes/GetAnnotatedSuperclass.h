#ifndef _GetAnnotatedSuperclass_h_
#define _GetAnnotatedSuperclass_h_
//$ class GetAnnotatedSuperclass
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetAnnotatedSuperclass : public ::java::lang::Object {
	$class(GetAnnotatedSuperclass, 0, ::java::lang::Object)
public:
	GetAnnotatedSuperclass();
	void init$();
	static void main($StringArray* args);
	static void testReturnsEmptyAT();
	static void testReturnsNull();
	static $ClassArray* nullTestData;
	static $ClassArray* nonNullTestData;
	static int32_t failed;
	static int32_t tests;
};

#endif // _GetAnnotatedSuperclass_h_