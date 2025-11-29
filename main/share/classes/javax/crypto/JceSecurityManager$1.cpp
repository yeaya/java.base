#include <javax/crypto/JceSecurityManager$1.h>

#include <javax/crypto/JceSecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JceSecurityManager = ::javax::crypto::JceSecurityManager;

namespace javax {
	namespace crypto {

$MethodInfo _JceSecurityManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JceSecurityManager$1::*)()>(&JceSecurityManager$1::init$))},
	{"run", "()Ljavax/crypto/JceSecurityManager;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JceSecurityManager$1_EnclosingMethodInfo_ = {
	"javax.crypto.JceSecurityManager",
	nullptr,
	nullptr
};

$InnerClassInfo _JceSecurityManager$1_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurityManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JceSecurityManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.JceSecurityManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_JceSecurityManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/crypto/JceSecurityManager;>;",
	&_JceSecurityManager$1_EnclosingMethodInfo_,
	_JceSecurityManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurityManager"
};

$Object* allocate$JceSecurityManager$1($Class* clazz) {
	return $of($alloc(JceSecurityManager$1));
}

void JceSecurityManager$1::init$() {
}

$Object* JceSecurityManager$1::run() {
	return $of($new($JceSecurityManager));
}

JceSecurityManager$1::JceSecurityManager$1() {
}

$Class* JceSecurityManager$1::load$($String* name, bool initialize) {
	$loadClass(JceSecurityManager$1, name, initialize, &_JceSecurityManager$1_ClassInfo_, allocate$JceSecurityManager$1);
	return class$;
}

$Class* JceSecurityManager$1::class$ = nullptr;

	} // crypto
} // javax