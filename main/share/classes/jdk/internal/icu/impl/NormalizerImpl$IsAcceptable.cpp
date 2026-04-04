#include <jdk/internal/icu/impl/NormalizerImpl$IsAcceptable.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void NormalizerImpl$IsAcceptable::init$() {
}

bool NormalizerImpl$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 4;
}

NormalizerImpl$IsAcceptable::NormalizerImpl$IsAcceptable() {
}

$Class* NormalizerImpl$IsAcceptable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerImpl$IsAcceptable, init$, void)},
		{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC, $virtualMethod(NormalizerImpl$IsAcceptable, isDataVersionAcceptable, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.NormalizerImpl$IsAcceptable", "jdk.internal.icu.impl.NormalizerImpl", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.NormalizerImpl$IsAcceptable",
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
		"jdk.internal.icu.impl.NormalizerImpl"
	};
	$loadClass(NormalizerImpl$IsAcceptable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerImpl$IsAcceptable);
	});
	return class$;
}

$Class* NormalizerImpl$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk