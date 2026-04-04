#include <sun/security/util/DisabledAlgorithmConstraints$CertPathHolder.h>
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

$DisabledAlgorithmConstraints* DisabledAlgorithmConstraints$CertPathHolder::CONSTRAINTS = nullptr;

void DisabledAlgorithmConstraints$CertPathHolder::init$() {
}

void DisabledAlgorithmConstraints$CertPathHolder::clinit$($Class* clazz) {
	$assignStatic(DisabledAlgorithmConstraints$CertPathHolder::CONSTRAINTS, $new($DisabledAlgorithmConstraints, "jdk.certpath.disabledAlgorithms"_s));
}

DisabledAlgorithmConstraints$CertPathHolder::DisabledAlgorithmConstraints$CertPathHolder() {
}

$Class* DisabledAlgorithmConstraints$CertPathHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTRAINTS", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$CertPathHolder, CONSTRAINTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$CertPathHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$CertPathHolder", "sun.security.util.DisabledAlgorithmConstraints", "CertPathHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DisabledAlgorithmConstraints$CertPathHolder",
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
	$loadClass(DisabledAlgorithmConstraints$CertPathHolder, name, initialize, &classInfo$$, DisabledAlgorithmConstraints$CertPathHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$CertPathHolder);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$CertPathHolder::class$ = nullptr;

		} // util
	} // security
} // sun