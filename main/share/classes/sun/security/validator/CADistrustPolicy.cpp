#include <sun/security/validator/CADistrustPolicy.h>

#include <java/lang/Enum.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <sun/security/util/Debug.h>
#include <sun/security/validator/CADistrustPolicy$1.h>
#include <sun/security/validator/CADistrustPolicy$2.h>
#include <jcpp.h>

#undef POLICIES
#undef SYMANTEC_TLS

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $CADistrustPolicyArray = $Array<::sun::security::validator::CADistrustPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumSet = ::java::util::EnumSet;
using $Debug = ::sun::security::util::Debug;
using $CADistrustPolicy$1 = ::sun::security::validator::CADistrustPolicy$1;
using $CADistrustPolicy$2 = ::sun::security::validator::CADistrustPolicy$2;

namespace sun {
	namespace security {
		namespace validator {

$FieldInfo _CADistrustPolicy_FieldInfo_[] = {
	{"SYMANTEC_TLS", "Lsun/security/validator/CADistrustPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CADistrustPolicy, SYMANTEC_TLS)},
	{"$VALUES", "[Lsun/security/validator/CADistrustPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CADistrustPolicy, $VALUES)},
	{"POLICIES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lsun/security/validator/CADistrustPolicy;>;", $STATIC | $FINAL, $staticField(CADistrustPolicy, POLICIES)},
	{}
};

$MethodInfo _CADistrustPolicy_MethodInfo_[] = {
	{"$values", "()[Lsun/security/validator/CADistrustPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CADistrustPolicyArray*(*)()>(&CADistrustPolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CADistrustPolicy::*)($String*,int32_t)>(&CADistrustPolicy::init$))},
	{"checkDistrust", "(Ljava/lang/String;[Ljava/security/cert/X509Certificate;)V", nullptr, $ABSTRACT, nullptr, "sun.security.validator.ValidatorException"},
	{"parseProperty", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lsun/security/validator/CADistrustPolicy;>;", $PRIVATE | $STATIC, $method(static_cast<$EnumSet*(*)()>(&CADistrustPolicy::parseProperty))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/validator/CADistrustPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CADistrustPolicy*(*)($String*)>(&CADistrustPolicy::valueOf))},
	{"values", "()[Lsun/security/validator/CADistrustPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CADistrustPolicyArray*(*)()>(&CADistrustPolicy::values))},
	{}
};

$InnerClassInfo _CADistrustPolicy_InnerClassesInfo_[] = {
	{"sun.security.validator.CADistrustPolicy$2", nullptr, nullptr, 0},
	{"sun.security.validator.CADistrustPolicy$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _CADistrustPolicy_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"sun.security.validator.CADistrustPolicy",
	"java.lang.Enum",
	nullptr,
	_CADistrustPolicy_FieldInfo_,
	_CADistrustPolicy_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/validator/CADistrustPolicy;>;",
	nullptr,
	_CADistrustPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.validator.CADistrustPolicy$2,sun.security.validator.CADistrustPolicy$1"
};

$Object* allocate$CADistrustPolicy($Class* clazz) {
	return $of($alloc(CADistrustPolicy));
}

CADistrustPolicy* CADistrustPolicy::SYMANTEC_TLS = nullptr;
$CADistrustPolicyArray* CADistrustPolicy::$VALUES = nullptr;
$EnumSet* CADistrustPolicy::POLICIES = nullptr;

$CADistrustPolicyArray* CADistrustPolicy::$values() {
	$init(CADistrustPolicy);
	return $new($CADistrustPolicyArray, {CADistrustPolicy::SYMANTEC_TLS});
}

$CADistrustPolicyArray* CADistrustPolicy::values() {
	$init(CADistrustPolicy);
	return $cast($CADistrustPolicyArray, CADistrustPolicy::$VALUES->clone());
}

CADistrustPolicy* CADistrustPolicy::valueOf($String* name) {
	$init(CADistrustPolicy);
	return $cast(CADistrustPolicy, $Enum::valueOf(CADistrustPolicy::class$, name));
}

void CADistrustPolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$EnumSet* CADistrustPolicy::parseProperty() {
	$init(CADistrustPolicy);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, property, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CADistrustPolicy$2)))));
	$var($EnumSet, set, $EnumSet::noneOf(CADistrustPolicy::class$));
	if (property == nullptr || $nc(property)->isEmpty()) {
		return set;
	}
	$var($StringArray, policies, $nc(property)->split(","_s));
	{
		$var($StringArray, arr$, policies);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, policy, arr$->get(i$));
			{
				$assign(policy, $nc(policy)->trim());
				try {
					CADistrustPolicy* caPolicy = $cast(CADistrustPolicy, $Enum::valueOf(CADistrustPolicy::class$, policy));
					$nc(set)->add(caPolicy);
				} catch ($IllegalArgumentException& iae) {
					$var($Debug, debug, $Debug::getInstance("certpath"_s));
					if (debug != nullptr) {
						debug->println($$str({"Unknown value for the jdk.security.caDistrustPolicies property: "_s, policy}));
					}
				}
			}
		}
	}
	return set;
}

void clinit$CADistrustPolicy($Class* class$) {
	$assignStatic(CADistrustPolicy::SYMANTEC_TLS, $new($CADistrustPolicy$1, "SYMANTEC_TLS"_s, 0));
	$assignStatic(CADistrustPolicy::$VALUES, CADistrustPolicy::$values());
	$assignStatic(CADistrustPolicy::POLICIES, CADistrustPolicy::parseProperty());
}

CADistrustPolicy::CADistrustPolicy() {
}

$Class* CADistrustPolicy::load$($String* name, bool initialize) {
	$loadClass(CADistrustPolicy, name, initialize, &_CADistrustPolicy_ClassInfo_, clinit$CADistrustPolicy, allocate$CADistrustPolicy);
	return class$;
}

$Class* CADistrustPolicy::class$ = nullptr;

		} // validator
	} // security
} // sun