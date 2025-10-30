#include <java/security/SecureRandom$1.h>

#include <java/security/SecureRandom.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SecureRandom = ::java::security::SecureRandom;
using $Security = ::java::security::Security;

namespace java {
	namespace security {

$MethodInfo _SecureRandom$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SecureRandom$1::*)()>(&SecureRandom$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SecureRandom$1_EnclosingMethodInfo_ = {
	"java.security.SecureRandom",
	"getInstanceStrong",
	"()Ljava/security/SecureRandom;"
};

$InnerClassInfo _SecureRandom$1_InnerClassesInfo_[] = {
	{"java.security.SecureRandom$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecureRandom$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.SecureRandom$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SecureRandom$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SecureRandom$1_EnclosingMethodInfo_,
	_SecureRandom$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.SecureRandom"
};

$Object* allocate$SecureRandom$1($Class* clazz) {
	return $of($alloc(SecureRandom$1));
}

void SecureRandom$1::init$() {
}

$Object* SecureRandom$1::run() {
	return $of($Security::getProperty("securerandom.strongAlgorithms"_s));
}

SecureRandom$1::SecureRandom$1() {
}

$Class* SecureRandom$1::load$($String* name, bool initialize) {
	$loadClass(SecureRandom$1, name, initialize, &_SecureRandom$1_ClassInfo_, allocate$SecureRandom$1);
	return class$;
}

$Class* SecureRandom$1::class$ = nullptr;

	} // security
} // java