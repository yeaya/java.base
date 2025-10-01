#include <sun/security/util/DisabledAlgorithmConstraints$DisabledConstraint.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
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
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DisabledAlgorithmConstraints$DisabledConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DisabledAlgorithmConstraints$DisabledConstraint::*)($String*)>(&DisabledAlgorithmConstraints$DisabledConstraint::init$))},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$DisabledConstraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint", "sun.security.util.DisabledAlgorithmConstraints", "DisabledConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$DisabledConstraint_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint",
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$DisabledConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$DisabledConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$DisabledConstraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$DisabledConstraint));
}

void DisabledAlgorithmConstraints$DisabledConstraint::init$($String* algo) {
	$DisabledAlgorithmConstraints$Constraint::init$();
	$set(this, algorithm, algo);
}

void DisabledAlgorithmConstraints$DisabledConstraint::permits($ConstraintsParameters* cp) {
	$init($CertPathValidatorException$BasicReason);
	$throwNew($CertPathValidatorException, $$str({"Algorithm constraints check failed on disabled algorithm: "_s, this->algorithm, $($nc(cp)->extendedExceptionMsg())}), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
}

bool DisabledAlgorithmConstraints$DisabledConstraint::permits($Key* key) {
	return false;
}

DisabledAlgorithmConstraints$DisabledConstraint::DisabledAlgorithmConstraints$DisabledConstraint() {
}

$Class* DisabledAlgorithmConstraints$DisabledConstraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$DisabledConstraint, name, initialize, &_DisabledAlgorithmConstraints$DisabledConstraint_ClassInfo_, allocate$DisabledAlgorithmConstraints$DisabledConstraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$DisabledConstraint::class$ = nullptr;

		} // util
	} // security
} // sun