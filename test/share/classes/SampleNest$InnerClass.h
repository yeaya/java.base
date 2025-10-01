#ifndef _SampleNest$InnerClass_h_
#define _SampleNest$InnerClass_h_
//$ class SampleNest$InnerClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class SampleNest;

class $export SampleNest$InnerClass : public ::java::lang::Object {
	$class(SampleNest$InnerClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SampleNest$InnerClass();
	void init$(::SampleNest* this$0);
	::SampleNest* this$0 = nullptr;
};

#endif // _SampleNest$InnerClass_h_