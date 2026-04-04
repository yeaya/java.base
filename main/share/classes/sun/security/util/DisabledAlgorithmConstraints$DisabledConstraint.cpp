#include <sun/security/util/DisabledAlgorithmConstraints$DisabledConstraint.h>
#include <java/security/Key.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;

namespace sun {
	namespace security {
		namespace util {

void DisabledAlgorithmConstraints$DisabledConstraint::init$($String* algo) {
	$DisabledAlgorithmConstraints$Constraint::init$();
	$set(this, algorithm, algo);
}

void DisabledAlgorithmConstraints$DisabledConstraint::permits($ConstraintsParameters* cp) {
	$useLocalObjectStack();
	$init($CertPathValidatorException$BasicReason);
	$throwNew($CertPathValidatorException, $$str({"Algorithm constraints check failed on disabled algorithm: "_s, this->algorithm, $($nc(cp)->extendedExceptionMsg())}), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
}

bool DisabledAlgorithmConstraints$DisabledConstraint::permits($Key* key) {
	return false;
}

DisabledAlgorithmConstraints$DisabledConstraint::DisabledAlgorithmConstraints$DisabledConstraint() {
}

$Class* DisabledAlgorithmConstraints$DisabledConstraint::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(DisabledAlgorithmConstraints$DisabledConstraint, init$, void, $String*)},
		{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, $virtualMethod(DisabledAlgorithmConstraints$DisabledConstraint, permits, void, $ConstraintsParameters*), "java.security.cert.CertPathValidatorException"},
		{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC, $virtualMethod(DisabledAlgorithmConstraints$DisabledConstraint, permits, bool, $Key*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint", "sun.security.util.DisabledAlgorithmConstraints", "DisabledConstraint", $PRIVATE | $STATIC},
		{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint",
		"sun.security.util.DisabledAlgorithmConstraints$Constraint",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DisabledAlgorithmConstraints"
	};
	$loadClass(DisabledAlgorithmConstraints$DisabledConstraint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$DisabledConstraint);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$DisabledConstraint::class$ = nullptr;

		} // util
	} // security
} // sun