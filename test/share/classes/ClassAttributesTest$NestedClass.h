#ifndef _ClassAttributesTest$NestedClass_h_
#define _ClassAttributesTest$NestedClass_h_
//$ class ClassAttributesTest$NestedClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class ClassAttributesTest;

class $export ClassAttributesTest$NestedClass : public ::java::lang::Object {
	$class(ClassAttributesTest$NestedClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassAttributesTest$NestedClass();
	void init$(::ClassAttributesTest* this$0);
	::ClassAttributesTest* this$0 = nullptr;
};

#endif // _ClassAttributesTest$NestedClass_h_