#include <java/security/AccessController$AccHolder.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$AccessControlContext* AccessController$AccHolder::innocuousAcc = nullptr;

void AccessController$AccHolder::init$() {
}

void AccessController$AccHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AccessController$AccHolder::innocuousAcc, $new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)})));
}

AccessController$AccHolder::AccessController$AccHolder() {
}

$Class* AccessController$AccHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"innocuousAcc", "Ljava/security/AccessControlContext;", nullptr, $STATIC | $FINAL, $staticField(AccessController$AccHolder, innocuousAcc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AccessController$AccHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.AccessController$AccHolder", "java.security.AccessController", "AccHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.AccessController$AccHolder",
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
		"java.security.AccessController"
	};
	$loadClass(AccessController$AccHolder, name, initialize, &classInfo$$, AccessController$AccHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AccessController$AccHolder);
	});
	return class$;
}

$Class* AccessController$AccHolder::class$ = nullptr;

	} // security
} // java