#include <jdk/internal/icu/lang/UCharacterEnums$ECharacterDirection.h>

#include <jdk/internal/icu/lang/UCharacterEnums.h>
#include <jcpp.h>

#undef ARABIC_NUMBER
#undef BLOCK_SEPARATOR
#undef BOUNDARY_NEUTRAL
#undef CHAR_DIRECTION_COUNT
#undef COMMON_NUMBER_SEPARATOR
#undef DIRECTIONALITY_ARABIC_NUMBER
#undef DIRECTIONALITY_BOUNDARY_NEUTRAL
#undef DIRECTIONALITY_COMMON_NUMBER_SEPARATOR
#undef DIRECTIONALITY_EUROPEAN_NUMBER
#undef DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR
#undef DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR
#undef DIRECTIONALITY_LEFT_TO_RIGHT
#undef DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING
#undef DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE
#undef DIRECTIONALITY_NON_SPACING_MARK
#undef DIRECTIONALITY_OTHER_NEUTRALS
#undef DIRECTIONALITY_PARAGRAPH_SEPARATOR
#undef DIRECTIONALITY_POP_DIRECTIONAL_FORMAT
#undef DIRECTIONALITY_RIGHT_TO_LEFT
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC
#undef DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING
#undef DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE
#undef DIRECTIONALITY_SEGMENT_SEPARATOR
#undef DIRECTIONALITY_UNDEFINED
#undef DIRECTIONALITY_WHITESPACE
#undef DIR_NON_SPACING_MARK
#undef EUROPEAN_NUMBER
#undef EUROPEAN_NUMBER_SEPARATOR
#undef EUROPEAN_NUMBER_TERMINATOR
#undef LEFT_TO_RIGHT
#undef LEFT_TO_RIGHT_EMBEDDING
#undef LEFT_TO_RIGHT_OVERRIDE
#undef OTHER_NEUTRAL
#undef POP_DIRECTIONAL_FORMAT
#undef RIGHT_TO_LEFT
#undef RIGHT_TO_LEFT_ARABIC
#undef RIGHT_TO_LEFT_EMBEDDING
#undef RIGHT_TO_LEFT_OVERRIDE
#undef SEGMENT_SEPARATOR
#undef WHITE_SPACE_NEUTRAL

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $UCharacterEnums = ::jdk::internal::icu::lang::UCharacterEnums;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$CompoundAttribute _UCharacterEnums$ECharacterDirection_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_ARABIC_NUMBER[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_PARAGRAPH_SEPARATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_SEGMENT_SEPARATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_WHITESPACE[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_OTHER_NEUTRALS[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_NON_SPACING_MARK[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_BOUNDARY_NEUTRAL[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_UNDEFINED[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _UCharacterEnums$ECharacterDirection_FieldInfo_[] = {
	{"LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, LEFT_TO_RIGHT)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT},
	{"RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, RIGHT_TO_LEFT)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT},
	{"EUROPEAN_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, EUROPEAN_NUMBER)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER},
	{"EUROPEAN_NUMBER_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, EUROPEAN_NUMBER_SEPARATOR)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR},
	{"EUROPEAN_NUMBER_TERMINATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, EUROPEAN_NUMBER_TERMINATOR)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR},
	{"ARABIC_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, ARABIC_NUMBER)},
	{"DIRECTIONALITY_ARABIC_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_ARABIC_NUMBER), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_ARABIC_NUMBER},
	{"COMMON_NUMBER_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, COMMON_NUMBER_SEPARATOR)},
	{"DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_COMMON_NUMBER_SEPARATOR), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR},
	{"BLOCK_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, BLOCK_SEPARATOR)},
	{"DIRECTIONALITY_PARAGRAPH_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_PARAGRAPH_SEPARATOR), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_PARAGRAPH_SEPARATOR},
	{"SEGMENT_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, SEGMENT_SEPARATOR)},
	{"DIRECTIONALITY_SEGMENT_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_SEGMENT_SEPARATOR), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_SEGMENT_SEPARATOR},
	{"WHITE_SPACE_NEUTRAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, WHITE_SPACE_NEUTRAL)},
	{"DIRECTIONALITY_WHITESPACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_WHITESPACE), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_WHITESPACE},
	{"OTHER_NEUTRAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, OTHER_NEUTRAL)},
	{"DIRECTIONALITY_OTHER_NEUTRALS", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_OTHER_NEUTRALS), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_OTHER_NEUTRALS},
	{"LEFT_TO_RIGHT_EMBEDDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, LEFT_TO_RIGHT_EMBEDDING)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING},
	{"LEFT_TO_RIGHT_OVERRIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, LEFT_TO_RIGHT_OVERRIDE)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE},
	{"RIGHT_TO_LEFT_ARABIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, RIGHT_TO_LEFT_ARABIC)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC},
	{"RIGHT_TO_LEFT_EMBEDDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, RIGHT_TO_LEFT_EMBEDDING)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING},
	{"RIGHT_TO_LEFT_OVERRIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, RIGHT_TO_LEFT_OVERRIDE)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE},
	{"POP_DIRECTIONAL_FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, POP_DIRECTIONAL_FORMAT)},
	{"DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_POP_DIRECTIONAL_FORMAT), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT},
	{"DIR_NON_SPACING_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, DIR_NON_SPACING_MARK)},
	{"DIRECTIONALITY_NON_SPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_NON_SPACING_MARK), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_NON_SPACING_MARK},
	{"BOUNDARY_NEUTRAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, BOUNDARY_NEUTRAL)},
	{"DIRECTIONALITY_BOUNDARY_NEUTRAL", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_BOUNDARY_NEUTRAL), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_BOUNDARY_NEUTRAL},
	{"CHAR_DIRECTION_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterDirection, CHAR_DIRECTION_COUNT)},
	{"DIRECTIONALITY_UNDEFINED", "B", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterDirection, DIRECTIONALITY_UNDEFINED), _UCharacterEnums$ECharacterDirection_FieldAnnotations_DIRECTIONALITY_UNDEFINED},
	{}
};

$InnerClassInfo _UCharacterEnums$ECharacterDirection_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterDirection", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacterEnums$ECharacterDirection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection",
	nullptr,
	nullptr,
	_UCharacterEnums$ECharacterDirection_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_UCharacterEnums$ECharacterDirection_InnerClassesInfo_,
	_UCharacterEnums$ECharacterDirection_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.icu.lang.UCharacterEnums"
};

$Object* allocate$UCharacterEnums$ECharacterDirection($Class* clazz) {
	return $of($alloc(UCharacterEnums$ECharacterDirection));
}

$Class* UCharacterEnums$ECharacterDirection::load$($String* name, bool initialize) {
	$loadClass(UCharacterEnums$ECharacterDirection, name, initialize, &_UCharacterEnums$ECharacterDirection_ClassInfo_, allocate$UCharacterEnums$ECharacterDirection);
	return class$;
}

$Class* UCharacterEnums$ECharacterDirection::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk