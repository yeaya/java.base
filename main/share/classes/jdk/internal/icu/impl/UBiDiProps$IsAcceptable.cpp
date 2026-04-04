#include <jdk/internal/icu/impl/UBiDiProps$IsAcceptable.h>
#include <jdk/internal/icu/impl/UBiDiProps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void UBiDiProps$IsAcceptable::init$() {
}

bool UBiDiProps$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 2;
}

UBiDiProps$IsAcceptable::UBiDiProps$IsAcceptable() {
}

$Class* UBiDiProps$IsAcceptable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UBiDiProps$IsAcceptable, init$, void)},
		{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC, $virtualMethod(UBiDiProps$IsAcceptable, isDataVersionAcceptable, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UBiDiProps$IsAcceptable", "jdk.internal.icu.impl.UBiDiProps", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.UBiDiProps$IsAcceptable",
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
		"jdk.internal.icu.impl.UBiDiProps"
	};
	$loadClass(UBiDiProps$IsAcceptable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UBiDiProps$IsAcceptable);
	});
	return class$;
}

$Class* UBiDiProps$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk