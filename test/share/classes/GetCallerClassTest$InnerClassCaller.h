#ifndef _GetCallerClassTest$InnerClassCaller_h_
#define _GetCallerClassTest$InnerClassCaller_h_
//$ class GetCallerClassTest$InnerClassCaller
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class GetCallerClassTest;

class $export GetCallerClassTest$InnerClassCaller : public ::java::lang::Runnable {
	$class(GetCallerClassTest$InnerClassCaller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GetCallerClassTest$InnerClassCaller();
	void init$(::GetCallerClassTest* this$0);
	virtual void run() override;
	::GetCallerClassTest* this$0 = nullptr;
};

#endif // _GetCallerClassTest$InnerClassCaller_h_