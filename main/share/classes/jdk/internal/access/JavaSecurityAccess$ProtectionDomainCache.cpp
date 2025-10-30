#include <jdk/internal/access/JavaSecurityAccess$ProtectionDomainCache.h>

#include <java/security/PermissionCollection.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaSecurityAccess$ProtectionDomainCache_MethodInfo_[] = {
	{"get", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/security/ProtectionDomain;Ljava/security/PermissionCollection;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavaSecurityAccess$ProtectionDomainCache_InnerClassesInfo_[] = {
	{"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache", "jdk.internal.access.JavaSecurityAccess", "ProtectionDomainCache", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaSecurityAccess$ProtectionDomainCache_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache",
	nullptr,
	nullptr,
	nullptr,
	_JavaSecurityAccess$ProtectionDomainCache_MethodInfo_,
	nullptr,
	nullptr,
	_JavaSecurityAccess$ProtectionDomainCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.access.JavaSecurityAccess"
};

$Object* allocate$JavaSecurityAccess$ProtectionDomainCache($Class* clazz) {
	return $of($alloc(JavaSecurityAccess$ProtectionDomainCache));
}

$Class* JavaSecurityAccess$ProtectionDomainCache::load$($String* name, bool initialize) {
	$loadClass(JavaSecurityAccess$ProtectionDomainCache, name, initialize, &_JavaSecurityAccess$ProtectionDomainCache_ClassInfo_, allocate$JavaSecurityAccess$ProtectionDomainCache);
	return class$;
}

$Class* JavaSecurityAccess$ProtectionDomainCache::class$ = nullptr;

		} // access
	} // internal
} // jdk