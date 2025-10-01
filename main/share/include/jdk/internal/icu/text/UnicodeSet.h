#ifndef _jdk_internal_icu_text_UnicodeSet_h_
#define _jdk_internal_icu_text_UnicodeSet_h_
//$ class jdk.internal.icu.text.UnicodeSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GROW_EXTRA")
#undef GROW_EXTRA
#pragma push_macro("HIGH")
#undef HIGH
#pragma push_macro("LOW")
#undef LOW
#pragma push_macro("NO_VERSION")
#undef NO_VERSION
#pragma push_macro("INCLUSION")
#undef INCLUSION
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("START_EXTRA")
#undef START_EXTRA

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class TreeSet;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class BMPSet;
				class UnicodeSetStringSpan;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class UnicodeSet$Filter;
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
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import UnicodeSet : public ::java::lang::Object {
	$class(UnicodeSet, 0, ::java::lang::Object)
public:
	UnicodeSet();
	void init$();
	void init$(::jdk::internal::icu::text::UnicodeSet* other);
	void init$(int32_t start, int32_t end);
	void init$($String* pattern);
	::jdk::internal::icu::text::UnicodeSet* add(int32_t c);
	::jdk::internal::icu::text::UnicodeSet* add(::java::lang::CharSequence* s);
	::jdk::internal::icu::text::UnicodeSet* add($ints* other, int32_t otherLen, int32_t polarity);
	::jdk::internal::icu::text::UnicodeSet* add_unchecked(int32_t start, int32_t end);
	::jdk::internal::icu::text::UnicodeSet* add_unchecked(int32_t c);
	::jdk::internal::icu::text::UnicodeSet* applyFilter(::jdk::internal::icu::text::UnicodeSet$Filter* filter, int32_t src);
	::jdk::internal::icu::text::UnicodeSet* applyPattern($String* pattern, ::java::text::ParsePosition* pos);
	void checkFrozen();
	virtual ::jdk::internal::icu::text::UnicodeSet* clear();
	virtual ::jdk::internal::icu::text::UnicodeSet* cloneAsThawed();
	virtual ::jdk::internal::icu::text::UnicodeSet* complement(int32_t start, int32_t end);
	virtual bool contains(int32_t c);
	void ensureBufferCapacity(int32_t newLen);
	void ensureCapacity(int32_t newLen);
	int32_t findCodePoint(int32_t c);
	virtual ::jdk::internal::icu::text::UnicodeSet* freeze();
	static ::jdk::internal::icu::text::UnicodeSet* getInclusions(int32_t src);
	virtual int32_t getRangeCount();
	virtual int32_t getRangeEnd(int32_t index);
	virtual int32_t getRangeStart(int32_t index);
	static int32_t getSingleCP(::java::lang::CharSequence* s);
	virtual bool isFrozen();
	static int32_t max(int32_t a, int32_t b);
	$ints* range(int32_t start, int32_t end);
	::jdk::internal::icu::text::UnicodeSet* retain($ints* other, int32_t otherLen, int32_t polarity);
	virtual ::jdk::internal::icu::text::UnicodeSet* retainAll(::jdk::internal::icu::text::UnicodeSet* c);
	virtual ::jdk::internal::icu::text::UnicodeSet* set(::jdk::internal::icu::text::UnicodeSet* other);
	virtual int32_t size();
	virtual int32_t span(::java::lang::CharSequence* s, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	virtual int32_t span(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	virtual int32_t spanAndCount(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition, ::jdk::internal::icu::util::OutputInt* outCount);
	virtual int32_t spanBack(::java::lang::CharSequence* s, int32_t fromIndex, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	int32_t spanCodePointsAndCount(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition, ::jdk::internal::icu::util::OutputInt* outCount);
	::jdk::internal::icu::text::UnicodeSet* xor$($ints* other, int32_t otherLen, int32_t polarity);
	static bool $assertionsDisabled;
	static const int32_t LOW = 0;
	static const int32_t HIGH = 0x00110000;
	static const int32_t MIN_VALUE = LOW;
	static const int32_t MAX_VALUE = 1114111; // HIGH - 1
	int32_t len = 0;
	$ints* list = nullptr;
	$ints* rangeList = nullptr;
	$ints* buffer = nullptr;
	::java::util::TreeSet* strings = nullptr;
	static const int32_t START_EXTRA = 16;
	static const int32_t GROW_EXTRA = START_EXTRA;
	static ::jdk::internal::icu::text::UnicodeSet* INCLUSION;
	$volatile(::jdk::internal::icu::impl::BMPSet*) bmpSet = nullptr;
	$volatile(::jdk::internal::icu::impl::UnicodeSetStringSpan*) stringSpan = nullptr;
	static ::jdk::internal::icu::util::VersionInfo* NO_VERSION;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("GROW_EXTRA")
#pragma pop_macro("HIGH")
#pragma pop_macro("LOW")
#pragma pop_macro("NO_VERSION")
#pragma pop_macro("INCLUSION")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("START_EXTRA")

#endif // _jdk_internal_icu_text_UnicodeSet_h_