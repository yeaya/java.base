#include <java/security/Guard.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$Class* Guard::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"checkGuard", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Guard, checkGuard, void, Object$*), "java.lang.SecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.Guard",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Guard, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Guard);
	});
	return class$;
}

$Class* Guard::class$ = nullptr;

	} // security
} // java