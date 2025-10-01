#ifndef _java_lang_Math2_AbsPositiveZero_h_
#define _java_lang_Math2_AbsPositiveZero_h_
//$ class java.lang.Math2.AbsPositiveZero
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace Math2 {

class $export AbsPositiveZero : public ::java::lang::Object {
	$class(AbsPositiveZero, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbsPositiveZero();
	void init$();
	static bool isPositiveZero(float f);
	static bool isPositiveZero(double d);
	static void main($StringArray* args);
};

		} // Math2
	} // lang
} // java

#endif // _java_lang_Math2_AbsPositiveZero_h_