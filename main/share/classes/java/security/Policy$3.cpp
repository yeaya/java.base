#include <java/security/Policy$3.h>

#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$FieldInfo _Policy$3_FieldInfo_[] = {
	{"val$p", "Ljava/security/Policy;", nullptr, $FINAL | $SYNTHETIC, $field(Policy$3, val$p)},
	{}
};

$MethodInfo _Policy$3_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Policy;)V", nullptr, 0, $method(static_cast<void(Policy$3::*)($Policy*)>(&Policy$3::init$))},
	{"run", "()Ljava/security/ProtectionDomain;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Policy$3_EnclosingMethodInfo_ = {
	"java.security.Policy",
	"initPolicy",
	"(Ljava/security/Policy;)V"
};

$InnerClassInfo _Policy$3_InnerClassesInfo_[] = {
	{"java.security.Policy$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Policy$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Policy$3_FieldInfo_,
	_Policy$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/ProtectionDomain;>;",
	&_Policy$3_EnclosingMethodInfo_,
	_Policy$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$3($Class* clazz) {
	return $of($alloc(Policy$3));
}

void Policy$3::init$($Policy* val$p) {
	$set(this, val$p, val$p);
}

$Object* Policy$3::run() {
	return $of($nc($of(this->val$p))->getClass()->getProtectionDomain());
}

Policy$3::Policy$3() {
}

$Class* Policy$3::load$($String* name, bool initialize) {
	$loadClass(Policy$3, name, initialize, &_Policy$3_ClassInfo_, allocate$Policy$3);
	return class$;
}

$Class* Policy$3::class$ = nullptr;

	} // security
} // java