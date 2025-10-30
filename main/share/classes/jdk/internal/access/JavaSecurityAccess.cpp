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

$MethodInfo _JavaSecurityAccess_MethodInfo_[] = {
	{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $ABSTRACT},
	{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $ABSTRACT},
	{"getProtectDomains", "(Ljava/security/AccessControlContext;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProtectionDomainCache", "()Ljdk/internal/access/JavaSecurityAccess$ProtectionDomainCache;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavaSecurityAccess_InnerClassesInfo_[] = {
	{"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache", "jdk.internal.access.JavaSecurityAccess", "ProtectionDomainCache", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaSecurityAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaSecurityAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaSecurityAccess_MethodInfo_,
	nullptr,
	nullptr,
	_JavaSecurityAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache"
};

$Object* allocate$JavaSecurityAccess($Class* clazz) {
	return $of($alloc(JavaSecurityAccess));
}

$Class* JavaSecurityAccess::load$($String* name, bool initialize) {
	$loadClass(JavaSecurityAccess, name, initialize, &_JavaSecurityAccess_ClassInfo_, allocate$JavaSecurityAccess);
	return class$;
}

$Class* JavaSecurityAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk