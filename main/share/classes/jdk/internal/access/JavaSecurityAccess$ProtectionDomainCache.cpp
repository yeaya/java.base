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

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaSecurityAccess$ProtectionDomainCache::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess$ProtectionDomainCache, get, $PermissionCollection*, $ProtectionDomain*)},
		{"put", "(Ljava/security/ProtectionDomain;Ljava/security/PermissionCollection;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess$ProtectionDomainCache, put, void, $ProtectionDomain*, $PermissionCollection*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache", "jdk.internal.access.JavaSecurityAccess", "ProtectionDomainCache", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.access.JavaSecurityAccess"
	};
	$loadClass(JavaSecurityAccess$ProtectionDomainCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaSecurityAccess$ProtectionDomainCache);
	});
	return class$;
}

$Class* JavaSecurityAccess$ProtectionDomainCache::class$ = nullptr;

		} // access
	} // internal
} // jdk