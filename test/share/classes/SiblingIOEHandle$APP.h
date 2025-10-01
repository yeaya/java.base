#ifndef _SiblingIOEHandle$APP_h_
#define _SiblingIOEHandle$APP_h_
//$ class SiblingIOEHandle$APP
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("C")
#undef C

class SiblingIOEHandle$APP : public ::java::lang::Enum {
	$class(SiblingIOEHandle$APP, 0, ::java::lang::Enum)
public:
	SiblingIOEHandle$APP();
	static $Array<SiblingIOEHandle$APP>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::SiblingIOEHandle$APP* valueOf($String* name);
	static $Array<SiblingIOEHandle$APP>* values();
	static ::SiblingIOEHandle$APP* A;
	static ::SiblingIOEHandle$APP* B;
	static ::SiblingIOEHandle$APP* C;
	static $Array<SiblingIOEHandle$APP>* $VALUES;
};

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("C")

#endif // _SiblingIOEHandle$APP_h_