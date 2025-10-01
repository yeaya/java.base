#ifndef _jdk_internal_icu_util_CodePointTrie$Small32_h_
#define _jdk_internal_icu_util_CodePointTrie$Small32_h_
//$ class jdk.internal.icu.util.CodePointTrie$Small32
//$ extends jdk.internal.icu.util.CodePointTrie$Small

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/CodePointTrie$Small.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Small32 : public ::jdk::internal::icu::util::CodePointTrie$Small {
	$class(CodePointTrie$Small32, $NO_CLASS_INIT, ::jdk::internal::icu::util::CodePointTrie$Small)
public:
	CodePointTrie$Small32();
	using ::jdk::internal::icu::util::CodePointTrie$Small::getRange;
	void init$($chars* index, $ints* data32, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset);
	static ::jdk::internal::icu::util::CodePointTrie$Small32* fromBinary(::java::nio::ByteBuffer* bytes);
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Small32_h_