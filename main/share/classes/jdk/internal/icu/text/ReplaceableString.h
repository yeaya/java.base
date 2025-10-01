#ifndef _jdk_internal_icu_text_ReplaceableString_h_
#define _jdk_internal_icu_text_ReplaceableString_h_
//$ class jdk.internal.icu.text.ReplaceableString
//$ extends jdk.internal.icu.text.Replaceable

#include <java/lang/Array.h>
#include <jdk/internal/icu/text/Replaceable.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export ReplaceableString : public ::jdk::internal::icu::text::Replaceable {
	$class(ReplaceableString, $NO_CLASS_INIT, ::jdk::internal::icu::text::Replaceable)
public:
	ReplaceableString();
	void init$($String* str);
	void init$(::java::lang::StringBuffer* buf);
	virtual char16_t charAt(int32_t offset) override;
	virtual void getChars(int32_t srcStart, int32_t srcLimit, $chars* dst, int32_t dstStart) override;
	virtual int32_t length() override;
	::java::lang::StringBuffer* buf = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_ReplaceableString_h_