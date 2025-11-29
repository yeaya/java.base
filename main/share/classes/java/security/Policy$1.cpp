#include <java/security/Policy$1.h>

#include <java/security/Policy.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

$MethodInfo _Policy$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Policy$1::*)()>(&Policy$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Policy$1_EnclosingMethodInfo_ = {
	"java.security.Policy",
	"loadPolicyProvider",
	"()Ljava/security/Policy;"
};

$InnerClassInfo _Policy$1_InnerClassesInfo_[] = {
	{"java.security.Policy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Policy$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Policy$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Policy$1_EnclosingMethodInfo_,
	_Policy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$1($Class* clazz) {
	return $of($alloc(Policy$1));
}

void Policy$1::init$() {
}

$Object* Policy$1::run() {
	return $of($Security::getProperty("policy.provider"_s));
}

Policy$1::Policy$1() {
}

$Class* Policy$1::load$($String* name, bool initialize) {
	$loadClass(Policy$1, name, initialize, &_Policy$1_ClassInfo_, allocate$Policy$1);
	return class$;
}

$Class* Policy$1::class$ = nullptr;

	} // security
} // java