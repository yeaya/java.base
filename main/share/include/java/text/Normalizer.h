#ifndef _java_text_Normalizer_h_
#define _java_text_Normalizer_h_
//$ class java.text.Normalizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class Normalizer$Form;
	}
}

namespace java {
	namespace text {

class $import Normalizer : public ::java::lang::Object {
	$class(Normalizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Normalizer();
	void init$();
	static bool isNormalized(::java::lang::CharSequence* src, ::java::text::Normalizer$Form* form);
	static $String* normalize(::java::lang::CharSequence* src, ::java::text::Normalizer$Form* form);
};

	} // text
} // java

#endif // _java_text_Normalizer_h_