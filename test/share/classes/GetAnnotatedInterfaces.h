#ifndef _GetAnnotatedInterfaces_h_
#define _GetAnnotatedInterfaces_h_
//$ class GetAnnotatedInterfaces
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetAnnotatedInterfaces : public ::java::lang::Object {
	$class(GetAnnotatedInterfaces, 0, ::java::lang::Object)
public:
	GetAnnotatedInterfaces();
	void init$();
	static void main($StringArray* args);
	static void testReturnsZeroLengthArray();
	static $ClassArray* testData;
	static int32_t failed;
	static int32_t tests;
};

#endif // _GetAnnotatedInterfaces_h_