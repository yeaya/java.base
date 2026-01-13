#ifndef _jdk_internal_icu_util_CodePointTrie_h_
#define _jdk_internal_icu_util_CodePointTrie_h_
//$ class jdk.internal.icu.util.CodePointTrie
//$ extends jdk.internal.icu.util.CodePointMap

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/CodePointMap.h>

#pragma push_macro("ASCII_LIMIT")
#undef ASCII_LIMIT
#pragma push_macro("BMP_INDEX_LENGTH")
#undef BMP_INDEX_LENGTH
#pragma push_macro("CP_PER_INDEX_2_ENTRY")
#undef CP_PER_INDEX_2_ENTRY
#pragma push_macro("ERROR_VALUE_NEG_DATA_OFFSET")
#undef ERROR_VALUE_NEG_DATA_OFFSET
#pragma push_macro("FAST_DATA_BLOCK_LENGTH")
#undef FAST_DATA_BLOCK_LENGTH
#pragma push_macro("FAST_DATA_MASK")
#undef FAST_DATA_MASK
#pragma push_macro("FAST_SHIFT")
#undef FAST_SHIFT
#pragma push_macro("HIGH_VALUE_NEG_DATA_OFFSET")
#undef HIGH_VALUE_NEG_DATA_OFFSET
#pragma push_macro("INDEX_2_BLOCK_LENGTH")
#undef INDEX_2_BLOCK_LENGTH
#pragma push_macro("INDEX_2_MASK")
#undef INDEX_2_MASK
#pragma push_macro("INDEX_3_BLOCK_LENGTH")
#undef INDEX_3_BLOCK_LENGTH
#pragma push_macro("INDEX_3_MASK")
#undef INDEX_3_MASK
#pragma push_macro("MAX_UNICODE")
#undef MAX_UNICODE
#pragma push_macro("NO_DATA_NULL_OFFSET")
#undef NO_DATA_NULL_OFFSET
#pragma push_macro("NO_INDEX3_NULL_OFFSET")
#undef NO_INDEX3_NULL_OFFSET
#pragma push_macro("OMITTED_BMP_INDEX_1_LENGTH")
#undef OMITTED_BMP_INDEX_1_LENGTH
#pragma push_macro("OPTIONS_DATA_LENGTH_MASK")
#undef OPTIONS_DATA_LENGTH_MASK
#pragma push_macro("OPTIONS_DATA_NULL_OFFSET_MASK")
#undef OPTIONS_DATA_NULL_OFFSET_MASK
#pragma push_macro("OPTIONS_RESERVED_MASK")
#undef OPTIONS_RESERVED_MASK
#pragma push_macro("OPTIONS_VALUE_BITS_MASK")
#undef OPTIONS_VALUE_BITS_MASK
#pragma push_macro("SHIFT_1")
#undef SHIFT_1
#pragma push_macro("SHIFT_1_2")
#undef SHIFT_1_2
#pragma push_macro("SHIFT_2")
#undef SHIFT_2
#pragma push_macro("SHIFT_2_3")
#undef SHIFT_2_3
#pragma push_macro("SHIFT_3")
#undef SHIFT_3
#pragma push_macro("SMALL_DATA_BLOCK_LENGTH")
#undef SMALL_DATA_BLOCK_LENGTH
#pragma push_macro("SMALL_DATA_MASK")
#undef SMALL_DATA_MASK
#pragma push_macro("SMALL_INDEX_LENGTH")
#undef SMALL_INDEX_LENGTH
#pragma push_macro("SMALL_LIMIT")
#undef SMALL_LIMIT
#pragma push_macro("SMALL_MAX")
#undef SMALL_MAX

namespace java {
	namespace io {
		class OutputStream;
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
				class CodePointMap$Range;
				class CodePointMap$ValueFilter;
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

class CodePointTrie : public ::jdk::internal::icu::util::CodePointMap {
	$class(CodePointTrie, 0, ::jdk::internal::icu::util::CodePointMap)
public:
	CodePointTrie();
	using ::jdk::internal::icu::util::CodePointMap::getRange;
	void init$($chars* index, ::jdk::internal::icu::util::CodePointTrie$Data* data, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset);
	int32_t asciiGet(int32_t c);
	virtual int32_t cpIndex(int32_t c) {return 0;}
	int32_t fastIndex(int32_t c);
	static ::jdk::internal::icu::util::CodePointTrie* fromBinary(::jdk::internal::icu::util::CodePointTrie$Type* type, ::jdk::internal::icu::util::CodePointTrie$ValueWidth* valueWidth, ::java::nio::ByteBuffer* bytes);
	virtual int32_t get(int32_t c) override;
	virtual bool getRange(int32_t start, ::jdk::internal::icu::util::CodePointMap$ValueFilter* filter, ::jdk::internal::icu::util::CodePointMap$Range* range) override;
	virtual ::jdk::internal::icu::util::CodePointTrie$Type* getType() {return nullptr;}
	::jdk::internal::icu::util::CodePointTrie$ValueWidth* getValueWidth();
	int32_t internalSmallIndex(::jdk::internal::icu::util::CodePointTrie$Type* type, int32_t c);
	static int32_t maybeFilterValue(int32_t value, int32_t trieNullValue, int32_t nullValue, ::jdk::internal::icu::util::CodePointMap$ValueFilter* filter);
	int32_t smallIndex(::jdk::internal::icu::util::CodePointTrie$Type* type, int32_t c);
	int32_t toBinary(::java::io::OutputStream* os);
	static bool $assertionsDisabled;
	static const int32_t MAX_UNICODE = 0x0010FFFF;
	static const int32_t ASCII_LIMIT = 128;
	static const int32_t FAST_SHIFT = 6;
	static const int32_t FAST_DATA_BLOCK_LENGTH = 64; // 1 << FAST_SHIFT
	static const int32_t FAST_DATA_MASK = 63; // FAST_DATA_BLOCK_LENGTH - 1
	static const int32_t SMALL_MAX = 4095;
	static const int32_t ERROR_VALUE_NEG_DATA_OFFSET = 1;
	static const int32_t HIGH_VALUE_NEG_DATA_OFFSET = 2;
	static const int32_t BMP_INDEX_LENGTH = 1024; // 65536 >> FAST_SHIFT
	static const int32_t SMALL_LIMIT = 4096;
	static const int32_t SMALL_INDEX_LENGTH = 64; // SMALL_LIMIT >> FAST_SHIFT
	static const int32_t SHIFT_3 = 4;
	static const int32_t SHIFT_2 = 9; // 5 + SHIFT_3
	static const int32_t SHIFT_1 = 14; // 5 + SHIFT_2
	static const int32_t SHIFT_2_3 = 5; // SHIFT_2 - SHIFT_3
	static const int32_t SHIFT_1_2 = 5; // SHIFT_1 - SHIFT_2
	static const int32_t OMITTED_BMP_INDEX_1_LENGTH = 4; // 65536 >> SHIFT_1
	static const int32_t INDEX_2_BLOCK_LENGTH = 32; // 1 << SHIFT_1_2
	static const int32_t INDEX_2_MASK = 31; // INDEX_2_BLOCK_LENGTH - 1
	static const int32_t CP_PER_INDEX_2_ENTRY = 512; // 1 << SHIFT_2
	static const int32_t INDEX_3_BLOCK_LENGTH = 32; // 1 << SHIFT_2_3
	static const int32_t INDEX_3_MASK = 31; // INDEX_3_BLOCK_LENGTH - 1
	static const int32_t SMALL_DATA_BLOCK_LENGTH = 16; // 1 << SHIFT_3
	static const int32_t SMALL_DATA_MASK = 15; // SMALL_DATA_BLOCK_LENGTH - 1
	static const int32_t OPTIONS_DATA_LENGTH_MASK = 0x0000F000;
	static const int32_t OPTIONS_DATA_NULL_OFFSET_MASK = 3840;
	static const int32_t OPTIONS_RESERVED_MASK = 56;
	static const int32_t OPTIONS_VALUE_BITS_MASK = 7;
	static const int32_t NO_INDEX3_NULL_OFFSET = 32767;
	static const int32_t NO_DATA_NULL_OFFSET = 0x000FFFFF;
	$ints* ascii = nullptr;
	$chars* index = nullptr;
	::jdk::internal::icu::util::CodePointTrie$Data* data = nullptr;
	int32_t dataLength = 0;
	int32_t highStart = 0;
	int32_t index3NullOffset = 0;
	int32_t dataNullOffset = 0;
	int32_t nullValue = 0;
};

			} // util
		} // icu
	} // internal
} // jdk

#pragma pop_macro("ASCII_LIMIT")
#pragma pop_macro("BMP_INDEX_LENGTH")
#pragma pop_macro("CP_PER_INDEX_2_ENTRY")
#pragma pop_macro("ERROR_VALUE_NEG_DATA_OFFSET")
#pragma pop_macro("FAST_DATA_BLOCK_LENGTH")
#pragma pop_macro("FAST_DATA_MASK")
#pragma pop_macro("FAST_SHIFT")
#pragma pop_macro("HIGH_VALUE_NEG_DATA_OFFSET")
#pragma pop_macro("INDEX_2_BLOCK_LENGTH")
#pragma pop_macro("INDEX_2_MASK")
#pragma pop_macro("INDEX_3_BLOCK_LENGTH")
#pragma pop_macro("INDEX_3_MASK")
#pragma pop_macro("MAX_UNICODE")
#pragma pop_macro("NO_DATA_NULL_OFFSET")
#pragma pop_macro("NO_INDEX3_NULL_OFFSET")
#pragma pop_macro("OMITTED_BMP_INDEX_1_LENGTH")
#pragma pop_macro("OPTIONS_DATA_LENGTH_MASK")
#pragma pop_macro("OPTIONS_DATA_NULL_OFFSET_MASK")
#pragma pop_macro("OPTIONS_RESERVED_MASK")
#pragma pop_macro("OPTIONS_VALUE_BITS_MASK")
#pragma pop_macro("SHIFT_1")
#pragma pop_macro("SHIFT_1_2")
#pragma pop_macro("SHIFT_2")
#pragma pop_macro("SHIFT_2_3")
#pragma pop_macro("SHIFT_3")
#pragma pop_macro("SMALL_DATA_BLOCK_LENGTH")
#pragma pop_macro("SMALL_DATA_MASK")
#pragma pop_macro("SMALL_INDEX_LENGTH")
#pragma pop_macro("SMALL_LIMIT")
#pragma pop_macro("SMALL_MAX")

#endif // _jdk_internal_icu_util_CodePointTrie_h_