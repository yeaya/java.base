#include <jdk/internal/icu/text/BidiBase$Opening.h>
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

void BidiBase$Opening::init$() {
}

BidiBase$Opening::BidiBase$Opening() {
}

$Class* BidiBase$Opening::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"position", "I", nullptr, 0, $field(BidiBase$Opening, position)},
		{"match", "I", nullptr, 0, $field(BidiBase$Opening, match)},
		{"contextPos", "I", nullptr, 0, $field(BidiBase$Opening, contextPos)},
		{"flags", "S", nullptr, 0, $field(BidiBase$Opening, flags)},
		{"contextDir", "B", nullptr, 0, $field(BidiBase$Opening, contextDir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiBase$Opening, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$Opening", "jdk.internal.icu.text.BidiBase", "Opening", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$Opening",
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
	$loadClass(BidiBase$Opening, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$Opening);
	});
	return class$;
}

$Class* BidiBase$Opening::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk