#ifndef _jdk_internal_icu_text_BidiBase_h_
#define _jdk_internal_icu_text_BidiBase_h_
//$ class jdk.internal.icu.text.BidiBase
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AL")
#undef AL
#pragma push_macro("AN")
#undef AN
#pragma push_macro("B")
#undef B
#pragma push_macro("BIDI_PAIRED_BRACKET_TYPE")
#undef BIDI_PAIRED_BRACKET_TYPE
#pragma push_macro("BN")
#undef BN
#pragma push_macro("CHAR_DIRECTION_COUNT")
#undef CHAR_DIRECTION_COUNT
#pragma push_macro("CR")
#undef CR
#pragma push_macro("CS")
#undef CS
#pragma push_macro("DIRECTION_DEFAULT_RIGHT_TO_LEFT")
#undef DIRECTION_DEFAULT_RIGHT_TO_LEFT
#pragma push_macro("DO_MIRRORING")
#undef DO_MIRRORING
#pragma push_macro("EN")
#undef EN
#pragma push_macro("ENL")
#undef ENL
#pragma push_macro("ENR")
#undef ENR
#pragma push_macro("ES")
#undef ES
#pragma push_macro("ET")
#undef ET
#pragma push_macro("FIRSTALLOC")
#undef FIRSTALLOC
#pragma push_macro("FOUND_L")
#undef FOUND_L
#pragma push_macro("FOUND_R")
#undef FOUND_R
#pragma push_macro("FSI")
#undef FSI
#pragma push_macro("IMPTABLEVELS_COLUMNS")
#undef IMPTABLEVELS_COLUMNS
#pragma push_macro("IMPTABLEVELS_RES")
#undef IMPTABLEVELS_RES
#pragma push_macro("IMPTABPROPS_COLUMNS")
#undef IMPTABPROPS_COLUMNS
#pragma push_macro("IMPTABPROPS_RES")
#undef IMPTABPROPS_RES
#pragma push_macro("INSERT_LRM_FOR_NUMERIC")
#undef INSERT_LRM_FOR_NUMERIC
#pragma push_macro("ISOLATE")
#undef ISOLATE
#pragma push_macro("KEEP_BASE_COMBINING")
#undef KEEP_BASE_COMBINING
#pragma push_macro("L")
#undef L
#pragma push_macro("LEVEL_DEFAULT_LTR")
#undef LEVEL_DEFAULT_LTR
#pragma push_macro("LEVEL_DEFAULT_RTL")
#undef LEVEL_DEFAULT_RTL
#pragma push_macro("LEVEL_OVERRIDE")
#undef LEVEL_OVERRIDE
#pragma push_macro("LF")
#undef LF
#pragma push_macro("LOOKING_FOR_PDI")
#undef LOOKING_FOR_PDI
#pragma push_macro("LRE")
#undef LRE
#pragma push_macro("LRI")
#undef LRI
#pragma push_macro("LRM_AFTER")
#undef LRM_AFTER
#pragma push_macro("LRM_BEFORE")
#undef LRM_BEFORE
#pragma push_macro("LRO")
#undef LRO
#pragma push_macro("LTR")
#undef LTR
#pragma push_macro("MAP_NOWHERE")
#undef MAP_NOWHERE
#pragma push_macro("MASK_BN_EXPLICIT")
#undef MASK_BN_EXPLICIT
#pragma push_macro("MASK_B_S")
#undef MASK_B_S
#pragma push_macro("MASK_EMBEDDING")
#undef MASK_EMBEDDING
#pragma push_macro("MASK_EXPLICIT")
#undef MASK_EXPLICIT
#pragma push_macro("MASK_ISO")
#undef MASK_ISO
#pragma push_macro("MASK_LTR")
#undef MASK_LTR
#pragma push_macro("MASK_POSSIBLE_N")
#undef MASK_POSSIBLE_N
#pragma push_macro("MASK_RTL")
#undef MASK_RTL
#pragma push_macro("MASK_R_AL")
#undef MASK_R_AL
#pragma push_macro("MASK_WS")
#undef MASK_WS
#pragma push_macro("MAX_EXPLICIT_LEVEL")
#undef MAX_EXPLICIT_LEVEL
#pragma push_macro("MIXED")
#undef MIXED
#pragma push_macro("NOT_SEEKING_STRONG")
#undef NOT_SEEKING_STRONG
#pragma push_macro("NSM")
#undef NSM
#pragma push_macro("ON")
#undef ON
#pragma push_macro("OPTION_INSERT_MARKS")
#undef OPTION_INSERT_MARKS
#pragma push_macro("OPTION_REMOVE_CONTROLS")
#undef OPTION_REMOVE_CONTROLS
#pragma push_macro("OPTION_STREAMING")
#undef OPTION_STREAMING
#pragma push_macro("OUTPUT_REVERSE")
#undef OUTPUT_REVERSE
#pragma push_macro("PDF")
#undef PDF
#pragma push_macro("PDI")
#undef PDI
#pragma push_macro("R")
#undef R
#pragma push_macro("REMOVE_BIDI_CONTROLS")
#undef REMOVE_BIDI_CONTROLS
#pragma push_macro("REORDER_DEFAULT")
#undef REORDER_DEFAULT
#pragma push_macro("REORDER_GROUP_NUMBERS_WITH_R")
#undef REORDER_GROUP_NUMBERS_WITH_R
#pragma push_macro("REORDER_INVERSE_FOR_NUMBERS_SPECIAL")
#undef REORDER_INVERSE_FOR_NUMBERS_SPECIAL
#pragma push_macro("REORDER_INVERSE_LIKE_DIRECT")
#undef REORDER_INVERSE_LIKE_DIRECT
#pragma push_macro("REORDER_INVERSE_NUMBERS_AS_L")
#undef REORDER_INVERSE_NUMBERS_AS_L
#pragma push_macro("REORDER_LAST_LOGICAL_TO_VISUAL")
#undef REORDER_LAST_LOGICAL_TO_VISUAL
#pragma push_macro("REORDER_NUMBERS_SPECIAL")
#undef REORDER_NUMBERS_SPECIAL
#pragma push_macro("REORDER_RUNS_ONLY")
#undef REORDER_RUNS_ONLY
#pragma push_macro("RLE")
#undef RLE
#pragma push_macro("RLI")
#undef RLI
#pragma push_macro("RLM_AFTER")
#undef RLM_AFTER
#pragma push_macro("RLM_BEFORE")
#undef RLM_BEFORE
#pragma push_macro("RLO")
#undef RLO
#pragma push_macro("RTL")
#undef RTL
#pragma push_macro("S")
#undef S
#pragma push_macro("SEEKING_STRONG_FOR_FSI")
#undef SEEKING_STRONG_FOR_FSI
#pragma push_macro("SEEKING_STRONG_FOR_PARA")
#undef SEEKING_STRONG_FOR_PARA
#pragma push_macro("SIMPLE_PARAS_COUNT")
#undef SIMPLE_PARAS_COUNT
#pragma push_macro("WS")
#undef WS
#pragma push_macro("_AN")
#undef _AN
#pragma push_macro("_B")
#undef _B
#pragma push_macro("_EN")
#undef _EN
#pragma push_macro("_L")
#undef _L
#pragma push_macro("_ON")
#undef _ON
#pragma push_macro("_R")
#undef _R
#pragma push_macro("_S")
#undef _S

namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class Bidi;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {
				class UBiDiProps;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class BidiBase$BracketData;
				class BidiBase$ImpTabPair;
				class BidiBase$InsertPoints;
				class BidiBase$Isolate;
				class BidiBase$LevState;
				class BidiRun;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

class $import BidiBase : public ::java::lang::Object {
	$class(BidiBase, 0, ::java::lang::Object)
public:
	BidiBase();
	void init$(int32_t maxLength, int32_t maxRunCount);
	void init$($chars* text, int32_t textStart, $bytes* embeddings, int32_t embStart, int32_t paragraphLength, int32_t flags);
	int32_t Bidi_Abs(int32_t x);
	int32_t Bidi_Min(int32_t x, int32_t y);
	static int8_t DirFromStrong(int8_t strong);
	static int32_t DirPropFlag(int8_t dir);
	static int32_t DirPropFlagE(int8_t level);
	static int32_t DirPropFlagLR(int8_t level);
	static int32_t DirPropFlagO(int8_t level);
	static int16_t GetAction(int8_t cell);
	static int16_t GetActionProps(int16_t cell);
	static int8_t GetLRFromLevel(int8_t level);
	virtual int8_t GetParaLevelAt(int32_t pindex);
	static int16_t GetState(int8_t cell);
	static int16_t GetStateProps(int16_t cell);
	static bool IsBidiControlChar(int32_t c);
	static bool IsDefaultLevel(int8_t level);
	static int8_t NoOverride(int8_t level);
	void addPoint(int32_t pos, int32_t flag);
	void adjustWSLevels();
	virtual bool baseIsLeftToRight();
	void bracketAddOpening(::jdk::internal::icu::text::BidiBase$BracketData* bd, char16_t match, int32_t position);
	void bracketInit(::jdk::internal::icu::text::BidiBase$BracketData* bd);
	void bracketProcessB(::jdk::internal::icu::text::BidiBase$BracketData* bd, int8_t level);
	void bracketProcessBoundary(::jdk::internal::icu::text::BidiBase$BracketData* bd, int32_t lastCcPos, int8_t contextLevel, int8_t embeddingLevel);
	void bracketProcessChar(::jdk::internal::icu::text::BidiBase$BracketData* bd, int32_t position);
	int8_t bracketProcessClosing(::jdk::internal::icu::text::BidiBase$BracketData* bd, int32_t openIdx, int32_t position);
	void bracketProcessLRI_RLI(::jdk::internal::icu::text::BidiBase$BracketData* bd, int8_t level);
	void bracketProcessPDI(::jdk::internal::icu::text::BidiBase$BracketData* bd);
	int8_t checkExplicitLevels();
	void checkParaCount();
	virtual int32_t countRuns();
	int8_t directionFromFlags();
	void fixN0c(::jdk::internal::icu::text::BidiBase$BracketData* bd, int32_t openingIndex, int32_t newPropPosition, int8_t newProp);
	virtual int32_t getBaseLevel();
	virtual int32_t getCustomizedClass(int32_t c);
	void getDirProps();
	void getDirPropsMemory(bool mayAllocate, int32_t len);
	virtual void getDirPropsMemory(int32_t len);
	virtual int8_t getDirection();
	void getInitialDirPropsMemory(int32_t len);
	void getInitialLevelsMemory(int32_t len);
	void getInitialRunsMemory(int32_t len);
	virtual int32_t getLength();
	virtual int8_t getLevelAt(int32_t charIndex);
	virtual $bytes* getLevels();
	void getLevelsMemory(bool mayAllocate, int32_t len);
	virtual void getLevelsMemory(int32_t len);
	virtual void getLogicalToVisualRunsMap();
	$Object* getMemory($String* label, Object$* array, $Class* arrayClass, bool mayAllocate, int32_t sizeNeeded);
	virtual int8_t getParaLevel();
	virtual int32_t getRunLevel(int32_t run);
	virtual int32_t getRunLimit(int32_t run);
	virtual int32_t getRunStart(int32_t run);
	void getRunsMemory(bool mayAllocate, int32_t len);
	virtual void getRunsMemory(int32_t len);
	$ints* getVisualMap();
	virtual ::jdk::internal::icu::text::BidiRun* getVisualRun(int32_t runIndex);
	virtual bool isInverse();
	virtual bool isLeftToRight();
	virtual bool isMixed();
	virtual bool isRightToLeft();
	virtual void orderParagraphsLTR(bool ordarParaLTR);
	void processPropertySeq(::jdk::internal::icu::text::BidiBase$LevState* levState, int16_t _prop, int32_t start, int32_t limit);
	static $ints* reorderVisual($bytes* levels);
	static void reorderVisually($bytes* levels, int32_t levelStart, $ObjectArray* objects, int32_t objectStart, int32_t count);
	static bool requiresBidi($chars* text, int32_t start, int32_t limit);
	int8_t resolveExplicitLevels();
	void resolveImplicitLevels(int32_t start, int32_t limit, int16_t sor, int16_t eor);
	void setLevelsOutsideIsolates(int32_t start, int32_t limit, int8_t level);
	virtual ::java::text::Bidi* setLine(::java::text::Bidi* bidi, ::jdk::internal::icu::text::BidiBase* bidiBase, ::java::text::Bidi* newBidi, ::jdk::internal::icu::text::BidiBase* newBidiBase, int32_t start, int32_t limit);
	virtual void setPara($String* text, int8_t paraLevel, $bytes* embeddingLevels);
	virtual void setPara($chars* chars, int8_t paraLevel, $bytes* embeddingLevels);
	virtual void setPara(::java::text::AttributedCharacterIterator* paragraph);
	virtual void setParaRunsOnly($chars* parmText, int8_t parmParaLevel);
	void setParaSuccess();
	virtual bool testDirPropFlagAt(int32_t flag, int32_t index);
	virtual $String* toString() override;
	virtual void verifyRange(int32_t index, int32_t start, int32_t limit);
	virtual void verifyValidPara();
	virtual void verifyValidParaOrLine();
	virtual $String* writeReordered(int32_t options);
	static const int8_t LEVEL_DEFAULT_LTR = (int8_t)126;
	static const int8_t LEVEL_DEFAULT_RTL = (int8_t)127;
	static const int8_t MAX_EXPLICIT_LEVEL = 125;
	static const int8_t LEVEL_OVERRIDE = (int8_t)128;
	static const int32_t MAP_NOWHERE = (-1);
	static const int8_t LTR = 0;
	static const int8_t RTL = 1;
	static const int8_t MIXED = 2;
	static const int16_t KEEP_BASE_COMBINING = 1;
	static const int16_t DO_MIRRORING = 2;
	static const int16_t INSERT_LRM_FOR_NUMERIC = 4;
	static const int16_t REMOVE_BIDI_CONTROLS = 8;
	static const int16_t OUTPUT_REVERSE = 16;
	static const int16_t REORDER_DEFAULT = 0;
	static const int16_t REORDER_NUMBERS_SPECIAL = 1;
	static const int16_t REORDER_GROUP_NUMBERS_WITH_R = 2;
	static const int16_t REORDER_RUNS_ONLY = 3;
	static const int16_t REORDER_INVERSE_NUMBERS_AS_L = 4;
	static const int16_t REORDER_INVERSE_LIKE_DIRECT = 5;
	static const int16_t REORDER_INVERSE_FOR_NUMBERS_SPECIAL = 6;
	static const int16_t REORDER_LAST_LOGICAL_TO_VISUAL = REORDER_NUMBERS_SPECIAL;
	static const int32_t OPTION_INSERT_MARKS = 1;
	static const int32_t OPTION_REMOVE_CONTROLS = 2;
	static const int32_t OPTION_STREAMING = 4;
	static const int8_t L = 0;
	static const int8_t R = 1;
	static const int8_t EN = 2;
	static const int8_t ES = 3;
	static const int8_t ET = 4;
	static const int8_t AN = 5;
	static const int8_t CS = 6;
	static const int8_t B = 7;
	static const int8_t S = 8;
	static const int8_t WS = 9;
	static const int8_t ON = 10;
	static const int8_t LRE = 11;
	static const int8_t LRO = 12;
	static const int8_t AL = 13;
	static const int8_t RLE = 14;
	static const int8_t RLO = 15;
	static const int8_t PDF = 16;
	static const int8_t NSM = 17;
	static const int8_t BN = 18;
	static const int8_t FSI = 19;
	static const int8_t LRI = 20;
	static const int8_t RLI = 21;
	static const int8_t PDI = 22;
	static const int8_t ENL = 23; // PDI + 1
	static const int8_t ENR = 24; // ENL + 1
	static const int32_t CHAR_DIRECTION_COUNT = 23;
	static const int32_t BIDI_PAIRED_BRACKET_TYPE = 4117;
	static const int32_t SIMPLE_PARAS_COUNT = 10;
	static const char16_t CR = ((char16_t)13);
	static const char16_t LF = ((char16_t)10);
	static const int32_t LRM_BEFORE = 1;
	static const int32_t LRM_AFTER = 2;
	static const int32_t RLM_BEFORE = 4;
	static const int32_t RLM_AFTER = 8;
	static int8_t FOUND_L;
	static int8_t FOUND_R;
	static const int32_t ISOLATE = 256;
	::jdk::internal::icu::text::BidiBase* paraBidi = nullptr;
	::jdk::internal::icu::impl::UBiDiProps* bdp = nullptr;
	$chars* text = nullptr;
	int32_t originalLength = 0;
	int32_t length = 0;
	int32_t resultLength = 0;
	bool mayAllocateText = false;
	bool mayAllocateRuns = false;
	$bytes* dirPropsMemory = nullptr;
	$bytes* levelsMemory = nullptr;
	$bytes* dirProps = nullptr;
	$bytes* levels = nullptr;
	bool isInverse$ = false;
	int32_t reorderingMode = 0;
	int32_t reorderingOptions = 0;
	bool orderParagraphsLTR$ = false;
	int8_t paraLevel = 0;
	int8_t defaultParaLevel = 0;
	::jdk::internal::icu::text::BidiBase$ImpTabPair* impTabPair = nullptr;
	int8_t direction = 0;
	int32_t flags = 0;
	int32_t lastArabicPos = 0;
	int32_t trailingWSStart = 0;
	int32_t paraCount = 0;
	$ints* paras_limit = nullptr;
	$bytes* paras_level = nullptr;
	int32_t runCount = 0;
	$Array<::jdk::internal::icu::text::BidiRun>* runsMemory = nullptr;
	$Array<::jdk::internal::icu::text::BidiRun>* runs = nullptr;
	$Array<::jdk::internal::icu::text::BidiRun>* simpleRuns = nullptr;
	$Array<::jdk::internal::icu::text::BidiBase$Isolate>* isolates = nullptr;
	int32_t isolateCount = 0;
	$ints* logicalToVisualRunsMap = nullptr;
	bool isGoodLogicalToVisualRunsMap = false;
	::jdk::internal::icu::text::BidiBase$InsertPoints* insertPoints = nullptr;
	int32_t controlCount = 0;
	static int32_t DirPropFlagMultiRuns;
	static $ints* DirPropFlagLR$;
	static $ints* DirPropFlagE$;
	static $ints* DirPropFlagO$;
	static int32_t MASK_LTR;
	static int32_t MASK_RTL;
	static int32_t MASK_R_AL;
	static int32_t MASK_EXPLICIT;
	static int32_t MASK_BN_EXPLICIT;
	static int32_t MASK_ISO;
	static int32_t MASK_B_S;
	static int32_t MASK_WS;
	static int32_t MASK_POSSIBLE_N;
	static int32_t MASK_EMBEDDING;
	static const int32_t NOT_SEEKING_STRONG = 0;
	static const int32_t SEEKING_STRONG_FOR_PARA = 1;
	static const int32_t SEEKING_STRONG_FOR_FSI = 2;
	static const int32_t LOOKING_FOR_PDI = 3;
	static const int32_t IMPTABPROPS_COLUMNS = 16;
	static const int32_t IMPTABPROPS_RES = 15; // IMPTABPROPS_COLUMNS - 1
	static $shorts* groupProp;
	static const int16_t _L = 0;
	static const int16_t _R = 1;
	static const int16_t _EN = 2;
	static const int16_t _AN = 3;
	static const int16_t _ON = 4;
	static const int16_t _S = 5;
	static const int16_t _B = 6;
	static $Array<int16_t, 2>* impTabProps;
	static const int32_t IMPTABLEVELS_COLUMNS = 8; // _B + 2
	static const int32_t IMPTABLEVELS_RES = 7; // IMPTABLEVELS_COLUMNS - 1
	static $Array<int8_t, 2>* impTabL_DEFAULT;
	static $Array<int8_t, 2>* impTabR_DEFAULT;
	static $shorts* impAct0;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_DEFAULT;
	static $Array<int8_t, 2>* impTabL_NUMBERS_SPECIAL;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_NUMBERS_SPECIAL;
	static $Array<int8_t, 2>* impTabL_GROUP_NUMBERS_WITH_R;
	static $Array<int8_t, 2>* impTabR_GROUP_NUMBERS_WITH_R;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_GROUP_NUMBERS_WITH_R;
	static $Array<int8_t, 2>* impTabL_INVERSE_NUMBERS_AS_L;
	static $Array<int8_t, 2>* impTabR_INVERSE_NUMBERS_AS_L;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_INVERSE_NUMBERS_AS_L;
	static $Array<int8_t, 2>* impTabR_INVERSE_LIKE_DIRECT;
	static $shorts* impAct1;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_INVERSE_LIKE_DIRECT;
	static $Array<int8_t, 2>* impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static $Array<int8_t, 2>* impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static $shorts* impAct2;
	static $shorts* impAct3;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_INVERSE_FOR_NUMBERS_SPECIAL;
	static $Array<int8_t, 2>* impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
	static ::jdk::internal::icu::text::BidiBase$ImpTabPair* impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
	static const int32_t FIRSTALLOC = 10;
	static const int32_t DIRECTION_DEFAULT_RIGHT_TO_LEFT = LEVEL_DEFAULT_RTL;
};

			} // text
		} // icu
	} // internal
} // jdk

#pragma pop_macro("AL")
#pragma pop_macro("AN")
#pragma pop_macro("B")
#pragma pop_macro("BIDI_PAIRED_BRACKET_TYPE")
#pragma pop_macro("BN")
#pragma pop_macro("CHAR_DIRECTION_COUNT")
#pragma pop_macro("CR")
#pragma pop_macro("CS")
#pragma pop_macro("DIRECTION_DEFAULT_RIGHT_TO_LEFT")
#pragma pop_macro("DO_MIRRORING")
#pragma pop_macro("EN")
#pragma pop_macro("ENL")
#pragma pop_macro("ENR")
#pragma pop_macro("ES")
#pragma pop_macro("ET")
#pragma pop_macro("FIRSTALLOC")
#pragma pop_macro("FOUND_L")
#pragma pop_macro("FOUND_R")
#pragma pop_macro("FSI")
#pragma pop_macro("IMPTABLEVELS_COLUMNS")
#pragma pop_macro("IMPTABLEVELS_RES")
#pragma pop_macro("IMPTABPROPS_COLUMNS")
#pragma pop_macro("IMPTABPROPS_RES")
#pragma pop_macro("INSERT_LRM_FOR_NUMERIC")
#pragma pop_macro("ISOLATE")
#pragma pop_macro("KEEP_BASE_COMBINING")
#pragma pop_macro("L")
#pragma pop_macro("LEVEL_DEFAULT_LTR")
#pragma pop_macro("LEVEL_DEFAULT_RTL")
#pragma pop_macro("LEVEL_OVERRIDE")
#pragma pop_macro("LF")
#pragma pop_macro("LOOKING_FOR_PDI")
#pragma pop_macro("LRE")
#pragma pop_macro("LRI")
#pragma pop_macro("LRM_AFTER")
#pragma pop_macro("LRM_BEFORE")
#pragma pop_macro("LRO")
#pragma pop_macro("LTR")
#pragma pop_macro("MAP_NOWHERE")
#pragma pop_macro("MASK_BN_EXPLICIT")
#pragma pop_macro("MASK_B_S")
#pragma pop_macro("MASK_EMBEDDING")
#pragma pop_macro("MASK_EXPLICIT")
#pragma pop_macro("MASK_ISO")
#pragma pop_macro("MASK_LTR")
#pragma pop_macro("MASK_POSSIBLE_N")
#pragma pop_macro("MASK_RTL")
#pragma pop_macro("MASK_R_AL")
#pragma pop_macro("MASK_WS")
#pragma pop_macro("MAX_EXPLICIT_LEVEL")
#pragma pop_macro("MIXED")
#pragma pop_macro("NOT_SEEKING_STRONG")
#pragma pop_macro("NSM")
#pragma pop_macro("ON")
#pragma pop_macro("OPTION_INSERT_MARKS")
#pragma pop_macro("OPTION_REMOVE_CONTROLS")
#pragma pop_macro("OPTION_STREAMING")
#pragma pop_macro("OUTPUT_REVERSE")
#pragma pop_macro("PDF")
#pragma pop_macro("PDI")
#pragma pop_macro("R")
#pragma pop_macro("REMOVE_BIDI_CONTROLS")
#pragma pop_macro("REORDER_DEFAULT")
#pragma pop_macro("REORDER_GROUP_NUMBERS_WITH_R")
#pragma pop_macro("REORDER_INVERSE_FOR_NUMBERS_SPECIAL")
#pragma pop_macro("REORDER_INVERSE_LIKE_DIRECT")
#pragma pop_macro("REORDER_INVERSE_NUMBERS_AS_L")
#pragma pop_macro("REORDER_LAST_LOGICAL_TO_VISUAL")
#pragma pop_macro("REORDER_NUMBERS_SPECIAL")
#pragma pop_macro("REORDER_RUNS_ONLY")
#pragma pop_macro("RLE")
#pragma pop_macro("RLI")
#pragma pop_macro("RLM_AFTER")
#pragma pop_macro("RLM_BEFORE")
#pragma pop_macro("RLO")
#pragma pop_macro("RTL")
#pragma pop_macro("S")
#pragma pop_macro("SEEKING_STRONG_FOR_FSI")
#pragma pop_macro("SEEKING_STRONG_FOR_PARA")
#pragma pop_macro("SIMPLE_PARAS_COUNT")
#pragma pop_macro("WS")
#pragma pop_macro("_AN")
#pragma pop_macro("_B")
#pragma pop_macro("_EN")
#pragma pop_macro("_L")
#pragma pop_macro("_ON")
#pragma pop_macro("_R")
#pragma pop_macro("_S")

#endif // _jdk_internal_icu_text_BidiBase_h_