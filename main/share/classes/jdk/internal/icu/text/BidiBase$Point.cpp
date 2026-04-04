#include <jdk/internal/icu/text/BidiBase$Point.h>
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

void BidiBase$Point::init$() {
}

BidiBase$Point::BidiBase$Point() {
}

$Class* BidiBase$Point::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pos", "I", nullptr, 0, $field(BidiBase$Point, pos)},
		{"flag", "I", nullptr, 0, $field(BidiBase$Point, flag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$Point, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$Point", "jdk.internal.icu.text.BidiBase", "Point", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$Point",
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
	$loadClass(BidiBase$Point, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$Point);
	});
	return class$;
}

$Class* BidiBase$Point::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk