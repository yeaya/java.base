#include <sun/security/ssl/CertificateRequest$T12CertificateRequestConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateRequest$T12CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLAuthentication.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_VERIFY
#undef CERTIFICATE
#undef HANDSHAKE_FAILURE
#undef CERTIFICATE_STATUS

using $X500PrincipalArray = $Array<::javax::security::auth::x500::X500Principal>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $CertificateRequest$T12CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T12CertificateRequestMessage;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLAuthentication = ::sun::security::ssl::SSLAuthentication;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $X509Authentication = ::sun::security::ssl::X509Authentication;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateRequest$T12CertificateRequestConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateRequest$T12CertificateRequestConsumer::*)()>(&CertificateRequest$T12CertificateRequestConsumer::init$))},
	{"choosePossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SSLPossession*(*)($HandshakeContext*)>(&CertificateRequest$T12CertificateRequestConsumer::choosePossession)), "java.io.IOException"},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateRequest$T12CertificateRequestConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$T12CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T12CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateRequest$T12CertificateRequestConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateRequest$T12CertificateRequestConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_CertificateRequest$T12CertificateRequestConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateRequest$T12CertificateRequestConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest"
};

$Object* allocate$CertificateRequest$T12CertificateRequestConsumer($Class* clazz) {
	return $of($alloc(CertificateRequest$T12CertificateRequestConsumer));
}

void CertificateRequest$T12CertificateRequestConsumer::init$() {
}

void CertificateRequest$T12CertificateRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_REQUEST->id)));
	$var($SSLConsumer, certStatCons, $cast($SSLConsumer, $nc(chc->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)))));
	if (certStatCons != nullptr) {
		$init($CertificateStatus);
		$nc($CertificateStatus::handshakeAbsence)->absent(context, nullptr);
	}
	$var($CertificateRequest$T12CertificateRequestMessage, crm, $new($CertificateRequest$T12CertificateRequestMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateRequest handshake message"_s, $$new($ObjectArray, {$of(crm)}));
	}
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	$var($List, sss, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->negotiatedProtocol, crm->algorithmIds));
	if (sss == nullptr || $nc(sss)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No supported signature algorithm"_s)));
	}
	$set(chc, peerRequestedSignatureSchemes, sss);
	$set(chc, peerRequestedCertSignSchemes, sss);
	$nc(chc->handshakeSession)->setPeerSupportedSignatureAlgorithms(sss);
	$set(chc, peerSupportedAuthorities, crm->getAuthorities());
	$var($SSLPossession, pos, choosePossession(chc));
	if (pos == nullptr) {
		return;
	}
	$nc(chc->handshakePossessions)->add(pos);
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
}

$SSLPossession* CertificateRequest$T12CertificateRequestConsumer::choosePossession($HandshakeContext* hc) {
	$init(CertificateRequest$T12CertificateRequestConsumer);
	if ($nc(hc)->peerRequestedCertSignSchemes == nullptr || $nc($nc(hc)->peerRequestedCertSignSchemes)->isEmpty()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No signature and hash algorithms in CertificateRequest"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($Collection, checkedKeyTypes, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($new($HashSet)))));
	{
		$var($Iterator, i$, $nc($nc(hc)->peerRequestedCertSignSchemes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$SignatureScheme* ss = $cast($SignatureScheme, i$->next());
			{
				if (checkedKeyTypes->contains($nc(ss)->keyAlgorithm)) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::warning($$str({"Unsupported authentication scheme: "_s, $nc(ss)->name$}), $$new($ObjectArray, 0));
					}
					continue;
				}
				if ($SignatureScheme::getPreferableAlgorithm(hc->algorithmConstraints, hc->peerRequestedSignatureSchemes, ss, hc->negotiatedProtocol) == nullptr) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::warning($$str({"Unable to produce CertificateVerify for signature scheme: "_s, $nc(ss)->name$}), $$new($ObjectArray, 0));
					}
					checkedKeyTypes->add($nc(ss)->keyAlgorithm);
					continue;
				}
				$var($SSLAuthentication, ka, $X509Authentication::valueOf(ss));
				if (ka == nullptr) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::warning($$str({"Unsupported authentication scheme: "_s, $nc(ss)->name$}), $$new($ObjectArray, 0));
					}
					checkedKeyTypes->add($nc(ss)->keyAlgorithm);
					continue;
				}
				$var($SSLPossession, pos, $nc(ka)->createPossession(hc));
				if (pos == nullptr) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::warning($$str({"Unavailable authentication scheme: "_s, $nc(ss)->name$}), $$new($ObjectArray, 0));
					}
					continue;
				}
				return pos;
			}
		}
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::warning("No available authentication scheme"_s, $$new($ObjectArray, 0));
	}
	return nullptr;
}

CertificateRequest$T12CertificateRequestConsumer::CertificateRequest$T12CertificateRequestConsumer() {
}

$Class* CertificateRequest$T12CertificateRequestConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest$T12CertificateRequestConsumer, name, initialize, &_CertificateRequest$T12CertificateRequestConsumer_ClassInfo_, allocate$CertificateRequest$T12CertificateRequestConsumer);
	return class$;
}

$Class* CertificateRequest$T12CertificateRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun