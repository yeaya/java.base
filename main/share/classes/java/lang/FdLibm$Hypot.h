#ifndef _java_lang_FdLibm$Hypot_h_
#define _java_lang_FdLibm$Hypot_h_
//$ class java.lang.FdLibm$Hypot
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TWO_MINUS_600")
#undef TWO_MINUS_600
#pragma push_macro("TWO_PLUS_600")
#undef TWO_PLUS_600

namespace java {
	namespace lang {

class FdLibm$Hypot : public ::java::lang::Object {
	$class(FdLibm$Hypot, 0, ::java::lang::Object)
public:
	FdLibm$Hypot();
	void init$();
	static double compute(double x, double y);
	static bool $assertionsDisabled;
	static double TWO_MINUS_600;
	static double TWO_PLUS_600;
};

	} // lang
} // java

#pragma pop_macro("TWO_MINUS_600")
#pragma pop_macro("TWO_PLUS_600")

#endif // _java_lang_FdLibm$Hypot_h_