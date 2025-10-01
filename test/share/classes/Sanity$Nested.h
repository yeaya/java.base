#ifndef _Sanity$Nested_h_
#define _Sanity$Nested_h_
//$ class Sanity$Nested
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Sanity;

class $export Sanity$Nested : public ::java::lang::Object {
	$class(Sanity$Nested, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sanity$Nested();
	void init$(::Sanity* this$0);
	::Sanity* this$0 = nullptr;
};

#endif // _Sanity$Nested_h_