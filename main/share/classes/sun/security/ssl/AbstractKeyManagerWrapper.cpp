#include <sun/security/ssl/AbstractKeyManagerWrapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/Principal.h>
#include <java/security/PrivateKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <javax/net/ssl/X509KeyManager.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $PrivateKey = ::java::security::PrivateKey;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $X509KeyManager = ::javax::net::ssl::X509KeyManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _AbstractKeyManagerWrapper_FieldInfo_[] = {
	{"km", "Ljavax/net/ssl/X509KeyManager;", nullptr, $PRIVATE | $FINAL, $field(AbstractKeyManagerWrapper, km)},
	{}
};

$MethodInfo _AbstractKeyManagerWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/X509KeyManager;)V", nullptr, 0, $method(static_cast<void(AbstractKeyManagerWrapper::*)($X509KeyManager*)>(&AbstractKeyManagerWrapper::init$))},
	{"chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;", nullptr, $PUBLIC},
	{"getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractKeyManagerWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AbstractKeyManagerWrapper",
	"javax.net.ssl.X509ExtendedKeyManager",
	nullptr,
	_AbstractKeyManagerWrapper_FieldInfo_,
	_AbstractKeyManagerWrapper_MethodInfo_
};

$Object* allocate$AbstractKeyManagerWrapper($Class* clazz) {
	return $of($alloc(AbstractKeyManagerWrapper));
}

void AbstractKeyManagerWrapper::init$($X509KeyManager* km) {
	$X509ExtendedKeyManager::init$();
	$set(this, km, km);
}

$StringArray* AbstractKeyManagerWrapper::getClientAliases($String* keyType, $PrincipalArray* issuers) {
	return $nc(this->km)->getClientAliases(keyType, issuers);
}

$String* AbstractKeyManagerWrapper::chooseClientAlias($StringArray* keyType, $PrincipalArray* issuers, $Socket* socket) {
	return $nc(this->km)->chooseClientAlias(keyType, issuers, socket);
}

$StringArray* AbstractKeyManagerWrapper::getServerAliases($String* keyType, $PrincipalArray* issuers) {
	return $nc(this->km)->getServerAliases(keyType, issuers);
}

$String* AbstractKeyManagerWrapper::chooseServerAlias($String* keyType, $PrincipalArray* issuers, $Socket* socket) {
	return $nc(this->km)->chooseServerAlias(keyType, issuers, socket);
}

$X509CertificateArray* AbstractKeyManagerWrapper::getCertificateChain($String* alias) {
	return $nc(this->km)->getCertificateChain(alias);
}

$PrivateKey* AbstractKeyManagerWrapper::getPrivateKey($String* alias) {
	return $nc(this->km)->getPrivateKey(alias);
}

AbstractKeyManagerWrapper::AbstractKeyManagerWrapper() {
}

$Class* AbstractKeyManagerWrapper::load$($String* name, bool initialize) {
	$loadClass(AbstractKeyManagerWrapper, name, initialize, &_AbstractKeyManagerWrapper_ClassInfo_, allocate$AbstractKeyManagerWrapper);
	return class$;
}

$Class* AbstractKeyManagerWrapper::class$ = nullptr;

		} // ssl
	} // security
} // sun