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
		this->nextConstraint->permits(cp);
		return true;
	}
	return false;
}

bool DisabledAlgorithmConstraints$Constraint::next($Key* key) {
	return this->nextConstraint != nullptr && this->nextConstraint->permits(key);
}

DisabledAlgorithmConstraints$Constraint::DisabledAlgorithmConstraints$Constraint() {
}

$Class* DisabledAlgorithmConstraints$Constraint::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"algorithm", "Ljava/lang/String;", nullptr, 0, $field(DisabledAlgorithmConstraints$Constraint, algorithm)},
		{"nextConstraint", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint;", nullptr, 0, $field(DisabledAlgorithmConstraints$Constraint, nextConstraint)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$Constraint, init$, void)},
		{"next", "(Lsun/security/util/ConstraintsParameters;)Z", nullptr, 0, $virtualMethod(DisabledAlgorithmConstraints$Constraint, next, bool, $ConstraintsParameters*), "java.security.cert.CertPathValidatorException"},
		{"next", "(Ljava/security/Key;)Z", nullptr, 0, $virtualMethod(DisabledAlgorithmConstraints$Constraint, next, bool, $Key*)},
		{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC, $virtualMethod(DisabledAlgorithmConstraints$Constraint, permits, bool, $Key*)},
		{"permits", "(Ljava/security/AlgorithmParameters;)Z", nullptr, $PUBLIC, $virtualMethod(DisabledAlgorithmConstraints$Constraint, permits, bool, $AlgorithmParameters*)},
		{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DisabledAlgorithmConstraints$Constraint, permits, void, $ConstraintsParameters*), "java.security.cert.CertPathValidatorException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
		{"sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator", "sun.security.util.DisabledAlgorithmConstraints$Constraint", "Operator", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.util.DisabledAlgorithmConstraints$Constraint",
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
	$loadClass(DisabledAlgorithmConstraints$Constraint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$Constraint);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$Constraint::class$ = nullptr;

		} // util
	} // security
} // sun