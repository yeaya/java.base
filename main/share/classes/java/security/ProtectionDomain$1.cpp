#include <java/security/ProtectionDomain$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Policy = ::java::security::Policy;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$FieldInfo _ProtectionDomain$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/ProtectionDomain;", nullptr, $FINAL | $SYNTHETIC, $field(ProtectionDomain$1, this$0)},
	{}
};

$MethodInfo _ProtectionDomain$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/ProtectionDomain;)V", nullptr, 0, $method(static_cast<void(ProtectionDomain$1::*)($ProtectionDomain*)>(&ProtectionDomain$1::init$))},
	{"run", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProtectionDomain$1_EnclosingMethodInfo_ = {
	"java.security.ProtectionDomain",
	"mergePermissions",
	"()Ljava/security/PermissionCollection;"
};

$InnerClassInfo _ProtectionDomain$1_InnerClassesInfo_[] = {
	{"java.security.ProtectionDomain$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProtectionDomain$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.ProtectionDomain$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProtectionDomain$1_FieldInfo_,
	_ProtectionDomain$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/PermissionCollection;>;",
	&_ProtectionDomain$1_EnclosingMethodInfo_,
	_ProtectionDomain$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.ProtectionDomain"
};

$Object* allocate$ProtectionDomain$1($Class* clazz) {
	return $of($alloc(ProtectionDomain$1));
}

void ProtectionDomain$1::init$($ProtectionDomain* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProtectionDomain$1::run() {
	$var($Policy, p, $Policy::getPolicyNoCheck());
	return $of($nc(p)->getPermissions(this->this$0));
}

ProtectionDomain$1::ProtectionDomain$1() {
}

$Class* ProtectionDomain$1::load$($String* name, bool initialize) {
	$loadClass(ProtectionDomain$1, name, initialize, &_ProtectionDomain$1_ClassInfo_, allocate$ProtectionDomain$1);
	return class$;
}

$Class* ProtectionDomain$1::class$ = nullptr;

	} // security
} // java