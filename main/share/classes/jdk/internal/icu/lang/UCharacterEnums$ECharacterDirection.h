#ifndef _jdk_internal_icu_lang_UCharacterEnums$ECharacterDirection_h_
#define _jdk_internal_icu_lang_UCharacterEnums$ECharacterDirection_h_
//$ interface jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARABIC_NUMBER")
#undef ARABIC_NUMBER
#pragma push_macro("BLOCK_SEPARATOR")
#undef BLOCK_SEPARATOR
#pragma push_macro("BOUNDARY_NEUTRAL")
#undef BOUNDARY_NEUTRAL
#pragma push_macro("CHAR_DIRECTION_COUNT")
#undef CHAR_DIRECTION_COUNT
#pragma push_macro("COMMON_NUMBER_SEPARATOR")
#undef COMMON_NUMBER_SEPARATOR
#pragma push_macro("DIRECTIONALITY_ARABIC_NUMBER")
#undef DIRECTIONALITY_ARABIC_NUMBER
#pragma push_macro("DIRECTIONALITY_BOUNDARY_NEUTRAL")
#undef DIRECTIONALITY_BOUNDARY_NEUTRAL
#pragma push_macro("DIRECTIONALITY_COMMON_NUMBER_SEPARATOR")
#undef DIRECTIONALITY_COMMON_NUMBER_SEPARATOR
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER")
#undef DIRECTIONALITY_EUROPEAN_NUMBER
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR")
#undef DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR")
#undef DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT")
#undef DIRECTIONALITY_LEFT_TO_RIGHT
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING")
#undef DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE")
#undef DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE
#pragma push_macro("DIRECTIONALITY_NON_SPACING_MARK")
#undef DIRECTIONALITY_NON_SPACING_MARK
#pragma push_macro("DIRECTIONALITY_OTHER_NEUTRALS")
#undef DIRECTIONALITY_OTHER_NEUTRALS
#pragma push_macro("DIRECTIONALITY_PARAGRAPH_SEPARATOR")
#undef DIRECTIONALITY_PARAGRAPH_SEPARATOR
#pragma push_macro("DIRECTIONALITY_POP_DIRECTIONAL_FORMAT")
#undef DIRECTIONALITY_POP_DIRECTIONAL_FORMAT
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT")
#undef DIRECTIONALITY_RIGHT_TO_LEFT
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE
#pragma push_macro("DIRECTIONALITY_SEGMENT_SEPARATOR")
#undef DIRECTIONALITY_SEGMENT_SEPARATOR
#pragma push_macro("DIRECTIONALITY_UNDEFINED")
#undef DIRECTIONALITY_UNDEFINED
#pragma push_macro("DIRECTIONALITY_WHITESPACE")
#undef DIRECTIONALITY_WHITESPACE
#pragma push_macro("DIR_NON_SPACING_MARK")
#undef DIR_NON_SPACING_MARK
#pragma push_macro("EUROPEAN_NUMBER")
#undef EUROPEAN_NUMBER
#pragma push_macro("EUROPEAN_NUMBER_SEPARATOR")
#undef EUROPEAN_NUMBER_SEPARATOR
#pragma push_macro("EUROPEAN_NUMBER_TERMINATOR")
#undef EUROPEAN_NUMBER_TERMINATOR
#pragma push_macro("LEFT_TO_RIGHT")
#undef LEFT_TO_RIGHT
#pragma push_macro("LEFT_TO_RIGHT_EMBEDDING")
#undef LEFT_TO_RIGHT_EMBEDDING
#pragma push_macro("LEFT_TO_RIGHT_OVERRIDE")
#undef LEFT_TO_RIGHT_OVERRIDE
#pragma push_macro("OTHER_NEUTRAL")
#undef OTHER_NEUTRAL
#pragma push_macro("POP_DIRECTIONAL_FORMAT")
#undef POP_DIRECTIONAL_FORMAT
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("RIGHT_TO_LEFT_ARABIC")
#undef RIGHT_TO_LEFT_ARABIC
#pragma push_macro("RIGHT_TO_LEFT_EMBEDDING")
#undef RIGHT_TO_LEFT_EMBEDDING
#pragma push_macro("RIGHT_TO_LEFT_OVERRIDE")
#undef RIGHT_TO_LEFT_OVERRIDE
#pragma push_macro("SEGMENT_SEPARATOR")
#undef SEGMENT_SEPARATOR
#pragma push_macro("WHITE_SPACE_NEUTRAL")
#undef WHITE_SPACE_NEUTRAL

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

class UCharacterEnums$ECharacterDirection : public ::java::lang::Object {
	$interface(UCharacterEnums$ECharacterDirection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t LEFT_TO_RIGHT = 0;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT = (int8_t)LEFT_TO_RIGHT;
	static const int32_t RIGHT_TO_LEFT = 1;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT = (int8_t)RIGHT_TO_LEFT;
	static const int32_t EUROPEAN_NUMBER = 2;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER = (int8_t)EUROPEAN_NUMBER;
	static const int32_t EUROPEAN_NUMBER_SEPARATOR = 3;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (int8_t)EUROPEAN_NUMBER_SEPARATOR;
	static const int32_t EUROPEAN_NUMBER_TERMINATOR = 4;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (int8_t)EUROPEAN_NUMBER_TERMINATOR;
	static const int32_t ARABIC_NUMBER = 5;
	static const int8_t DIRECTIONALITY_ARABIC_NUMBER = (int8_t)ARABIC_NUMBER;
	static const int32_t COMMON_NUMBER_SEPARATOR = 6;
	static const int8_t DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (int8_t)COMMON_NUMBER_SEPARATOR;
	static const int32_t BLOCK_SEPARATOR = 7;
	static const int8_t DIRECTIONALITY_PARAGRAPH_SEPARATOR = (int8_t)BLOCK_SEPARATOR;
	static const int32_t SEGMENT_SEPARATOR = 8;
	static const int8_t DIRECTIONALITY_SEGMENT_SEPARATOR = (int8_t)SEGMENT_SEPARATOR;
	static const int32_t WHITE_SPACE_NEUTRAL = 9;
	static const int8_t DIRECTIONALITY_WHITESPACE = (int8_t)WHITE_SPACE_NEUTRAL;
	static const int32_t OTHER_NEUTRAL = 10;
	static const int8_t DIRECTIONALITY_OTHER_NEUTRALS = (int8_t)OTHER_NEUTRAL;
	static const int32_t LEFT_TO_RIGHT_EMBEDDING = 11;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (int8_t)LEFT_TO_RIGHT_EMBEDDING;
	static const int32_t LEFT_TO_RIGHT_OVERRIDE = 12;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (int8_t)LEFT_TO_RIGHT_OVERRIDE;
	static const int32_t RIGHT_TO_LEFT_ARABIC = 13;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (int8_t)RIGHT_TO_LEFT_ARABIC;
	static const int32_t RIGHT_TO_LEFT_EMBEDDING = 14;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (int8_t)RIGHT_TO_LEFT_EMBEDDING;
	static const int32_t RIGHT_TO_LEFT_OVERRIDE = 15;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (int8_t)RIGHT_TO_LEFT_OVERRIDE;
	static const int32_t POP_DIRECTIONAL_FORMAT = 16;
	static const int8_t DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (int8_t)POP_DIRECTIONAL_FORMAT;
	static const int32_t DIR_NON_SPACING_MARK = 17;
	static const int8_t DIRECTIONALITY_NON_SPACING_MARK = (int8_t)DIR_NON_SPACING_MARK;
	static const int32_t BOUNDARY_NEUTRAL = 18;
	static const int8_t DIRECTIONALITY_BOUNDARY_NEUTRAL = (int8_t)BOUNDARY_NEUTRAL;
	static const int32_t CHAR_DIRECTION_COUNT = 19;
	static const int8_t DIRECTIONALITY_UNDEFINED = (-1);
};

			} // lang
		} // icu
	} // internal
} // jdk

#pragma pop_macro("ARABIC_NUMBER")
#pragma pop_macro("BLOCK_SEPARATOR")
#pragma pop_macro("BOUNDARY_NEUTRAL")
#pragma pop_macro("CHAR_DIRECTION_COUNT")
#pragma pop_macro("COMMON_NUMBER_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_ARABIC_NUMBER")
#pragma pop_macro("DIRECTIONALITY_BOUNDARY_NEUTRAL")
#pragma pop_macro("DIRECTIONALITY_COMMON_NUMBER_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE")
#pragma pop_macro("DIRECTIONALITY_NON_SPACING_MARK")
#pragma pop_macro("DIRECTIONALITY_OTHER_NEUTRALS")
#pragma pop_macro("DIRECTIONALITY_PARAGRAPH_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_POP_DIRECTIONAL_FORMAT")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE")
#pragma pop_macro("DIRECTIONALITY_SEGMENT_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_UNDEFINED")
#pragma pop_macro("DIRECTIONALITY_WHITESPACE")
#pragma pop_macro("DIR_NON_SPACING_MARK")
#pragma pop_macro("EUROPEAN_NUMBER")
#pragma pop_macro("EUROPEAN_NUMBER_SEPARATOR")
#pragma pop_macro("EUROPEAN_NUMBER_TERMINATOR")
#pragma pop_macro("LEFT_TO_RIGHT")
#pragma pop_macro("LEFT_TO_RIGHT_EMBEDDING")
#pragma pop_macro("LEFT_TO_RIGHT_OVERRIDE")
#pragma pop_macro("OTHER_NEUTRAL")
#pragma pop_macro("POP_DIRECTIONAL_FORMAT")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("RIGHT_TO_LEFT_ARABIC")
#pragma pop_macro("RIGHT_TO_LEFT_EMBEDDING")
#pragma pop_macro("RIGHT_TO_LEFT_OVERRIDE")
#pragma pop_macro("SEGMENT_SEPARATOR")
#pragma pop_macro("WHITE_SPACE_NEUTRAL")

#endif // _jdk_internal_icu_lang_UCharacterEnums$ECharacterDirection_h_