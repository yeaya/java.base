#ifndef _jdk_internal_icu_impl_CharTrie_h_
#define _jdk_internal_icu_impl_CharTrie_h_
//$ class jdk.internal.icu.impl.CharTrie
//$ extends jdk.internal.icu.impl.Trie

#include <java/lang/Array.h>
#include <jdk/internal/icu/impl/Trie.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Trie$DataManipulate;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class CharTrie : public ::jdk::internal::icu::impl::Trie {
	$class(CharTrie, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Trie)
public:
	CharTrie();
	void init$(::java::io::InputStream* inputStream, ::jdk::internal::icu::impl::Trie$DataManipulate* dataManipulate);
	char16_t getCodePointValue(int32_t ch);
	char16_t getLeadValue(char16_t ch);
	virtual int32_t getSurrogateOffset(char16_t lead, char16_t trail) override;
	virtual void unserialize(::java::io::InputStream* inputStream) override;
	char16_t m_initialValue_ = 0;
	$chars* m_data_ = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_CharTrie_h_