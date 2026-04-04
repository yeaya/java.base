#include <jdk/internal/icu/impl/UCharacterProperty$IsAcceptable.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void UCharacterProperty$IsAcceptable::init$() {
}

bool UCharacterProperty$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 7;
}

UCharacterProperty$IsAcceptable::UCharacterProperty$IsAcceptable() {
}

$Class* UCharacterProperty$IsAcceptable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UCharacterProperty$IsAcceptable, init$, void)},
		{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC, $virtualMethod(UCharacterProperty$IsAcceptable, isDataVersionAcceptable, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$IsAcceptable", "jdk.internal.icu.impl.UCharacterProperty", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$IsAcceptable",
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
		"jdk.internal.icu.impl.UCharacterProperty"
	};
	$loadClass(UCharacterProperty$IsAcceptable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$IsAcceptable);
	});
	return class$;
}

$Class* UCharacterProperty$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk