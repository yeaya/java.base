#ifndef _Outer$Inner_h_
#define _Outer$Inner_h_
//$ class Outer$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Outer;

class Outer$Inner : public ::java::lang::Object {
	$class(Outer$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Outer$Inner();
	void init$(::Outer* this$0);
	::Outer* this$0 = nullptr;
};

#endif // _Outer$Inner_h_