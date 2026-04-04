#include <jdk/internal/icu/text/BidiBase$ImpTabPair.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $byteArray3 = $Array<int8_t, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void BidiBase$ImpTabPair::init$($byteArray2* table1, $byteArray2* table2, $shorts* act1, $shorts* act2) {
	$set(this, imptab, $new($byteArray3, {
		table1,
		table2
	}));
	$set(this, impact, $new($shortArray2, {
		act1,
		act2
	}));
}

BidiBase$ImpTabPair::BidiBase$ImpTabPair() {
}

$Class* BidiBase$ImpTabPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"imptab", "[[[B", nullptr, 0, $field(BidiBase$ImpTabPair, imptab)},
		{"impact", "[[S", nullptr, 0, $field(BidiBase$ImpTabPair, impact)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([[B[[B[S[S)V", nullptr, 0, $method(BidiBase$ImpTabPair, init$, void, $byteArray2*, $byteArray2*, $shorts*, $shorts*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$ImpTabPair", "jdk.internal.icu.text.BidiBase", "ImpTabPair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$ImpTabPair",
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
	$loadClass(BidiBase$ImpTabPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$ImpTabPair);
	});
	return class$;
}

$Class* BidiBase$ImpTabPair::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk