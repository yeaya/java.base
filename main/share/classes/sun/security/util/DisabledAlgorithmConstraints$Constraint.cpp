#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>

#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$Constraint_FieldInfo_[] = {
	{"algorithm", "Ljava/lang/String;", nullptr, 0, $field(DisabledAlgorithmConstraints$Constraint, algorithm)},
	{"nextConstraint", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint;", nullptr, 0, $field(DisabledAlgorithmConstraints$Constraint, nextConstraint)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$Constraint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DisabledAlgorithmConstraints$Constraint::*)()>(&DisabledAlgorithmConstraints$Constraint::init$))},
	{"next", "(Lsun/security/util/ConstraintsParameters;)Z", nullptr, 0, nullptr, "java.security.cert.CertPathValidatorException"},
	{"next", "(Ljava/security/Key;)Z", nullptr, 0},
	{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC},
	{"permits", "(Ljava/security/AlgorithmParameters;)Z", nullptr, $PUBLIC},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertPathValidatorException"},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$Constraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator", "sun.security.util.DisabledAlgorithmConstraints$Constraint", "Operator", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$Constraint_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	"java.lang.Object",
	nullptr,
	_DisabledAlgorithmConstraints$Constraint_FieldInfo_,
	_DisabledAlgorithmConstraints$Constraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$Constraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$Constraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$Constraint));
}

void DisabledAlgorithmConstraints$Constraint::init$() {
	$set(this, nextConstraint, nullptr);
}

bool DisabledAlgorithmConstraints$Constraint::permits($Key* key) {
	return true;
}

bool DisabledAlgorithmConstraints$Constraint::permits($AlgorithmParameters* parameters) {
	return true;
}

bool DisabledAlgorithmConstraints$Constraint::next($ConstraintsParameters* cp) {
	if (this->nextConstraint != nullptr) {
		$nc(this->nextConstraint)->permits(cp);
		return true;
	}
	return false;
}

bool DisabledAlgorithmConstraints$Constraint::next($Key* key) {
	return this->nextConstraint != nullptr && $nc(this->nextConstraint)->permits(key);
}

DisabledAlgorithmConstraints$Constraint::DisabledAlgorithmConstraints$Constraint() {
}

$Class* DisabledAlgorithmConstraints$Constraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$Constraint, name, initialize, &_DisabledAlgorithmConstraints$Constraint_ClassInfo_, allocate$DisabledAlgorithmConstraints$Constraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$Constraint::class$ = nullptr;

		} // util
	} // security
} // sun