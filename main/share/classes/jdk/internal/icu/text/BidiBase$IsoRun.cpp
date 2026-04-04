#include <jdk/internal/icu/text/BidiBase$IsoRun.h>
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

void BidiBase$IsoRun::init$() {
}

BidiBase$IsoRun::BidiBase$IsoRun() {
}

$Class* BidiBase$IsoRun::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contextPos", "I", nullptr, 0, $field(BidiBase$IsoRun, contextPos)},
		{"start", "S", nullptr, 0, $field(BidiBase$IsoRun, start)},
		{"limit", "S", nullptr, 0, $field(BidiBase$IsoRun, limit)},
		{"level", "B", nullptr, 0, $field(BidiBase$IsoRun, level)},
		{"lastStrong", "B", nullptr, 0, $field(BidiBase$IsoRun, lastStrong)},
		{"lastBase", "B", nullptr, 0, $field(BidiBase$IsoRun, lastBase)},
		{"contextDir", "B", nullptr, 0, $field(BidiBase$IsoRun, contextDir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$IsoRun, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$IsoRun", "jdk.internal.icu.text.BidiBase", "IsoRun", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$IsoRun",
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
	$loadClass(BidiBase$IsoRun, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$IsoRun);
	});
	return class$;
}

$Class* BidiBase$IsoRun::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk