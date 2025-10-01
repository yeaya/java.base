#ifndef _jdk_internal_icu_text_BidiBase$TextAttributeConstants_h_
#define _jdk_internal_icu_text_BidiBase$TextAttributeConstants_h_
//$ class jdk.internal.icu.text.BidiBase$TextAttributeConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RUN_DIRECTION")
#undef RUN_DIRECTION
#pragma push_macro("NUMERIC_SHAPING")
#undef NUMERIC_SHAPING
#pragma push_macro("BIDI_EMBEDDING")
#undef BIDI_EMBEDDING
#pragma push_macro("RUN_DIRECTION_LTR")
#undef RUN_DIRECTION_LTR

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaAWTFontAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export BidiBase$TextAttributeConstants : public ::java::lang::Object {
	$class(BidiBase$TextAttributeConstants, 0, ::java::lang::Object)
public:
	BidiBase$TextAttributeConstants();
	void init$();
	static ::java::text::AttributedCharacterIterator$Attribute* getTextAttribute($String* name);
	static ::jdk::internal::access::JavaAWTFontAccess* jafa;
	static ::java::text::AttributedCharacterIterator$Attribute* RUN_DIRECTION;
	static ::java::text::AttributedCharacterIterator$Attribute* NUMERIC_SHAPING;
	static ::java::text::AttributedCharacterIterator$Attribute* BIDI_EMBEDDING;
	static ::java::lang::Boolean* RUN_DIRECTION_LTR;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("RUN_DIRECTION")
#pragma pop_macro("NUMERIC_SHAPING")
#pragma pop_macro("BIDI_EMBEDDING")
#pragma pop_macro("RUN_DIRECTION_LTR")

#endif // _jdk_internal_icu_text_BidiBase$TextAttributeConstants_h_