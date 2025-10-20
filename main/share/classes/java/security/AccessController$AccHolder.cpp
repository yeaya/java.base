#include <java/security/AccessController$AccHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$FieldInfo _AccessController$AccHolder_FieldInfo_[] = {
	{"innocuousAcc", "Ljava/security/AccessControlContext;", nullptr, $STATIC | $FINAL, $staticField(AccessController$AccHolder, innocuousAcc)},
	{}
};

$MethodInfo _AccessController$AccHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AccessController$AccHolder::*)()>(&AccessController$AccHolder::init$))},
	{}
};

$InnerClassInfo _AccessController$AccHolder_InnerClassesInfo_[] = {
	{"java.security.AccessController$AccHolder", "java.security.AccessController", "AccHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AccessController$AccHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.AccessController$AccHolder",
	"java.lang.Object",
	nullptr,
	_AccessController$AccHolder_FieldInfo_,
	_AccessController$AccHolder_MethodInfo_,
	nullptr,
	nullptr,
	_AccessController$AccHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.AccessController"
};

$Object* allocate$AccessController$AccHolder($Class* clazz) {
	return $of($alloc(AccessController$AccHolder));
}

$AccessControlContext* AccessController$AccHolder::innocuousAcc = nullptr;

void AccessController$AccHolder::init$() {
}

void clinit$AccessController$AccHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AccessController$AccHolder::innocuousAcc, $new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)})));
}

AccessController$AccHolder::AccessController$AccHolder() {
}

$Class* AccessController$AccHolder::load$($String* name, bool initialize) {
	$loadClass(AccessController$AccHolder, name, initialize, &_AccessController$AccHolder_ClassInfo_, clinit$AccessController$AccHolder, allocate$AccessController$AccHolder);
	return class$;
}

$Class* AccessController$AccHolder::class$ = nullptr;

	} // security
} // java