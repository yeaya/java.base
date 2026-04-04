#include <jdk/internal/icu/lang/UCharacter$NumericType.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jcpp.h>

#undef COUNT
#undef DECIMAL
#undef DIGIT
#undef NONE
#undef NUMERIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$Class* UCharacter$NumericType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, NONE)},
		{"DECIMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, DECIMAL)},
		{"DIGIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, DIGIT)},
		{"NUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, NUMERIC)},
		{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, COUNT)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.lang.UCharacter$NumericType", "jdk.internal.icu.lang.UCharacter", "NumericType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.lang.UCharacter$NumericType",
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
	$loadClass(UCharacter$NumericType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacter$NumericType);
	});
	return class$;
}

$Class* UCharacter$NumericType::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk