#include <sun/security/util/DisabledAlgorithmConstraints$UsageConstraint.h>

#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <sun/security/validator/Validator.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED
#undef VAR_CODE_SIGNING
#undef VAR_PLUGIN_CODE_SIGNING
#undef VAR_TLS_CLIENT
#undef VAR_TLS_SERVER
#undef VAR_TSA_SERVER

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $Validator = ::sun::security::validator::Validator;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$UsageConstraint_FieldInfo_[] = {
	{"usages", "[Ljava/lang/String;", nullptr, 0, $field(DisabledAlgorithmConstraints$UsageConstraint, usages)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$UsageConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DisabledAlgorithmConstraints$UsageConstraint::*)($String*,$StringArray*)>(&DisabledAlgorithmConstraints$UsageConstraint::init$))},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$UsageConstraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$UsageConstraint", "sun.security.util.DisabledAlgorithmConstraints", "UsageConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$UsageConstraint_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$UsageConstraint",
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	nullptr,
	_DisabledAlgorithmConstraints$UsageConstraint_FieldInfo_,
	_DisabledAlgorithmConstraints$UsageConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$UsageConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$UsageConstraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$UsageConstraint));
}

void DisabledAlgorithmConstraints$UsageConstraint::init$($String* algorithm, $StringArray* usages) {
	$DisabledAlgorithmConstraints$Constraint::init$();
	$set(this, algorithm, algorithm);
	$set(this, usages, usages);
}

void DisabledAlgorithmConstraints$UsageConstraint::permits($ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	$var($String, variant, $nc(cp)->getVariant());
	{
		$var($StringArray, arr$, this->usages);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, usage, arr$->get(i$));
			{
				bool match = false;
				{
					$var($String, s30881$, $nc(usage)->toLowerCase());
					int32_t tmp30881$ = -1;
					switch (s30881$->hashCode()) {
					case (int32_t)0x8F7007FE:
						{
							if (s30881$->equals("tlsserver"_s)) {
								tmp30881$ = 0;
							}
							break;
						}
					case 0x7480CC86:
						{
							if (s30881$->equals("tlsclient"_s)) {
								tmp30881$ = 1;
							}
							break;
						}
					case 0x402E857F:
						{
							if (s30881$->equals("signedjar"_s)) {
								tmp30881$ = 2;
							}
							break;
						}
					}
					switch (tmp30881$) {
					case 0:
						{
							$init($Validator);
							match = $nc(variant)->equals($Validator::VAR_TLS_SERVER);
							break;
						}
					case 1:
						{
							$init($Validator);
							match = $nc(variant)->equals($Validator::VAR_TLS_CLIENT);
							break;
						}
					case 2:
						{
							$init($Validator);
							bool var$1 = $nc(variant)->equals($Validator::VAR_PLUGIN_CODE_SIGNING);
							bool var$0 = var$1 || $nc(variant)->equals($Validator::VAR_CODE_SIGNING);
							match = var$0 || $nc(variant)->equals($Validator::VAR_TSA_SERVER);
							break;
						}
					}
				}
				$init($DisabledAlgorithmConstraints);
				if ($DisabledAlgorithmConstraints::debug != nullptr) {
					$nc($DisabledAlgorithmConstraints::debug)->println($$str({"Checking if usage constraint \""_s, usage, "\" matches \""_s, $(cp->getVariant()), "\""_s}));
					if ($Debug::isVerbose()) {
						($$new($Exception))->printStackTrace($($nc($DisabledAlgorithmConstraints::debug)->getPrintStream()));
					}
				}
				if (match) {
					if (next(cp)) {
						return;
					}
					$init($CertPathValidatorException$BasicReason);
					$throwNew($CertPathValidatorException, $$str({"Usage constraint "_s, usage, " check failed: "_s, this->algorithm, $(cp->extendedExceptionMsg())}), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
				}
			}
		}
	}
}

DisabledAlgorithmConstraints$UsageConstraint::DisabledAlgorithmConstraints$UsageConstraint() {
}

$Class* DisabledAlgorithmConstraints$UsageConstraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$UsageConstraint, name, initialize, &_DisabledAlgorithmConstraints$UsageConstraint_ClassInfo_, allocate$DisabledAlgorithmConstraints$UsageConstraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$UsageConstraint::class$ = nullptr;

		} // util
	} // security
} // sun