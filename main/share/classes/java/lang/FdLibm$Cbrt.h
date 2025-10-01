#ifndef _java_lang_FdLibm$Cbrt_h_
#define _java_lang_FdLibm$Cbrt_h_
//$ class java.lang.FdLibm$Cbrt
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("B2")
#undef B2
#pragma push_macro("C")
#undef C
#pragma push_macro("D")
#undef D
#pragma push_macro("E")
#undef E
#pragma push_macro("F")
#undef F
#pragma push_macro("G")
#undef G
#pragma push_macro("B1")
#undef B1

namespace java {
	namespace lang {

class FdLibm$Cbrt : public ::java::lang::Object {
	$class(FdLibm$Cbrt, 0, ::java::lang::Object)
public:
	FdLibm$Cbrt();
	void init$();
	static double compute(double x);
	static const int32_t B1 = 0x2A9F7893;
	static const int32_t B2 = 0x297F7893;
	static double C;
	static double D;
	static double E;
	static double F;
	static double G;
};

	} // lang
} // java

#pragma pop_macro("B2")
#pragma pop_macro("C")
#pragma pop_macro("D")
#pragma pop_macro("E")
#pragma pop_macro("F")
#pragma pop_macro("G")
#pragma pop_macro("B1")

#endif // _java_lang_FdLibm$Cbrt_h_