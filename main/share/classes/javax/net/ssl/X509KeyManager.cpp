#include <javax/net/ssl/X509KeyManager.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $PrivateKey = ::java::security::PrivateKey;
using $KeyManager = ::javax::net::ssl::KeyManager;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _X509KeyManager_MethodInfo_[] = {
	{"chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X509KeyManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.X509KeyManager",
	nullptr,
	"javax.net.ssl.KeyManager",
	nullptr,
	_X509KeyManager_MethodInfo_
};

$Object* allocate$X509KeyManager($Class* clazz) {
	return $of($alloc(X509KeyManager));
}

$Class* X509KeyManager::load$($String* name, bool initialize) {
	$loadClass(X509KeyManager, name, initialize, &_X509KeyManager_ClassInfo_, allocate$X509KeyManager);
	return class$;
}

$Class* X509KeyManager::class$ = nullptr;

		} // ssl
	} // net
} // javax