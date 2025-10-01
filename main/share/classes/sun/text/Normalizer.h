#ifndef _sun_text_Normalizer_h_
#define _sun_text_Normalizer_h_
//$ class sun.text.Normalizer
//$ extends java.lang.Object

#include <jdk/internal/icu/text/NormalizerBase.h>

#pragma push_macro("UNICODE_3_2")
#undef UNICODE_3_2
#pragma push_macro("UNICODE_3_2_0_ORIGINAL")
#undef UNICODE_3_2_0_ORIGINAL

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

namespace sun {
	namespace text {

class $export Normalizer : public ::java::lang::Object {
	$class(Normalizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Normalizer();
	void init$();
	static int32_t getCombiningClass(int32_t ch);
	static bool isNormalized(::java::lang::CharSequence* src, ::java::text::Normalizer$Form* form, int32_t option);
	static $String* normalize(::java::lang::CharSequence* src, ::java::text::Normalizer$Form* form, int32_t option);
	static const int32_t UNICODE_3_2 = ::jdk::internal::icu::text::NormalizerBase::UNICODE_3_2_0_ORIGINAL;
};

	} // text
} // sun

#pragma pop_macro("UNICODE_3_2")
#pragma pop_macro("UNICODE_3_2_0_ORIGINAL")

#endif // _sun_text_Normalizer_h_