#include <javax/crypto/JceSecurity$1.h>

#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JceSecurity = ::javax::crypto::JceSecurity;

namespace javax {
	namespace crypto {

$MethodInfo _JceSecurity$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JceSecurity$1::*)()>(&JceSecurity$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _JceSecurity$1_EnclosingMethodInfo_ = {
	"javax.crypto.JceSecurity",
	nullptr,
	nullptr
};

$InnerClassInfo _JceSecurity$1_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JceSecurity$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.JceSecurity$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_JceSecurity$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_JceSecurity$1_EnclosingMethodInfo_,
	_JceSecurity$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurity"
};

$Object* allocate$JceSecurity$1($Class* clazz) {
	return $of($alloc(JceSecurity$1));
}

void JceSecurity$1::init$() {
}

$Object* JceSecurity$1::run() {
	$JceSecurity::setupJurisdictionPolicies();
	return $of(nullptr);
}

JceSecurity$1::JceSecurity$1() {
}

$Class* JceSecurity$1::load$($String* name, bool initialize) {
	$loadClass(JceSecurity$1, name, initialize, &_JceSecurity$1_ClassInfo_, allocate$JceSecurity$1);
	return class$;
}

$Class* JceSecurity$1::class$ = nullptr;

	} // crypto
} // javax