#ifndef _jdk_internal_icu_util_CodePointTrie$Fast8_h_
#define _jdk_internal_icu_util_CodePointTrie$Fast8_h_
//$ class jdk.internal.icu.util.CodePointTrie$Fast8
//$ extends jdk.internal.icu.util.CodePointTrie$Fast

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/CodePointTrie$Fast.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Fast8 : public ::jdk::internal::icu::util::CodePointTrie$Fast {
	$class(CodePointTrie$Fast8, 0, ::jdk::internal::icu::util::CodePointTrie$Fast)
public:
	CodePointTrie$Fast8();
	using ::jdk::internal::icu::util::CodePointTrie$Fast::getRange;
	void init$($chars* index, $bytes* data8, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset);
	virtual int32_t bmpGet(int32_t c) override;
	static ::jdk::internal::icu::util::CodePointTrie$Fast8* fromBinary(::java::nio::ByteBuffer* bytes);
	virtual int32_t get(int32_t c) override;
	virtual int32_t suppGet(int32_t c) override;
	static bool $assertionsDisabled;
	$bytes* dataArray = nullptr;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Fast8_h_