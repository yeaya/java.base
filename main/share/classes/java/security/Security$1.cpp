#include <java/security/Security$1.h>

#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

$MethodInfo _Security$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Security$1, init$, void)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Security$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _Security$1_EnclosingMethodInfo_ = {
	"java.security.Security",
	nullptr,
	nullptr
};

$InnerClassInfo _Security$1_InnerClassesInfo_[] = {
	{"java.security.Security$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Security$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Security$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Security$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Security$1_EnclosingMethodInfo_,
	_Security$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Security"
};

$Object* allocate$Security$1($Class* clazz) {
	return $of($alloc(Security$1));
}

void Security$1::init$() {
}

$Object* Security$1::run() {
	$Security::initialize();
	return $of(nullptr);
}

Security$1::Security$1() {
}

$Class* Security$1::load$($String* name, bool initialize) {
	$loadClass(Security$1, name, initialize, &_Security$1_ClassInfo_, allocate$Security$1);
	return class$;
}

$Class* Security$1::class$ = nullptr;

	} // security
} // java