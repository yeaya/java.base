#include <jdk/internal/icu/text/BidiBase.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/reflect/Array.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/Bidi.h>
#include <java/util/Arrays.h>
#include <jdk/internal/icu/impl/UBiDiProps.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/BidiBase$BidiPairedBracketType.h>
#include <jdk/internal/icu/text/BidiBase$BracketData.h>
#include <jdk/internal/icu/text/BidiBase$ImpTabPair.h>
#include <jdk/internal/icu/text/BidiBase$InsertPoints.h>
#include <jdk/internal/icu/text/BidiBase$IsoRun.h>
#include <jdk/internal/icu/text/BidiBase$Isolate.h>
#include <jdk/internal/icu/text/BidiBase$LevState.h>
#include <jdk/internal/icu/text/BidiBase$NumericShapings.h>
#include <jdk/internal/icu/text/BidiBase$Opening.h>
#include <jdk/internal/icu/text/BidiBase$Point.h>
#include <jdk/internal/icu/text/BidiBase$TextAttributeConstants.h>
#include <jdk/internal/icu/text/BidiLine.h>
#include <jdk/internal/icu/text/BidiRun.h>
#include <jdk/internal/icu/text/BidiWriter.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef AL
#undef AN
#undef B
#undef BIDI_EMBEDDING
#undef BIDI_PAIRED_BRACKET_TYPE
#undef BN
#undef CHAR_DIRECTION_COUNT
#undef CR
#undef CS
#undef DIRECTION_DEFAULT_LEFT_TO_RIGHT
#undef DIRECTION_DEFAULT_RIGHT_TO_LEFT
#undef DIRECTION_LEFT_TO_RIGHT
#undef DIRECTION_RIGHT_TO_LEFT
#undef DONE
#undef DO_MIRRORING
#undef EN
#undef ENL
#undef ENR
#undef ES
#undef ET
#undef FIRSTALLOC
#undef FOUND_L
#undef FOUND_R
#undef FSI
#undef IMPTABLEVELS_COLUMNS
#undef IMPTABLEVELS_RES
#undef IMPTABPROPS_COLUMNS
#undef IMPTABPROPS_RES
#undef INSERT_LRM_FOR_NUMERIC
#undef INSTANCE
#undef ISOLATE
#undef KEEP_BASE_COMBINING
#undef L
#undef LEVEL_DEFAULT_LTR
#undef LEVEL_DEFAULT_RTL
#undef LEVEL_OVERRIDE
#undef LF
#undef LOOKING_FOR_PDI
#undef LRE
#undef LRI
#undef LRM_AFTER
#undef LRM_BEFORE
#undef LRO
#undef LTR
#undef MAP_NOWHERE
#undef MASK_BN_EXPLICIT
#undef MASK_B_S
#undef MASK_EMBEDDING
#undef MASK_EXPLICIT
#undef MASK_ISO
#undef MASK_LTR
#undef MASK_POSSIBLE_N
#undef MASK_RTL
#undef MASK_R_AL
#undef MASK_WS
#undef MAX_EXPLICIT_LEVEL
#undef MIXED
#undef NOT_SEEKING_STRONG
#undef NSM
#undef NUMERIC_SHAPING
#undef ON
#undef OPEN
#undef OPTION_INSERT_MARKS
#undef OPTION_REMOVE_CONTROLS
#undef OPTION_STREAMING
#undef OUTPUT_REVERSE
#undef PDF
#undef PDI
#undef R
#undef REMOVE_BIDI_CONTROLS
#undef REORDER_DEFAULT
#undef REORDER_GROUP_NUMBERS_WITH_R
#undef REORDER_INVERSE_FOR_NUMBERS_SPECIAL
#undef REORDER_INVERSE_LIKE_DIRECT
#undef REORDER_INVERSE_NUMBERS_AS_L
#undef REORDER_LAST_LOGICAL_TO_VISUAL
#undef REORDER_NUMBERS_SPECIAL
#undef REORDER_RUNS_ONLY
#undef RLE
#undef RLI
#undef RLM_AFTER
#undef RLM_BEFORE
#undef RLO
#undef RTL
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR
#undef S
#undef SEEKING_STRONG_FOR_FSI
#undef SEEKING_STRONG_FOR_PARA
#undef SIMPLE_PARAS_COUNT
#undef TYPE
#undef WS
#undef _AN
#undef _B
#undef _EN
#undef _L
#undef _ON
#undef _R
#undef _S

using $BidiBase$IsoRunArray = $Array<::jdk::internal::icu::text::BidiBase$IsoRun>;
using $BidiBase$IsolateArray = $Array<::jdk::internal::icu::text::BidiBase$Isolate>;
using $BidiBase$OpeningArray = $Array<::jdk::internal::icu::text::BidiBase$Opening>;
using $BidiBase$PointArray = $Array<::jdk::internal::icu::text::BidiBase$Point>;
using $BidiRunArray = $Array<::jdk::internal::icu::text::BidiRun>;
using $byteArray2 = $Array<int8_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $byteArray3 = $Array<int8_t, 3>;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $1Array = ::java::lang::reflect::Array;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Bidi = ::java::text::Bidi;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Arrays = ::java::util::Arrays;
using $UBiDiProps = ::jdk::internal::icu::impl::UBiDiProps;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $BidiBase$BidiPairedBracketType = ::jdk::internal::icu::text::BidiBase$BidiPairedBracketType;
using $BidiBase$BracketData = ::jdk::internal::icu::text::BidiBase$BracketData;
using $BidiBase$ImpTabPair = ::jdk::internal::icu::text::BidiBase$ImpTabPair;
using $BidiBase$InsertPoints = ::jdk::internal::icu::text::BidiBase$InsertPoints;
using $BidiBase$IsoRun = ::jdk::internal::icu::text::BidiBase$IsoRun;
using $BidiBase$Isolate = ::jdk::internal::icu::text::BidiBase$Isolate;
using $BidiBase$LevState = ::jdk::internal::icu::text::BidiBase$LevState;
using $BidiBase$NumericShapings = ::jdk::internal::icu::text::BidiBase$NumericShapings;
using $BidiBase$Opening = ::jdk::internal::icu::text::BidiBase$Opening;
using $BidiBase$Point = ::jdk::internal::icu::text::BidiBase$Point;
using $BidiBase$TextAttributeConstants = ::jdk::internal::icu::text::BidiBase$TextAttributeConstants;
using $BidiLine = ::jdk::internal::icu::text::BidiLine;
using $BidiRun = ::jdk::internal::icu::text::BidiRun;
using $BidiWriter = ::jdk::internal::icu::text::BidiWriter;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase_FieldInfo_[] = {
	{"LEVEL_DEFAULT_LTR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, LEVEL_DEFAULT_LTR)},
	{"LEVEL_DEFAULT_RTL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, LEVEL_DEFAULT_RTL)},
	{"MAX_EXPLICIT_LEVEL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, MAX_EXPLICIT_LEVEL)},
	{"LEVEL_OVERRIDE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, LEVEL_OVERRIDE)},
	{"MAP_NOWHERE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, MAP_NOWHERE)},
	{"LTR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, LTR)},
	{"RTL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, RTL)},
	{"MIXED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, MIXED)},
	{"KEEP_BASE_COMBINING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, KEEP_BASE_COMBINING)},
	{"DO_MIRRORING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, DO_MIRRORING)},
	{"INSERT_LRM_FOR_NUMERIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, INSERT_LRM_FOR_NUMERIC)},
	{"REMOVE_BIDI_CONTROLS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, REMOVE_BIDI_CONTROLS)},
	{"OUTPUT_REVERSE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, OUTPUT_REVERSE)},
	{"REORDER_DEFAULT", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, REORDER_DEFAULT)},
	{"REORDER_NUMBERS_SPECIAL", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, REORDER_NUMBERS_SPECIAL)},
	{"REORDER_GROUP_NUMBERS_WITH_R", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, REORDER_GROUP_NUMBERS_WITH_R)},
	{"REORDER_RUNS_ONLY", "S", nullptr, $STATIC | $FINAL, $constField(BidiBase, REORDER_RUNS_ONLY)},
	{"REORDER_INVERSE_NUMBERS_AS_L", "S", nullptr, $STATIC | $FINAL, $constField(BidiBase, REORDER_INVERSE_NUMBERS_AS_L)},
	{"REORDER_INVERSE_LIKE_DIRECT", "S", nullptr, $STATIC | $FINAL, $constField(BidiBase, REORDER_INVERSE_LIKE_DIRECT)},
	{"REORDER_INVERSE_FOR_NUMBERS_SPECIAL", "S", nullptr, $STATIC | $FINAL, $constField(BidiBase, REORDER_INVERSE_FOR_NUMBERS_SPECIAL)},
	{"REORDER_LAST_LOGICAL_TO_VISUAL", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, REORDER_LAST_LOGICAL_TO_VISUAL)},
	{"OPTION_INSERT_MARKS", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, OPTION_INSERT_MARKS)},
	{"OPTION_REMOVE_CONTROLS", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, OPTION_REMOVE_CONTROLS)},
	{"OPTION_STREAMING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, OPTION_STREAMING)},
	{"L", "B", nullptr, $STATIC | $FINAL, $constField(BidiBase, L)},
	{"R", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, R)},
	{"EN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, EN)},
	{"ES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, ES)},
	{"ET", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, ET)},
	{"AN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, AN)},
	{"CS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, CS)},
	{"B", "B", nullptr, $STATIC | $FINAL, $constField(BidiBase, B)},
	{"S", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, S)},
	{"WS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, WS)},
	{"ON", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, ON)},
	{"LRE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, LRE)},
	{"LRO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, LRO)},
	{"AL", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, AL)},
	{"RLE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, RLE)},
	{"RLO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, RLO)},
	{"PDF", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, PDF)},
	{"NSM", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, NSM)},
	{"BN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, BN)},
	{"FSI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, FSI)},
	{"LRI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, LRI)},
	{"RLI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, RLI)},
	{"PDI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, PDI)},
	{"ENL", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, ENL)},
	{"ENR", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, ENR)},
	{"CHAR_DIRECTION_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, CHAR_DIRECTION_COUNT)},
	{"BIDI_PAIRED_BRACKET_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, BIDI_PAIRED_BRACKET_TYPE)},
	{"SIMPLE_PARAS_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, SIMPLE_PARAS_COUNT)},
	{"CR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, CR)},
	{"LF", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, LF)},
	{"LRM_BEFORE", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, LRM_BEFORE)},
	{"LRM_AFTER", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, LRM_AFTER)},
	{"RLM_BEFORE", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, RLM_BEFORE)},
	{"RLM_AFTER", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, RLM_AFTER)},
	{"FOUND_L", "B", nullptr, $STATIC | $FINAL, $staticField(BidiBase, FOUND_L)},
	{"FOUND_R", "B", nullptr, $STATIC | $FINAL, $staticField(BidiBase, FOUND_R)},
	{"ISOLATE", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, ISOLATE)},
	{"paraBidi", "Ljdk/internal/icu/text/BidiBase;", nullptr, 0, $field(BidiBase, paraBidi)},
	{"bdp", "Ljdk/internal/icu/impl/UBiDiProps;", nullptr, $FINAL, $field(BidiBase, bdp)},
	{"text", "[C", nullptr, 0, $field(BidiBase, text)},
	{"originalLength", "I", nullptr, 0, $field(BidiBase, originalLength)},
	{"length", "I", nullptr, $PUBLIC, $field(BidiBase, length)},
	{"resultLength", "I", nullptr, 0, $field(BidiBase, resultLength)},
	{"mayAllocateText", "Z", nullptr, 0, $field(BidiBase, mayAllocateText)},
	{"mayAllocateRuns", "Z", nullptr, 0, $field(BidiBase, mayAllocateRuns)},
	{"dirPropsMemory", "[B", nullptr, 0, $field(BidiBase, dirPropsMemory)},
	{"levelsMemory", "[B", nullptr, 0, $field(BidiBase, levelsMemory)},
	{"dirProps", "[B", nullptr, 0, $field(BidiBase, dirProps)},
	{"levels", "[B", nullptr, 0, $field(BidiBase, levels)},
	{"isInverse", "Z", nullptr, 0, $field(BidiBase, isInverse$)},
	{"reorderingMode", "I", nullptr, 0, $field(BidiBase, reorderingMode)},
	{"reorderingOptions", "I", nullptr, 0, $field(BidiBase, reorderingOptions)},
	{"orderParagraphsLTR", "Z", nullptr, 0, $field(BidiBase, orderParagraphsLTR$)},
	{"paraLevel", "B", nullptr, 0, $field(BidiBase, paraLevel)},
	{"defaultParaLevel", "B", nullptr, 0, $field(BidiBase, defaultParaLevel)},
	{"impTabPair", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, 0, $field(BidiBase, impTabPair)},
	{"direction", "B", nullptr, 0, $field(BidiBase, direction)},
	{"flags", "I", nullptr, 0, $field(BidiBase, flags)},
	{"lastArabicPos", "I", nullptr, 0, $field(BidiBase, lastArabicPos)},
	{"trailingWSStart", "I", nullptr, 0, $field(BidiBase, trailingWSStart)},
	{"paraCount", "I", nullptr, 0, $field(BidiBase, paraCount)},
	{"paras_limit", "[I", nullptr, 0, $field(BidiBase, paras_limit)},
	{"paras_level", "[B", nullptr, 0, $field(BidiBase, paras_level)},
	{"runCount", "I", nullptr, 0, $field(BidiBase, runCount)},
	{"runsMemory", "[Ljdk/internal/icu/text/BidiRun;", nullptr, 0, $field(BidiBase, runsMemory)},
	{"runs", "[Ljdk/internal/icu/text/BidiRun;", nullptr, 0, $field(BidiBase, runs)},
	{"simpleRuns", "[Ljdk/internal/icu/text/BidiRun;", nullptr, 0, $field(BidiBase, simpleRuns)},
	{"isolates", "[Ljdk/internal/icu/text/BidiBase$Isolate;", nullptr, 0, $field(BidiBase, isolates)},
	{"isolateCount", "I", nullptr, 0, $field(BidiBase, isolateCount)},
	{"logicalToVisualRunsMap", "[I", nullptr, 0, $field(BidiBase, logicalToVisualRunsMap)},
	{"isGoodLogicalToVisualRunsMap", "Z", nullptr, 0, $field(BidiBase, isGoodLogicalToVisualRunsMap)},
	{"insertPoints", "Ljdk/internal/icu/text/BidiBase$InsertPoints;", nullptr, 0, $field(BidiBase, insertPoints)},
	{"controlCount", "I", nullptr, 0, $field(BidiBase, controlCount)},
	{"DirPropFlagMultiRuns", "I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, DirPropFlagMultiRuns)},
	{"DirPropFlagLR", "[I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, DirPropFlagLR$)},
	{"DirPropFlagE", "[I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, DirPropFlagE$)},
	{"DirPropFlagO", "[I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, DirPropFlagO$)},
	{"MASK_LTR", "I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, MASK_LTR)},
	{"MASK_RTL", "I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, MASK_RTL)},
	{"MASK_R_AL", "I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, MASK_R_AL)},
	{"MASK_EXPLICIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_EXPLICIT)},
	{"MASK_BN_EXPLICIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_BN_EXPLICIT)},
	{"MASK_ISO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_ISO)},
	{"MASK_B_S", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_B_S)},
	{"MASK_WS", "I", nullptr, $STATIC | $FINAL, $staticField(BidiBase, MASK_WS)},
	{"MASK_POSSIBLE_N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_POSSIBLE_N)},
	{"MASK_EMBEDDING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, MASK_EMBEDDING)},
	{"NOT_SEEKING_STRONG", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, NOT_SEEKING_STRONG)},
	{"SEEKING_STRONG_FOR_PARA", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, SEEKING_STRONG_FOR_PARA)},
	{"SEEKING_STRONG_FOR_FSI", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, SEEKING_STRONG_FOR_FSI)},
	{"LOOKING_FOR_PDI", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, LOOKING_FOR_PDI)},
	{"IMPTABPROPS_COLUMNS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, IMPTABPROPS_COLUMNS)},
	{"IMPTABPROPS_RES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, IMPTABPROPS_RES)},
	{"groupProp", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, groupProp)},
	{"_L", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _L)},
	{"_R", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _R)},
	{"_EN", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _EN)},
	{"_AN", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _AN)},
	{"_ON", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _ON)},
	{"_S", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _S)},
	{"_B", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, _B)},
	{"impTabProps", "[[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabProps)},
	{"IMPTABLEVELS_COLUMNS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, IMPTABLEVELS_COLUMNS)},
	{"IMPTABLEVELS_RES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BidiBase, IMPTABLEVELS_RES)},
	{"impTabL_DEFAULT", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_DEFAULT)},
	{"impTabR_DEFAULT", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabR_DEFAULT)},
	{"impAct0", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impAct0)},
	{"impTab_DEFAULT", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_DEFAULT)},
	{"impTabL_NUMBERS_SPECIAL", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_NUMBERS_SPECIAL)},
	{"impTab_NUMBERS_SPECIAL", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_NUMBERS_SPECIAL)},
	{"impTabL_GROUP_NUMBERS_WITH_R", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_GROUP_NUMBERS_WITH_R)},
	{"impTabR_GROUP_NUMBERS_WITH_R", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabR_GROUP_NUMBERS_WITH_R)},
	{"impTab_GROUP_NUMBERS_WITH_R", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_GROUP_NUMBERS_WITH_R)},
	{"impTabL_INVERSE_NUMBERS_AS_L", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_INVERSE_NUMBERS_AS_L)},
	{"impTabR_INVERSE_NUMBERS_AS_L", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabR_INVERSE_NUMBERS_AS_L)},
	{"impTab_INVERSE_NUMBERS_AS_L", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_INVERSE_NUMBERS_AS_L)},
	{"impTabR_INVERSE_LIKE_DIRECT", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabR_INVERSE_LIKE_DIRECT)},
	{"impAct1", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impAct1)},
	{"impTab_INVERSE_LIKE_DIRECT", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_INVERSE_LIKE_DIRECT)},
	{"impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS)},
	{"impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS)},
	{"impAct2", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impAct2)},
	{"impAct3", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impAct3)},
	{"impTab_INVERSE_LIKE_DIRECT_WITH_MARKS", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_INVERSE_LIKE_DIRECT_WITH_MARKS)},
	{"impTab_INVERSE_FOR_NUMBERS_SPECIAL", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_INVERSE_FOR_NUMBERS_SPECIAL)},
	{"impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS)},
	{"impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS", "Ljdk/internal/icu/text/BidiBase$ImpTabPair;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BidiBase, impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS)},
	{"FIRSTALLOC", "I", nullptr, $STATIC | $FINAL, $constField(BidiBase, FIRSTALLOC)},
	{"DIRECTION_DEFAULT_RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase, DIRECTION_DEFAULT_RIGHT_TO_LEFT)},
	{}
};

$MethodInfo _BidiBase_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(BidiBase::*)(int32_t,int32_t)>(&BidiBase::init$))},
	{"<init>", "([CI[BIII)V", nullptr, $PUBLIC, $method(static_cast<void(BidiBase::*)($chars*,int32_t,$bytes*,int32_t,int32_t,int32_t)>(&BidiBase::init$))},
	{"Bidi_Abs", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BidiBase::*)(int32_t)>(&BidiBase::Bidi_Abs))},
	{"Bidi_Min", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BidiBase::*)(int32_t,int32_t)>(&BidiBase::Bidi_Min))},
	{"DirFromStrong", "(B)B", nullptr, $STATIC | $FINAL, $method(static_cast<int8_t(*)(int8_t)>(&BidiBase::DirFromStrong))},
	{"DirPropFlag", "(B)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int8_t)>(&BidiBase::DirPropFlag))},
	{"DirPropFlagE", "(B)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int8_t)>(&BidiBase::DirPropFlagE))},
	{"DirPropFlagLR", "(B)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int8_t)>(&BidiBase::DirPropFlagLR))},
	{"DirPropFlagO", "(B)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int8_t)>(&BidiBase::DirPropFlagO))},
	{"GetAction", "(B)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int8_t)>(&BidiBase::GetAction))},
	{"GetActionProps", "(S)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&BidiBase::GetActionProps))},
	{"GetLRFromLevel", "(B)B", nullptr, $PRIVATE | $STATIC, $method(static_cast<int8_t(*)(int8_t)>(&BidiBase::GetLRFromLevel))},
	{"GetParaLevelAt", "(I)B", nullptr, 0},
	{"GetState", "(B)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int8_t)>(&BidiBase::GetState))},
	{"GetStateProps", "(S)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&BidiBase::GetStateProps))},
	{"IsBidiControlChar", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&BidiBase::IsBidiControlChar))},
	{"IsDefaultLevel", "(B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int8_t)>(&BidiBase::IsDefaultLevel))},
	{"NoOverride", "(B)B", nullptr, $STATIC | $FINAL, $method(static_cast<int8_t(*)(int8_t)>(&BidiBase::NoOverride))},
	{"addPoint", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t,int32_t)>(&BidiBase::addPoint))},
	{"adjustWSLevels", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)()>(&BidiBase::adjustWSLevels))},
	{"baseIsLeftToRight", "()Z", nullptr, $PUBLIC},
	{"bracketAddOpening", "(Ljdk/internal/icu/text/BidiBase$BracketData;CI)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,char16_t,int32_t)>(&BidiBase::bracketAddOpening))},
	{"bracketInit", "(Ljdk/internal/icu/text/BidiBase$BracketData;)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*)>(&BidiBase::bracketInit))},
	{"bracketProcessB", "(Ljdk/internal/icu/text/BidiBase$BracketData;B)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,int8_t)>(&BidiBase::bracketProcessB))},
	{"bracketProcessBoundary", "(Ljdk/internal/icu/text/BidiBase$BracketData;IBB)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,int32_t,int8_t,int8_t)>(&BidiBase::bracketProcessBoundary))},
	{"bracketProcessChar", "(Ljdk/internal/icu/text/BidiBase$BracketData;I)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,int32_t)>(&BidiBase::bracketProcessChar))},
	{"bracketProcessClosing", "(Ljdk/internal/icu/text/BidiBase$BracketData;II)B", nullptr, $PRIVATE, $method(static_cast<int8_t(BidiBase::*)($BidiBase$BracketData*,int32_t,int32_t)>(&BidiBase::bracketProcessClosing))},
	{"bracketProcessLRI_RLI", "(Ljdk/internal/icu/text/BidiBase$BracketData;B)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,int8_t)>(&BidiBase::bracketProcessLRI_RLI))},
	{"bracketProcessPDI", "(Ljdk/internal/icu/text/BidiBase$BracketData;)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*)>(&BidiBase::bracketProcessPDI))},
	{"checkExplicitLevels", "()B", nullptr, $PRIVATE, $method(static_cast<int8_t(BidiBase::*)()>(&BidiBase::checkExplicitLevels))},
	{"checkParaCount", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)()>(&BidiBase::checkParaCount))},
	{"countRuns", "()I", nullptr, $PUBLIC},
	{"directionFromFlags", "()B", nullptr, $PRIVATE, $method(static_cast<int8_t(BidiBase::*)()>(&BidiBase::directionFromFlags))},
	{"fixN0c", "(Ljdk/internal/icu/text/BidiBase$BracketData;IIB)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$BracketData*,int32_t,int32_t,int8_t)>(&BidiBase::fixN0c))},
	{"getBaseLevel", "()I", nullptr, $PUBLIC},
	{"getCustomizedClass", "(I)I", nullptr, $PUBLIC},
	{"getDirProps", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)()>(&BidiBase::getDirProps))},
	{"getDirPropsMemory", "(ZI)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(bool,int32_t)>(&BidiBase::getDirPropsMemory))},
	{"getDirPropsMemory", "(I)V", nullptr, 0},
	{"getDirection", "()B", nullptr, $PUBLIC},
	{"getInitialDirPropsMemory", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t)>(&BidiBase::getInitialDirPropsMemory))},
	{"getInitialLevelsMemory", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t)>(&BidiBase::getInitialLevelsMemory))},
	{"getInitialRunsMemory", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t)>(&BidiBase::getInitialRunsMemory))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLevelAt", "(I)B", nullptr, $PUBLIC},
	{"getLevels", "()[B", nullptr, 0},
	{"getLevelsMemory", "(ZI)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(bool,int32_t)>(&BidiBase::getLevelsMemory))},
	{"getLevelsMemory", "(I)V", nullptr, 0},
	{"getLogicalToVisualRunsMap", "()V", nullptr, 0},
	{"getMemory", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;ZI)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class<*>;ZI)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(BidiBase::*)($String*,Object$*,$Class*,bool,int32_t)>(&BidiBase::getMemory))},
	{"getParaLevel", "()B", nullptr, $PUBLIC},
	{"getRunLevel", "(I)I", nullptr, $PUBLIC},
	{"getRunLimit", "(I)I", nullptr, $PUBLIC},
	{"getRunStart", "(I)I", nullptr, $PUBLIC},
	{"getRunsMemory", "(ZI)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(bool,int32_t)>(&BidiBase::getRunsMemory))},
	{"getRunsMemory", "(I)V", nullptr, 0},
	{"getVisualMap", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(BidiBase::*)()>(&BidiBase::getVisualMap))},
	{"getVisualRun", "(I)Ljdk/internal/icu/text/BidiRun;", nullptr, 0},
	{"isInverse", "()Z", nullptr, $PUBLIC},
	{"isLeftToRight", "()Z", nullptr, $PUBLIC},
	{"isMixed", "()Z", nullptr, $PUBLIC},
	{"isRightToLeft", "()Z", nullptr, $PUBLIC},
	{"orderParagraphsLTR", "(Z)V", nullptr, $PUBLIC},
	{"processPropertySeq", "(Ljdk/internal/icu/text/BidiBase$LevState;SII)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)($BidiBase$LevState*,int16_t,int32_t,int32_t)>(&BidiBase::processPropertySeq))},
	{"reorderVisual", "([B)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($bytes*)>(&BidiBase::reorderVisual))},
	{"reorderVisually", "([BI[Ljava/lang/Object;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$ObjectArray*,int32_t,int32_t)>(&BidiBase::reorderVisually))},
	{"requiresBidi", "([CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&BidiBase::requiresBidi))},
	{"resolveExplicitLevels", "()B", nullptr, $PRIVATE, $method(static_cast<int8_t(BidiBase::*)()>(&BidiBase::resolveExplicitLevels))},
	{"resolveImplicitLevels", "(IISS)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t,int32_t,int16_t,int16_t)>(&BidiBase::resolveImplicitLevels))},
	{"setLevelsOutsideIsolates", "(IIB)V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)(int32_t,int32_t,int8_t)>(&BidiBase::setLevelsOutsideIsolates))},
	{"setLine", "(Ljava/text/Bidi;Ljdk/internal/icu/text/BidiBase;Ljava/text/Bidi;Ljdk/internal/icu/text/BidiBase;II)Ljava/text/Bidi;", nullptr, $PUBLIC},
	{"setPara", "(Ljava/lang/String;B[B)V", nullptr, 0},
	{"setPara", "([CB[B)V", nullptr, 0},
	{"setPara", "(Ljava/text/AttributedCharacterIterator;)V", nullptr, $PUBLIC},
	{"setParaRunsOnly", "([CB)V", nullptr, 0},
	{"setParaSuccess", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase::*)()>(&BidiBase::setParaSuccess))},
	{"testDirPropFlagAt", "(II)Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verifyRange", "(III)V", nullptr, 0},
	{"verifyValidPara", "()V", nullptr, 0},
	{"verifyValidParaOrLine", "()V", nullptr, 0},
	{"writeReordered", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BidiBase_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$NumericShapings", "jdk.internal.icu.text.BidiBase", "NumericShapings", $PRIVATE | $STATIC},
	{"jdk.internal.icu.text.BidiBase$TextAttributeConstants", "jdk.internal.icu.text.BidiBase", "TextAttributeConstants", $PRIVATE | $STATIC},
	{"jdk.internal.icu.text.BidiBase$LevState", "jdk.internal.icu.text.BidiBase", "LevState", $PRIVATE | $STATIC},
	{"jdk.internal.icu.text.BidiBase$ImpTabPair", "jdk.internal.icu.text.BidiBase", "ImpTabPair", $PRIVATE | $STATIC},
	{"jdk.internal.icu.text.BidiBase$BidiPairedBracketType", "jdk.internal.icu.text.BidiBase", "BidiPairedBracketType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.text.BidiBase$Isolate", "jdk.internal.icu.text.BidiBase", "Isolate", $STATIC},
	{"jdk.internal.icu.text.BidiBase$BracketData", "jdk.internal.icu.text.BidiBase", "BracketData", $STATIC},
	{"jdk.internal.icu.text.BidiBase$IsoRun", "jdk.internal.icu.text.BidiBase", "IsoRun", $STATIC},
	{"jdk.internal.icu.text.BidiBase$Opening", "jdk.internal.icu.text.BidiBase", "Opening", $STATIC},
	{"jdk.internal.icu.text.BidiBase$InsertPoints", "jdk.internal.icu.text.BidiBase", "InsertPoints", $STATIC},
	{"jdk.internal.icu.text.BidiBase$Point", "jdk.internal.icu.text.BidiBase", "Point", $STATIC},
	{}
};

$ClassInfo _BidiBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.text.BidiBase",
	"java.lang.Object",
	nullptr,
	_BidiBase_FieldInfo_,
	_BidiBase_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase$NumericShapings,jdk.internal.icu.text.BidiBase$TextAttributeConstants,jdk.internal.icu.text.BidiBase$TextAttributeConstants$1,jdk.internal.icu.text.BidiBase$LevState,jdk.internal.icu.text.BidiBase$ImpTabPair,jdk.internal.icu.text.BidiBase$BidiPairedBracketType,jdk.internal.icu.text.BidiBase$Isolate,jdk.internal.icu.text.BidiBase$BracketData,jdk.internal.icu.text.BidiBase$IsoRun,jdk.internal.icu.text.BidiBase$Opening,jdk.internal.icu.text.BidiBase$InsertPoints,jdk.internal.icu.text.BidiBase$Point"
};

$Object* allocate$BidiBase($Class* clazz) {
	return $of($alloc(BidiBase));
}

int8_t BidiBase::FOUND_L = 0;
int8_t BidiBase::FOUND_R = 0;
int32_t BidiBase::DirPropFlagMultiRuns = 0;
$ints* BidiBase::DirPropFlagLR$ = nullptr;
$ints* BidiBase::DirPropFlagE$ = nullptr;
$ints* BidiBase::DirPropFlagO$ = nullptr;
int32_t BidiBase::MASK_LTR = 0;
int32_t BidiBase::MASK_RTL = 0;
int32_t BidiBase::MASK_R_AL = 0;
int32_t BidiBase::MASK_EXPLICIT = 0;
int32_t BidiBase::MASK_BN_EXPLICIT = 0;
int32_t BidiBase::MASK_ISO = 0;
int32_t BidiBase::MASK_B_S = 0;
int32_t BidiBase::MASK_WS = 0;
int32_t BidiBase::MASK_POSSIBLE_N = 0;
int32_t BidiBase::MASK_EMBEDDING = 0;
$shorts* BidiBase::groupProp = nullptr;
$shortArray2* BidiBase::impTabProps = nullptr;
$byteArray2* BidiBase::impTabL_DEFAULT = nullptr;
$byteArray2* BidiBase::impTabR_DEFAULT = nullptr;
$shorts* BidiBase::impAct0 = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_DEFAULT = nullptr;
$byteArray2* BidiBase::impTabL_NUMBERS_SPECIAL = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_NUMBERS_SPECIAL = nullptr;
$byteArray2* BidiBase::impTabL_GROUP_NUMBERS_WITH_R = nullptr;
$byteArray2* BidiBase::impTabR_GROUP_NUMBERS_WITH_R = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_GROUP_NUMBERS_WITH_R = nullptr;
$byteArray2* BidiBase::impTabL_INVERSE_NUMBERS_AS_L = nullptr;
$byteArray2* BidiBase::impTabR_INVERSE_NUMBERS_AS_L = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_INVERSE_NUMBERS_AS_L = nullptr;
$byteArray2* BidiBase::impTabR_INVERSE_LIKE_DIRECT = nullptr;
$shorts* BidiBase::impAct1 = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_INVERSE_LIKE_DIRECT = nullptr;
$byteArray2* BidiBase::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS = nullptr;
$byteArray2* BidiBase::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS = nullptr;
$shorts* BidiBase::impAct2 = nullptr;
$shorts* BidiBase::impAct3 = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL = nullptr;
$byteArray2* BidiBase::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS = nullptr;
$BidiBase$ImpTabPair* BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS = nullptr;

int32_t BidiBase::DirPropFlag(int8_t dir) {
	$init(BidiBase);
	return ($sl(1, dir));
}

bool BidiBase::testDirPropFlagAt(int32_t flag, int32_t index) {
	return (((int32_t)(DirPropFlag($nc(this->dirProps)->get(index)) & (uint32_t)flag)) != 0);
}

int32_t BidiBase::DirPropFlagLR(int8_t level) {
	$init(BidiBase);
	return $nc(BidiBase::DirPropFlagLR$)->get((int32_t)(level & (uint32_t)1));
}

int32_t BidiBase::DirPropFlagE(int8_t level) {
	$init(BidiBase);
	return $nc(BidiBase::DirPropFlagE$)->get((int32_t)(level & (uint32_t)1));
}

int32_t BidiBase::DirPropFlagO(int8_t level) {
	$init(BidiBase);
	return $nc(BidiBase::DirPropFlagO$)->get((int32_t)(level & (uint32_t)1));
}

int8_t BidiBase::DirFromStrong(int8_t strong) {
	$init(BidiBase);
	return strong == BidiBase::L ? BidiBase::L : BidiBase::R;
}

int8_t BidiBase::NoOverride(int8_t level) {
	$init(BidiBase);
	return (int8_t)((int32_t)(level & (uint32_t)~BidiBase::LEVEL_OVERRIDE));
}

int8_t BidiBase::GetLRFromLevel(int8_t level) {
	$init(BidiBase);
	return (int8_t)((int32_t)(level & (uint32_t)1));
}

bool BidiBase::IsDefaultLevel(int8_t level) {
	$init(BidiBase);
	return (((int32_t)(level & (uint32_t)(int32_t)BidiBase::LEVEL_DEFAULT_LTR)) == BidiBase::LEVEL_DEFAULT_LTR);
}

bool BidiBase::IsBidiControlChar(int32_t c) {
	$init(BidiBase);
	return ((((int32_t)(c & (uint32_t)-4)) == 8204) || ((c >= 8234) && (c <= 8238)) || ((c >= 8294) && (c <= 8297)));
}

void BidiBase::verifyValidPara() {
	if (!(this == this->paraBidi)) {
		$throwNew($IllegalStateException);
	}
}

void BidiBase::verifyValidParaOrLine() {
	$var(BidiBase, para, this->paraBidi);
	if (this == para) {
		return;
	}
	if ((para == nullptr) || (para != $nc(para)->paraBidi)) {
		$throwNew($IllegalStateException);
	}
}

void BidiBase::verifyRange(int32_t index, int32_t start, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	if (index < start || index >= limit) {
		$throwNew($IllegalArgumentException, $$str({"Value "_s, $$str(index), " is out of range "_s, $$str(start), " to "_s, $$str(limit)}));
	}
}

void BidiBase::init$(int32_t maxLength, int32_t maxRunCount) {
	$set(this, dirPropsMemory, $new($bytes, 1));
	$set(this, levelsMemory, $new($bytes, 1));
	$set(this, paras_limit, $new($ints, BidiBase::SIMPLE_PARAS_COUNT));
	$set(this, paras_level, $new($bytes, BidiBase::SIMPLE_PARAS_COUNT));
	$set(this, runsMemory, $new($BidiRunArray, 0));
	$set(this, simpleRuns, $new($BidiRunArray, {$$new($BidiRun)}));
	$set(this, insertPoints, $new($BidiBase$InsertPoints));
	if (maxLength < 0 || maxRunCount < 0) {
		$throwNew($IllegalArgumentException);
	}
	$init($UBiDiProps);
	$set(this, bdp, $UBiDiProps::INSTANCE);
	if (maxLength > 0) {
		getInitialDirPropsMemory(maxLength);
		getInitialLevelsMemory(maxLength);
	} else {
		this->mayAllocateText = true;
	}
	if (maxRunCount > 0) {
		if (maxRunCount > 1) {
			getInitialRunsMemory(maxRunCount);
		}
	} else {
		this->mayAllocateRuns = true;
	}
}

$Object* BidiBase::getMemory($String* label, Object$* array, $Class* arrayClass, bool mayAllocate, int32_t sizeNeeded) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $1Array::getLength(array);
	if (sizeNeeded == len) {
		return $of(array);
	}
	if (!mayAllocate) {
		if (sizeNeeded <= len) {
			return $of(array);
		}
		$throwNew($OutOfMemoryError, $$str({"Failed to allocate memory for "_s, label}));
	}
	try {
		return $of($1Array::newInstance(arrayClass, sizeNeeded));
	} catch ($Exception& e) {
		$throwNew($OutOfMemoryError, $$str({"Failed to allocate memory for "_s, label}));
	}
	$shouldNotReachHere();
}

void BidiBase::getDirPropsMemory(bool mayAllocate, int32_t len) {
	$init($Byte);
	$var($Object, array, getMemory("DirProps"_s, this->dirPropsMemory, $Byte::TYPE, mayAllocate, len));
	$set(this, dirPropsMemory, $cast($bytes, array));
}

void BidiBase::getDirPropsMemory(int32_t len) {
	getDirPropsMemory(this->mayAllocateText, len);
}

void BidiBase::getLevelsMemory(bool mayAllocate, int32_t len) {
	$init($Byte);
	$var($Object, array, getMemory("Levels"_s, this->levelsMemory, $Byte::TYPE, mayAllocate, len));
	$set(this, levelsMemory, $cast($bytes, array));
}

void BidiBase::getLevelsMemory(int32_t len) {
	getLevelsMemory(this->mayAllocateText, len);
}

void BidiBase::getRunsMemory(bool mayAllocate, int32_t len) {
	$load($BidiRun);
	$var($Object, array, getMemory("Runs"_s, this->runsMemory, $BidiRun::class$, mayAllocate, len));
	$set(this, runsMemory, $cast($BidiRunArray, array));
}

void BidiBase::getRunsMemory(int32_t len) {
	getRunsMemory(this->mayAllocateRuns, len);
}

void BidiBase::getInitialDirPropsMemory(int32_t len) {
	getDirPropsMemory(true, len);
}

void BidiBase::getInitialLevelsMemory(int32_t len) {
	getLevelsMemory(true, len);
}

void BidiBase::getInitialRunsMemory(int32_t len) {
	getRunsMemory(true, len);
}

bool BidiBase::isInverse() {
	return this->isInverse$;
}

void BidiBase::checkParaCount() {
	$useLocalCurrentObjectStackCache();
	$var($ints, saveLimits, nullptr);
	$var($bytes, saveLevels, nullptr);
	int32_t count = this->paraCount;
	if (count <= $nc(this->paras_level)->length) {
		return;
	}
	int32_t oldLength = $nc(this->paras_level)->length;
	$assign(saveLimits, this->paras_limit);
	$assign(saveLevels, this->paras_level);
	try {
		$set(this, paras_limit, $new($ints, count * 2));
		$set(this, paras_level, $new($bytes, count * 2));
	} catch ($Exception& e) {
		$throwNew($OutOfMemoryError, "Failed to allocate memory for paras"_s);
	}
	$System::arraycopy(saveLimits, 0, this->paras_limit, 0, oldLength);
	$System::arraycopy(saveLevels, 0, this->paras_level, 0, oldLength);
}

void BidiBase::getDirProps() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t i0 = 0;
	int32_t i1 = 0;
	this->flags = 0;
	int32_t uchar = 0;
	int8_t dirProp = 0;
	int8_t defaultParaLevel = (int8_t)0;
	bool isDefaultLevel = IsDefaultLevel(this->paraLevel);
	bool isDefaultLevelInverse = isDefaultLevel && (this->reorderingMode == BidiBase::REORDER_INVERSE_LIKE_DIRECT || this->reorderingMode == BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL);
	this->lastArabicPos = -1;
	int32_t controlCount = 0;
	bool removeBidiControls = ((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_REMOVE_CONTROLS)) != 0;
	int8_t state = 0;
	int8_t lastStrong = BidiBase::ON;
	$var($ints, isolateStartStack, $new($ints, BidiBase::MAX_EXPLICIT_LEVEL + 1));
	$var($bytes, previousStateStack, $new($bytes, BidiBase::MAX_EXPLICIT_LEVEL + 1));
	int32_t stackLast = -1;
	if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_STREAMING)) != 0) {
		this->length = 0;
	}
	defaultParaLevel = (int8_t)((int32_t)(this->paraLevel & (uint32_t)1));
	if (isDefaultLevel) {
		$nc(this->paras_level)->set(0, defaultParaLevel);
		lastStrong = defaultParaLevel;
		state = (int8_t)BidiBase::SEEKING_STRONG_FOR_PARA;
	} else {
		$nc(this->paras_level)->set(0, this->paraLevel);
		state = (int8_t)BidiBase::NOT_SEEKING_STRONG;
	}
	for (i = 0; i < this->originalLength;) {
		i0 = i;
		uchar = $UTF16::charAt(this->text, 0, this->originalLength, i);
		i += $UTF16::getCharCount(uchar);
		i1 = i - 1;
		dirProp = (int8_t)getCustomizedClass(uchar);
		this->flags |= DirPropFlag(dirProp);
		$nc(this->dirProps)->set(i1, dirProp);
		if (i1 > i0) {
			this->flags |= DirPropFlag(BidiBase::BN);
			do {
				$nc(this->dirProps)->set(--i1, BidiBase::BN);
			} while (i1 > i0);
		}
		if (removeBidiControls && IsBidiControlChar(uchar)) {
			++controlCount;
		}
		if (dirProp == BidiBase::L) {
			if (state == BidiBase::SEEKING_STRONG_FOR_PARA) {
				$nc(this->paras_level)->set(this->paraCount - 1, (int8_t)0);
				state = (int8_t)BidiBase::NOT_SEEKING_STRONG;
			} else if (state == BidiBase::SEEKING_STRONG_FOR_FSI) {
				if (stackLast <= BidiBase::MAX_EXPLICIT_LEVEL) {
					this->flags |= DirPropFlag(BidiBase::LRI);
				}
				state = (int8_t)BidiBase::LOOKING_FOR_PDI;
			}
			lastStrong = BidiBase::L;
			continue;
		}
		if (dirProp == BidiBase::R || dirProp == BidiBase::AL) {
			if (state == BidiBase::SEEKING_STRONG_FOR_PARA) {
				$nc(this->paras_level)->set(this->paraCount - 1, (int8_t)1);
				state = (int8_t)BidiBase::NOT_SEEKING_STRONG;
			} else if (state == BidiBase::SEEKING_STRONG_FOR_FSI) {
				if (stackLast <= BidiBase::MAX_EXPLICIT_LEVEL) {
					$nc(this->dirProps)->set(isolateStartStack->get(stackLast), BidiBase::RLI);
					this->flags |= DirPropFlag(BidiBase::RLI);
				}
				state = (int8_t)BidiBase::LOOKING_FOR_PDI;
			}
			lastStrong = BidiBase::R;
			if (dirProp == BidiBase::AL) {
				this->lastArabicPos = i - 1;
			}
			continue;
		}
		if (dirProp >= BidiBase::FSI && dirProp <= BidiBase::RLI) {
			++stackLast;
			if (stackLast <= BidiBase::MAX_EXPLICIT_LEVEL) {
				isolateStartStack->set(stackLast, i - 1);
				previousStateStack->set(stackLast, state);
			}
			if (dirProp == BidiBase::FSI) {
				$nc(this->dirProps)->set(i - 1, BidiBase::LRI);
				state = (int8_t)BidiBase::SEEKING_STRONG_FOR_FSI;
			} else {
				state = (int8_t)BidiBase::LOOKING_FOR_PDI;
			}
			continue;
		}
		if (dirProp == BidiBase::PDI) {
			if (state == BidiBase::SEEKING_STRONG_FOR_FSI) {
				if (stackLast <= BidiBase::MAX_EXPLICIT_LEVEL) {
					this->flags |= DirPropFlag(BidiBase::LRI);
				}
			}
			if (stackLast >= 0) {
				if (stackLast <= BidiBase::MAX_EXPLICIT_LEVEL) {
					state = previousStateStack->get(stackLast);
				}
				--stackLast;
			}
			continue;
		}
		if (dirProp == BidiBase::B) {
			if (i < this->originalLength && uchar == BidiBase::CR && $nc(this->text)->get(i) == BidiBase::LF) {
				continue;
			}
			$nc(this->paras_limit)->set(this->paraCount - 1, i);
			if (isDefaultLevelInverse && lastStrong == BidiBase::R) {
				$nc(this->paras_level)->set(this->paraCount - 1, (int8_t)1);
			}
			if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_STREAMING)) != 0) {
				this->length = i;
				this->controlCount = controlCount;
			}
			if (i < this->originalLength) {
				++this->paraCount;
				checkParaCount();
				if (isDefaultLevel) {
					$nc(this->paras_level)->set(this->paraCount - 1, defaultParaLevel);
					state = (int8_t)BidiBase::SEEKING_STRONG_FOR_PARA;
					lastStrong = defaultParaLevel;
				} else {
					$nc(this->paras_level)->set(this->paraCount - 1, this->paraLevel);
					state = (int8_t)BidiBase::NOT_SEEKING_STRONG;
				}
				stackLast = -1;
			}
			continue;
		}
	}
	if (stackLast > BidiBase::MAX_EXPLICIT_LEVEL) {
		stackLast = BidiBase::MAX_EXPLICIT_LEVEL;
		state = (int8_t)BidiBase::SEEKING_STRONG_FOR_FSI;
	}
	while (stackLast >= 0) {
		if (state == BidiBase::SEEKING_STRONG_FOR_FSI) {
			this->flags |= DirPropFlag(BidiBase::LRI);
			break;
		}
		state = previousStateStack->get(stackLast);
		--stackLast;
	}
	if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_STREAMING)) != 0) {
		if (this->length < this->originalLength) {
			--this->paraCount;
		}
	} else {
		$nc(this->paras_limit)->set(this->paraCount - 1, this->originalLength);
		this->controlCount = controlCount;
	}
	if (isDefaultLevelInverse && lastStrong == BidiBase::R) {
		$nc(this->paras_level)->set(this->paraCount - 1, (int8_t)1);
	}
	if (isDefaultLevel) {
		this->paraLevel = $nc(this->paras_level)->get(0);
	}
	for (i = 0; i < this->paraCount; ++i) {
		this->flags |= DirPropFlagLR($nc(this->paras_level)->get(i));
	}
	if (this->orderParagraphsLTR$ && ((int32_t)(this->flags & (uint32_t)DirPropFlag(BidiBase::B))) != 0) {
		this->flags |= DirPropFlag(BidiBase::L);
	}
}

int8_t BidiBase::GetParaLevelAt(int32_t pindex) {
	if (this->defaultParaLevel == 0 || pindex < $nc(this->paras_limit)->get(0)) {
		return this->paraLevel;
	}
	int32_t i = 0;
	for (i = 1; i < this->paraCount; ++i) {
		if (pindex < $nc(this->paras_limit)->get(i)) {
			break;
		}
	}
	if (i >= this->paraCount) {
		i = this->paraCount - 1;
	}
	return $nc(this->paras_level)->get(i);
}

void BidiBase::bracketInit($BidiBase$BracketData* bd) {
	$nc(bd)->isoRunLast = 0;
	$nc(bd->isoRuns)->set(0, $$new($BidiBase$IsoRun));
	$nc($nc(bd->isoRuns)->get(0))->start = (int16_t)0;
	$nc($nc(bd->isoRuns)->get(0))->limit = (int16_t)0;
	$nc($nc(bd->isoRuns)->get(0))->level = GetParaLevelAt(0);
	$nc($nc(bd->isoRuns)->get(0))->lastStrong = ($nc($nc(bd->isoRuns)->get(0))->lastBase = ($nc($nc(bd->isoRuns)->get(0))->contextDir = (int8_t)((int32_t)(GetParaLevelAt(0) & (uint32_t)1))));
	$nc($nc(bd->isoRuns)->get(0))->contextPos = 0;
	$set(bd, openings, $new($BidiBase$OpeningArray, BidiBase::SIMPLE_PARAS_COUNT));
	bd->isNumbersSpecial = this->reorderingMode == BidiBase::REORDER_NUMBERS_SPECIAL || this->reorderingMode == BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL;
}

void BidiBase::bracketProcessB($BidiBase$BracketData* bd, int8_t level) {
	$nc(bd)->isoRunLast = 0;
	$nc($nc(bd->isoRuns)->get(0))->limit = (int16_t)0;
	$nc($nc(bd->isoRuns)->get(0))->level = level;
	$nc($nc(bd->isoRuns)->get(0))->lastStrong = ($nc($nc(bd->isoRuns)->get(0))->lastBase = ($nc($nc(bd->isoRuns)->get(0))->contextDir = (int8_t)((int32_t)(level & (uint32_t)1))));
	$nc($nc(bd->isoRuns)->get(0))->contextPos = 0;
}

void BidiBase::bracketProcessBoundary($BidiBase$BracketData* bd, int32_t lastCcPos, int8_t contextLevel, int8_t embeddingLevel) {
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	if (((int32_t)(DirPropFlag($nc(this->dirProps)->get(lastCcPos)) & (uint32_t)BidiBase::MASK_ISO)) != 0) {
		return;
	}
	int8_t var$0 = NoOverride(embeddingLevel);
	if (var$0 > NoOverride(contextLevel)) {
		contextLevel = embeddingLevel;
	}
	$nc(pLastIsoRun)->limit = pLastIsoRun->start;
	pLastIsoRun->level = embeddingLevel;
	pLastIsoRun->lastStrong = (pLastIsoRun->lastBase = (pLastIsoRun->contextDir = (int8_t)((int32_t)(contextLevel & (uint32_t)1))));
	pLastIsoRun->contextPos = lastCcPos;
}

void BidiBase::bracketProcessLRI_RLI($BidiBase$BracketData* bd, int8_t level) {
	$useLocalCurrentObjectStackCache();
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	int16_t lastLimit = 0;
	$nc(pLastIsoRun)->lastBase = BidiBase::ON;
	lastLimit = pLastIsoRun->limit;
	++bd->isoRunLast;
	$assign(pLastIsoRun, $nc(bd->isoRuns)->get(bd->isoRunLast));
	if (pLastIsoRun == nullptr) {
		$assign(pLastIsoRun, ($nc(bd->isoRuns)->set(bd->isoRunLast, $$new($BidiBase$IsoRun))));
	}
	pLastIsoRun->start = (pLastIsoRun->limit = lastLimit);
	pLastIsoRun->level = level;
	pLastIsoRun->lastStrong = (pLastIsoRun->lastBase = (pLastIsoRun->contextDir = (int8_t)((int32_t)(level & (uint32_t)1))));
	pLastIsoRun->contextPos = 0;
}

void BidiBase::bracketProcessPDI($BidiBase$BracketData* bd) {
	$var($BidiBase$IsoRun, pLastIsoRun, nullptr);
	--$nc(bd)->isoRunLast;
	$assign(pLastIsoRun, $nc(bd->isoRuns)->get(bd->isoRunLast));
	$nc(pLastIsoRun)->lastBase = BidiBase::ON;
}

void BidiBase::bracketAddOpening($BidiBase$BracketData* bd, char16_t match, int32_t position) {
	$useLocalCurrentObjectStackCache();
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	$var($BidiBase$Opening, pOpening, nullptr);
	if ($nc(pLastIsoRun)->limit >= $nc(bd->openings)->length) {
		$var($BidiBase$OpeningArray, saveOpenings, bd->openings);
		int32_t count = 0;
		try {
			count = $nc(bd->openings)->length;
			$set(bd, openings, $new($BidiBase$OpeningArray, count * 2));
		} catch ($Exception& e) {
			$throwNew($OutOfMemoryError, "Failed to allocate memory for openings"_s);
		}
		$System::arraycopy(saveOpenings, 0, bd->openings, 0, count);
	}
	$assign(pOpening, $nc(bd->openings)->get($nc(pLastIsoRun)->limit));
	if (pOpening == nullptr) {
		$assign(pOpening, ($nc(bd->openings)->set(pLastIsoRun->limit, $$new($BidiBase$Opening))));
	}
	$nc(pOpening)->position = position;
	pOpening->match = match;
	pOpening->contextDir = pLastIsoRun->contextDir;
	pOpening->contextPos = pLastIsoRun->contextPos;
	pOpening->flags = (int16_t)0;
	++pLastIsoRun->limit;
}

void BidiBase::fixN0c($BidiBase$BracketData* bd, int32_t openingIndex, int32_t newPropPosition, int8_t newProp) {
	$useLocalCurrentObjectStackCache();
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	$var($BidiBase$Opening, qOpening, nullptr);
	int32_t k = 0;
	int32_t openingPosition = 0;
	int32_t closingPosition = 0;
	for (k = openingIndex + 1; k < $nc(pLastIsoRun)->limit; ++k) {
		$assign(qOpening, $nc(bd->openings)->get(k));
		if ($nc(qOpening)->match >= 0) {
			continue;
		}
		if (newPropPosition < $nc(qOpening)->contextPos) {
			break;
		}
		if (newPropPosition >= $nc(qOpening)->position) {
			continue;
		}
		if (newProp == $nc(qOpening)->contextDir) {
			break;
		}
		openingPosition = $nc(qOpening)->position;
		$nc(this->dirProps)->set(openingPosition, newProp);
		closingPosition = -(qOpening->match);
		$nc(this->dirProps)->set(closingPosition, newProp);
		qOpening->match = 0;
		fixN0c(bd, k, openingPosition, newProp);
		fixN0c(bd, k, closingPosition, newProp);
	}
}

int8_t BidiBase::bracketProcessClosing($BidiBase$BracketData* bd, int32_t openIdx, int32_t position) {
	$useLocalCurrentObjectStackCache();
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	$var($BidiBase$Opening, pOpening, nullptr);
	$var($BidiBase$Opening, qOpening, nullptr);
	int8_t direction = 0;
	bool stable = false;
	int8_t newProp = 0;
	$assign(pOpening, $nc(bd->openings)->get(openIdx));
	direction = (int8_t)((int32_t)($nc(pLastIsoRun)->level & (uint32_t)1));
	stable = true;
	if ((direction == 0 && ((int32_t)($nc(pOpening)->flags & (uint32_t)(int32_t)BidiBase::FOUND_L)) > 0) || (direction == 1 && ((int32_t)($nc(pOpening)->flags & (uint32_t)(int32_t)BidiBase::FOUND_R)) > 0)) {
		newProp = direction;
	} else if (((int32_t)(pOpening->flags & (uint32_t)(BidiBase::FOUND_L | BidiBase::FOUND_R))) != 0) {
		stable = (openIdx == pLastIsoRun->start);
		if (direction != pOpening->contextDir) {
			newProp = pOpening->contextDir;
		} else {
			newProp = direction;
		}
	} else {
		pLastIsoRun->limit = (int16_t)openIdx;
		return BidiBase::ON;
	}
	$nc(this->dirProps)->set($nc(pOpening)->position, newProp);
	$nc(this->dirProps)->set(position, newProp);
	fixN0c(bd, openIdx, pOpening->position, newProp);
	if (stable) {
		pLastIsoRun->limit = (int16_t)openIdx;
		while (pLastIsoRun->limit > pLastIsoRun->start && $nc($nc(bd->openings)->get(pLastIsoRun->limit - 1))->position == pOpening->position) {
			--pLastIsoRun->limit;
		}
	} else {
		int32_t k = 0;
		pOpening->match = -position;
		k = openIdx - 1;
		while (k >= pLastIsoRun->start && $nc($nc(bd->openings)->get(k))->position == pOpening->position) {
			$nc($nc(bd->openings)->get(k--))->match = 0;
		}
		for (k = openIdx + 1; k < pLastIsoRun->limit; ++k) {
			$assign(qOpening, $nc(bd->openings)->get(k));
			if ($nc(qOpening)->position >= position) {
				break;
			}
			if ($nc(qOpening)->match > 0) {
				qOpening->match = 0;
			}
		}
	}
	return newProp;
}

void BidiBase::bracketProcessChar($BidiBase$BracketData* bd, int32_t position) {
	$var($BidiBase$IsoRun, pLastIsoRun, $nc($nc(bd)->isoRuns)->get(bd->isoRunLast));
	int8_t dirProp = 0;
	int8_t newProp = 0;
	int8_t level = 0;
	dirProp = $nc(this->dirProps)->get(position);
	if (dirProp == BidiBase::ON) {
		char16_t c = 0;
		char16_t match = 0;
		int32_t idx = 0;
		c = $nc(this->text)->get(position);
		for (idx = $nc(pLastIsoRun)->limit - 1; idx >= pLastIsoRun->start; --idx) {
			if ($nc($nc(bd->openings)->get(idx))->match != c) {
				continue;
			}
			newProp = bracketProcessClosing(bd, idx, position);
			if (newProp == BidiBase::ON) {
				c = (char16_t)0;
				break;
			}
			pLastIsoRun->lastBase = BidiBase::ON;
			pLastIsoRun->contextDir = newProp;
			pLastIsoRun->contextPos = position;
			level = $nc(this->levels)->get(position);
			if (((int32_t)(level & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) != 0) {
				int16_t flag = 0;
				int32_t i = 0;
				newProp = (int8_t)((int32_t)(level & (uint32_t)1));
				pLastIsoRun->lastStrong = newProp;
				flag = (int16_t)DirPropFlag(newProp);
				for (i = pLastIsoRun->start; i < idx; ++i) {
					$nc($nc(bd->openings)->get(i))->flags |= flag;
				}
				(*$nc(this->levels))[position] &= (uint8_t)~BidiBase::LEVEL_OVERRIDE;
			}
			(*$nc(this->levels))[$nc($nc(bd->openings)->get(idx))->position] &= (uint8_t)~BidiBase::LEVEL_OVERRIDE;
			return;
		}
		if (c != 0) {
			match = (char16_t)$UCharacter::getBidiPairedBracket(c);
		} else {
			match = (char16_t)0;
		}
		if (match != c && $UCharacter::getIntPropertyValue(c, BidiBase::BIDI_PAIRED_BRACKET_TYPE) == $BidiBase$BidiPairedBracketType::OPEN) {
			if (match == 9002) {
				bracketAddOpening(bd, (char16_t)12297, position);
			} else if (match == 12297) {
				bracketAddOpening(bd, (char16_t)9002, position);
			}
			bracketAddOpening(bd, match, position);
		}
	}
	level = $nc(this->levels)->get(position);
	if (((int32_t)(level & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) != 0) {
		newProp = (int8_t)((int32_t)(level & (uint32_t)1));
		if (dirProp != BidiBase::S && dirProp != BidiBase::WS && dirProp != BidiBase::ON) {
			$nc(this->dirProps)->set(position, newProp);
		}
		$nc(pLastIsoRun)->lastBase = newProp;
		pLastIsoRun->lastStrong = newProp;
		pLastIsoRun->contextDir = newProp;
		pLastIsoRun->contextPos = position;
	} else if (dirProp <= BidiBase::R || dirProp == BidiBase::AL) {
		newProp = DirFromStrong(dirProp);
		$nc(pLastIsoRun)->lastBase = dirProp;
		pLastIsoRun->lastStrong = dirProp;
		pLastIsoRun->contextDir = newProp;
		pLastIsoRun->contextPos = position;
	} else if (dirProp == BidiBase::EN) {
		$nc(pLastIsoRun)->lastBase = BidiBase::EN;
		if (pLastIsoRun->lastStrong == BidiBase::L) {
			newProp = BidiBase::L;
			if (!bd->isNumbersSpecial) {
				$nc(this->dirProps)->set(position, BidiBase::ENL);
			}
			pLastIsoRun->contextDir = BidiBase::L;
			pLastIsoRun->contextPos = position;
		} else {
			newProp = BidiBase::R;
			if (pLastIsoRun->lastStrong == BidiBase::AL) {
				$nc(this->dirProps)->set(position, BidiBase::AN);
			} else {
				$nc(this->dirProps)->set(position, BidiBase::ENR);
			}
			pLastIsoRun->contextDir = BidiBase::R;
			pLastIsoRun->contextPos = position;
		}
	} else if (dirProp == BidiBase::AN) {
		newProp = BidiBase::R;
		$nc(pLastIsoRun)->lastBase = BidiBase::AN;
		pLastIsoRun->contextDir = BidiBase::R;
		pLastIsoRun->contextPos = position;
	} else if (dirProp == BidiBase::NSM) {
		newProp = $nc(pLastIsoRun)->lastBase;
		if (newProp == BidiBase::ON) {
			$nc(this->dirProps)->set(position, newProp);
		}
	} else {
		newProp = dirProp;
		$nc(pLastIsoRun)->lastBase = dirProp;
	}
	if (newProp <= BidiBase::R || newProp == BidiBase::AL) {
		int32_t i = 0;
		int16_t flag = (int16_t)DirPropFlag(DirFromStrong(newProp));
		for (i = $nc(pLastIsoRun)->start; i < pLastIsoRun->limit; ++i) {
			if (position > $nc($nc(bd->openings)->get(i))->position) {
				$nc($nc(bd->openings)->get(i))->flags |= flag;
			}
		}
	}
}

int8_t BidiBase::directionFromFlags() {
	if (!(((int32_t)(this->flags & (uint32_t)BidiBase::MASK_RTL)) != 0 || (((int32_t)(this->flags & (uint32_t)DirPropFlag(BidiBase::AN))) != 0 && ((int32_t)(this->flags & (uint32_t)BidiBase::MASK_POSSIBLE_N)) != 0))) {
		return BidiBase::LTR;
	} else if (((int32_t)(this->flags & (uint32_t)BidiBase::MASK_LTR)) == 0) {
		return BidiBase::RTL;
	} else {
		return BidiBase::MIXED;
	}
}

int8_t BidiBase::resolveExplicitLevels() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int8_t dirProp = 0;
	int8_t level = GetParaLevelAt(0);
	int8_t dirct = 0;
	this->isolateCount = 0;
	dirct = directionFromFlags();
	if (dirct != BidiBase::MIXED) {
		return dirct;
	}
	if (this->reorderingMode > BidiBase::REORDER_LAST_LOGICAL_TO_VISUAL) {
		int32_t paraIndex = 0;
		int32_t start = 0;
		int32_t limit = 0;
		for (paraIndex = 0; paraIndex < this->paraCount; ++paraIndex) {
			if (paraIndex == 0) {
				start = 0;
			} else {
				start = $nc(this->paras_limit)->get(paraIndex - 1);
			}
			limit = $nc(this->paras_limit)->get(paraIndex);
			level = $nc(this->paras_level)->get(paraIndex);
			for (i = start; i < limit; ++i) {
				$nc(this->levels)->set(i, level);
			}
		}
		return dirct;
	}
	if (((int32_t)(this->flags & (uint32_t)(BidiBase::MASK_EXPLICIT | BidiBase::MASK_ISO))) == 0) {
		int32_t paraIndex = 0;
		int32_t start = 0;
		int32_t limit = 0;
		$var($BidiBase$BracketData, bracketData, $new($BidiBase$BracketData));
		bracketInit(bracketData);
		for (paraIndex = 0; paraIndex < this->paraCount; ++paraIndex) {
			if (paraIndex == 0) {
				start = 0;
			} else {
				start = $nc(this->paras_limit)->get(paraIndex - 1);
			}
			limit = $nc(this->paras_limit)->get(paraIndex);
			level = $nc(this->paras_level)->get(paraIndex);
			for (i = start; i < limit; ++i) {
				$nc(this->levels)->set(i, level);
				dirProp = $nc(this->dirProps)->get(i);
				if (dirProp == BidiBase::BN) {
					continue;
				}
				if (dirProp == BidiBase::B) {
					if ((i + 1) < this->length) {
						if ($nc(this->text)->get(i) == BidiBase::CR && $nc(this->text)->get(i + 1) == BidiBase::LF) {
							continue;
						}
						bracketProcessB(bracketData, level);
					}
					continue;
				}
				bracketProcessChar(bracketData, i);
			}
		}
		return dirct;
	}
	int8_t embeddingLevel = level;
	int8_t newLevel = 0;
	int8_t previousLevel = level;
	int32_t lastCcPos = 0;
	$var($shorts, stack, $new($shorts, BidiBase::MAX_EXPLICIT_LEVEL + 2));
	int32_t stackLast = 0;
	int32_t overflowIsolateCount = 0;
	int32_t overflowEmbeddingCount = 0;
	int32_t validIsolateCount = 0;
	$var($BidiBase$BracketData, bracketData, $new($BidiBase$BracketData));
	bracketInit(bracketData);
	stack->set(0, level);
	this->flags = 0;
	for (i = 0; i < this->length; ++i) {
		dirProp = $nc(this->dirProps)->get(i);
		switch (dirProp) {
		case BidiBase::LRE:
			{}
		case BidiBase::RLE:
			{}
		case BidiBase::LRO:
			{}
		case BidiBase::RLO:
			{
				this->flags |= DirPropFlag(BidiBase::BN);
				$nc(this->levels)->set(i, previousLevel);
				if (dirProp == BidiBase::LRE || dirProp == BidiBase::LRO) {
					newLevel = (int8_t)((int32_t)((embeddingLevel + 2) & (uint32_t)~(BidiBase::LEVEL_OVERRIDE | 1)));
				} else {
					newLevel = (int8_t)((NoOverride(embeddingLevel) + 1) | 1);
				}
				if (newLevel <= BidiBase::MAX_EXPLICIT_LEVEL && overflowIsolateCount == 0 && overflowEmbeddingCount == 0) {
					lastCcPos = i;
					embeddingLevel = newLevel;
					if (dirProp == BidiBase::LRO || dirProp == BidiBase::RLO) {
						embeddingLevel |= BidiBase::LEVEL_OVERRIDE;
					}
					++stackLast;
					stack->set(stackLast, embeddingLevel);
				} else if (overflowIsolateCount == 0) {
					++overflowEmbeddingCount;
				}
				break;
			}
		case BidiBase::PDF:
			{
				this->flags |= DirPropFlag(BidiBase::BN);
				$nc(this->levels)->set(i, previousLevel);
				if (overflowIsolateCount > 0) {
					break;
				}
				if (overflowEmbeddingCount > 0) {
					--overflowEmbeddingCount;
					break;
				}
				if (stackLast > 0 && stack->get(stackLast) < BidiBase::ISOLATE) {
					lastCcPos = i;
					--stackLast;
					embeddingLevel = (int8_t)stack->get(stackLast);
				}
				break;
			}
		case BidiBase::LRI:
			{}
		case BidiBase::RLI:
			{
				int32_t var$0 = DirPropFlag(BidiBase::ON);
				this->flags |= var$0 | DirPropFlagLR(embeddingLevel);
				$nc(this->levels)->set(i, NoOverride(embeddingLevel));
				int8_t var$1 = NoOverride(embeddingLevel);
				if (var$1 != NoOverride(previousLevel)) {
					bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
					this->flags |= BidiBase::DirPropFlagMultiRuns;
				}
				previousLevel = embeddingLevel;
				if (dirProp == BidiBase::LRI) {
					newLevel = (int8_t)((int32_t)((embeddingLevel + 2) & (uint32_t)~(BidiBase::LEVEL_OVERRIDE | 1)));
				} else {
					newLevel = (int8_t)((NoOverride(embeddingLevel) + 1) | 1);
				}
				if (newLevel <= BidiBase::MAX_EXPLICIT_LEVEL && overflowIsolateCount == 0 && overflowEmbeddingCount == 0) {
					this->flags |= DirPropFlag(dirProp);
					lastCcPos = i;
					++validIsolateCount;
					if (validIsolateCount > this->isolateCount) {
						this->isolateCount = validIsolateCount;
					}
					embeddingLevel = newLevel;
					++stackLast;
					stack->set(stackLast, (int16_t)(embeddingLevel + BidiBase::ISOLATE));
					bracketProcessLRI_RLI(bracketData, embeddingLevel);
				} else {
					$nc(this->dirProps)->set(i, BidiBase::WS);
					++overflowIsolateCount;
				}
				break;
			}
		case BidiBase::PDI:
			{
				int8_t var$2 = NoOverride(embeddingLevel);
				if (var$2 != NoOverride(previousLevel)) {
					bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
					this->flags |= BidiBase::DirPropFlagMultiRuns;
				}
				if (overflowIsolateCount > 0) {
					--overflowIsolateCount;
					$nc(this->dirProps)->set(i, BidiBase::WS);
				} else if (validIsolateCount > 0) {
					this->flags |= DirPropFlag(BidiBase::PDI);
					lastCcPos = i;
					overflowEmbeddingCount = 0;
					while (stack->get(stackLast) < BidiBase::ISOLATE) {
						--stackLast;
					}
					--stackLast;
					--validIsolateCount;
					bracketProcessPDI(bracketData);
				} else {
					$nc(this->dirProps)->set(i, BidiBase::WS);
				}
				embeddingLevel = (int8_t)((int32_t)(stack->get(stackLast) & (uint32_t)~BidiBase::ISOLATE));
				int32_t var$3 = DirPropFlag(BidiBase::ON);
				this->flags |= var$3 | DirPropFlagLR(embeddingLevel);
				previousLevel = embeddingLevel;
				$nc(this->levels)->set(i, NoOverride(embeddingLevel));
				break;
			}
		case BidiBase::B:
			{
				this->flags |= DirPropFlag(BidiBase::B);
				$nc(this->levels)->set(i, GetParaLevelAt(i));
				if ((i + 1) < this->length) {
					if ($nc(this->text)->get(i) == BidiBase::CR && $nc(this->text)->get(i + 1) == BidiBase::LF) {
						break;
					}
					overflowEmbeddingCount = (overflowIsolateCount = 0);
					validIsolateCount = 0;
					stackLast = 0;
					previousLevel = (embeddingLevel = GetParaLevelAt(i + 1));
					stack->set(0, embeddingLevel);
					bracketProcessB(bracketData, embeddingLevel);
				}
				break;
			}
		case BidiBase::BN:
			{
				$nc(this->levels)->set(i, previousLevel);
				this->flags |= DirPropFlag(BidiBase::BN);
				break;
			}
		default:
			{
				int8_t var$4 = NoOverride(embeddingLevel);
				if (var$4 != NoOverride(previousLevel)) {
					bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
					this->flags |= BidiBase::DirPropFlagMultiRuns;
					if (((int32_t)(embeddingLevel & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) != 0) {
						this->flags |= DirPropFlagO(embeddingLevel);
					} else {
						this->flags |= DirPropFlagE(embeddingLevel);
					}
				}
				previousLevel = embeddingLevel;
				$nc(this->levels)->set(i, embeddingLevel);
				bracketProcessChar(bracketData, i);
				this->flags |= DirPropFlag($nc(this->dirProps)->get(i));
				break;
			}
		}
	}
	if (((int32_t)(this->flags & (uint32_t)BidiBase::MASK_EMBEDDING)) != 0) {
		this->flags |= DirPropFlagLR(this->paraLevel);
	}
	if (this->orderParagraphsLTR$ && ((int32_t)(this->flags & (uint32_t)DirPropFlag(BidiBase::B))) != 0) {
		this->flags |= DirPropFlag(BidiBase::L);
	}
	dirct = directionFromFlags();
	return dirct;
}

int8_t BidiBase::checkExplicitLevels() {
	$useLocalCurrentObjectStackCache();
	int8_t dirProp = 0;
	int32_t i = 0;
	int32_t isolateCount = 0;
	this->flags = 0;
	int8_t level = 0;
	this->isolateCount = 0;
	for (i = 0; i < this->length; ++i) {
		if ($nc(this->levels)->get(i) == 0) {
			$nc(this->levels)->set(i, this->paraLevel);
		}
		if (BidiBase::MAX_EXPLICIT_LEVEL < ((int32_t)($nc(this->levels)->get(i) & (uint32_t)127))) {
			if (((int32_t)($nc(this->levels)->get(i) & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) != 0) {
				$nc(this->levels)->set(i, (int8_t)(this->paraLevel | BidiBase::LEVEL_OVERRIDE));
			} else {
				$nc(this->levels)->set(i, this->paraLevel);
			}
		}
		level = $nc(this->levels)->get(i);
		dirProp = $nc(this->dirProps)->get(i);
		if (dirProp == BidiBase::LRI || dirProp == BidiBase::RLI) {
			++isolateCount;
			if (isolateCount > this->isolateCount) {
				this->isolateCount = isolateCount;
			}
		} else if (dirProp == BidiBase::PDI) {
			--isolateCount;
		} else if (dirProp == BidiBase::B) {
			isolateCount = 0;
		}
		if (((int32_t)(level & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) != 0) {
			level &= (uint8_t)~BidiBase::LEVEL_OVERRIDE;
			this->flags |= DirPropFlagO(level);
		} else {
			int32_t var$0 = DirPropFlagE(level);
			this->flags |= var$0 | DirPropFlag(dirProp);
		}
		if ((level < GetParaLevelAt(i) && !((0 == level) && (dirProp == BidiBase::B))) || (BidiBase::MAX_EXPLICIT_LEVEL < level)) {
			$throwNew($IllegalArgumentException, $$str({"level "_s, $$str(level), " out of bounds at "_s, $$str(i)}));
		}
	}
	if (((int32_t)(this->flags & (uint32_t)BidiBase::MASK_EMBEDDING)) != 0) {
		this->flags |= DirPropFlagLR(this->paraLevel);
	}
	return directionFromFlags();
}

int16_t BidiBase::GetStateProps(int16_t cell) {
	$init(BidiBase);
	return (int16_t)((int32_t)(cell & (uint32_t)31));
}

int16_t BidiBase::GetActionProps(int16_t cell) {
	$init(BidiBase);
	return (int16_t)(cell >> 5);
}

int16_t BidiBase::GetState(int8_t cell) {
	$init(BidiBase);
	return (int16_t)((int32_t)(cell & (uint32_t)15));
}

int16_t BidiBase::GetAction(int8_t cell) {
	$init(BidiBase);
	return (int16_t)(cell >> 4);
}

void BidiBase::addPoint(int32_t pos, int32_t flag) {
	$useLocalCurrentObjectStackCache();
	$var($BidiBase$Point, point, $new($BidiBase$Point));
	int32_t len = $nc($nc(this->insertPoints)->points)->length;
	if (len == 0) {
		$set($nc(this->insertPoints), points, $new($BidiBase$PointArray, BidiBase::FIRSTALLOC));
		len = BidiBase::FIRSTALLOC;
	}
	if ($nc(this->insertPoints)->size >= len) {
		$var($BidiBase$PointArray, savePoints, $nc(this->insertPoints)->points);
		$set($nc(this->insertPoints), points, $new($BidiBase$PointArray, len * 2));
		$System::arraycopy(savePoints, 0, $nc(this->insertPoints)->points, 0, len);
	}
	point->pos = pos;
	point->flag = flag;
	$nc($nc(this->insertPoints)->points)->set($nc(this->insertPoints)->size, point);
	++$nc(this->insertPoints)->size;
}

void BidiBase::setLevelsOutsideIsolates(int32_t start, int32_t limit, int8_t level) {
	int8_t dirProp = 0;
	int32_t isolateCount = 0;
	int32_t k = 0;
	for (k = start; k < limit; ++k) {
		dirProp = $nc(this->dirProps)->get(k);
		if (dirProp == BidiBase::PDI) {
			--isolateCount;
		}
		if (isolateCount == 0) {
			$nc(this->levels)->set(k, level);
		}
		if (dirProp == BidiBase::LRI || dirProp == BidiBase::RLI) {
			++isolateCount;
		}
	}
}

void BidiBase::processPropertySeq($BidiBase$LevState* levState, int16_t _prop, int32_t start, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	int8_t cell = 0;
	$var($byteArray2, impTab, $nc(levState)->impTab);
	$var($shorts, impAct, levState->impAct);
	int16_t oldStateSeq = 0;
	int16_t actionSeq = 0;
	int8_t level = 0;
	int8_t addLevel = 0;
	int32_t start0 = 0;
	int32_t k = 0;
	start0 = start;
	oldStateSeq = levState->state;
	cell = $nc($nc(impTab)->get(oldStateSeq))->get(_prop);
	levState->state = GetState(cell);
	actionSeq = $nc(impAct)->get(GetAction(cell));
	addLevel = $nc(impTab->get(levState->state))->get(BidiBase::IMPTABLEVELS_RES);
	if (actionSeq != 0) {
		switch (actionSeq) {
		case 1:
			{
				levState->startON = start0;
				break;
			}
		case 2:
			{
				start = levState->startON;
				break;
			}
		case 3:
			{
				level = (int8_t)(levState->runLevel + 1);
				setLevelsOutsideIsolates(levState->startON, start0, level);
				break;
			}
		case 4:
			{
				level = (int8_t)(levState->runLevel + 2);
				setLevelsOutsideIsolates(levState->startON, start0, level);
				break;
			}
		case 5:
			{
				if (levState->startL2EN >= 0) {
					addPoint(levState->startL2EN, BidiBase::LRM_BEFORE);
				}
				levState->startL2EN = -1;
				if (($nc($nc(this->insertPoints)->points)->length == 0) || ($nc(this->insertPoints)->size <= $nc(this->insertPoints)->confirmed)) {
					levState->lastStrongRTL = -1;
					level = $nc(impTab->get(oldStateSeq))->get(BidiBase::IMPTABLEVELS_RES);
					if (((int32_t)(level & (uint32_t)1)) != 0 && levState->startON > 0) {
						start = levState->startON;
					}
					if (_prop == BidiBase::_S) {
						addPoint(start0, BidiBase::LRM_BEFORE);
						$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
					}
					break;
				}
				for (k = levState->lastStrongRTL + 1; k < start0; ++k) {
					$nc(this->levels)->set(k, (int8_t)((int32_t)(($nc(this->levels)->get(k) - 2) & (uint32_t)~1)));
				}
				$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
				levState->lastStrongRTL = -1;
				if (_prop == BidiBase::_S) {
					addPoint(start0, BidiBase::LRM_BEFORE);
					$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
				}
				break;
			}
		case 6:
			{
				if ($nc($nc(this->insertPoints)->points)->length > 0) {
					$nc(this->insertPoints)->size = $nc(this->insertPoints)->confirmed;
				}
				levState->startON = -1;
				levState->startL2EN = -1;
				levState->lastStrongRTL = limit - 1;
				break;
			}
		case 7:
			{
				if ((_prop == BidiBase::_AN) && ($nc(this->dirProps)->get(start0) == BidiBase::AN) && (this->reorderingMode != BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL)) {
					if (levState->startL2EN == -1) {
						levState->lastStrongRTL = limit - 1;
						break;
					}
					if (levState->startL2EN >= 0) {
						addPoint(levState->startL2EN, BidiBase::LRM_BEFORE);
						levState->startL2EN = -2;
					}
					addPoint(start0, BidiBase::LRM_BEFORE);
					break;
				}
				if (levState->startL2EN == -1) {
					levState->startL2EN = start0;
				}
				break;
			}
		case 8:
			{
				levState->lastStrongRTL = limit - 1;
				levState->startON = -1;
				break;
			}
		case 9:
			{
				for (k = start0 - 1; k >= 0 && (((int32_t)($nc(this->levels)->get(k) & (uint32_t)1)) == 0); --k) {
				}
				if (k >= 0) {
					addPoint(k, BidiBase::RLM_BEFORE);
					$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
				}
				levState->startON = start0;
				break;
			}
		case 10:
			{
				addPoint(start0, BidiBase::LRM_BEFORE);
				addPoint(start0, BidiBase::LRM_AFTER);
				break;
			}
		case 11:
			{
				$nc(this->insertPoints)->size = $nc(this->insertPoints)->confirmed;
				if (_prop == BidiBase::_S) {
					addPoint(start0, BidiBase::RLM_BEFORE);
					$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
				}
				break;
			}
		case 12:
			{
				level = (int8_t)(levState->runLevel + addLevel);
				for (k = levState->startON; k < start0; ++k) {
					if ($nc(this->levels)->get(k) < level) {
						$nc(this->levels)->set(k, level);
					}
				}
				$nc(this->insertPoints)->confirmed = $nc(this->insertPoints)->size;
				levState->startON = start0;
				break;
			}
		case 13:
			{
				level = levState->runLevel;
				for (k = start0 - 1; k >= levState->startON; --k) {
					if ($nc(this->levels)->get(k) == level + 3) {
						while ($nc(this->levels)->get(k) == level + 3) {
							(*$nc(this->levels))[k--] -= 2;
						}
						while ($nc(this->levels)->get(k) == level) {
							--k;
						}
					}
					if ($nc(this->levels)->get(k) == level + 2) {
						$nc(this->levels)->set(k, level);
						continue;
					}
					$nc(this->levels)->set(k, (int8_t)(level + 1));
				}
				break;
			}
		case 14:
			{
				level = (int8_t)(levState->runLevel + 1);
				for (k = start0 - 1; k >= levState->startON; --k) {
					if ($nc(this->levels)->get(k) > level) {
						(*$nc(this->levels))[k] -= 2;
					}
				}
				break;
			}
		default:
			{
				$throwNew($IllegalStateException, "Internal ICU error in processPropertySeq"_s);
			}
		}
	}
	if ((addLevel) != 0 || (start < start0)) {
		level = (int8_t)(levState->runLevel + addLevel);
		if (start >= levState->runStart) {
			for (k = start; k < limit; ++k) {
				$nc(this->levels)->set(k, level);
			}
		} else {
			setLevelsOutsideIsolates(start, limit, level);
		}
	}
}

void BidiBase::resolveImplicitLevels(int32_t start, int32_t limit, int16_t sor, int16_t eor) {
	$useLocalCurrentObjectStackCache();
	int8_t dirProp = 0;
	$var($BidiBase$LevState, levState, $new($BidiBase$LevState));
	int32_t i = 0;
	int32_t start1 = 0;
	int32_t start2 = 0;
	int16_t oldStateImp = 0;
	int16_t stateImp = 0;
	int16_t actionImp = 0;
	int16_t gprop = 0;
	int16_t resProp = 0;
	int16_t cell = 0;
	bool inverseRTL = false;
	int16_t nextStrongProp = BidiBase::R;
	int32_t nextStrongPos = -1;
	inverseRTL = ((start < this->lastArabicPos) && (((int32_t)(GetParaLevelAt(start) & (uint32_t)1)) > 0) && (this->reorderingMode == BidiBase::REORDER_INVERSE_LIKE_DIRECT || this->reorderingMode == BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL));
	levState->startL2EN = -1;
	levState->lastStrongRTL = -1;
	levState->runStart = start;
	levState->runLevel = $nc(this->levels)->get(start);
	$set(levState, impTab, $nc($nc(this->impTabPair)->imptab)->get((int32_t)(levState->runLevel & (uint32_t)1)));
	$set(levState, impAct, $nc($nc(this->impTabPair)->impact)->get((int32_t)(levState->runLevel & (uint32_t)1)));
	if ($nc(this->dirProps)->get(start) == BidiBase::PDI) {
		levState->startON = $nc($nc(this->isolates)->get(this->isolateCount))->startON;
		start1 = $nc($nc(this->isolates)->get(this->isolateCount))->start1;
		stateImp = $nc($nc(this->isolates)->get(this->isolateCount))->stateImp;
		levState->state = $nc($nc(this->isolates)->get(this->isolateCount))->state;
		--this->isolateCount;
	} else {
		levState->startON = -1;
		start1 = start;
		if ($nc(this->dirProps)->get(start) == BidiBase::NSM) {
			stateImp = (int16_t)(1 + sor);
		} else {
			stateImp = (int16_t)0;
		}
		levState->state = (int16_t)0;
		processPropertySeq(levState, sor, start, start);
	}
	start2 = start;
	for (i = start; i <= limit; ++i) {
		if (i >= limit) {
			int32_t k = 0;
			for (k = limit - 1; k > start && ((int32_t)(DirPropFlag($nc(this->dirProps)->get(k)) & (uint32_t)BidiBase::MASK_BN_EXPLICIT)) != 0; --k) {
			}
			dirProp = $nc(this->dirProps)->get(k);
			if (dirProp == BidiBase::LRI || dirProp == BidiBase::RLI) {
				break;
			}
			gprop = eor;
		} else {
			int8_t prop = 0;
			int8_t prop1 = 0;
			prop = $nc(this->dirProps)->get(i);
			if (prop == BidiBase::B) {
				this->isolateCount = -1;
			}
			if (inverseRTL) {
				if (prop == BidiBase::AL) {
					prop = BidiBase::R;
				} else if (prop == BidiBase::EN) {
					if (nextStrongPos <= i) {
						int32_t j = 0;
						nextStrongProp = BidiBase::R;
						nextStrongPos = limit;
						for (j = i + 1; j < limit; ++j) {
							prop1 = $nc(this->dirProps)->get(j);
							if (prop1 == BidiBase::L || prop1 == BidiBase::R || prop1 == BidiBase::AL) {
								nextStrongProp = prop1;
								nextStrongPos = j;
								break;
							}
						}
					}
					if (nextStrongProp == BidiBase::AL) {
						prop = BidiBase::AN;
					}
				}
			}
			gprop = $nc(BidiBase::groupProp)->get(prop);
		}
		oldStateImp = stateImp;
		cell = $nc($nc(BidiBase::impTabProps)->get(oldStateImp))->get(gprop);
		stateImp = GetStateProps(cell);
		actionImp = GetActionProps(cell);
		if ((i == limit) && (actionImp == 0)) {
			actionImp = (int16_t)1;
		}
		if (actionImp != 0) {
			resProp = $nc($nc(BidiBase::impTabProps)->get(oldStateImp))->get(BidiBase::IMPTABPROPS_RES);
			switch (actionImp) {
			case 1:
				{
					processPropertySeq(levState, resProp, start1, i);
					start1 = i;
					break;
				}
			case 2:
				{
					start2 = i;
					break;
				}
			case 3:
				{
					processPropertySeq(levState, resProp, start1, start2);
					processPropertySeq(levState, BidiBase::_ON, start2, i);
					start1 = i;
					break;
				}
			case 4:
				{
					processPropertySeq(levState, resProp, start1, start2);
					start1 = start2;
					start2 = i;
					break;
				}
			default:
				{
					$throwNew($IllegalStateException, "Internal ICU error in resolveImplicitLevels"_s);
				}
			}
		}
	}
	for (i = limit - 1; i > start && ((int32_t)(DirPropFlag($nc(this->dirProps)->get(i)) & (uint32_t)BidiBase::MASK_BN_EXPLICIT)) != 0; --i) {
	}
	dirProp = $nc(this->dirProps)->get(i);
	if ((dirProp == BidiBase::LRI || dirProp == BidiBase::RLI) && limit < this->length) {
		++this->isolateCount;
		if ($nc(this->isolates)->get(this->isolateCount) == nullptr) {
			$nc(this->isolates)->set(this->isolateCount, $$new($BidiBase$Isolate));
		}
		$nc($nc(this->isolates)->get(this->isolateCount))->stateImp = stateImp;
		$nc($nc(this->isolates)->get(this->isolateCount))->state = levState->state;
		$nc($nc(this->isolates)->get(this->isolateCount))->start1 = start1;
		$nc($nc(this->isolates)->get(this->isolateCount))->startON = levState->startON;
	} else {
		processPropertySeq(levState, eor, limit, limit);
	}
}

void BidiBase::adjustWSLevels() {
	int32_t i = 0;
	if (((int32_t)(this->flags & (uint32_t)BidiBase::MASK_WS)) != 0) {
		int32_t flag = 0;
		i = this->trailingWSStart;
		while (i > 0) {
			while (i > 0 && ((int32_t)((flag = DirPropFlag($nc(this->dirProps)->get(--i))) & (uint32_t)BidiBase::MASK_WS)) != 0) {
				if (this->orderParagraphsLTR$ && ((int32_t)(flag & (uint32_t)DirPropFlag(BidiBase::B))) != 0) {
					$nc(this->levels)->set(i, (int8_t)0);
				} else {
					$nc(this->levels)->set(i, GetParaLevelAt(i));
				}
			}
			while (i > 0) {
				flag = DirPropFlag($nc(this->dirProps)->get(--i));
				if (((int32_t)(flag & (uint32_t)BidiBase::MASK_BN_EXPLICIT)) != 0) {
					$nc(this->levels)->set(i, $nc(this->levels)->get(i + 1));
				} else if (this->orderParagraphsLTR$ && ((int32_t)(flag & (uint32_t)DirPropFlag(BidiBase::B))) != 0) {
					$nc(this->levels)->set(i, (int8_t)0);
					break;
				} else if (((int32_t)(flag & (uint32_t)BidiBase::MASK_B_S)) != 0) {
					$nc(this->levels)->set(i, GetParaLevelAt(i));
					break;
				}
			}
		}
	}
}

void BidiBase::setParaSuccess() {
	$set(this, paraBidi, this);
}

int32_t BidiBase::Bidi_Min(int32_t x, int32_t y) {
	return x < y ? x : y;
}

int32_t BidiBase::Bidi_Abs(int32_t x) {
	return x >= 0 ? x : -x;
}

void BidiBase::setParaRunsOnly($chars* parmText, int8_t parmParaLevel) {
	$useLocalCurrentObjectStackCache();
	$var($ints, visualMap, nullptr);
	$var($String, visualText, nullptr);
	int32_t saveLength = 0;
	int32_t saveTrailingWSStart = 0;
	$var($bytes, saveLevels, nullptr);
	int8_t saveDirection = 0;
	int32_t i = 0;
	int32_t j = 0;
	int32_t visualStart = 0;
	int32_t logicalStart = 0;
	int32_t oldRunCount = 0;
	int32_t runLength = 0;
	int32_t addedRuns = 0;
	int32_t insertRemove = 0;
	int32_t start = 0;
	int32_t limit = 0;
	int32_t step = 0;
	int32_t indexOddBit = 0;
	int32_t logicalPos = 0;
	int32_t index = 0;
	int32_t index1 = 0;
	int32_t saveOptions = 0;
	this->reorderingMode = BidiBase::REORDER_DEFAULT;
	int32_t parmLength = $nc(parmText)->length;
	if (parmLength == 0) {
		setPara(parmText, parmParaLevel, ($bytes*)nullptr);
		this->reorderingMode = BidiBase::REORDER_RUNS_ONLY;
		return;
	}
	saveOptions = this->reorderingOptions;
	if (((int32_t)(saveOptions & (uint32_t)BidiBase::OPTION_INSERT_MARKS)) > 0) {
		this->reorderingOptions &= (uint32_t)~BidiBase::OPTION_INSERT_MARKS;
		this->reorderingOptions |= BidiBase::OPTION_REMOVE_CONTROLS;
	}
	parmParaLevel &= (uint8_t)1;
	setPara(parmText, parmParaLevel, ($bytes*)nullptr);
	$assign(saveLevels, $new($bytes, this->length));
	$System::arraycopy($(getLevels()), 0, saveLevels, 0, this->length);
	saveTrailingWSStart = this->trailingWSStart;
	$assign(visualText, writeReordered(BidiBase::DO_MIRRORING));
	$assign(visualMap, getVisualMap());
	this->reorderingOptions = saveOptions;
	saveLength = this->length;
	saveDirection = this->direction;
	this->reorderingMode = BidiBase::REORDER_INVERSE_LIKE_DIRECT;
	parmParaLevel ^= 1;
	setPara(visualText, parmParaLevel, ($bytes*)nullptr);
	$BidiLine::getRuns(this);
	addedRuns = 0;
	oldRunCount = this->runCount;
	visualStart = 0;
	for (i = 0; i < oldRunCount; ++i, visualStart += runLength) {
		runLength = $nc($nc(this->runs)->get(i))->limit - visualStart;
		if (runLength < 2) {
			continue;
		}
		logicalStart = $nc($nc(this->runs)->get(i))->start;
		for (j = logicalStart + 1; j < logicalStart + runLength; ++j) {
			index = $nc(visualMap)->get(j);
			index1 = visualMap->get(j - 1);
			if ((Bidi_Abs(index - index1) != 1) || (saveLevels->get(index) != saveLevels->get(index1))) {
				++addedRuns;
			}
		}
	}
	if (addedRuns > 0) {
		getRunsMemory(oldRunCount + addedRuns);
		if (this->runCount == 1) {
			$nc(this->runsMemory)->set(0, $nc(this->runs)->get(0));
		} else {
			$System::arraycopy(this->runs, 0, this->runsMemory, 0, this->runCount);
		}
		$set(this, runs, this->runsMemory);
		this->runCount += addedRuns;
		for (i = oldRunCount; i < this->runCount; ++i) {
			if ($nc(this->runs)->get(i) == nullptr) {
				$nc(this->runs)->set(i, $$new($BidiRun, 0, 0, (int8_t)0));
			}
		}
	}
	int32_t newI = 0;
	for (i = oldRunCount - 1; i >= 0; --i) {
		newI = i + addedRuns;
		runLength = i == 0 ? $nc($nc(this->runs)->get(0))->limit : $nc($nc(this->runs)->get(i))->limit - $nc($nc(this->runs)->get(i - 1))->limit;
		logicalStart = $nc($nc(this->runs)->get(i))->start;
		indexOddBit = (int32_t)($nc($nc(this->runs)->get(i))->level & (uint32_t)1);
		if (runLength < 2) {
			if (addedRuns > 0) {
				$nc($nc(this->runs)->get(newI))->copyFrom($nc(this->runs)->get(i));
			}
			logicalPos = $nc(visualMap)->get(logicalStart);
			$nc($nc(this->runs)->get(newI))->start = logicalPos;
			$nc($nc(this->runs)->get(newI))->level = (int8_t)(saveLevels->get(logicalPos) ^ indexOddBit);
			continue;
		}
		if (indexOddBit > 0) {
			start = logicalStart;
			limit = logicalStart + runLength - 1;
			step = 1;
		} else {
			start = logicalStart + runLength - 1;
			limit = logicalStart;
			step = -1;
		}
		for (j = start; j != limit; j += step) {
			index = $nc(visualMap)->get(j);
			index1 = visualMap->get(j + step);
			if ((Bidi_Abs(index - index1) != 1) || (saveLevels->get(index) != saveLevels->get(index1))) {
				logicalPos = Bidi_Min(visualMap->get(start), index);
				$nc($nc(this->runs)->get(newI))->start = logicalPos;
				$nc($nc(this->runs)->get(newI))->level = (int8_t)(saveLevels->get(logicalPos) ^ indexOddBit);
				$nc($nc(this->runs)->get(newI))->limit = $nc($nc(this->runs)->get(i))->limit;
				$nc($nc(this->runs)->get(i))->limit -= Bidi_Abs(j - start) + 1;
				insertRemove = (int32_t)($nc($nc(this->runs)->get(i))->insertRemove & (uint32_t)(BidiBase::LRM_AFTER | BidiBase::RLM_AFTER));
				$nc($nc(this->runs)->get(newI))->insertRemove = insertRemove;
				$nc($nc(this->runs)->get(i))->insertRemove &= (uint32_t)~insertRemove;
				start = j + step;
				--addedRuns;
				--newI;
			}
		}
		if (addedRuns > 0) {
			$nc($nc(this->runs)->get(newI))->copyFrom($nc(this->runs)->get(i));
		}
		logicalPos = Bidi_Min($nc(visualMap)->get(start), visualMap->get(limit));
		$nc($nc(this->runs)->get(newI))->start = logicalPos;
		$nc($nc(this->runs)->get(newI))->level = (int8_t)(saveLevels->get(logicalPos) ^ indexOddBit);
	}
	this->paraLevel ^= 1;
	$set(this, text, parmText);
	this->length = saveLength;
	this->originalLength = parmLength;
	this->direction = saveDirection;
	$set(this, levels, saveLevels);
	this->trailingWSStart = saveTrailingWSStart;
	if (this->runCount > 1) {
		this->direction = BidiBase::MIXED;
	}
	this->reorderingMode = BidiBase::REORDER_RUNS_ONLY;
}

void BidiBase::setPara($String* text, int8_t paraLevel, $bytes* embeddingLevels) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr) {
		setPara($$new($chars, 0), paraLevel, embeddingLevels);
	} else {
		setPara($($nc(text)->toCharArray()), paraLevel, embeddingLevels);
	}
}

void BidiBase::setPara($chars* chars$renamed, int8_t paraLevel, $bytes* embeddingLevels) {
	$var($chars, chars, chars$renamed);
	if (paraLevel < BidiBase::LEVEL_DEFAULT_LTR) {
		verifyRange(paraLevel, 0, BidiBase::MAX_EXPLICIT_LEVEL + 1);
	}
	if (chars == nullptr) {
		$assign(chars, $new($chars, 0));
	}
	if (this->reorderingMode == BidiBase::REORDER_RUNS_ONLY) {
		setParaRunsOnly(chars, paraLevel);
		return;
	}
	$set(this, paraBidi, nullptr);
	$set(this, text, chars);
	this->length = (this->originalLength = (this->resultLength = $nc(this->text)->length));
	this->paraLevel = paraLevel;
	this->direction = (int8_t)((int32_t)(paraLevel & (uint32_t)1));
	this->paraCount = 1;
	$set(this, dirProps, $new($bytes, 0));
	$set(this, levels, $new($bytes, 0));
	$set(this, runs, $new($BidiRunArray, 0));
	this->isGoodLogicalToVisualRunsMap = false;
	$nc(this->insertPoints)->size = 0;
	$nc(this->insertPoints)->confirmed = 0;
	this->defaultParaLevel = IsDefaultLevel(paraLevel) ? paraLevel : (int8_t)0;
	if (this->length == 0) {
		if (IsDefaultLevel(paraLevel)) {
			this->paraLevel &= (uint8_t)1;
			this->defaultParaLevel = (int8_t)0;
		}
		this->flags = DirPropFlagLR(paraLevel);
		this->runCount = 0;
		this->paraCount = 0;
		setParaSuccess();
		return;
	}
	this->runCount = -1;
	getDirPropsMemory(this->length);
	$set(this, dirProps, this->dirPropsMemory);
	getDirProps();
	this->trailingWSStart = this->length;
	if (embeddingLevels == nullptr) {
		getLevelsMemory(this->length);
		$set(this, levels, this->levelsMemory);
		this->direction = resolveExplicitLevels();
	} else {
		$set(this, levels, embeddingLevels);
		this->direction = checkExplicitLevels();
	}
	if (this->isolateCount > 0) {
		if (this->isolates == nullptr || $nc(this->isolates)->length < this->isolateCount) {
			$set(this, isolates, $new($BidiBase$IsolateArray, this->isolateCount + 3));
		}
	}
	this->isolateCount = -1;
	switch (this->direction) {
	case BidiBase::LTR:
		{
			this->trailingWSStart = 0;
			break;
		}
	case BidiBase::RTL:
		{
			this->trailingWSStart = 0;
			break;
		}
	default:
		{
			switch (this->reorderingMode) {
			case BidiBase::REORDER_DEFAULT:
				{
					$set(this, impTabPair, BidiBase::impTab_DEFAULT);
					break;
				}
			case BidiBase::REORDER_NUMBERS_SPECIAL:
				{
					$set(this, impTabPair, BidiBase::impTab_NUMBERS_SPECIAL);
					break;
				}
			case BidiBase::REORDER_GROUP_NUMBERS_WITH_R:
				{
					$set(this, impTabPair, BidiBase::impTab_GROUP_NUMBERS_WITH_R);
					break;
				}
			case BidiBase::REORDER_RUNS_ONLY:
				{
					$throwNew($InternalError, "Internal ICU error in setPara"_s);
				}
			case BidiBase::REORDER_INVERSE_NUMBERS_AS_L:
				{
					$set(this, impTabPair, BidiBase::impTab_INVERSE_NUMBERS_AS_L);
					break;
				}
			case BidiBase::REORDER_INVERSE_LIKE_DIRECT:
				{
					if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_INSERT_MARKS)) != 0) {
						$set(this, impTabPair, BidiBase::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS);
					} else {
						$set(this, impTabPair, BidiBase::impTab_INVERSE_LIKE_DIRECT);
					}
					break;
				}
			case BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL:
				{
					if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_INSERT_MARKS)) != 0) {
						$set(this, impTabPair, BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS);
					} else {
						$set(this, impTabPair, BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL);
					}
					break;
				}
			}
			if (embeddingLevels == nullptr && this->paraCount <= 1 && ((int32_t)(this->flags & (uint32_t)BidiBase::DirPropFlagMultiRuns)) == 0) {
				int32_t var$0 = this->length;
				int16_t var$1 = (int16_t)GetLRFromLevel(GetParaLevelAt(0));
				resolveImplicitLevels(0, var$0, var$1, GetLRFromLevel(GetParaLevelAt(this->length - 1)));
			} else {
				int32_t start = 0;
				int32_t limit = 0;
				int8_t level = 0;
				int8_t nextLevel = 0;
				int16_t sor = 0;
				int16_t eor = 0;
				level = GetParaLevelAt(0);
				nextLevel = $nc(this->levels)->get(0);
				if (level < nextLevel) {
					eor = GetLRFromLevel(nextLevel);
				} else {
					eor = GetLRFromLevel(level);
				}
				do {
					start = limit;
					level = nextLevel;
					if ((start > 0) && ($nc(this->dirProps)->get(start - 1) == BidiBase::B)) {
						sor = GetLRFromLevel(GetParaLevelAt(start));
					} else {
						sor = eor;
					}
					while (true) {
						bool var$2 = (++limit < this->length);
						if (!(var$2 && (($nc(this->levels)->get(limit) == level) || (((int32_t)(DirPropFlag($nc(this->dirProps)->get(limit)) & (uint32_t)BidiBase::MASK_BN_EXPLICIT)) != 0)))) {
							break;
						}
						{
						}
					}
					if (limit < this->length) {
						nextLevel = $nc(this->levels)->get(limit);
					} else {
						nextLevel = GetParaLevelAt(this->length - 1);
					}
					int8_t var$3 = NoOverride(level);
					if (var$3 < NoOverride(nextLevel)) {
						eor = GetLRFromLevel(nextLevel);
					} else {
						eor = GetLRFromLevel(level);
					}
					if (((int32_t)(level & (uint32_t)(int32_t)BidiBase::LEVEL_OVERRIDE)) == 0) {
						resolveImplicitLevels(start, limit, sor, eor);
					} else {
						do {
							(*$nc(this->levels))[start++] &= (uint8_t)~BidiBase::LEVEL_OVERRIDE;
						} while (start < limit);
					}
				} while (limit < this->length);
			}
			adjustWSLevels();
			break;
		}
	}
	if ((this->defaultParaLevel > 0) && (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_INSERT_MARKS)) != 0) && ((this->reorderingMode == BidiBase::REORDER_INVERSE_LIKE_DIRECT) || (this->reorderingMode == BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL))) {
		int32_t start = 0;
		int32_t last = 0;
		int8_t level = 0;
		int8_t dirProp = 0;
		for (int32_t i = 0; i < this->paraCount; ++i) {
			last = $nc(this->paras_limit)->get(i) - 1;
			level = $nc(this->paras_level)->get(i);
			if (level == 0) {
				continue;
			}
			start = i == 0 ? 0 : $nc(this->paras_limit)->get(i - 1);
			for (int32_t j = last; j >= start; --j) {
				dirProp = $nc(this->dirProps)->get(j);
				if (dirProp == BidiBase::L) {
					if (j < last) {
						while ($nc(this->dirProps)->get(last) == BidiBase::B) {
							--last;
						}
					}
					addPoint(last, BidiBase::RLM_BEFORE);
					break;
				}
				if (((int32_t)(DirPropFlag(dirProp) & (uint32_t)BidiBase::MASK_R_AL)) != 0) {
					break;
				}
			}
		}
	}
	if (((int32_t)(this->reorderingOptions & (uint32_t)BidiBase::OPTION_REMOVE_CONTROLS)) != 0) {
		this->resultLength -= this->controlCount;
	} else {
		this->resultLength += $nc(this->insertPoints)->size;
	}
	setParaSuccess();
}

void BidiBase::setPara($AttributedCharacterIterator* paragraph) {
	$useLocalCurrentObjectStackCache();
	int8_t paraLvl = 0;
	char16_t ch = $nc(paragraph)->first();
	$init($BidiBase$TextAttributeConstants);
	$var($Boolean, runDirection, $cast($Boolean, paragraph->getAttribute($BidiBase$TextAttributeConstants::RUN_DIRECTION)));
	$var($Object, shaper, paragraph->getAttribute($BidiBase$TextAttributeConstants::NUMERIC_SHAPING));
	if (runDirection == nullptr) {
		paraLvl = BidiBase::LEVEL_DEFAULT_LTR;
	} else {
		paraLvl = ($nc(runDirection)->equals($BidiBase$TextAttributeConstants::RUN_DIRECTION_LTR)) ? BidiBase::LTR : BidiBase::RTL;
	}
	$var($bytes, lvls, nullptr);
	int32_t var$0 = paragraph->getEndIndex();
	int32_t len = var$0 - paragraph->getBeginIndex();
	$var($bytes, embeddingLevels, $new($bytes, len));
	$var($chars, txt, $new($chars, len));
	int32_t i = 0;
	while (ch != $AttributedCharacterIterator::DONE) {
		txt->set(i, ch);
		$var($Integer, embedding, $cast($Integer, paragraph->getAttribute($BidiBase$TextAttributeConstants::BIDI_EMBEDDING)));
		if (embedding != nullptr) {
			int8_t level = embedding->byteValue();
			if (level == 0) {
			} else if (level < 0) {
				$assign(lvls, embeddingLevels);
				embeddingLevels->set(i, (int8_t)((0 - level) | BidiBase::LEVEL_OVERRIDE));
			} else {
				$assign(lvls, embeddingLevels);
				embeddingLevels->set(i, level);
			}
		}
		ch = paragraph->next();
		++i;
	}
	if (shaper != nullptr) {
		$BidiBase$NumericShapings::shape(shaper, txt, 0, len);
	}
	setPara(txt, paraLvl, lvls);
}

void BidiBase::orderParagraphsLTR(bool ordarParaLTR) {
	this->orderParagraphsLTR$ = ordarParaLTR;
}

int8_t BidiBase::getDirection() {
	verifyValidParaOrLine();
	return this->direction;
}

int32_t BidiBase::getLength() {
	verifyValidParaOrLine();
	return this->originalLength;
}

int8_t BidiBase::getParaLevel() {
	verifyValidParaOrLine();
	return this->paraLevel;
}

int32_t BidiBase::getCustomizedClass(int32_t c) {
	int32_t dir = 0;
	dir = $nc(this->bdp)->getClass(c);
	if (dir >= BidiBase::CHAR_DIRECTION_COUNT) {
		dir = BidiBase::ON;
	}
	return dir;
}

$Bidi* BidiBase::setLine($Bidi* bidi, BidiBase* bidiBase, $Bidi* newBidi, BidiBase* newBidiBase, int32_t start, int32_t limit) {
	verifyValidPara();
	verifyRange(start, 0, limit);
	verifyRange(limit, 0, this->length + 1);
	return $BidiLine::setLine(this, newBidi, newBidiBase, start, limit);
}

int8_t BidiBase::getLevelAt(int32_t charIndex) {
	if (charIndex < 0 || charIndex >= this->length) {
		return (int8_t)getBaseLevel();
	}
	verifyValidParaOrLine();
	verifyRange(charIndex, 0, this->length);
	return $BidiLine::getLevelAt(this, charIndex);
}

$bytes* BidiBase::getLevels() {
	verifyValidParaOrLine();
	if (this->length <= 0) {
		return $new($bytes, 0);
	}
	return $BidiLine::getLevels(this);
}

int32_t BidiBase::countRuns() {
	verifyValidParaOrLine();
	$BidiLine::getRuns(this);
	return this->runCount;
}

$BidiRun* BidiBase::getVisualRun(int32_t runIndex) {
	verifyValidParaOrLine();
	$BidiLine::getRuns(this);
	verifyRange(runIndex, 0, this->runCount);
	return $BidiLine::getVisualRun(this, runIndex);
}

$ints* BidiBase::getVisualMap() {
	countRuns();
	if (this->resultLength <= 0) {
		return $new($ints, 0);
	}
	return $BidiLine::getVisualMap(this);
}

$ints* BidiBase::reorderVisual($bytes* levels) {
	$init(BidiBase);
	return $BidiLine::reorderVisual(levels);
}

void BidiBase::init$($chars* text, int32_t textStart, $bytes* embeddings, int32_t embStart, int32_t paragraphLength, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	BidiBase::init$(0, 0);
	int8_t paraLvl = 0;
	switch (flags) {
	case $Bidi::DIRECTION_LEFT_TO_RIGHT:
		{}
	default:
		{
			paraLvl = BidiBase::LTR;
			break;
		}
	case $Bidi::DIRECTION_RIGHT_TO_LEFT:
		{
			paraLvl = BidiBase::RTL;
			break;
		}
	case $Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT:
		{
			paraLvl = BidiBase::LEVEL_DEFAULT_LTR;
			break;
		}
	case $Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT:
		{
			paraLvl = BidiBase::LEVEL_DEFAULT_RTL;
			break;
		}
	}
	$var($bytes, paraEmbeddings, nullptr);
	if (embeddings == nullptr) {
		$assign(paraEmbeddings, nullptr);
	} else {
		$assign(paraEmbeddings, $new($bytes, paragraphLength));
		int8_t lev = 0;
		for (int32_t i = 0; i < paragraphLength; ++i) {
			lev = $nc(embeddings)->get(i + embStart);
			if (lev < 0) {
				lev = (int8_t)((-lev) | BidiBase::LEVEL_OVERRIDE);
			} else if (lev == 0) {
				lev = paraLvl;
				if (paraLvl > BidiBase::MAX_EXPLICIT_LEVEL) {
					lev &= (uint8_t)1;
				}
			}
			paraEmbeddings->set(i, lev);
		}
	}
	$var($chars, paraText, $new($chars, paragraphLength));
	$System::arraycopy(text, textStart, paraText, 0, paragraphLength);
	setPara(paraText, paraLvl, paraEmbeddings);
}

bool BidiBase::isMixed() {
	bool var$0 = !isLeftToRight();
	return (var$0 && !isRightToLeft());
}

bool BidiBase::isLeftToRight() {
	return (getDirection() == BidiBase::LTR && ((int32_t)(this->paraLevel & (uint32_t)1)) == 0);
}

bool BidiBase::isRightToLeft() {
	return (getDirection() == BidiBase::RTL && ((int32_t)(this->paraLevel & (uint32_t)1)) == 1);
}

bool BidiBase::baseIsLeftToRight() {
	return (getParaLevel() == BidiBase::LTR);
}

int32_t BidiBase::getBaseLevel() {
	return getParaLevel();
}

void BidiBase::getLogicalToVisualRunsMap() {
	if (this->isGoodLogicalToVisualRunsMap) {
		return;
	}
	int32_t count = countRuns();
	if ((this->logicalToVisualRunsMap == nullptr) || ($nc(this->logicalToVisualRunsMap)->length < count)) {
		$set(this, logicalToVisualRunsMap, $new($ints, count));
	}
	int32_t i = 0;
	$var($longs, keys, $new($longs, count));
	for (i = 0; i < count; ++i) {
		keys->set(i, ((int64_t)($nc($nc(this->runs)->get(i))->start) << 32) + i);
	}
	$Arrays::sort(keys);
	for (i = 0; i < count; ++i) {
		$nc(this->logicalToVisualRunsMap)->set(i, (int32_t)((int64_t)(keys->get(i) & (uint64_t)(int64_t)-1)));
	}
	this->isGoodLogicalToVisualRunsMap = true;
}

int32_t BidiBase::getRunLevel(int32_t run) {
	verifyValidParaOrLine();
	$BidiLine::getRuns(this);
	if (run < 0 || run >= this->runCount) {
		return getParaLevel();
	}
	getLogicalToVisualRunsMap();
	return $nc($nc(this->runs)->get($nc(this->logicalToVisualRunsMap)->get(run)))->level;
}

int32_t BidiBase::getRunStart(int32_t run) {
	verifyValidParaOrLine();
	$BidiLine::getRuns(this);
	if (this->runCount == 1) {
		return 0;
	} else if (run == this->runCount) {
		return this->length;
	}
	getLogicalToVisualRunsMap();
	return $nc($nc(this->runs)->get($nc(this->logicalToVisualRunsMap)->get(run)))->start;
}

int32_t BidiBase::getRunLimit(int32_t run) {
	verifyValidParaOrLine();
	$BidiLine::getRuns(this);
	if (this->runCount == 1) {
		return this->length;
	}
	getLogicalToVisualRunsMap();
	int32_t idx = $nc(this->logicalToVisualRunsMap)->get(run);
	int32_t len = idx == 0 ? $nc($nc(this->runs)->get(idx))->limit : $nc($nc(this->runs)->get(idx))->limit - $nc($nc(this->runs)->get(idx - 1))->limit;
	return $nc($nc(this->runs)->get(idx))->start + len;
}

bool BidiBase::requiresBidi($chars* text, int32_t start, int32_t limit) {
	$init(BidiBase);
	$useLocalCurrentObjectStackCache();
	int32_t RTLMask = (((($sl(1, BidiBase::R) | $sl(1, BidiBase::AL)) | $sl(1, BidiBase::RLE)) | $sl(1, BidiBase::RLO)) | $sl(1, BidiBase::AN));
	if (0 > start || start > limit || limit > $nc(text)->length) {
		$throwNew($IllegalArgumentException, $$str({"Value start "_s, $$str(start), " is out of range 0 to "_s, $$str(limit), ", or limit "_s, $$str(limit), " is beyond the text length "_s, $$str(text->length)}));
	}
	for (int32_t i = start; i < limit; ++i) {
		bool var$0 = $Character::isHighSurrogate($nc(text)->get(i)) && i < (limit - 1);
		if (var$0 && $Character::isLowSurrogate($nc(text)->get(i + 1))) {
			if (((int32_t)(($sl(1, $UCharacter::getDirection($Character::codePointAt(text, i)))) & (uint32_t)RTLMask)) != 0) {
				return true;
			}
		} else if (((int32_t)(($sl(1, $UCharacter::getDirection($nc(text)->get(i)))) & (uint32_t)RTLMask)) != 0) {
			return true;
		}
	}
	return false;
}

void BidiBase::reorderVisually($bytes* levels, int32_t levelStart, $ObjectArray* objects, int32_t objectStart, int32_t count) {
	$init(BidiBase);
	$useLocalCurrentObjectStackCache();
	if (0 > levelStart || $nc(levels)->length <= levelStart) {
		$throwNew($IllegalArgumentException, $$str({"Value levelStart "_s, $$str(levelStart), " is out of range 0 to "_s, $$str((levels->length - 1))}));
	}
	if (0 > objectStart || $nc(objects)->length <= objectStart) {
		$throwNew($IllegalArgumentException, $$str({"Value objectStart "_s, $$str(objectStart), " is out of range 0 to "_s, $$str((objects->length - 1))}));
	}
	if (0 > count || $nc(objects)->length < (objectStart + count)) {
		$throwNew($IllegalArgumentException, $$str({"Value count "_s, $$str(count), " is less than zero, or objectStart + count is beyond objects length "_s, $$str(objects->length)}));
	}
	$var($bytes, reorderLevels, $new($bytes, count));
	$System::arraycopy(levels, levelStart, reorderLevels, 0, count);
	$var($ints, indexMap, reorderVisual(reorderLevels));
	$var($ObjectArray, temp, $new($ObjectArray, count));
	$System::arraycopy(objects, objectStart, temp, 0, count);
	for (int32_t i = 0; i < count; ++i) {
		$nc(objects)->set(objectStart + i, temp->get($nc(indexMap)->get(i)));
	}
}

$String* BidiBase::writeReordered(int32_t options) {
	verifyValidParaOrLine();
	if (this->length == 0) {
		return ""_s;
	}
	return $BidiWriter::writeReordered(this, options);
}

$String* BidiBase::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $($of(this)->getClass()->getName())));
	buf->append("[dir: "_s);
	buf->append((int32_t)this->direction);
	buf->append(" baselevel: "_s);
	buf->append((int32_t)this->paraLevel);
	buf->append(" length: "_s);
	buf->append(this->length);
	buf->append(" runs: "_s);
	if (this->levels == nullptr) {
		buf->append("none"_s);
	} else {
		buf->append(u'[');
		buf->append((int32_t)$nc(this->levels)->get(0));
		for (int32_t i = 1; i < $nc(this->levels)->length; ++i) {
			buf->append(u' ');
			buf->append((int32_t)$nc(this->levels)->get(i));
		}
		buf->append(u']');
	}
	buf->append(" text: [0x"_s);
	buf->append($($Integer::toHexString($nc(this->text)->get(0))));
	for (int32_t i = 1; i < $nc(this->text)->length; ++i) {
		buf->append(" 0x"_s);
		buf->append($($Integer::toHexString($nc(this->text)->get(i))));
	}
	buf->append("]]"_s);
	return buf->toString();
}

void clinit$BidiBase($Class* class$) {
	$useLocalCurrentObjectStackCache();
	BidiBase::FOUND_L = (int8_t)BidiBase::DirPropFlag(BidiBase::L);
	BidiBase::FOUND_R = (int8_t)BidiBase::DirPropFlag(BidiBase::R);
	BidiBase::DirPropFlagMultiRuns = BidiBase::DirPropFlag((int8_t)31);
	$assignStatic(BidiBase::DirPropFlagLR$, $new($ints, {
		BidiBase::DirPropFlag(BidiBase::L),
		BidiBase::DirPropFlag(BidiBase::R)
	}));
	$assignStatic(BidiBase::DirPropFlagE$, $new($ints, {
		BidiBase::DirPropFlag(BidiBase::LRE),
		BidiBase::DirPropFlag(BidiBase::RLE)
	}));
	$assignStatic(BidiBase::DirPropFlagO$, $new($ints, {
		BidiBase::DirPropFlag(BidiBase::LRO),
		BidiBase::DirPropFlag(BidiBase::RLO)
	}));
	int32_t var$6 = BidiBase::DirPropFlag(BidiBase::L);
	int32_t var$5 = var$6 | BidiBase::DirPropFlag(BidiBase::EN);
	int32_t var$4 = var$5 | BidiBase::DirPropFlag(BidiBase::ENL);
	int32_t var$3 = var$4 | BidiBase::DirPropFlag(BidiBase::ENR);
	int32_t var$2 = var$3 | BidiBase::DirPropFlag(BidiBase::AN);
	int32_t var$1 = var$2 | BidiBase::DirPropFlag(BidiBase::LRE);
	int32_t var$0 = var$1 | BidiBase::DirPropFlag(BidiBase::LRO);
	BidiBase::MASK_LTR = var$0 | BidiBase::DirPropFlag(BidiBase::LRI);
	int32_t var$10 = BidiBase::DirPropFlag(BidiBase::R);
	int32_t var$9 = var$10 | BidiBase::DirPropFlag(BidiBase::AL);
	int32_t var$8 = var$9 | BidiBase::DirPropFlag(BidiBase::RLE);
	int32_t var$7 = var$8 | BidiBase::DirPropFlag(BidiBase::RLO);
	BidiBase::MASK_RTL = var$7 | BidiBase::DirPropFlag(BidiBase::RLI);
	int32_t var$11 = BidiBase::DirPropFlag(BidiBase::R);
	BidiBase::MASK_R_AL = var$11 | BidiBase::DirPropFlag(BidiBase::AL);
	int32_t var$15 = BidiBase::DirPropFlag(BidiBase::LRE);
	int32_t var$14 = var$15 | BidiBase::DirPropFlag(BidiBase::LRO);
	int32_t var$13 = var$14 | BidiBase::DirPropFlag(BidiBase::RLE);
	int32_t var$12 = var$13 | BidiBase::DirPropFlag(BidiBase::RLO);
	BidiBase::MASK_EXPLICIT = var$12 | BidiBase::DirPropFlag(BidiBase::PDF);
	BidiBase::MASK_BN_EXPLICIT = BidiBase::DirPropFlag(BidiBase::BN) | BidiBase::MASK_EXPLICIT;
	int32_t var$18 = BidiBase::DirPropFlag(BidiBase::LRI);
	int32_t var$17 = var$18 | BidiBase::DirPropFlag(BidiBase::RLI);
	int32_t var$16 = var$17 | BidiBase::DirPropFlag(BidiBase::FSI);
	BidiBase::MASK_ISO = var$16 | BidiBase::DirPropFlag(BidiBase::PDI);
	int32_t var$19 = BidiBase::DirPropFlag(BidiBase::B);
	BidiBase::MASK_B_S = var$19 | BidiBase::DirPropFlag(BidiBase::S);
	BidiBase::MASK_WS = ((BidiBase::MASK_B_S | BidiBase::DirPropFlag(BidiBase::WS)) | BidiBase::MASK_BN_EXPLICIT) | BidiBase::MASK_ISO;
	int32_t var$22 = BidiBase::DirPropFlag(BidiBase::ON);
	int32_t var$21 = var$22 | BidiBase::DirPropFlag(BidiBase::CS);
	int32_t var$20 = var$21 | BidiBase::DirPropFlag(BidiBase::ES);
	BidiBase::MASK_POSSIBLE_N = (var$20 | BidiBase::DirPropFlag(BidiBase::ET)) | BidiBase::MASK_WS;
	BidiBase::MASK_EMBEDDING = BidiBase::DirPropFlag(BidiBase::NSM) | BidiBase::MASK_POSSIBLE_N;
	$assignStatic(BidiBase::groupProp, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)7,
		(int16_t)8,
		(int16_t)3,
		(int16_t)9,
		(int16_t)6,
		(int16_t)5,
		(int16_t)4,
		(int16_t)4,
		(int16_t)10,
		(int16_t)10,
		(int16_t)12,
		(int16_t)10,
		(int16_t)10,
		(int16_t)10,
		(int16_t)11,
		(int16_t)10,
		(int16_t)4,
		(int16_t)4,
		(int16_t)4,
		(int16_t)4,
		(int16_t)13,
		(int16_t)14
	}));
	$assignStatic(BidiBase::impTabProps, $new($shortArray2, {
		$$new($shorts, {
			(int16_t)1,
			(int16_t)2,
			(int16_t)4,
			(int16_t)5,
			(int16_t)7,
			(int16_t)15,
			(int16_t)17,
			(int16_t)7,
			(int16_t)9,
			(int16_t)7,
			(int16_t)0,
			(int16_t)7,
			(int16_t)3,
			(int16_t)18,
			(int16_t)21,
			BidiBase::_ON
		}),
		$$new($shorts, {
			(int16_t)1,
			(int16_t)(32 + 2),
			(int16_t)(32 + 4),
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)(32 + 9),
			(int16_t)(32 + 7),
			(int16_t)1,
			(int16_t)1,
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_L
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)2,
			(int16_t)(32 + 4),
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)(32 + 9),
			(int16_t)(32 + 7),
			(int16_t)2,
			(int16_t)2,
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_R
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 6),
			(int16_t)(32 + 6),
			(int16_t)(32 + 8),
			(int16_t)(32 + 16),
			(int16_t)(32 + 17),
			(int16_t)(32 + 8),
			(int16_t)(32 + 8),
			(int16_t)(32 + 8),
			(int16_t)3,
			(int16_t)3,
			(int16_t)3,
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_R
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)4,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(64 + 10),
			(int16_t)11,
			(int16_t)(64 + 10),
			(int16_t)4,
			(int16_t)4,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_EN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 4),
			(int16_t)5,
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)(32 + 9),
			(int16_t)(64 + 12),
			(int16_t)5,
			(int16_t)5,
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)6,
			(int16_t)6,
			(int16_t)(32 + 8),
			(int16_t)(32 + 16),
			(int16_t)(32 + 17),
			(int16_t)(32 + 8),
			(int16_t)(32 + 8),
			(int16_t)(64 + 13),
			(int16_t)6,
			(int16_t)6,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 4),
			(int16_t)(32 + 5),
			(int16_t)7,
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)7,
			(int16_t)(64 + 14),
			(int16_t)7,
			(int16_t)7,
			(int16_t)7,
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_ON
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 6),
			(int16_t)(32 + 6),
			(int16_t)8,
			(int16_t)(32 + 16),
			(int16_t)(32 + 17),
			(int16_t)8,
			(int16_t)8,
			(int16_t)8,
			(int16_t)8,
			(int16_t)8,
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_ON
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)4,
			(int16_t)(32 + 5),
			(int16_t)7,
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)7,
			(int16_t)9,
			(int16_t)7,
			(int16_t)9,
			(int16_t)9,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_ON
		}),
		$$new($shorts, {
			(int16_t)(96 + 1),
			(int16_t)(96 + 2),
			(int16_t)4,
			(int16_t)(96 + 5),
			(int16_t)(128 + 7),
			(int16_t)(96 + 15),
			(int16_t)(96 + 17),
			(int16_t)(128 + 7),
			(int16_t)(128 + 14),
			(int16_t)(128 + 7),
			(int16_t)10,
			(int16_t)(128 + 7),
			(int16_t)(96 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_EN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)4,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)11,
			(int16_t)(32 + 7),
			(int16_t)11,
			(int16_t)11,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_EN
		}),
		$$new($shorts, {
			(int16_t)(96 + 1),
			(int16_t)(96 + 2),
			(int16_t)(96 + 4),
			(int16_t)5,
			(int16_t)(128 + 7),
			(int16_t)(96 + 15),
			(int16_t)(96 + 17),
			(int16_t)(128 + 7),
			(int16_t)(128 + 14),
			(int16_t)(128 + 7),
			(int16_t)12,
			(int16_t)(128 + 7),
			(int16_t)(96 + 3),
			(int16_t)(96 + 18),
			(int16_t)(96 + 21),
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(96 + 1),
			(int16_t)(96 + 2),
			(int16_t)6,
			(int16_t)6,
			(int16_t)(128 + 8),
			(int16_t)(96 + 16),
			(int16_t)(96 + 17),
			(int16_t)(128 + 8),
			(int16_t)(128 + 8),
			(int16_t)(128 + 8),
			(int16_t)13,
			(int16_t)(128 + 8),
			(int16_t)(96 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(128 + 4),
			(int16_t)(32 + 5),
			(int16_t)7,
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)7,
			(int16_t)14,
			(int16_t)7,
			(int16_t)14,
			(int16_t)14,
			(int16_t)(32 + 3),
			(int16_t)(128 + 18),
			(int16_t)(128 + 21),
			BidiBase::_ON
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 4),
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)15,
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)(32 + 9),
			(int16_t)(32 + 7),
			(int16_t)15,
			(int16_t)(32 + 7),
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_S
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 6),
			(int16_t)(32 + 6),
			(int16_t)(32 + 8),
			(int16_t)16,
			(int16_t)(32 + 17),
			(int16_t)(32 + 8),
			(int16_t)(32 + 8),
			(int16_t)(32 + 8),
			(int16_t)16,
			(int16_t)(32 + 8),
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_S
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)(32 + 4),
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)17,
			(int16_t)(32 + 7),
			(int16_t)(32 + 9),
			(int16_t)(32 + 7),
			(int16_t)17,
			(int16_t)(32 + 7),
			(int16_t)(32 + 3),
			(int16_t)(32 + 18),
			(int16_t)(32 + 21),
			BidiBase::_B
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)18,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(64 + 19),
			(int16_t)20,
			(int16_t)(64 + 19),
			(int16_t)18,
			(int16_t)18,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_L
		}),
		$$new($shorts, {
			(int16_t)(96 + 1),
			(int16_t)(96 + 2),
			(int16_t)18,
			(int16_t)(96 + 5),
			(int16_t)(128 + 7),
			(int16_t)(96 + 15),
			(int16_t)(96 + 17),
			(int16_t)(128 + 7),
			(int16_t)(128 + 14),
			(int16_t)(128 + 7),
			(int16_t)19,
			(int16_t)(128 + 7),
			(int16_t)(96 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_L
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)18,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)20,
			(int16_t)(32 + 7),
			(int16_t)20,
			(int16_t)20,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_L
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)21,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(64 + 22),
			(int16_t)23,
			(int16_t)(64 + 22),
			(int16_t)21,
			(int16_t)21,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(96 + 1),
			(int16_t)(96 + 2),
			(int16_t)21,
			(int16_t)(96 + 5),
			(int16_t)(128 + 7),
			(int16_t)(96 + 15),
			(int16_t)(96 + 17),
			(int16_t)(128 + 7),
			(int16_t)(128 + 14),
			(int16_t)(128 + 7),
			(int16_t)22,
			(int16_t)(128 + 7),
			(int16_t)(96 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_AN
		}),
		$$new($shorts, {
			(int16_t)(32 + 1),
			(int16_t)(32 + 2),
			(int16_t)21,
			(int16_t)(32 + 5),
			(int16_t)(32 + 7),
			(int16_t)(32 + 15),
			(int16_t)(32 + 17),
			(int16_t)(32 + 7),
			(int16_t)23,
			(int16_t)(32 + 7),
			(int16_t)23,
			(int16_t)23,
			(int16_t)(32 + 3),
			(int16_t)18,
			(int16_t)21,
			BidiBase::_AN
		})
	}));
	$assignStatic(BidiBase::impTabL_DEFAULT, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)3,
			(int8_t)3,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)21,
			(int8_t)21,
			(int8_t)0,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)3,
			(int8_t)3,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)33,
			(int8_t)51,
			(int8_t)51,
			(int8_t)4,
			(int8_t)4,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)33,
			(int8_t)0,
			(int8_t)50,
			(int8_t)5,
			(int8_t)5,
			(int8_t)0,
			(int8_t)0
		})
	}));
	$assignStatic(BidiBase::impTabR_DEFAULT, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)2,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)3,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)2,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)3,
			(int8_t)5,
			(int8_t)5,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)0,
			(int8_t)33,
			(int8_t)3,
			(int8_t)4,
			(int8_t)4,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)3,
			(int8_t)5,
			(int8_t)5,
			(int8_t)0,
			(int8_t)0
		})
	}));
	$assignStatic(BidiBase::impAct0, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)3,
		(int16_t)4
	}));
	$assignStatic(BidiBase::impTab_DEFAULT, $new($BidiBase$ImpTabPair, BidiBase::impTabL_DEFAULT, BidiBase::impTabR_DEFAULT, BidiBase::impAct0, BidiBase::impAct0));
	$assignStatic(BidiBase::impTabL_NUMBERS_SPECIAL, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)2,
			(int8_t)17,
			(int8_t)17,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)66,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)2,
			(int8_t)4,
			(int8_t)4,
			(int8_t)19,
			(int8_t)19,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)34,
			(int8_t)52,
			(int8_t)52,
			(int8_t)3,
			(int8_t)3,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)2,
			(int8_t)4,
			(int8_t)4,
			(int8_t)19,
			(int8_t)19,
			(int8_t)0,
			(int8_t)2
		})
	}));
	$assignStatic(BidiBase::impTab_NUMBERS_SPECIAL, $new($BidiBase$ImpTabPair, BidiBase::impTabL_NUMBERS_SPECIAL, BidiBase::impTabR_DEFAULT, BidiBase::impAct0, BidiBase::impAct0));
	$assignStatic(BidiBase::impTabL_GROUP_NUMBERS_WITH_R, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)3,
			(int8_t)17,
			(int8_t)17,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)3,
			(int8_t)1,
			(int8_t)1,
			(int8_t)2,
			(int8_t)32,
			(int8_t)32,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)3,
			(int8_t)1,
			(int8_t)1,
			(int8_t)2,
			(int8_t)32,
			(int8_t)32,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)3,
			(int8_t)5,
			(int8_t)5,
			(int8_t)20,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)3,
			(int8_t)5,
			(int8_t)5,
			(int8_t)4,
			(int8_t)32,
			(int8_t)32,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)3,
			(int8_t)5,
			(int8_t)5,
			(int8_t)20,
			(int8_t)0,
			(int8_t)0,
			(int8_t)2
		})
	}));
	$assignStatic(BidiBase::impTabR_GROUP_NUMBERS_WITH_R, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)2,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)2,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)2,
			(int8_t)0,
			(int8_t)20,
			(int8_t)20,
			(int8_t)19,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)34,
			(int8_t)0,
			(int8_t)4,
			(int8_t)4,
			(int8_t)3,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)34,
			(int8_t)0,
			(int8_t)4,
			(int8_t)4,
			(int8_t)3,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		})
	}));
	$assignStatic(BidiBase::impTab_GROUP_NUMBERS_WITH_R, $new($BidiBase$ImpTabPair, BidiBase::impTabL_GROUP_NUMBERS_WITH_R, BidiBase::impTabR_GROUP_NUMBERS_WITH_R, BidiBase::impAct0, BidiBase::impAct0));
	$assignStatic(BidiBase::impTabL_INVERSE_NUMBERS_AS_L, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)21,
			(int8_t)21,
			(int8_t)0,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)1,
			(int8_t)32,
			(int8_t)32,
			(int8_t)4,
			(int8_t)4,
			(int8_t)32,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)1,
			(int8_t)32,
			(int8_t)32,
			(int8_t)5,
			(int8_t)5,
			(int8_t)32,
			(int8_t)1
		})
	}));
	$assignStatic(BidiBase::impTabR_INVERSE_NUMBERS_AS_L, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)20,
			(int8_t)20,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)5,
			(int8_t)5,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)0,
			(int8_t)33,
			(int8_t)33,
			(int8_t)4,
			(int8_t)4,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)5,
			(int8_t)5,
			(int8_t)0,
			(int8_t)0
		})
	}));
	$assignStatic(BidiBase::impTab_INVERSE_NUMBERS_AS_L, $new($BidiBase$ImpTabPair, BidiBase::impTabL_INVERSE_NUMBERS_AS_L, BidiBase::impTabR_INVERSE_NUMBERS_AS_L, BidiBase::impAct0, BidiBase::impAct0));
	$assignStatic(BidiBase::impTabR_INVERSE_LIKE_DIRECT, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)2,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)1,
			(int8_t)2,
			(int8_t)19,
			(int8_t)19,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)0,
			(int8_t)2,
			(int8_t)2,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)48,
			(int8_t)6,
			(int8_t)4,
			(int8_t)3,
			(int8_t)3,
			(int8_t)48,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)48,
			(int8_t)6,
			(int8_t)4,
			(int8_t)5,
			(int8_t)5,
			(int8_t)48,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)48,
			(int8_t)6,
			(int8_t)4,
			(int8_t)5,
			(int8_t)5,
			(int8_t)48,
			(int8_t)2
		}),
		$$new($bytes, {
			(int8_t)33,
			(int8_t)48,
			(int8_t)6,
			(int8_t)4,
			(int8_t)3,
			(int8_t)3,
			(int8_t)48,
			(int8_t)1
		})
	}));
	$assignStatic(BidiBase::impAct1, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)13,
		(int16_t)14
	}));
	$assignStatic(BidiBase::impTab_INVERSE_LIKE_DIRECT, $new($BidiBase$ImpTabPair, BidiBase::impTabL_DEFAULT, BidiBase::impTabR_INVERSE_LIKE_DIRECT, BidiBase::impAct0, BidiBase::impAct1));
	$assignStatic(BidiBase::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)99,
			(int8_t)0,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)99,
			(int8_t)0,
			(int8_t)1,
			(int8_t)18,
			(int8_t)48,
			(int8_t)0,
			(int8_t)4
		}),
		$$new($bytes, {
			(int8_t)32,
			(int8_t)99,
			(int8_t)32,
			(int8_t)1,
			(int8_t)2,
			(int8_t)48,
			(int8_t)32,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)99,
			(int8_t)85,
			(int8_t)86,
			(int8_t)20,
			(int8_t)48,
			(int8_t)0,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)48,
			(int8_t)67,
			(int8_t)85,
			(int8_t)86,
			(int8_t)4,
			(int8_t)48,
			(int8_t)48,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)48,
			(int8_t)67,
			(int8_t)5,
			(int8_t)86,
			(int8_t)20,
			(int8_t)48,
			(int8_t)48,
			(int8_t)4
		}),
		$$new($bytes, {
			(int8_t)48,
			(int8_t)67,
			(int8_t)85,
			(int8_t)6,
			(int8_t)20,
			(int8_t)48,
			(int8_t)48,
			(int8_t)4
		})
	}));
	$assignStatic(BidiBase::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)19,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)35,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)2,
			(int8_t)64,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)35,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)2,
			(int8_t)64,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)3,
			(int8_t)0,
			(int8_t)3,
			(int8_t)54,
			(int8_t)20,
			(int8_t)64,
			(int8_t)0,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)83,
			(int8_t)64,
			(int8_t)5,
			(int8_t)54,
			(int8_t)4,
			(int8_t)64,
			(int8_t)64,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)83,
			(int8_t)64,
			(int8_t)5,
			(int8_t)54,
			(int8_t)4,
			(int8_t)64,
			(int8_t)64,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)83,
			(int8_t)64,
			(int8_t)6,
			(int8_t)6,
			(int8_t)4,
			(int8_t)64,
			(int8_t)64,
			(int8_t)3
		})
	}));
	$assignStatic(BidiBase::impAct2, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)5,
		(int16_t)6,
		(int16_t)7,
		(int16_t)8
	}));
	$assignStatic(BidiBase::impAct3, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)9,
		(int16_t)10,
		(int16_t)11,
		(int16_t)12
	}));
	$assignStatic(BidiBase::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS, $new($BidiBase$ImpTabPair, BidiBase::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS, BidiBase::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS, BidiBase::impAct2, BidiBase::impAct3));
	$assignStatic(BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL, $new($BidiBase$ImpTabPair, BidiBase::impTabL_NUMBERS_SPECIAL, BidiBase::impTabR_INVERSE_LIKE_DIRECT, BidiBase::impAct0, BidiBase::impAct1));
	$assignStatic(BidiBase::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)0,
			(int8_t)98,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)98,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)48,
			(int8_t)0,
			(int8_t)4
		}),
		$$new($bytes, {
			(int8_t)0,
			(int8_t)98,
			(int8_t)84,
			(int8_t)84,
			(int8_t)19,
			(int8_t)48,
			(int8_t)0,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)48,
			(int8_t)66,
			(int8_t)84,
			(int8_t)84,
			(int8_t)3,
			(int8_t)48,
			(int8_t)48,
			(int8_t)3
		}),
		$$new($bytes, {
			(int8_t)48,
			(int8_t)66,
			(int8_t)4,
			(int8_t)4,
			(int8_t)19,
			(int8_t)48,
			(int8_t)48,
			(int8_t)4
		})
	}));
	$assignStatic(BidiBase::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS, $new($BidiBase$ImpTabPair, BidiBase::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS, BidiBase::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS, BidiBase::impAct2, BidiBase::impAct3));
}

BidiBase::BidiBase() {
}

$Class* BidiBase::load$($String* name, bool initialize) {
	$loadClass(BidiBase, name, initialize, &_BidiBase_ClassInfo_, clinit$BidiBase, allocate$BidiBase);
	return class$;
}

$Class* BidiBase::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk