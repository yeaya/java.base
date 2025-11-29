#include <sun/security/ssl/Finished$S30VerifyDataGenerator.h>

#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Finished$S30VerifyDataGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Finished$S30VerifyDataGenerator::*)()>(&Finished$S30VerifyDataGenerator::init$))},
	{"createVerifyData", "(Lsun/security/ssl/HandshakeContext;Z)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Finished$S30VerifyDataGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Finished$S30VerifyDataGenerator", "sun.security.ssl.Finished", "S30VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Finished$VerifyDataGenerator", "sun.security.ssl.Finished", "VerifyDataGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Finished$S30VerifyDataGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Finished$S30VerifyDataGenerator",
	"java.lang.Object",
	"sun.security.ssl.Finished$VerifyDataGenerator",
	nullptr,
	_Finished$S30VerifyDataGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_Finished$S30VerifyDataGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Finished"
};

$Object* allocate$Finished$S30VerifyDataGenerator($Class* clazz) {
	return $of($alloc(Finished$S30VerifyDataGenerator));
}

void Finished$S30VerifyDataGenerator::init$() {
}

$bytes* Finished$S30VerifyDataGenerator::createVerifyData($HandshakeContext* context, bool isValidation) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeHash, handshakeHash, $nc(context)->handshakeHash);
	$var($SecretKey, masterSecretKey, $nc(context->handshakeSession)->getMasterSecret());
	bool useClientLabel = ($nc(context->sslConfig)->isClientMode && !isValidation) || (!$nc(context->sslConfig)->isClientMode && isValidation);
	return $nc(handshakeHash)->digest(useClientLabel, masterSecretKey);
}

Finished$S30VerifyDataGenerator::Finished$S30VerifyDataGenerator() {
}

$Class* Finished$S30VerifyDataGenerator::load$($String* name, bool initialize) {
	$loadClass(Finished$S30VerifyDataGenerator, name, initialize, &_Finished$S30VerifyDataGenerator_ClassInfo_, allocate$Finished$S30VerifyDataGenerator);
	return class$;
}

$Class* Finished$S30VerifyDataGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun