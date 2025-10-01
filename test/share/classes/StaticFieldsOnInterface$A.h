#ifndef _StaticFieldsOnInterface$A_h_
#define _StaticFieldsOnInterface$A_h_
//$ interface StaticFieldsOnInterface$A
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONSTANT")
#undef CONSTANT

class $export StaticFieldsOnInterface$A : public ::java::lang::Object {
	$interface(StaticFieldsOnInterface$A, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t CONSTANT = 42;
};

#pragma pop_macro("CONSTANT")

#endif // _StaticFieldsOnInterface$A_h_