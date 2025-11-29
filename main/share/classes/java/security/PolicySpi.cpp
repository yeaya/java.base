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
using $PermissionCollection = ::java::security::PermissionCollection;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$NamedAttribute PolicySpi_Attribute_var$0[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _PolicySpi_Annotations_[] = {
	{"Ljava/lang/Deprecated;", PolicySpi_Attribute_var$0},
	{}
};

$MethodInfo _PolicySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PolicySpi::*)()>(&PolicySpi::init$))},
	{"engineGetPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED},
	{"engineGetPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED},
	{"engineImplies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"engineRefresh", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _PolicySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.PolicySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PolicySpi_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_PolicySpi_Annotations_
};

$Object* allocate$PolicySpi($Class* clazz) {
	return $of($alloc(PolicySpi));
}

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
	$loadClass(PolicySpi, name, initialize, &_PolicySpi_ClassInfo_, allocate$PolicySpi);
	return class$;
}

$Class* PolicySpi::class$ = nullptr;

	} // security
} // java