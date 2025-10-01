#ifndef _GetCallerClassTest$ReflectionTest_h_
#define _GetCallerClassTest$ReflectionTest_h_
//$ class GetCallerClassTest$ReflectionTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class GetCallerClassTest;
namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

class $export GetCallerClassTest$ReflectionTest : public ::java::lang::Runnable {
	$class(GetCallerClassTest$ReflectionTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GetCallerClassTest$ReflectionTest();
	void init$(::GetCallerClassTest* this$0);
	virtual void callMethodHandle();
	virtual void callMethodHandleRefl();
	virtual void callMethodInvoke();
	virtual void callMethodInvokeRefl();
	virtual void run() override;
	::GetCallerClassTest* this$0 = nullptr;
	::java::lang::invoke::MethodType* methodType = nullptr;
};

#endif // _GetCallerClassTest$ReflectionTest_h_