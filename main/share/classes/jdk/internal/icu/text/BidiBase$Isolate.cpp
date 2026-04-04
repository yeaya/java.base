#include <jdk/internal/icu/text/BidiBase$Isolate.h>
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

void BidiBase$Isolate::init$() {
}

BidiBase$Isolate::BidiBase$Isolate() {
}

$Class* BidiBase$Isolate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startON", "I", nullptr, 0, $field(BidiBase$Isolate, startON)},
		{"start1", "I", nullptr, 0, $field(BidiBase$Isolate, start1)},
		{"stateImp", "S", nullptr, 0, $field(BidiBase$Isolate, stateImp)},
		{"state", "S", nullptr, 0, $field(BidiBase$Isolate, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$Isolate, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$Isolate", "jdk.internal.icu.text.BidiBase", "Isolate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$Isolate",
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
	$loadClass(BidiBase$Isolate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$Isolate);
	});
	return class$;
}

$Class* BidiBase$Isolate::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk