#include <jdk/internal/access/JavaSecurityAccess.h>
#include <java/security/AccessControlContext.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaSecurityAccess$ProtectionDomainCache.h>
#include <jcpp.h>

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JavaSecurityAccess$ProtectionDomainCache = ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaSecurityAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess, doIntersectionPrivilege, $Object*, $PrivilegedAction*, $AccessControlContext*, $AccessControlContext*)},
		{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess, doIntersectionPrivilege, $Object*, $PrivilegedAction*, $AccessControlContext*)},
		{"getProtectDomains", "(Ljava/security/AccessControlContext;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess, getProtectDomains, $ProtectionDomainArray*, $AccessControlContext*)},
		{"getProtectionDomainCache", "()Ljdk/internal/access/JavaSecurityAccess$ProtectionDomainCache;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecurityAccess, getProtectionDomainCache, $JavaSecurityAccess$ProtectionDomainCache*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache", "jdk.internal.access.JavaSecurityAccess", "ProtectionDomainCache", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaSecurityAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache"
	};
	$loadClass(JavaSecurityAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaSecurityAccess);
	});
	return class$;
}

$Class* JavaSecurityAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk