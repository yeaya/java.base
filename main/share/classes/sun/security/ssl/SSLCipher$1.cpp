#include <sun/security/ssl/SSLCipher$1.h>

#include <java/security/Security.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $SSLCipher = ::sun::security::ssl::SSLCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SSLCipher$1::*)()>(&SSLCipher$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SSLCipher$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLCipher",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLCipher$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SSLCipher$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLCipher$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SSLCipher$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SSLCipher$1_EnclosingMethodInfo_,
	_SSLCipher$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$1($Class* clazz) {
	return $of($alloc(SSLCipher$1));
}

void SSLCipher$1::init$() {
}

$Object* SSLCipher$1::run() {
	return $of($Security::getProperty("jdk.tls.keyLimits"_s));
}

SSLCipher$1::SSLCipher$1() {
}

$Class* SSLCipher$1::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$1, name, initialize, &_SSLCipher$1_ClassInfo_, allocate$SSLCipher$1);
	return class$;
}

$Class* SSLCipher$1::class$ = nullptr;

		} // ssl
	} // security
} // sun