#include <java/security/ProtectionDomain$JavaSecurityAccessImpl.h>

#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/DomainCombiner.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain$JavaSecurityAccessImpl$1.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaSecurityAccess$ProtectionDomainCache.h>
#include <jcpp.h>

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain$JavaSecurityAccessImpl$1 = ::java::security::ProtectionDomain$JavaSecurityAccessImpl$1;
using $JavaSecurityAccess$ProtectionDomainCache = ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache;

namespace java {
	namespace security {

$MethodInfo _ProtectionDomain$JavaSecurityAccessImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ProtectionDomain$JavaSecurityAccessImpl, init$, void)},
	{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)TT;", $PUBLIC, $virtualMethod(ProtectionDomain$JavaSecurityAccessImpl, doIntersectionPrivilege, $Object*, $PrivilegedAction*, $AccessControlContext*, $AccessControlContext*)},
	{"doIntersectionPrivilege", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC, $virtualMethod(ProtectionDomain$JavaSecurityAccessImpl, doIntersectionPrivilege, $Object*, $PrivilegedAction*, $AccessControlContext*)},
	{"getCombinedACC", "(Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;)Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC, $staticMethod(ProtectionDomain$JavaSecurityAccessImpl, getCombinedACC, $AccessControlContext*, $AccessControlContext*, $AccessControlContext*)},
	{"getProtectDomains", "(Ljava/security/AccessControlContext;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(ProtectionDomain$JavaSecurityAccessImpl, getProtectDomains, $ProtectionDomainArray*, $AccessControlContext*)},
	{"getProtectionDomainCache", "()Ljdk/internal/access/JavaSecurityAccess$ProtectionDomainCache;", nullptr, $PUBLIC, $virtualMethod(ProtectionDomain$JavaSecurityAccessImpl, getProtectionDomainCache, $JavaSecurityAccess$ProtectionDomainCache*)},
	{}
};

$InnerClassInfo _ProtectionDomain$JavaSecurityAccessImpl_InnerClassesInfo_[] = {
	{"java.security.ProtectionDomain$JavaSecurityAccessImpl", "java.security.ProtectionDomain", "JavaSecurityAccessImpl", $PRIVATE | $STATIC},
	{"java.security.ProtectionDomain$JavaSecurityAccessImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProtectionDomain$JavaSecurityAccessImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.ProtectionDomain$JavaSecurityAccessImpl",
	"java.lang.Object",
	"jdk.internal.access.JavaSecurityAccess",
	nullptr,
	_ProtectionDomain$JavaSecurityAccessImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ProtectionDomain$JavaSecurityAccessImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.ProtectionDomain"
};

$Object* allocate$ProtectionDomain$JavaSecurityAccessImpl($Class* clazz) {
	return $of($alloc(ProtectionDomain$JavaSecurityAccessImpl));
}

void ProtectionDomain$JavaSecurityAccessImpl::init$() {
}

$Object* ProtectionDomain$JavaSecurityAccessImpl::doIntersectionPrivilege($PrivilegedAction* action, $AccessControlContext* stack, $AccessControlContext* context) {
	$beforeCallerSensitive();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($AccessController::doPrivileged(action, $(getCombinedACC(context, stack))));
}

$Object* ProtectionDomain$JavaSecurityAccessImpl::doIntersectionPrivilege($PrivilegedAction* action, $AccessControlContext* context) {
	return $of(doIntersectionPrivilege(action, $($AccessController::getContext()), context));
}

$ProtectionDomainArray* ProtectionDomain$JavaSecurityAccessImpl::getProtectDomains($AccessControlContext* context) {
	return $nc(context)->getContext();
}

$AccessControlContext* ProtectionDomain$JavaSecurityAccessImpl::getCombinedACC($AccessControlContext* context, $AccessControlContext* stack) {
	$init(ProtectionDomain$JavaSecurityAccessImpl);
	$useLocalCurrentObjectStackCache();
	$var($AccessControlContext, acc, $new($AccessControlContext, context, $($nc(stack)->getCombiner()), true));
	return $$new($AccessControlContext, $($nc(stack)->getContext()), acc)->optimize();
}

$JavaSecurityAccess$ProtectionDomainCache* ProtectionDomain$JavaSecurityAccessImpl::getProtectionDomainCache() {
	return $new($ProtectionDomain$JavaSecurityAccessImpl$1, this);
}

ProtectionDomain$JavaSecurityAccessImpl::ProtectionDomain$JavaSecurityAccessImpl() {
}

$Class* ProtectionDomain$JavaSecurityAccessImpl::load$($String* name, bool initialize) {
	$loadClass(ProtectionDomain$JavaSecurityAccessImpl, name, initialize, &_ProtectionDomain$JavaSecurityAccessImpl_ClassInfo_, allocate$ProtectionDomain$JavaSecurityAccessImpl);
	return class$;
}

$Class* ProtectionDomain$JavaSecurityAccessImpl::class$ = nullptr;

	} // security
} // java