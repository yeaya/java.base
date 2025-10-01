#ifndef _jdk_internal_icu_text_StringPrep_h_
#define _jdk_internal_icu_text_StringPrep_h_
//$ class jdk.internal.icu.text.StringPrep
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INDEX_TOP")
#undef INDEX_TOP
#pragma push_macro("DATA_BUFFER_SIZE")
#undef DATA_BUFFER_SIZE
#pragma push_macro("NORMALIZATION_ON")
#undef NORMALIZATION_ON
#pragma push_macro("TWO_UCHARS_MAPPING_INDEX_START")
#undef TWO_UCHARS_MAPPING_INDEX_START
#pragma push_macro("THREE_UCHARS_MAPPING_INDEX_START")
#undef THREE_UCHARS_MAPPING_INDEX_START
#pragma push_macro("NORM_CORRECTNS_LAST_UNI_VERSION")
#undef NORM_CORRECTNS_LAST_UNI_VERSION
#pragma push_macro("TYPE_LIMIT")
#undef TYPE_LIMIT
#pragma push_macro("PROHIBITED")
#undef PROHIBITED
#pragma push_macro("OPTIONS")
#undef OPTIONS
#pragma push_macro("INDEX_MAPPING_DATA_SIZE")
#undef INDEX_MAPPING_DATA_SIZE
#pragma push_macro("TYPE_THRESHOLD")
#undef TYPE_THRESHOLD
#pragma push_macro("UNASSIGNED")
#undef UNASSIGNED
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("CHECK_BIDI_ON")
#undef CHECK_BIDI_ON
#pragma push_macro("INDEX_TRIE_SIZE")
#undef INDEX_TRIE_SIZE
#pragma push_macro("ALLOW_UNASSIGNED")
#undef ALLOW_UNASSIGNED
#pragma push_macro("MAX_INDEX_TOP_LENGTH")
#undef MAX_INDEX_TOP_LENGTH
#pragma push_macro("FOUR_UCHARS_MAPPING_INDEX_START")
#undef FOUR_UCHARS_MAPPING_INDEX_START
#pragma push_macro("MAP")
#undef MAP
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("MAX_INDEX_VALUE")
#undef MAX_INDEX_VALUE
#pragma push_macro("ONE_UCHAR_MAPPING_INDEX_START")
#undef ONE_UCHAR_MAPPING_INDEX_START

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class StringPrep$StringPrepTrieImpl;
				class StringPrep$Values;
				class UCharacterIterator;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $export StringPrep : public ::java::lang::Object {
	$class(StringPrep, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringPrep();
	void init$(::java::io::InputStream* inputStream);
	char16_t getCodePointValue(int32_t ch);
	static void getValues(char16_t trieWord, ::jdk::internal::icu::text::StringPrep$Values* values);
	static ::jdk::internal::icu::util::VersionInfo* getVersionInfo(int32_t comp);
	static ::jdk::internal::icu::util::VersionInfo* getVersionInfo($bytes* version);
	::java::lang::StringBuffer* map(::jdk::internal::icu::text::UCharacterIterator* iter, int32_t options);
	::java::lang::StringBuffer* normalize(::java::lang::StringBuffer* src);
	::java::lang::StringBuffer* prepare(::jdk::internal::icu::text::UCharacterIterator* src, int32_t options);
	static const int32_t DEFAULT = 0;
	static const int32_t ALLOW_UNASSIGNED = 1;
	static const int32_t UNASSIGNED = 0;
	static const int32_t MAP = 1;
	static const int32_t PROHIBITED = 2;
	static const int32_t DELETE = 3;
	static const int32_t TYPE_LIMIT = 4;
	static const int32_t NORMALIZATION_ON = 1;
	static const int32_t CHECK_BIDI_ON = 2;
	static const int32_t TYPE_THRESHOLD = 0x0000FFF0;
	static const int32_t MAX_INDEX_VALUE = 16319;
	static const int32_t MAX_INDEX_TOP_LENGTH = 3;
	static const int32_t INDEX_TRIE_SIZE = 0;
	static const int32_t INDEX_MAPPING_DATA_SIZE = 1;
	static const int32_t NORM_CORRECTNS_LAST_UNI_VERSION = 2;
	static const int32_t ONE_UCHAR_MAPPING_INDEX_START = 3;
	static const int32_t TWO_UCHARS_MAPPING_INDEX_START = 4;
	static const int32_t THREE_UCHARS_MAPPING_INDEX_START = 5;
	static const int32_t FOUR_UCHARS_MAPPING_INDEX_START = 6;
	static const int32_t OPTIONS = 7;
	static const int32_t INDEX_TOP = 16;
	static const int32_t DATA_BUFFER_SIZE = 25000;
	::jdk::internal::icu::text::StringPrep$StringPrepTrieImpl* sprepTrieImpl = nullptr;
	$ints* indexes = nullptr;
	$chars* mappingData = nullptr;
	$bytes* formatVersion = nullptr;
	::jdk::internal::icu::util::VersionInfo* sprepUniVer = nullptr;
	::jdk::internal::icu::util::VersionInfo* normCorrVer = nullptr;
	bool doNFKC = false;
	bool checkBiDi = false;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("INDEX_TOP")
#pragma pop_macro("DATA_BUFFER_SIZE")
#pragma pop_macro("NORMALIZATION_ON")
#pragma pop_macro("TWO_UCHARS_MAPPING_INDEX_START")
#pragma pop_macro("THREE_UCHARS_MAPPING_INDEX_START")
#pragma pop_macro("NORM_CORRECTNS_LAST_UNI_VERSION")
#pragma pop_macro("TYPE_LIMIT")
#pragma pop_macro("PROHIBITED")
#pragma pop_macro("OPTIONS")
#pragma pop_macro("INDEX_MAPPING_DATA_SIZE")
#pragma pop_macro("TYPE_THRESHOLD")
#pragma pop_macro("UNASSIGNED")
#pragma pop_macro("DELETE")
#pragma pop_macro("CHECK_BIDI_ON")
#pragma pop_macro("INDEX_TRIE_SIZE")
#pragma pop_macro("ALLOW_UNASSIGNED")
#pragma pop_macro("MAX_INDEX_TOP_LENGTH")
#pragma pop_macro("FOUR_UCHARS_MAPPING_INDEX_START")
#pragma pop_macro("MAP")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("MAX_INDEX_VALUE")
#pragma pop_macro("ONE_UCHAR_MAPPING_INDEX_START")

#endif // _jdk_internal_icu_text_StringPrep_h_