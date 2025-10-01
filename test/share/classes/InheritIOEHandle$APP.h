#ifndef _InheritIOEHandle$APP_h_
#define _InheritIOEHandle$APP_h_
//$ class InheritIOEHandle$APP
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("C")
#undef C

class InheritIOEHandle$APP : public ::java::lang::Enum {
	$class(InheritIOEHandle$APP, 0, ::java::lang::Enum)
public:
	InheritIOEHandle$APP();
	static $Array<InheritIOEHandle$APP>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::InheritIOEHandle$APP* valueOf($String* name);
	static $Array<InheritIOEHandle$APP>* values();
	static ::InheritIOEHandle$APP* A;
	static ::InheritIOEHandle$APP* B;
	static ::InheritIOEHandle$APP* C;
	static $Array<InheritIOEHandle$APP>* $VALUES;
};

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("C")

#endif // _InheritIOEHandle$APP_h_