#ifndef _jdk_internal_icu_impl_Trie$DefaultGetFoldingOffset_h_
#define _jdk_internal_icu_impl_Trie$DefaultGetFoldingOffset_h_
//$ class jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset
//$ extends jdk.internal.icu.impl.Trie$DataManipulate

#include <jdk/internal/icu/impl/Trie$DataManipulate.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie$DefaultGetFoldingOffset : public ::jdk::internal::icu::impl::Trie$DataManipulate {
	$class(Trie$DefaultGetFoldingOffset, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Trie$DataManipulate)
public:
	Trie$DefaultGetFoldingOffset();
	void init$();
	virtual int32_t getFoldingOffset(int32_t value) override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie$DefaultGetFoldingOffset_h_