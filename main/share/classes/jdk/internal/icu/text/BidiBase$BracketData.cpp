#include <jdk/internal/icu/text/BidiBase$BracketData.h>
#include <jdk/internal/icu/text/BidiBase$IsoRun.h>
#include <jdk/internal/icu/text/BidiBase$Opening.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $BidiBase$IsoRunArray = $Array<::jdk::internal::icu::text::BidiBase$IsoRun>;
using $BidiBase$OpeningArray = $Array<::jdk::internal::icu::text::BidiBase$Opening>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void BidiBase$BracketData::init$() {
	$set(this, openings, $new($BidiBase$OpeningArray, 10));
	$set(this, isoRuns, $new($BidiBase$IsoRunArray, (int8_t)125 + 2));
}

BidiBase$BracketData::BidiBase$BracketData() {
}

$Class* BidiBase$BracketData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"openings", "[Ljdk/internal/icu/text/BidiBase$Opening;", nullptr, 0, $field(BidiBase$BracketData, openings)},
		{"isoRunLast", "I", nullptr, 0, $field(BidiBase$BracketData, isoRunLast)},
		{"isoRuns", "[Ljdk/internal/icu/text/BidiBase$IsoRun;", nullptr, 0, $field(BidiBase$BracketData, isoRuns)},
		{"isNumbersSpecial", "Z", nullptr, 0, $field(BidiBase$BracketData, isNumbersSpecial)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$BracketData, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$BracketData", "jdk.internal.icu.text.BidiBase", "BracketData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$BracketData",
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
	$loadClass(BidiBase$BracketData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$BracketData);
	});
	return class$;
}

$Class* BidiBase$BracketData::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk