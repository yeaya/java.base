#include <jdk/internal/icu/lang/UCharacterDirection.h>

#include <jdk/internal/icu/lang/UCharacterEnums$ECharacterDirection.h>
#include <jcpp.h>

#undef ARABIC_NUMBER
#undef BLOCK_SEPARATOR
#undef BOUNDARY_NEUTRAL
#undef COMMON_NUMBER_SEPARATOR
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UCharacterEnums$ECharacterDirection = ::jdk::internal::icu::lang::UCharacterEnums$ECharacterDirection;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$MethodInfo _UCharacterDirection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UCharacterDirection::*)()>(&UCharacterDirection::init$))},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&UCharacterDirection::toString))},
	{}
};

$InnerClassInfo _UCharacterDirection_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterDirection", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacterDirection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.lang.UCharacterDirection",
	"java.lang.Object",
	"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection",
	nullptr,
	_UCharacterDirection_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterDirection_InnerClassesInfo_
};

$Object* allocate$UCharacterDirection($Class* clazz) {
	return $of($alloc(UCharacterDirection));
}

void UCharacterDirection::init$() {
}

$String* UCharacterDirection::toString(int32_t dir) {
	$init(UCharacterDirection);
	switch (dir) {
	case $UCharacterEnums$ECharacterDirection::LEFT_TO_RIGHT:
		{
			return "Left-to-Right"_s;
		}
	case $UCharacterEnums$ECharacterDirection::RIGHT_TO_LEFT:
		{
			return "Right-to-Left"_s;
		}
	case $UCharacterEnums$ECharacterDirection::EUROPEAN_NUMBER:
		{
			return "European Number"_s;
		}
	case $UCharacterEnums$ECharacterDirection::EUROPEAN_NUMBER_SEPARATOR:
		{
			return "European Number Separator"_s;
		}
	case $UCharacterEnums$ECharacterDirection::EUROPEAN_NUMBER_TERMINATOR:
		{
			return "European Number Terminator"_s;
		}
	case $UCharacterEnums$ECharacterDirection::ARABIC_NUMBER:
		{
			return "Arabic Number"_s;
		}
	case $UCharacterEnums$ECharacterDirection::COMMON_NUMBER_SEPARATOR:
		{
			return "Common Number Separator"_s;
		}
	case $UCharacterEnums$ECharacterDirection::BLOCK_SEPARATOR:
		{
			return "Paragraph Separator"_s;
		}
	case $UCharacterEnums$ECharacterDirection::SEGMENT_SEPARATOR:
		{
			return "Segment Separator"_s;
		}
	case $UCharacterEnums$ECharacterDirection::WHITE_SPACE_NEUTRAL:
		{
			return "Whitespace"_s;
		}
	case $UCharacterEnums$ECharacterDirection::OTHER_NEUTRAL:
		{
			return "Other Neutrals"_s;
		}
	case $UCharacterEnums$ECharacterDirection::LEFT_TO_RIGHT_EMBEDDING:
		{
			return "Left-to-Right Embedding"_s;
		}
	case $UCharacterEnums$ECharacterDirection::LEFT_TO_RIGHT_OVERRIDE:
		{
			return "Left-to-Right Override"_s;
		}
	case $UCharacterEnums$ECharacterDirection::RIGHT_TO_LEFT_ARABIC:
		{
			return "Right-to-Left Arabic"_s;
		}
	case $UCharacterEnums$ECharacterDirection::RIGHT_TO_LEFT_EMBEDDING:
		{
			return "Right-to-Left Embedding"_s;
		}
	case $UCharacterEnums$ECharacterDirection::RIGHT_TO_LEFT_OVERRIDE:
		{
			return "Right-to-Left Override"_s;
		}
	case $UCharacterEnums$ECharacterDirection::POP_DIRECTIONAL_FORMAT:
		{
			return "Pop Directional Format"_s;
		}
	case $UCharacterEnums$ECharacterDirection::DIR_NON_SPACING_MARK:
		{
			return "Non-Spacing Mark"_s;
		}
	case $UCharacterEnums$ECharacterDirection::BOUNDARY_NEUTRAL:
		{
			return "Boundary Neutral"_s;
		}
	}
	return "Unassigned"_s;
}

UCharacterDirection::UCharacterDirection() {
}

$Class* UCharacterDirection::load$($String* name, bool initialize) {
	$loadClass(UCharacterDirection, name, initialize, &_UCharacterDirection_ClassInfo_, allocate$UCharacterDirection);
	return class$;
}

$Class* UCharacterDirection::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk