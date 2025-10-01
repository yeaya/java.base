#ifndef _GetCallerClassTest$Nested_h_
#define _GetCallerClassTest$Nested_h_
//$ class GetCallerClassTest$Nested
//$ extends java.lang.Object

#include <java/lang/Object.h>

class GetCallerClassTest;
class GetCallerClassTest$Nested$NestedClassCaller;

class $export GetCallerClassTest$Nested : public ::java::lang::Object {
	$class(GetCallerClassTest$Nested, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetCallerClassTest$Nested();
	void init$(::GetCallerClassTest* this$0);
	virtual ::GetCallerClassTest$Nested$NestedClassCaller* createNestedCaller();
	::GetCallerClassTest* this$0 = nullptr;
};

#endif // _GetCallerClassTest$Nested_h_