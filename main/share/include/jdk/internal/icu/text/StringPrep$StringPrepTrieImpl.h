#ifndef _jdk_internal_icu_text_StringPrep$StringPrepTrieImpl_h_
#define _jdk_internal_icu_text_StringPrep$StringPrepTrieImpl_h_
//$ class jdk.internal.icu.text.StringPrep$StringPrepTrieImpl
//$ extends jdk.internal.icu.impl.Trie$DataManipulate

#include <jdk/internal/icu/impl/Trie$DataManipulate.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class CharTrie;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import StringPrep$StringPrepTrieImpl : public ::jdk::internal::icu::impl::Trie$DataManipulate {
	$class(StringPrep$StringPrepTrieImpl, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Trie$DataManipulate)
public:
	StringPrep$StringPrepTrieImpl();
	void init$();
	virtual int32_t getFoldingOffset(int32_t value) override;
	::jdk::internal::icu::impl::CharTrie* sprepTrie = nullptr;
};

			} // text
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_text_StringPrep$StringPrepTrieImpl_h_