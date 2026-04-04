#include <java/security/PolicySpi.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

#undef UNSUPPORTED_EMPTY_COLLECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

void PolicySpi::init$() {
}

void PolicySpi::engineRefresh() {
}

$PermissionCollection* PolicySpi::engineGetPermissions($CodeSource* codesource) {
	$init($Policy);
	return $Policy::UNSUPPORTED_EMPTY_COLLECTION;
}

$PermissionCollection* PolicySpi::engineGetPermissions($ProtectionDomain* domain) {
	$init($Policy);
	return $Policy::UNSUPPORTED_EMPTY_COLLECTION;
}

PolicySpi::PolicySpi() {
}

$Class* PolicySpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PolicySpi, init$, void)},
		{"engineGetPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED, $virtualMethod(PolicySpi, engineGetPermissions, $PermissionCollection*, $CodeSource*)},
		{"engineGetPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED, $virtualMethod(PolicySpi, engineGetPermissions, $PermissionCollection*, $ProtectionDomain*)},
		{"engineImplies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(PolicySpi, engineImplies, bool, $ProtectionDomain*, $Permission*)},
		{"engineRefresh", "()V", nullptr, $PROTECTED, $virtualMethod(PolicySpi, engineRefresh, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.PolicySpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(PolicySpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicySpi);
	});
	return class$;
}

$Class* PolicySpi::class$ = nullptr;

	} // security
} // java