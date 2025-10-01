#ifndef _java_lang_FdLibm$Exp_h_
#define _java_lang_FdLibm$Exp_h_
//$ class java.lang.FdLibm$Exp
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("P1")
#undef P1
#pragma push_macro("P2")
#undef P2
#pragma push_macro("P3")
#undef P3
#pragma push_macro("P4")
#undef P4
#pragma push_macro("P5")
#undef P5

namespace java {
	namespace lang {

class FdLibm$Exp : public ::java::lang::Object {
	$class(FdLibm$Exp, 0, ::java::lang::Object)
public:
	FdLibm$Exp();
	void init$();
	static double compute(double x);
	static double one;
	static $doubles* half;
	static double huge;
	static double twom1000;
	static double o_threshold;
	static double u_threshold;
	static $doubles* ln2HI;
	static $doubles* ln2LO;
	static double invln2;
	static double P1;
	static double P2;
	static double P3;
	static double P4;
	static double P5;
};

	} // lang
} // java

#pragma pop_macro("P1")
#pragma pop_macro("P2")
#pragma pop_macro("P3")
#pragma pop_macro("P4")
#pragma pop_macro("P5")

#endif // _java_lang_FdLibm$Exp_h_