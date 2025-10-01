#ifndef _GetCallerClassTest_h_
#define _GetCallerClassTest_h_
//$ class GetCallerClassTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY

namespace java {
	namespace lang {
		class StackWalker;
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace security {
		class Policy;
	}
}

class $export GetCallerClassTest : public ::java::lang::Object {
	$class(GetCallerClassTest, 0, ::java::lang::Object)
public:
	GetCallerClassTest();
	void init$(::java::lang::StackWalker* sw, bool expect);
	static void assertEquals($Class* c, $Class* expected);
	static bool causeIsUOE($Throwable* t);
	static void lambda$test$0($Thread* t);
	static void main($StringArray* args);
	static void methodHandleGetCallerClass(::java::lang::StackWalker* stackWalker, $Class* expected, bool expectUOE);
	static void reflectiveGetCallerClass(::java::lang::StackWalker* stackWalker, $Class* expected, bool expectUOE);
	static void staticGetCallerClass(::java::lang::StackWalker* stackWalker, $Class* expected, bool expectUOE);
	virtual void test();
	static ::java::security::Policy* DEFAULT_POLICY;
	::java::lang::StackWalker* walker = nullptr;
	bool expectUOE = false;
};

#pragma pop_macro("DEFAULT_POLICY")

#endif // _GetCallerClassTest_h_