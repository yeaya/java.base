#ifndef _jdk_internal_icu_impl_NormalizerImpl_h_
#define _jdk_internal_icu_impl_NormalizerImpl_h_
//$ class jdk.internal.icu.impl.NormalizerImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMP_1_LAST_TUPLE")
#undef COMP_1_LAST_TUPLE
#pragma push_macro("COMP_1_TRAIL_LIMIT")
#undef COMP_1_TRAIL_LIMIT
#pragma push_macro("COMP_1_TRAIL_MASK")
#undef COMP_1_TRAIL_MASK
#pragma push_macro("COMP_1_TRAIL_SHIFT")
#undef COMP_1_TRAIL_SHIFT
#pragma push_macro("COMP_1_TRIPLE")
#undef COMP_1_TRIPLE
#pragma push_macro("COMP_2_TRAIL_MASK")
#undef COMP_2_TRAIL_MASK
#pragma push_macro("COMP_2_TRAIL_SHIFT")
#undef COMP_2_TRAIL_SHIFT
#pragma push_macro("DATA_FORMAT")
#undef DATA_FORMAT
#pragma push_macro("DELTA_SHIFT")
#undef DELTA_SHIFT
#pragma push_macro("DELTA_TCCC_0")
#undef DELTA_TCCC_0
#pragma push_macro("DELTA_TCCC_1")
#undef DELTA_TCCC_1
#pragma push_macro("DELTA_TCCC_GT_1")
#undef DELTA_TCCC_GT_1
#pragma push_macro("DELTA_TCCC_MASK")
#undef DELTA_TCCC_MASK
#pragma push_macro("HAS_COMP_BOUNDARY_AFTER")
#undef HAS_COMP_BOUNDARY_AFTER
#pragma push_macro("INERT")
#undef INERT
#pragma push_macro("IS_ACCEPTABLE")
#undef IS_ACCEPTABLE
#pragma push_macro("IX_COUNT")
#undef IX_COUNT
#pragma push_macro("IX_EXTRA_DATA_OFFSET")
#undef IX_EXTRA_DATA_OFFSET
#pragma push_macro("IX_LIMIT_NO_NO")
#undef IX_LIMIT_NO_NO
#pragma push_macro("IX_MIN_COMP_NO_MAYBE_CP")
#undef IX_MIN_COMP_NO_MAYBE_CP
#pragma push_macro("IX_MIN_DECOMP_NO_CP")
#undef IX_MIN_DECOMP_NO_CP
#pragma push_macro("IX_MIN_LCCC_CP")
#undef IX_MIN_LCCC_CP
#pragma push_macro("IX_MIN_MAYBE_YES")
#undef IX_MIN_MAYBE_YES
#pragma push_macro("IX_MIN_NO_NO")
#undef IX_MIN_NO_NO
#pragma push_macro("IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE")
#undef IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE
#pragma push_macro("IX_MIN_NO_NO_COMP_NO_MAYBE_CC")
#undef IX_MIN_NO_NO_COMP_NO_MAYBE_CC
#pragma push_macro("IX_MIN_NO_NO_EMPTY")
#undef IX_MIN_NO_NO_EMPTY
#pragma push_macro("IX_MIN_YES_NO")
#undef IX_MIN_YES_NO
#pragma push_macro("IX_MIN_YES_NO_MAPPINGS_ONLY")
#undef IX_MIN_YES_NO_MAPPINGS_ONLY
#pragma push_macro("IX_NORM_TRIE_OFFSET")
#undef IX_NORM_TRIE_OFFSET
#pragma push_macro("IX_RESERVED3_OFFSET")
#undef IX_RESERVED3_OFFSET
#pragma push_macro("IX_SMALL_FCD_OFFSET")
#undef IX_SMALL_FCD_OFFSET
#pragma push_macro("IX_TOTAL_SIZE")
#undef IX_TOTAL_SIZE
#pragma push_macro("JAMO_L")
#undef JAMO_L
#pragma push_macro("JAMO_VT")
#undef JAMO_VT
#pragma push_macro("MAPPING_HAS_CCC_LCCC_WORD")
#undef MAPPING_HAS_CCC_LCCC_WORD
#pragma push_macro("MAPPING_HAS_RAW_MAPPING")
#undef MAPPING_HAS_RAW_MAPPING
#pragma push_macro("MAPPING_LENGTH_MASK")
#undef MAPPING_LENGTH_MASK
#pragma push_macro("MAX_DELTA")
#undef MAX_DELTA
#pragma push_macro("MIN_CCC_LCCC_CP")
#undef MIN_CCC_LCCC_CP
#pragma push_macro("MIN_NORMAL_MAYBE_YES")
#undef MIN_NORMAL_MAYBE_YES
#pragma push_macro("MIN_YES_YES_WITH_CC")
#undef MIN_YES_YES_WITH_CC
#pragma push_macro("OFFSET_SHIFT")
#undef OFFSET_SHIFT

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
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
			namespace impl {
				class NormalizerImpl$IsAcceptable;
				class NormalizerImpl$NextCCArgs;
				class NormalizerImpl$PrevArgs;
				class NormalizerImpl$ReorderingBuffer;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointTrie$Fast16;
				class VersionInfo;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class NormalizerImpl : public ::java::lang::Object {
	$class(NormalizerImpl, 0, ::java::lang::Object)
public:
	NormalizerImpl();
	void init$();
	static $String* canonicalDecomposeWithSingleQuotation($String* string);
	static int32_t combine($String* compositions, int32_t list, int32_t trail);
	bool compose(::java::lang::CharSequence* s, int32_t src, int32_t limit, bool onlyContiguous, bool doCompose, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	void composeAndAppend(::java::lang::CharSequence* s, bool doCompose, bool onlyContiguous, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	int32_t composeQuickCheck(::java::lang::CharSequence* s, int32_t src, int32_t limit, bool onlyContiguous, bool doSpan);
	void decompose(::java::lang::CharSequence* s, int32_t src, int32_t limit, ::java::lang::StringBuilder* dest, int32_t destLengthEstimate);
	int32_t decompose(::java::lang::CharSequence* s, int32_t src, int32_t limit, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	void decompose(int32_t c, int32_t norm16, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	void decomposeAndAppend(::java::lang::CharSequence* s, bool doDecompose, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	int32_t decomposeShort(::java::lang::CharSequence* s, int32_t src, int32_t limit, bool stopAtCompBoundary, bool onlyContiguous, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	int32_t findNextCompBoundary(::java::lang::CharSequence* s, int32_t p, int32_t limit, bool onlyContiguous);
	int32_t findNextFCDBoundary(::java::lang::CharSequence* s, int32_t p, int32_t limit);
	int32_t findPreviousCompBoundary(::java::lang::CharSequence* s, int32_t p, bool onlyContiguous);
	int32_t getCC(int32_t norm16);
	int32_t getCCFromNoNo(int32_t norm16);
	static int32_t getCCFromNormalYesOrMaybe(int32_t norm16);
	static int32_t getCCFromYesOrMaybe(int32_t norm16);
	int32_t getCCFromYesOrMaybeCP(int32_t c);
	int32_t getCompositionsListForComposite(int32_t norm16);
	int32_t getCompositionsListForDecompYes(int32_t norm16);
	static int32_t getDecompose($ints* chars, $StringArray* decomps);
	$String* getDecomposition(int32_t c);
	int32_t getFCD16(int32_t c);
	int32_t getFCD16FromNormData(int32_t c);
	static int32_t getNextCC(::jdk::internal::icu::impl::NormalizerImpl$NextCCArgs* args);
	int32_t getNorm16(int32_t c);
	static int32_t getPrevCC(::jdk::internal::icu::impl::NormalizerImpl$PrevArgs* args);
	int32_t getPreviousTrailCC(::java::lang::CharSequence* s, int32_t start, int32_t p);
	int32_t getRawNorm16(int32_t c);
	int32_t getTrailCCFromCompYesAndZeroCC(int32_t norm16);
	int32_t hangulLVT();
	bool hasCompBoundaryAfter(int32_t c, bool onlyContiguous);
	bool hasCompBoundaryAfter(::java::lang::CharSequence* s, int32_t start, int32_t p, bool onlyContiguous);
	bool hasCompBoundaryBefore(int32_t c);
	bool hasCompBoundaryBefore(int32_t c, int32_t norm16);
	bool hasCompBoundaryBefore(::java::lang::CharSequence* s, int32_t src, int32_t limit);
	bool hasDecompBoundaryAfter(int32_t c);
	bool hasDecompBoundaryBefore(int32_t c);
	static int32_t insertOrdered($chars* source, int32_t start, int32_t current, int32_t p, char16_t c1, char16_t c2, int32_t cc);
	bool isAlgorithmicNoNo(int32_t norm16);
	bool isCompNo(int32_t norm16);
	bool isCompYesAndZeroCC(int32_t norm16);
	bool isDecompInert(int32_t c);
	bool isDecompNoAlgorithmic(int32_t norm16);
	bool isDecompYes(int32_t norm16);
	bool isDecompYesAndZeroCC(int32_t norm16);
	bool isHangulLV(int32_t norm16);
	bool isHangulLVT(int32_t norm16);
	static bool isInert(int32_t norm16);
	static bool isJamoVT(int32_t norm16);
	bool isMaybe(int32_t norm16);
	bool isMaybeOrNonZeroCC(int32_t norm16);
	bool isMostDecompYesAndZeroCC(int32_t norm16);
	bool isTrailCC01ForCompBoundaryAfter(int32_t norm16);
	::jdk::internal::icu::impl::NormalizerImpl* load(::java::nio::ByteBuffer* bytes);
	::jdk::internal::icu::impl::NormalizerImpl* load($String* name);
	int32_t makeFCD(::java::lang::CharSequence* s, int32_t src, int32_t limit, ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer);
	int32_t mapAlgorithmic(int32_t c, int32_t norm16);
	static int32_t mergeOrdered($chars* source, int32_t start, int32_t current, $chars* data, int32_t next, int32_t limit);
	static bool needSingleQuotation(char16_t c);
	bool norm16HasCompBoundaryAfter(int32_t norm16, bool onlyContiguous);
	bool norm16HasCompBoundaryBefore(int32_t norm16);
	bool norm16HasDecompBoundaryAfter(int32_t norm16);
	bool norm16HasDecompBoundaryBefore(int32_t norm16);
	void recompose(::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer* buffer, int32_t recomposeStartIndex, bool onlyContiguous);
	bool singleLeadMightHaveNonZeroFCD16(int32_t lead);
	static bool $assertionsDisabled;
	static ::jdk::internal::icu::impl::NormalizerImpl$IsAcceptable* IS_ACCEPTABLE;
	static const int32_t DATA_FORMAT = 0x4E726D32;
	static const int32_t MIN_YES_YES_WITH_CC = 0x0000FE02;
	static const int32_t JAMO_VT = 0x0000FE00;
	static const int32_t MIN_NORMAL_MAYBE_YES = 0x0000FC00;
	static const int32_t JAMO_L = 2;
	static const int32_t INERT = 1;
	static const int32_t HAS_COMP_BOUNDARY_AFTER = 1;
	static const int32_t OFFSET_SHIFT = 1;
	static const int32_t DELTA_TCCC_0 = 0;
	static const int32_t DELTA_TCCC_1 = 2;
	static const int32_t DELTA_TCCC_GT_1 = 4;
	static const int32_t DELTA_TCCC_MASK = 6;
	static const int32_t DELTA_SHIFT = 3;
	static const int32_t MAX_DELTA = 64;
	static const int32_t IX_NORM_TRIE_OFFSET = 0;
	static const int32_t IX_EXTRA_DATA_OFFSET = 1;
	static const int32_t IX_SMALL_FCD_OFFSET = 2;
	static const int32_t IX_RESERVED3_OFFSET = 3;
	static const int32_t IX_TOTAL_SIZE = 7;
	static const int32_t MIN_CCC_LCCC_CP = 768;
	static const int32_t IX_MIN_DECOMP_NO_CP = 8;
	static const int32_t IX_MIN_COMP_NO_MAYBE_CP = 9;
	static const int32_t IX_MIN_YES_NO = 10;
	static const int32_t IX_MIN_NO_NO = 11;
	static const int32_t IX_LIMIT_NO_NO = 12;
	static const int32_t IX_MIN_MAYBE_YES = 13;
	static const int32_t IX_MIN_YES_NO_MAPPINGS_ONLY = 14;
	static const int32_t IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE = 15;
	static const int32_t IX_MIN_NO_NO_COMP_NO_MAYBE_CC = 16;
	static const int32_t IX_MIN_NO_NO_EMPTY = 17;
	static const int32_t IX_MIN_LCCC_CP = 18;
	static const int32_t IX_COUNT = 20;
	static const int32_t MAPPING_HAS_CCC_LCCC_WORD = 128;
	static const int32_t MAPPING_HAS_RAW_MAPPING = 64;
	static const int32_t MAPPING_LENGTH_MASK = 31;
	static const int32_t COMP_1_LAST_TUPLE = 32768;
	static const int32_t COMP_1_TRIPLE = 1;
	static const int32_t COMP_1_TRAIL_LIMIT = 13312;
	static const int32_t COMP_1_TRAIL_MASK = 32766;
	static const int32_t COMP_1_TRAIL_SHIFT = 9;
	static const int32_t COMP_2_TRAIL_SHIFT = 6;
	static const int32_t COMP_2_TRAIL_MASK = 0x0000FFC0;
	::jdk::internal::icu::util::VersionInfo* dataVersion = nullptr;
	int32_t minDecompNoCP = 0;
	int32_t minCompNoMaybeCP = 0;
	int32_t minLcccCP = 0;
	int32_t minYesNo = 0;
	int32_t minYesNoMappingsOnly = 0;
	int32_t minNoNo = 0;
	int32_t minNoNoCompBoundaryBefore = 0;
	int32_t minNoNoCompNoMaybeCC = 0;
	int32_t minNoNoEmpty = 0;
	int32_t limitNoNo = 0;
	int32_t centerNoNoDelta = 0;
	int32_t minMaybeYes = 0;
	::jdk::internal::icu::util::CodePointTrie$Fast16* normTrie = nullptr;
	$String* maybeYesCompositions = nullptr;
	$String* extraData = nullptr;
	$bytes* smallFCD = nullptr;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("COMP_1_LAST_TUPLE")
#pragma pop_macro("COMP_1_TRAIL_LIMIT")
#pragma pop_macro("COMP_1_TRAIL_MASK")
#pragma pop_macro("COMP_1_TRAIL_SHIFT")
#pragma pop_macro("COMP_1_TRIPLE")
#pragma pop_macro("COMP_2_TRAIL_MASK")
#pragma pop_macro("COMP_2_TRAIL_SHIFT")
#pragma pop_macro("DATA_FORMAT")
#pragma pop_macro("DELTA_SHIFT")
#pragma pop_macro("DELTA_TCCC_0")
#pragma pop_macro("DELTA_TCCC_1")
#pragma pop_macro("DELTA_TCCC_GT_1")
#pragma pop_macro("DELTA_TCCC_MASK")
#pragma pop_macro("HAS_COMP_BOUNDARY_AFTER")
#pragma pop_macro("INERT")
#pragma pop_macro("IS_ACCEPTABLE")
#pragma pop_macro("IX_COUNT")
#pragma pop_macro("IX_EXTRA_DATA_OFFSET")
#pragma pop_macro("IX_LIMIT_NO_NO")
#pragma pop_macro("IX_MIN_COMP_NO_MAYBE_CP")
#pragma pop_macro("IX_MIN_DECOMP_NO_CP")
#pragma pop_macro("IX_MIN_LCCC_CP")
#pragma pop_macro("IX_MIN_MAYBE_YES")
#pragma pop_macro("IX_MIN_NO_NO")
#pragma pop_macro("IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE")
#pragma pop_macro("IX_MIN_NO_NO_COMP_NO_MAYBE_CC")
#pragma pop_macro("IX_MIN_NO_NO_EMPTY")
#pragma pop_macro("IX_MIN_YES_NO")
#pragma pop_macro("IX_MIN_YES_NO_MAPPINGS_ONLY")
#pragma pop_macro("IX_NORM_TRIE_OFFSET")
#pragma pop_macro("IX_RESERVED3_OFFSET")
#pragma pop_macro("IX_SMALL_FCD_OFFSET")
#pragma pop_macro("IX_TOTAL_SIZE")
#pragma pop_macro("JAMO_L")
#pragma pop_macro("JAMO_VT")
#pragma pop_macro("MAPPING_HAS_CCC_LCCC_WORD")
#pragma pop_macro("MAPPING_HAS_RAW_MAPPING")
#pragma pop_macro("MAPPING_LENGTH_MASK")
#pragma pop_macro("MAX_DELTA")
#pragma pop_macro("MIN_CCC_LCCC_CP")
#pragma pop_macro("MIN_NORMAL_MAYBE_YES")
#pragma pop_macro("MIN_YES_YES_WITH_CC")
#pragma pop_macro("OFFSET_SHIFT")

#endif // _jdk_internal_icu_impl_NormalizerImpl_h_