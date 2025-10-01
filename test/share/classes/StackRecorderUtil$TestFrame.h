#ifndef _StackRecorderUtil$TestFrame_h_
#define _StackRecorderUtil$TestFrame_h_
//$ class StackRecorderUtil$TestFrame
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export StackRecorderUtil$TestFrame : public ::java::lang::Object {
	$class(StackRecorderUtil$TestFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackRecorderUtil$TestFrame();
	void init$($Class* declaringClass, $String* methodName, $String* fileName);
	virtual $String* className();
	virtual $String* toString() override;
	$Class* declaringClass = nullptr;
	$String* methodName = nullptr;
	$String* fileName = nullptr;
};

#endif // _StackRecorderUtil$TestFrame_h_