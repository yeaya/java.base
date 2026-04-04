#include <jdk/internal/icu/impl/ICUBinary$IsAcceptable.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void ICUBinary$IsAcceptable::init$() {
}

bool ICUBinary$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 1;
}

ICUBinary$IsAcceptable::ICUBinary$IsAcceptable() {
}

$Class* ICUBinary$IsAcceptable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ICUBinary$IsAcceptable, init$, void)},
		{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC, $virtualMethod(ICUBinary$IsAcceptable, isDataVersionAcceptable, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.ICUBinary$IsAcceptable", "jdk.internal.icu.impl.ICUBinary", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.ICUBinary$IsAcceptable",
		"java.lang.Object",
		"jdk.internal.icu.impl.ICUBinary$Authenticate",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.ICUBinary"
	};
	$loadClass(ICUBinary$IsAcceptable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ICUBinary$IsAcceptable);
	});
	return class$;
}

$Class* ICUBinary$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk