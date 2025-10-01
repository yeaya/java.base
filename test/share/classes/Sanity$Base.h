#ifndef _Sanity$Base_h_
#define _Sanity$Base_h_
//$ class Sanity$Base
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Sanity;

class $export Sanity$Base : public ::java::lang::Object {
	$class(Sanity$Base, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sanity$Base();
	void init$(::Sanity* this$0);
	::Sanity* this$0 = nullptr;
};

#endif // _Sanity$Base_h_