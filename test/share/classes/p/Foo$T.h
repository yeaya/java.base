#ifndef _p_Foo$T_h_
#define _p_Foo$T_h_
//$ class p.Foo$T
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ONE")
#undef ONE

namespace p {

class $export Foo$T : public ::java::lang::Enum {
	$class(Foo$T, 0, ::java::lang::Enum)
public:
	Foo$T();
	static $Array<::p::Foo$T>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::p::Foo$T* valueOf($String* name);
	static $Array<::p::Foo$T>* values();
	static ::p::Foo$T* ONE;
	static $Array<::p::Foo$T>* $VALUES;
};

} // p

#pragma pop_macro("ONE")

#endif // _p_Foo$T_h_