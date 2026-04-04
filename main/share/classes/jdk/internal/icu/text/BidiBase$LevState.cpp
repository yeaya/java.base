#include <jdk/internal/icu/text/BidiBase$LevState.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void BidiBase$LevState::init$() {
}

BidiBase$LevState::BidiBase$LevState() {
}

$Class* BidiBase$LevState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"impTab", "[[B", nullptr, 0, $field(BidiBase$LevState, impTab)},
		{"impAct", "[S", nullptr, 0, $field(BidiBase$LevState, impAct)},
		{"startON", "I", nullptr, 0, $field(BidiBase$LevState, startON)},
		{"startL2EN", "I", nullptr, 0, $field(BidiBase$LevState, startL2EN)},
		{"lastStrongRTL", "I", nullptr, 0, $field(BidiBase$LevState, lastStrongRTL)},
		{"runStart", "I", nullptr, 0, $field(BidiBase$LevState, runStart)},
		{"state", "S", nullptr, 0, $field(BidiBase$LevState, state)},
		{"runLevel", "B", nullptr, 0, $field(BidiBase$LevState, runLevel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BidiBase$LevState, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$LevState", "jdk.internal.icu.text.BidiBase", "LevState", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$LevState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.BidiBase"
	};
	$loadClass(BidiBase$LevState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$LevState);
	});
	return class$;
}

$Class* BidiBase$LevState::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk