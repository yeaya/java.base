#ifndef _jdk_internal_icu_util_CodePointTrie$Small_h_
#define _jdk_internal_icu_util_CodePointTrie$Small_h_
//$ class jdk.internal.icu.util.CodePointTrie$Small
//$ extends jdk.internal.icu.util.CodePointTrie

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/CodePointTrie.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointMap$StringIterator;
				class CodePointTrie$Data;
				class CodePointTrie$Type;
				class CodePointTrie$ValueWidth;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Small : public ::jdk::internal::icu::util::CodePointTrie {
	$class(CodePointTrie$Small, $NO_CLASS_INIT, ::jdk::internal::icu::util::CodePointTrie)
public:
	CodePointTrie$Small();
	using ::jdk::internal::icu::util::CodePointTrie::getRange;
	void init$($chars* index, ::jdk::internal::icu::util::CodePointTrie$Data* data, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset);
	virtual int32_t cpIndex(int32_t c) override;
	static ::jdk::internal::icu::util::CodePointTrie$Small* fromBinary(::jdk::internal::icu::util::CodePointTrie$ValueWidth* valueWidth, ::java::nio::ByteBuffer* bytes);
	virtual ::jdk::internal::icu::util::CodePointTrie$Type* getType() override;
	virtual ::jdk::internal::icu::util::CodePointMap$StringIterator* stringIterator(::java::lang::CharSequence* s, int32_t sIndex) override;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Small_h_