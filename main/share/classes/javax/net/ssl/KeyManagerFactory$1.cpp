#include <javax/net/ssl/KeyManagerFactory$1.h>

#include <java/security/Security.h>
#include <javax/net/ssl/KeyManagerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $KeyManagerFactory = ::javax::net::ssl::KeyManagerFactory;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _KeyManagerFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyManagerFactory$1::*)()>(&KeyManagerFactory$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyManagerFactory$1_EnclosingMethodInfo_ = {
	"javax.net.ssl.KeyManagerFactory",
	"getDefaultAlgorithm",
	"()Ljava/lang/String;"
};

$InnerClassInfo _KeyManagerFactory$1_InnerClassesInfo_[] = {
	{"javax.net.ssl.KeyManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyManagerFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.ssl.KeyManagerFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KeyManagerFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_KeyManagerFactory$1_EnclosingMethodInfo_,
	_KeyManagerFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.KeyManagerFactory"
};

$Object* allocate$KeyManagerFactory$1($Class* clazz) {
	return $of($alloc(KeyManagerFactory$1));
}

void KeyManagerFactory$1::init$() {
}

$Object* KeyManagerFactory$1::run() {
	return $of($Security::getProperty("ssl.KeyManagerFactory.algorithm"_s));
}

KeyManagerFactory$1::KeyManagerFactory$1() {
}

$Class* KeyManagerFactory$1::load$($String* name, bool initialize) {
	$loadClass(KeyManagerFactory$1, name, initialize, &_KeyManagerFactory$1_ClassInfo_, allocate$KeyManagerFactory$1);
	return class$;
}

$Class* KeyManagerFactory$1::class$ = nullptr;

		} // ssl
	} // net
} // javax