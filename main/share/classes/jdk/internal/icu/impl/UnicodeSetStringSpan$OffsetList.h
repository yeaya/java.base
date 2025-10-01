#ifndef _jdk_internal_icu_impl_UnicodeSetStringSpan$OffsetList_h_
#define _jdk_internal_icu_impl_UnicodeSetStringSpan$OffsetList_h_
//$ class jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class UnicodeSetStringSpan$OffsetList : public ::java::lang::Object {
	$class(UnicodeSetStringSpan$OffsetList, 0, ::java::lang::Object)
public:
	UnicodeSetStringSpan$OffsetList();
	void init$();
	void addOffset(int32_t offset);
	void addOffsetAndCount(int32_t offset, int32_t count);
	void clear();
	bool containsOffset(int32_t offset);
	bool hasCountAtOffset(int32_t offset, int32_t count);
	bool isEmpty();
	int32_t popMinimum(::jdk::internal::icu::util::OutputInt* outCount);
	void setMaxLength(int32_t maxLength);
	void shift(int32_t delta);
	static bool $assertionsDisabled;
	$ints* list = nullptr;
	int32_t length = 0;
	int32_t start = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_UnicodeSetStringSpan$OffsetList_h_