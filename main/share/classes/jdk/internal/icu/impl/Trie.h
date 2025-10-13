#ifndef _jdk_internal_icu_impl_Trie_h_
#define _jdk_internal_icu_impl_Trie_h_
//$ class jdk.internal.icu.impl.Trie
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DATA_BLOCK_LENGTH")
#undef DATA_BLOCK_LENGTH
#pragma push_macro("HEADER_OPTIONS_DATA_IS_32_BIT_")
#undef HEADER_OPTIONS_DATA_IS_32_BIT_
#pragma push_macro("HEADER_OPTIONS_INDEX_SHIFT_")
#undef HEADER_OPTIONS_INDEX_SHIFT_
#pragma push_macro("HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_")
#undef HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_
#pragma push_macro("HEADER_OPTIONS_SHIFT_MASK_")
#undef HEADER_OPTIONS_SHIFT_MASK_
#pragma push_macro("HEADER_SIGNATURE_")
#undef HEADER_SIGNATURE_
#pragma push_macro("INDEX_STAGE_1_SHIFT_")
#undef INDEX_STAGE_1_SHIFT_
#pragma push_macro("INDEX_STAGE_2_SHIFT_")
#undef INDEX_STAGE_2_SHIFT_
#pragma push_macro("INDEX_STAGE_3_MASK_")
#undef INDEX_STAGE_3_MASK_
#pragma push_macro("LEAD_INDEX_OFFSET_")
#undef LEAD_INDEX_OFFSET_
#pragma push_macro("SURROGATE_MASK_")
#undef SURROGATE_MASK_

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

class Trie : public ::java::lang::Object {
	$class(Trie, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trie();
	void init$(::java::io::InputStream* inputStream, ::jdk::internal::icu::impl::Trie$DataManipulate* dataManipulate);
	bool checkHeader(int32_t signature);
	int32_t getBMPOffset(char16_t ch);
	int32_t getCodePointOffset(int32_t ch);
	int32_t getLeadOffset(char16_t ch);
	int32_t getRawOffset(int32_t offset, char16_t ch);
	virtual int32_t getSurrogateOffset(char16_t lead, char16_t trail) {return 0;}
	bool isCharTrie();
	virtual void unserialize(::java::io::InputStream* inputStream);
	static const int32_t LEAD_INDEX_OFFSET_ = 320; // 10240 >> 5
	static const int32_t INDEX_STAGE_1_SHIFT_ = 5;
	static const int32_t INDEX_STAGE_2_SHIFT_ = 2;
	static const int32_t DATA_BLOCK_LENGTH = 32; // 1 << INDEX_STAGE_1_SHIFT_
	static const int32_t INDEX_STAGE_3_MASK_ = 31; // DATA_BLOCK_LENGTH - 1
	static const int32_t SURROGATE_MASK_ = 1023;
	$chars* m_index_ = nullptr;
	::jdk::internal::icu::impl::Trie$DataManipulate* m_dataManipulate_ = nullptr;
	int32_t m_dataOffset_ = 0;
	int32_t m_dataLength_ = 0;
	static const int32_t HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_ = 512;
	static const int32_t HEADER_SIGNATURE_ = 0x54726965;
	static const int32_t HEADER_OPTIONS_SHIFT_MASK_ = 15;
	static const int32_t HEADER_OPTIONS_INDEX_SHIFT_ = 4;
	static const int32_t HEADER_OPTIONS_DATA_IS_32_BIT_ = 256;
	bool m_isLatin1Linear_ = false;
	int32_t m_options_ = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("DATA_BLOCK_LENGTH")
#pragma pop_macro("HEADER_OPTIONS_DATA_IS_32_BIT_")
#pragma pop_macro("HEADER_OPTIONS_INDEX_SHIFT_")
#pragma pop_macro("HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_")
#pragma pop_macro("HEADER_OPTIONS_SHIFT_MASK_")
#pragma pop_macro("HEADER_SIGNATURE_")
#pragma pop_macro("INDEX_STAGE_1_SHIFT_")
#pragma pop_macro("INDEX_STAGE_2_SHIFT_")
#pragma pop_macro("INDEX_STAGE_3_MASK_")
#pragma pop_macro("LEAD_INDEX_OFFSET_")
#pragma pop_macro("SURROGATE_MASK_")

#endif // _jdk_internal_icu_impl_Trie_h_