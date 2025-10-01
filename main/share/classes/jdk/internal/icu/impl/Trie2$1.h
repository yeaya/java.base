#ifndef _jdk_internal_icu_impl_Trie2$1_h_
#define _jdk_internal_icu_impl_Trie2$1_h_
//$ class jdk.internal.icu.impl.Trie2$1
//$ extends jdk.internal.icu.impl.Trie2$ValueMapper

#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2$1 : public ::jdk::internal::icu::impl::Trie2$ValueMapper {
	$class(Trie2$1, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Trie2$ValueMapper)
public:
	Trie2$1();
	void init$();
	virtual int32_t map(int32_t in) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie2$1_h_