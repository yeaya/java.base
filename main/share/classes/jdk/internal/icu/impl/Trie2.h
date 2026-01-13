#ifndef _jdk_internal_icu_impl_Trie2_h_
#define _jdk_internal_icu_impl_Trie2_h_
//$ class jdk.internal.icu.impl.Trie2
//$ extends java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>

#pragma push_macro("UTRIE2_BAD_UTF8_DATA_OFFSET")
#undef UTRIE2_BAD_UTF8_DATA_OFFSET
#pragma push_macro("UTRIE2_DATA_BLOCK_LENGTH")
#undef UTRIE2_DATA_BLOCK_LENGTH
#pragma push_macro("UTRIE2_DATA_GRANULARITY")
#undef UTRIE2_DATA_GRANULARITY
#pragma push_macro("UTRIE2_DATA_MASK")
#undef UTRIE2_DATA_MASK
#pragma push_macro("UTRIE2_INDEX_1_OFFSET")
#undef UTRIE2_INDEX_1_OFFSET
#pragma push_macro("UTRIE2_INDEX_2_BLOCK_LENGTH")
#undef UTRIE2_INDEX_2_BLOCK_LENGTH
#pragma push_macro("UTRIE2_INDEX_2_BMP_LENGTH")
#undef UTRIE2_INDEX_2_BMP_LENGTH
#pragma push_macro("UTRIE2_INDEX_2_MASK")
#undef UTRIE2_INDEX_2_MASK
#pragma push_macro("UTRIE2_INDEX_SHIFT")
#undef UTRIE2_INDEX_SHIFT
#pragma push_macro("UTRIE2_LSCP_INDEX_2_LENGTH")
#undef UTRIE2_LSCP_INDEX_2_LENGTH
#pragma push_macro("UTRIE2_LSCP_INDEX_2_OFFSET")
#undef UTRIE2_LSCP_INDEX_2_OFFSET
#pragma push_macro("UTRIE2_OMITTED_BMP_INDEX_1_LENGTH")
#undef UTRIE2_OMITTED_BMP_INDEX_1_LENGTH
#pragma push_macro("UTRIE2_OPTIONS_VALUE_BITS_MASK")
#undef UTRIE2_OPTIONS_VALUE_BITS_MASK
#pragma push_macro("UTRIE2_SHIFT_1")
#undef UTRIE2_SHIFT_1
#pragma push_macro("UTRIE2_SHIFT_1_2")
#undef UTRIE2_SHIFT_1_2
#pragma push_macro("UTRIE2_SHIFT_2")
#undef UTRIE2_SHIFT_2

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
				class Trie2$UTrie2Header;
				class Trie2$ValueMapper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2 : public ::java::lang::Iterable {
	$class(Trie2, 0, ::java::lang::Iterable)
public:
	Trie2();
	void init$();
	static ::jdk::internal::icu::impl::Trie2* createFromSerialized(::java::nio::ByteBuffer* bytes);
	virtual int32_t get(int32_t codePoint) {return 0;}
	virtual int32_t getFromU16SingleLead(char16_t c) {return 0;}
	static int32_t hashByte(int32_t h, int32_t b);
	static int32_t hashInt(int32_t h, int32_t i);
	static int32_t hashUChar32(int32_t h, int32_t c);
	static int32_t initHash();
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::Iterator* iterator(::jdk::internal::icu::impl::Trie2$ValueMapper* mapper);
	virtual int32_t rangeEnd(int32_t start, int32_t limitp, int32_t val);
	static ::jdk::internal::icu::impl::Trie2$ValueMapper* defaultValueMapper;
	::jdk::internal::icu::impl::Trie2$UTrie2Header* header = nullptr;
	$chars* index = nullptr;
	int32_t data16 = 0;
	$ints* data32 = nullptr;
	int32_t indexLength = 0;
	int32_t dataLength = 0;
	int32_t index2NullOffset = 0;
	int32_t initialValue = 0;
	int32_t errorValue = 0;
	int32_t highStart = 0;
	int32_t highValueIndex = 0;
	int32_t dataNullOffset = 0;
	static const int32_t UTRIE2_OPTIONS_VALUE_BITS_MASK = 15;
	static const int32_t UTRIE2_SHIFT_1 = 11; // 6 + 5
	static const int32_t UTRIE2_SHIFT_2 = 5;
	static const int32_t UTRIE2_SHIFT_1_2 = 6; // UTRIE2_SHIFT_1 - UTRIE2_SHIFT_2
	static const int32_t UTRIE2_OMITTED_BMP_INDEX_1_LENGTH = 32; // 65536 >> UTRIE2_SHIFT_1
	static const int32_t UTRIE2_INDEX_2_BLOCK_LENGTH = 64; // 1 << UTRIE2_SHIFT_1_2
	static const int32_t UTRIE2_INDEX_2_MASK = 63; // UTRIE2_INDEX_2_BLOCK_LENGTH - 1
	static const int32_t UTRIE2_DATA_BLOCK_LENGTH = 32; // 1 << UTRIE2_SHIFT_2
	static const int32_t UTRIE2_DATA_MASK = 31; // UTRIE2_DATA_BLOCK_LENGTH - 1
	static const int32_t UTRIE2_INDEX_SHIFT = 2;
	static const int32_t UTRIE2_DATA_GRANULARITY = 4; // 1 << UTRIE2_INDEX_SHIFT
	static const int32_t UTRIE2_LSCP_INDEX_2_OFFSET = 2048; // 65536 >> UTRIE2_SHIFT_2
	static const int32_t UTRIE2_LSCP_INDEX_2_LENGTH = 32; // 1024 >> UTRIE2_SHIFT_2
	static const int32_t UTRIE2_INDEX_2_BMP_LENGTH = 2080; // UTRIE2_LSCP_INDEX_2_OFFSET + UTRIE2_LSCP_INDEX_2_LENGTH
	static const int32_t UTRIE2_UTF8_2B_INDEX_2_OFFSET = UTRIE2_INDEX_2_BMP_LENGTH;
	static const int32_t UTRIE2_UTF8_2B_INDEX_2_LENGTH = 32; // 2048 >> 6
	static const int32_t UTRIE2_INDEX_1_OFFSET = 2112; // UTRIE2_UTF8_2B_INDEX_2_OFFSET + UTRIE2_UTF8_2B_INDEX_2_LENGTH
	static const int32_t UTRIE2_BAD_UTF8_DATA_OFFSET = 128;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("UTRIE2_BAD_UTF8_DATA_OFFSET")
#pragma pop_macro("UTRIE2_DATA_BLOCK_LENGTH")
#pragma pop_macro("UTRIE2_DATA_GRANULARITY")
#pragma pop_macro("UTRIE2_DATA_MASK")
#pragma pop_macro("UTRIE2_INDEX_1_OFFSET")
#pragma pop_macro("UTRIE2_INDEX_2_BLOCK_LENGTH")
#pragma pop_macro("UTRIE2_INDEX_2_BMP_LENGTH")
#pragma pop_macro("UTRIE2_INDEX_2_MASK")
#pragma pop_macro("UTRIE2_INDEX_SHIFT")
#pragma pop_macro("UTRIE2_LSCP_INDEX_2_LENGTH")
#pragma pop_macro("UTRIE2_LSCP_INDEX_2_OFFSET")
#pragma pop_macro("UTRIE2_OMITTED_BMP_INDEX_1_LENGTH")
#pragma pop_macro("UTRIE2_OPTIONS_VALUE_BITS_MASK")
#pragma pop_macro("UTRIE2_SHIFT_1")
#pragma pop_macro("UTRIE2_SHIFT_1_2")
#pragma pop_macro("UTRIE2_SHIFT_2")

#endif // _jdk_internal_icu_impl_Trie2_h_