#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$Class* PrivilegedAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PrivilegedAction, run, $Object*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.PrivilegedAction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(PrivilegedAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedAction);
	});
	return class$;
}

$Class* PrivilegedAction::class$ = nullptr;

	} // security
} // java