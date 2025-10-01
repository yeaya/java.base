#ifndef _java_lang_Math2_MinMax_h_
#define _java_lang_Math2_MinMax_h_
//$ class java.lang.Math2.MinMax
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace Math2 {

class $export MinMax : public ::java::lang::Object {
	$class(MinMax, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MinMax();
	void init$();
	static void go($String* what, float result, float correctResult);
	static void go($String* what, double result, double correctResult);
	static void main($StringArray* args);
};

		} // Math2
	} // lang
} // java

#endif // _java_lang_Math2_MinMax_h_