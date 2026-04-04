#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$Class* ICUBinary$Authenticate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ICUBinary$Authenticate, isDataVersionAcceptable, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.impl.ICUBinary$Authenticate",
		nullptr,
		nullptr,
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
	$loadClass(ICUBinary$Authenticate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ICUBinary$Authenticate);
	});
	return class$;
}

$Class* ICUBinary$Authenticate::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk