#include <sun/security/util/DisabledAlgorithmConstraints$jdkCAConstraint.h>

#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $Debug = ::sun::security::util::Debug;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DisabledAlgorithmConstraints$jdkCAConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DisabledAlgorithmConstraints$jdkCAConstraint::*)($String*)>(&DisabledAlgorithmConstraints$jdkCAConstraint::init$))},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$jdkCAConstraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$jdkCAConstraint", "sun.security.util.DisabledAlgorithmConstraints", "jdkCAConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$jdkCAConstraint_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$jdkCAConstraint",
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$jdkCAConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$jdkCAConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$jdkCAConstraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$jdkCAConstraint));
}

void DisabledAlgorithmConstraints$jdkCAConstraint::init$($String* algo) {
	$DisabledAlgorithmConstraints$Constraint::init$();
	$set(this, algorithm, algo);
}

void DisabledAlgorithmConstraints$jdkCAConstraint::permits($ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	$init($DisabledAlgorithmConstraints);
	if ($DisabledAlgorithmConstraints::debug != nullptr) {
		$nc($DisabledAlgorithmConstraints::debug)->println($$str({"jdkCAConstraints.permits(): "_s, this->algorithm}));
	}
	if ($nc(cp)->anchorIsJdkCA()) {
		if (next(cp)) {
			return;
		}
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, $$str({"Algorithm constraints check failed on certificate anchor limits. "_s, this->algorithm, $(cp->extendedExceptionMsg())}), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
	}
}

DisabledAlgorithmConstraints$jdkCAConstraint::DisabledAlgorithmConstraints$jdkCAConstraint() {
}

$Class* DisabledAlgorithmConstraints$jdkCAConstraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$jdkCAConstraint, name, initialize, &_DisabledAlgorithmConstraints$jdkCAConstraint_ClassInfo_, allocate$DisabledAlgorithmConstraints$jdkCAConstraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$jdkCAConstraint::class$ = nullptr;

		} // util
	} // security
} // sun