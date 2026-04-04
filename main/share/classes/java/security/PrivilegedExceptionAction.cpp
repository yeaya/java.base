#include <java/security/PrivilegedExceptionAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$Class* PrivilegedExceptionAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PrivilegedExceptionAction, run, $Object*), "java.lang.Exception"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.PrivilegedExceptionAction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(PrivilegedExceptionAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedExceptionAction);
	});
	return class$;
}

$Class* PrivilegedExceptionAction::class$ = nullptr;

	} // security
} // java