#ifndef _StackStreamTest$K$Caller_h_
#define _StackStreamTest$K$Caller_h_
//$ class StackStreamTest$K$Caller
//$ extends java.lang.Object

#include <java/lang/Object.h>

class StackStreamTest$K;

class $export StackStreamTest$K$Caller : public ::java::lang::Object {
	$class(StackStreamTest$K$Caller, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackStreamTest$K$Caller();
	void init$(::StackStreamTest$K* this$0);
	virtual void test();
	::StackStreamTest$K* this$0 = nullptr;
};

#endif // _StackStreamTest$K$Caller_h_