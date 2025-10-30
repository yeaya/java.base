#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesAbsence.h>

#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureAlgorithmsExtension = ::sun::security::ssl::SignatureAlgorithmsExtension;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::*)()>(&SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CRSignatureSchemesAbsence($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CRSignatureSchemesAbsence));
}

void SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::init$() {
}

void SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($Alert);
	$throw($($nc($nc(chc)->conContext)->fatal($Alert::MISSING_EXTENSION, "No mandatory signature_algorithms extension in the received CertificateRequest handshake message"_s)));
}

SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::SignatureAlgorithmsExtension$CRSignatureSchemesAbsence() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesAbsence, name, initialize, &_SignatureAlgorithmsExtension$CRSignatureSchemesAbsence_ClassInfo_, allocate$SignatureAlgorithmsExtension$CRSignatureSchemesAbsence);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun