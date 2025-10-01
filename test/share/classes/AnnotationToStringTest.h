#ifndef _AnnotationToStringTest_h_
#define _AnnotationToStringTest_h_
//$ class AnnotationToStringTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export AnnotationToStringTest : public ::java::lang::Object {
	$class(AnnotationToStringTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnnotationToStringTest();
	void init$();
	static int32_t arrayAnnotationTest();
	static int32_t check($String* expected, $String* actual);
	static int32_t classyTest();
	static void main($StringArray* args);
};

#endif // _AnnotationToStringTest_h_