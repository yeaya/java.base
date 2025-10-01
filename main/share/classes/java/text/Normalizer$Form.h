#ifndef _java_text_Normalizer$Form_h_
#define _java_text_Normalizer$Form_h_
//$ class java.text.Normalizer$Form
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NFKC")
#undef NFKC
#pragma push_macro("NFKD")
#undef NFKD
#pragma push_macro("NFC")
#undef NFC
#pragma push_macro("NFD")
#undef NFD

namespace java {
	namespace text {

class $export Normalizer$Form : public ::java::lang::Enum {
	$class(Normalizer$Form, 0, ::java::lang::Enum)
public:
	Normalizer$Form();
	static $Array<::java::text::Normalizer$Form>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::text::Normalizer$Form* valueOf($String* name);
	static $Array<::java::text::Normalizer$Form>* values();
	static ::java::text::Normalizer$Form* NFD;
	static ::java::text::Normalizer$Form* NFC;
	static ::java::text::Normalizer$Form* NFKD;
	static ::java::text::Normalizer$Form* NFKC;
	static $Array<::java::text::Normalizer$Form>* $VALUES;
};

	} // text
} // java

#pragma pop_macro("NFKC")
#pragma pop_macro("NFKD")
#pragma pop_macro("NFC")
#pragma pop_macro("NFD")

#endif // _java_text_Normalizer$Form_h_