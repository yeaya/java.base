#ifndef _GetCallerClassTest$TopLevelCaller_h_
#define _GetCallerClassTest$TopLevelCaller_h_
//$ class GetCallerClassTest$TopLevelCaller
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class GetCallerClassTest;

class $export GetCallerClassTest$TopLevelCaller : public ::java::lang::Runnable {
	$class(GetCallerClassTest$TopLevelCaller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GetCallerClassTest$TopLevelCaller();
	void init$(::GetCallerClassTest* this$0);
	virtual void run() override;
	::GetCallerClassTest* this$0 = nullptr;
};

#endif // _GetCallerClassTest$TopLevelCaller_h_