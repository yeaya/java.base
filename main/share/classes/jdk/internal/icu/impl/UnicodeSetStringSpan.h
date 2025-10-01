#ifndef _jdk_internal_icu_impl_UnicodeSetStringSpan_h_
#define _jdk_internal_icu_impl_UnicodeSetStringSpan_h_
//$ class jdk.internal.icu.impl.UnicodeSetStringSpan
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LONG_SPAN")
#undef LONG_SPAN
#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("FWD")
#undef FWD
#pragma push_macro("FWD_UTF16_NOT_CONTAINED")
#undef FWD_UTF16_NOT_CONTAINED
#pragma push_macro("FWD_UTF16_CONTAINED")
#undef FWD_UTF16_CONTAINED
#pragma push_macro("NOT_CONTAINED")
#undef NOT_CONTAINED
#pragma push_macro("BACK_UTF16_CONTAINED")
#undef BACK_UTF16_CONTAINED
#pragma push_macro("WITH_COUNT")
#undef WITH_COUNT
#pragma push_macro("BACK")
#undef BACK
#pragma push_macro("BACK_UTF16_NOT_CONTAINED")
#undef BACK_UTF16_NOT_CONTAINED
#pragma push_macro("CONTAINED")
#undef CONTAINED
#pragma push_macro("ALL_CP_CONTAINED")
#undef ALL_CP_CONTAINED

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class UnicodeSetStringSpan$OffsetList;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class UnicodeSet;
				class UnicodeSet$SpanCondition;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class OutputInt;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class UnicodeSetStringSpan : public ::java::lang::Object {
	$class(UnicodeSetStringSpan, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnicodeSetStringSpan();
	void init$(::jdk::internal::icu::text::UnicodeSet* set, ::java::util::ArrayList* setStrings, int32_t which);
	void addToSpanNotSet(int32_t c);
	virtual bool contains(int32_t c);
	static int16_t makeSpanLengthByte(int32_t spanLength);
	static bool matches16(::java::lang::CharSequence* s, int32_t start, $String* t, int32_t length);
	static bool matches16CPB(::java::lang::CharSequence* s, int32_t start, int32_t limit, $String* t, int32_t tlength);
	virtual bool needsStringSpanUTF16();
	virtual int32_t span(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	virtual int32_t spanAndCount(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition, ::jdk::internal::icu::util::OutputInt* outCount);
	virtual int32_t spanBack(::java::lang::CharSequence* s, int32_t length, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	int32_t spanContainedAndCount(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::util::OutputInt* outCount);
	int32_t spanNot(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::util::OutputInt* outCount);
	int32_t spanNotBack(::java::lang::CharSequence* s, int32_t length);
	static int32_t spanOne(::jdk::internal::icu::text::UnicodeSet* set, ::java::lang::CharSequence* s, int32_t start, int32_t length);
	static int32_t spanOneBack(::jdk::internal::icu::text::UnicodeSet* set, ::java::lang::CharSequence* s, int32_t length);
	int32_t spanWithStrings(::java::lang::CharSequence* s, int32_t start, int32_t spanLimit, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	static const int32_t WITH_COUNT = 64;
	static const int32_t FWD = 32;
	static const int32_t BACK = 16;
	static const int32_t CONTAINED = 2;
	static const int32_t NOT_CONTAINED = 1;
	static const int32_t ALL = 127;
	static const int32_t FWD_UTF16_CONTAINED = 34; // FWD | CONTAINED
	static const int32_t FWD_UTF16_NOT_CONTAINED = 33; // FWD | NOT_CONTAINED
	static const int32_t BACK_UTF16_CONTAINED = 18; // BACK | CONTAINED
	static const int32_t BACK_UTF16_NOT_CONTAINED = 17; // BACK | NOT_CONTAINED
	static const int16_t ALL_CP_CONTAINED = 255;
	static const int16_t LONG_SPAN = 254; // ALL_CP_CONTAINED - 1
	::jdk::internal::icu::text::UnicodeSet* spanSet = nullptr;
	::jdk::internal::icu::text::UnicodeSet* spanNotSet = nullptr;
	::java::util::ArrayList* strings = nullptr;
	$shorts* spanLengths = nullptr;
	int32_t maxLength16 = 0;
	bool someRelevant = false;
	bool all = false;
	::jdk::internal::icu::impl::UnicodeSetStringSpan$OffsetList* offsets = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("LONG_SPAN")
#pragma pop_macro("ALL")
#pragma pop_macro("FWD")
#pragma pop_macro("FWD_UTF16_NOT_CONTAINED")
#pragma pop_macro("FWD_UTF16_CONTAINED")
#pragma pop_macro("NOT_CONTAINED")
#pragma pop_macro("BACK_UTF16_CONTAINED")
#pragma pop_macro("WITH_COUNT")
#pragma pop_macro("BACK")
#pragma pop_macro("BACK_UTF16_NOT_CONTAINED")
#pragma pop_macro("CONTAINED")
#pragma pop_macro("ALL_CP_CONTAINED")

#endif // _jdk_internal_icu_impl_UnicodeSetStringSpan_h_