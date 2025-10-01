#ifndef _jdk_internal_icu_impl_UBiDiProps_h_
#define _jdk_internal_icu_impl_UBiDiProps_h_
//$ class jdk.internal.icu.impl.UBiDiProps
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <jdk/internal/icu/util/VersionInfo.h>

#pragma push_macro("IX_JG_LIMIT2")
#undef IX_JG_LIMIT2
#pragma push_macro("JT_MASK")
#undef JT_MASK
#pragma push_macro("MIRROR_INDEX_SHIFT")
#undef MIRROR_INDEX_SHIFT
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("FMT")
#undef FMT
#pragma push_macro("IX_MIRROR_LENGTH")
#undef IX_MIRROR_LENGTH
#pragma push_macro("CLASS_MASK")
#undef CLASS_MASK
#pragma push_macro("ESC_MIRROR_DELTA")
#undef ESC_MIRROR_DELTA
#pragma push_macro("IX_JG_START2")
#undef IX_JG_START2
#pragma push_macro("MIRROR_DELTA_SHIFT")
#undef MIRROR_DELTA_SHIFT
#pragma push_macro("BPT_MASK")
#undef BPT_MASK
#pragma push_macro("IX_JG_START")
#undef IX_JG_START
#pragma push_macro("IX_JG_LIMIT")
#undef IX_JG_LIMIT
#pragma push_macro("IX_TOP")
#undef IX_TOP
#pragma push_macro("IX_TRIE_SIZE")
#undef IX_TRIE_SIZE
#pragma push_macro("BPT_SHIFT")
#undef BPT_SHIFT
#pragma push_macro("DATA_FILE_NAME")
#undef DATA_FILE_NAME
#pragma push_macro("JT_SHIFT")
#undef JT_SHIFT

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class Trie2_16;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class UBiDiProps : public ::java::lang::Object {
	$class(UBiDiProps, 0, ::java::lang::Object)
public:
	UBiDiProps();
	void init$();
	int32_t getClass(int32_t c);
	static int32_t getClassFromProps(int32_t props);
	static bool getFlagFromProps(int32_t props, int32_t shift);
	int32_t getJoiningGroup(int32_t c);
	int32_t getJoiningType(int32_t c);
	int32_t getMirror(int32_t c, int32_t props);
	int32_t getMirror(int32_t c);
	static int32_t getMirrorCodePoint(int32_t m);
	static int32_t getMirrorDeltaFromProps(int32_t props);
	static int32_t getMirrorIndex(int32_t m);
	int32_t getPairedBracket(int32_t c);
	int32_t getPairedBracketType(int32_t c);
	void readData(::java::nio::ByteBuffer* bytes);
	$ints* indexes = nullptr;
	$ints* mirrors = nullptr;
	$bytes* jgArray = nullptr;
	$bytes* jgArray2 = nullptr;
	::jdk::internal::icu::impl::Trie2_16* trie = nullptr;
	static $String* DATA_FILE_NAME;
	static const int32_t FMT = 0x42694469;
	static const int32_t IX_TRIE_SIZE = 2;
	static const int32_t IX_MIRROR_LENGTH = 3;
	static const int32_t IX_JG_START = 4;
	static const int32_t IX_JG_LIMIT = 5;
	static const int32_t IX_JG_START2 = 6;
	static const int32_t IX_JG_LIMIT2 = 7;
	static const int32_t IX_TOP = 16;
	static const int32_t JT_SHIFT = 5;
	static const int32_t BPT_SHIFT = 8;
	static const int32_t MIRROR_DELTA_SHIFT = 13;
	static const int32_t CLASS_MASK = 31;
	static const int32_t JT_MASK = 224;
	static const int32_t BPT_MASK = 768;
	static const int32_t ESC_MIRROR_DELTA = (-4);
	static const int32_t MIRROR_INDEX_SHIFT = 21;
	static ::jdk::internal::icu::impl::UBiDiProps* INSTANCE;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("IX_JG_LIMIT2")
#pragma pop_macro("JT_MASK")
#pragma pop_macro("MIRROR_INDEX_SHIFT")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("FMT")
#pragma pop_macro("IX_MIRROR_LENGTH")
#pragma pop_macro("CLASS_MASK")
#pragma pop_macro("ESC_MIRROR_DELTA")
#pragma pop_macro("IX_JG_START2")
#pragma pop_macro("MIRROR_DELTA_SHIFT")
#pragma pop_macro("BPT_MASK")
#pragma pop_macro("IX_JG_START")
#pragma pop_macro("IX_JG_LIMIT")
#pragma pop_macro("IX_TOP")
#pragma pop_macro("IX_TRIE_SIZE")
#pragma pop_macro("BPT_SHIFT")
#pragma pop_macro("DATA_FILE_NAME")
#pragma pop_macro("JT_SHIFT")

#endif // _jdk_internal_icu_impl_UBiDiProps_h_