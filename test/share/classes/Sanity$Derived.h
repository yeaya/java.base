#ifndef _Sanity$Derived_h_
#define _Sanity$Derived_h_
//$ class Sanity$Derived
//$ extends Sanity$Base

#include <Sanity$Base.h>

class Sanity;

class $export Sanity$Derived : public ::Sanity$Base {
	$class(Sanity$Derived, $NO_CLASS_INIT, ::Sanity$Base)
public:
	Sanity$Derived();
	void init$(::Sanity* this$0);
	::Sanity* this$0 = nullptr;
};

#endif // _Sanity$Derived_h_