#ifndef _GetCallerClassTest$Nested$NestedClassCaller_h_
#define _GetCallerClassTest$Nested$NestedClassCaller_h_
//$ class GetCallerClassTest$Nested$NestedClassCaller
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class GetCallerClassTest$Nested;

class $export GetCallerClassTest$Nested$NestedClassCaller : public ::java::lang::Runnable {
	$class(GetCallerClassTest$Nested$NestedClassCaller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GetCallerClassTest$Nested$NestedClassCaller();
	void init$(::GetCallerClassTest$Nested* this$1);
	virtual void run() override;
	::GetCallerClassTest$Nested* this$1 = nullptr;
};

#endif // _GetCallerClassTest$Nested$NestedClassCaller_h_