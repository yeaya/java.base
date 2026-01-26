#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence.h>

#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef DSA_SHA1
#undef ECDSA_SHA1
#undef RSA_PKCS1_SHA1

using $SignatureSchemeArray = $Array<::sun::security::ssl::SignatureScheme>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, init$, void)},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence));
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::init$() {
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->negotiatedProtocol)->useTLS12PlusSpec()) {
		$init($SignatureScheme);
		$var($List, schemes, $Arrays::asList($$new($SignatureSchemeArray, {
			$SignatureScheme::RSA_PKCS1_SHA1,
			$SignatureScheme::DSA_SHA1,
			$SignatureScheme::ECDSA_SHA1
		})));
		$set(shc, peerRequestedSignatureSchemes, schemes);
		if (shc->peerRequestedCertSignSchemes == nullptr || $nc(shc->peerRequestedCertSignSchemes)->isEmpty()) {
			$set(shc, peerRequestedCertSignSchemes, schemes);
		}
		$nc(shc->handshakeSession)->setUseDefaultPeerSignAlgs();
	}
}

SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence() {
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, name, initialize, &_SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence_ClassInfo_, allocate$SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun