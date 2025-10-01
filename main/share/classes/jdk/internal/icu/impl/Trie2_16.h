#ifndef _jdk_internal_icu_impl_Trie2_16_h_
#define _jdk_internal_icu_impl_Trie2_16_h_
//$ class jdk.internal.icu.impl.Trie2_16
//$ extends jdk.internal.icu.impl.Trie2

#include <jdk/internal/icu/impl/Trie2.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Trie2$ValueMapper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2_16 : public ::jdk::internal::icu::impl::Trie2 {
	$class(Trie2_16, $NO_CLASS_INIT, ::jdk::internal::icu::impl::Trie2)
public:
	Trie2_16();
	void init$();
	static ::jdk::internal::icu::impl::Trie2_16* createFromSerialized(::java::nio::ByteBuffer* bytes);
	virtual int32_t get(int32_t codePoint) override;
	virtual int32_t getFromU16SingleLead(char16_t codeUnit) override;
	int32_t getSerializedLength();
	virtual ::java::util::Iterator* iterator(::jdk::internal::icu::impl::Trie2$ValueMapper* mapper) override;
	virtual ::java::util::Iterator* iterator() override;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie2_16_h_