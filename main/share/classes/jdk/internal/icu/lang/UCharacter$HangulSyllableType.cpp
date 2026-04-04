#include <jdk/internal/icu/lang/UCharacter$HangulSyllableType.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jcpp.h>

#undef COUNT
#undef LEADING_JAMO
#undef LVT_SYLLABLE
#undef LV_SYLLABLE
#undef NOT_APPLICABLE
#undef TRAILING_JAMO
#undef VOWEL_JAMO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$Class* UCharacter$HangulSyllableType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOT_APPLICABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, NOT_APPLICABLE)},
		{"LEADING_JAMO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, LEADING_JAMO)},
		{"VOWEL_JAMO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, VOWEL_JAMO)},
		{"TRAILING_JAMO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, TRAILING_JAMO)},
		{"LV_SYLLABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, LV_SYLLABLE)},
		{"LVT_SYLLABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, LVT_SYLLABLE)},
		{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$HangulSyllableType, COUNT)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.lang.UCharacter$HangulSyllableType", "jdk.internal.icu.lang.UCharacter", "HangulSyllableType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.lang.UCharacter$HangulSyllableType",
		nullptr,
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.lang.UCharacter"
	};
	$loadClass(UCharacter$HangulSyllableType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacter$HangulSyllableType);
	});
	return class$;
}

$Class* UCharacter$HangulSyllableType::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk