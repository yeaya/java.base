#ifndef _java_lang_Float2_NaNInfinityParsing_h_
#define _java_lang_Float2_NaNInfinityParsing_h_
//$ class java.lang.Float2.NaNInfinityParsing
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace Float2 {

class $export NaNInfinityParsing : public ::java::lang::Object {
	$class(NaNInfinityParsing, 0, ::java::lang::Object)
public:
	NaNInfinityParsing();
	void init$();
	static void main($StringArray* argv);
	static $StringArray* NaNStrings;
	static $StringArray* infinityStrings;
	static $StringArray* invalidStrings;
};

		} // Float2
	} // lang
} // java

#endif // _java_lang_Float2_NaNInfinityParsing_h_