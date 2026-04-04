#include <jdk/internal/icu/lang/UCharacter$JoiningGroup.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jcpp.h>

#undef NO_JOINING_GROUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$Class* UCharacter$JoiningGroup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_JOINING_GROUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$JoiningGroup, NO_JOINING_GROUP)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.lang.UCharacter$JoiningGroup", "jdk.internal.icu.lang.UCharacter", "JoiningGroup", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.lang.UCharacter$JoiningGroup",
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
	$loadClass(UCharacter$JoiningGroup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacter$JoiningGroup);
	});
	return class$;
}

$Class* UCharacter$JoiningGroup::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk