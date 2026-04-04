#include <sun/security/util/DisabledAlgorithmConstraints$JarHolder.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef CONSTRAINTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;

namespace sun {
	namespace security {
		namespace util {

$DisabledAlgorithmConstraints* DisabledAlgorithmConstraints$JarHolder::CONSTRAINTS = nullptr;

void DisabledAlgorithmConstraints$JarHolder::init$() {
}

void DisabledAlgorithmConstraints$JarHolder::clinit$($Class* clazz) {
	$assignStatic(DisabledAlgorithmConstraints$JarHolder::CONSTRAINTS, $new($DisabledAlgorithmConstraints, "jdk.jar.disabledAlgorithms"_s));
}

DisabledAlgorithmConstraints$JarHolder::DisabledAlgorithmConstraints$JarHolder() {
}

$Class* DisabledAlgorithmConstraints$JarHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTRAINTS", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$JarHolder, CONSTRAINTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$JarHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$JarHolder", "sun.security.util.DisabledAlgorithmConstraints", "JarHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DisabledAlgorithmConstraints$JarHolder",
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
		"sun.security.util.DisabledAlgorithmConstraints"
	};
	$loadClass(DisabledAlgorithmConstraints$JarHolder, name, initialize, &classInfo$$, DisabledAlgorithmConstraints$JarHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$JarHolder);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$JarHolder::class$ = nullptr;

		} // util
	} // security
} // sun