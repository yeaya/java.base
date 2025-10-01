#ifndef _AnotherSelectFdsLimit_h_
#define _AnotherSelectFdsLimit_h_
//$ class AnotherSelectFdsLimit
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_FDS_TO_USE")
#undef DEFAULT_FDS_TO_USE

class $export AnotherSelectFdsLimit : public ::java::lang::Object {
	$class(AnotherSelectFdsLimit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnotherSelectFdsLimit();
	void init$();
	static void main($StringArray* args);
	static const int32_t DEFAULT_FDS_TO_USE = 1600;
};

#pragma pop_macro("DEFAULT_FDS_TO_USE")

#endif // _AnotherSelectFdsLimit_h_