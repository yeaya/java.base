#ifndef _jdk_internal_icu_impl_Trie2$Trie2Iterator_h_
#define _jdk_internal_icu_impl_Trie2$Trie2Iterator_h_
//$ class jdk.internal.icu.impl.Trie2$Trie2Iterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Trie2;
				class Trie2$Range;
				class Trie2$ValueMapper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2$Trie2Iterator : public ::java::util::Iterator {
	$class(Trie2$Trie2Iterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Trie2$Trie2Iterator();
	void init$(::jdk::internal::icu::impl::Trie2* this$0, ::jdk::internal::icu::impl::Trie2$ValueMapper* vm);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	int32_t rangeEndLS(char16_t startingLS);
	::jdk::internal::icu::impl::Trie2* this$0 = nullptr;
	::jdk::internal::icu::impl::Trie2$ValueMapper* mapper = nullptr;
	::jdk::internal::icu::impl::Trie2$Range* returnValue = nullptr;
	int32_t nextStart = 0;
	int32_t limitCP = 0;
	bool doingCodePoints = false;
	bool doLeadSurrogates = false;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie2$Trie2Iterator_h_