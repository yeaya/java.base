#ifndef _GetAnnotatedNestedSuperclass_h_
#define _GetAnnotatedNestedSuperclass_h_
//$ class GetAnnotatedNestedSuperclass
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetAnnotatedNestedSuperclass : public ::java::lang::Object {
	$class(GetAnnotatedNestedSuperclass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetAnnotatedNestedSuperclass();
	void init$();
	static void assertEquals(Object$* expected, Object$* actual);
	static void main($StringArray* args);
};

#endif // _GetAnnotatedNestedSuperclass_h_