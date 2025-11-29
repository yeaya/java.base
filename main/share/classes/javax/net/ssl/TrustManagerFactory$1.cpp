#include <javax/net/ssl/TrustManagerFactory$1.h>

#include <java/security/Security.h>
#include <javax/net/ssl/TrustManagerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _TrustManagerFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TrustManagerFactory$1::*)()>(&TrustManagerFactory$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TrustManagerFactory$1_EnclosingMethodInfo_ = {
	"javax.net.ssl.TrustManagerFactory",
	"getDefaultAlgorithm",
	"()Ljava/lang/String;"
};

$InnerClassInfo _TrustManagerFactory$1_InnerClassesInfo_[] = {
	{"javax.net.ssl.TrustManagerFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustManagerFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.ssl.TrustManagerFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_TrustManagerFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_TrustManagerFactory$1_EnclosingMethodInfo_,
	_TrustManagerFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.TrustManagerFactory"
};

$Object* allocate$TrustManagerFactory$1($Class* clazz) {
	return $of($alloc(TrustManagerFactory$1));
}

void TrustManagerFactory$1::init$() {
}

$Object* TrustManagerFactory$1::run() {
	return $of($Security::getProperty("ssl.TrustManagerFactory.algorithm"_s));
}

TrustManagerFactory$1::TrustManagerFactory$1() {
}

$Class* TrustManagerFactory$1::load$($String* name, bool initialize) {
	$loadClass(TrustManagerFactory$1, name, initialize, &_TrustManagerFactory$1_ClassInfo_, allocate$TrustManagerFactory$1);
	return class$;
}

$Class* TrustManagerFactory$1::class$ = nullptr;

		} // ssl
	} // net
} // javax