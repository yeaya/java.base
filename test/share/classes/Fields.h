#ifndef _Fields_h_
#define _Fields_h_
//$ class Fields
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NON_FINAL")
#undef NON_FINAL
#pragma push_macro("STATIC_NON_FINAL")
#undef STATIC_NON_FINAL
#pragma push_macro("STATIC_FINAL")
#undef STATIC_FINAL
#pragma push_macro("FINAL")
#undef FINAL

class $export Fields : public ::java::lang::Object {
	$class(Fields, 0, ::java::lang::Object)
public:
	Fields();
	void init$();
	virtual $String* name();
	static $Object* STATIC_FINAL;
	static $Object* STATIC_NON_FINAL;
	$Object* FINAL = nullptr;
	$Object* NON_FINAL = nullptr;
};

#pragma pop_macro("NON_FINAL")
#pragma pop_macro("STATIC_NON_FINAL")
#pragma pop_macro("STATIC_FINAL")
#pragma pop_macro("FINAL")

#endif // _Fields_h_