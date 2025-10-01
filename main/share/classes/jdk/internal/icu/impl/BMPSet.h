#ifndef _jdk_internal_icu_impl_BMPSet_h_
#define _jdk_internal_icu_impl_BMPSet_h_
//$ class jdk.internal.icu.impl.BMPSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
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

class BMPSet : public ::java::lang::Object {
	$class(BMPSet, 0, ::java::lang::Object)
public:
	BMPSet();
	void init$($ints* parentList, int32_t parentListLength);
	bool contains(int32_t c);
	bool containsSlow(int32_t c, int32_t lo, int32_t hi);
	int32_t findCodePoint(int32_t c, int32_t lo, int32_t hi);
	void initBits();
	static void set32x64Bits($ints* table, int32_t start, int32_t limit);
	int32_t span(::java::lang::CharSequence* s, int32_t start, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition, ::jdk::internal::icu::util::OutputInt* outCount);
	int32_t spanBack(::java::lang::CharSequence* s, int32_t limit, ::jdk::internal::icu::text::UnicodeSet$SpanCondition* spanCondition);
	static bool $assertionsDisabled;
	$booleans* latin1Contains = nullptr;
	$ints* table7FF = nullptr;
	$ints* bmpBlockBits = nullptr;
	$ints* list4kStarts = nullptr;
	$ints* list = nullptr;
	int32_t listLength = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_BMPSet_h_