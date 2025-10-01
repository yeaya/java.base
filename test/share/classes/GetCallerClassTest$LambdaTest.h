#ifndef _GetCallerClassTest$LambdaTest_h_
#define _GetCallerClassTest$LambdaTest_h_
//$ class GetCallerClassTest$LambdaTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class GetCallerClassTest;

class $export GetCallerClassTest$LambdaTest : public ::java::lang::Runnable {
	$class(GetCallerClassTest$LambdaTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GetCallerClassTest$LambdaTest();
	void init$(::GetCallerClassTest* this$0);
	void lambda$run$0();
	virtual void run() override;
	::GetCallerClassTest* this$0 = nullptr;
};

#endif // _GetCallerClassTest$LambdaTest_h_