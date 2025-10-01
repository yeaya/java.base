#ifndef _GetCallerClassTest$InnerClassCaller$Inner_h_
#define _GetCallerClassTest$InnerClassCaller$Inner_h_
//$ class GetCallerClassTest$InnerClassCaller$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

class GetCallerClassTest$InnerClassCaller;

class $export GetCallerClassTest$InnerClassCaller$Inner : public ::java::lang::Object {
	$class(GetCallerClassTest$InnerClassCaller$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetCallerClassTest$InnerClassCaller$Inner();
	void init$(::GetCallerClassTest$InnerClassCaller* this$1);
	virtual void test();
	::GetCallerClassTest$InnerClassCaller* this$1 = nullptr;
};

#endif // _GetCallerClassTest$InnerClassCaller$Inner_h_