#include <sun/security/ssl/ServerHandshakeContext.h>

#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/action/GetLongAction.h>
#include <sun/security/ssl/CertificateMessage$CertificateEntry.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLAlgorithmDecomposer.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/StatusResponseManager$StaplingParameters.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <sun/security/util/AlgorithmDecomposer.h>
#include <sun/security/util/LegacyAlgorithmConstraints.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef DEFAULT_STATUS_RESP_DELAY
#undef PROPERTY_TLS_LEGACY_ALGS

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $GetLongAction = ::sun::security::action::GetLongAction;
using $CertificateMessage$CertificateEntry = ::sun::security::ssl::CertificateMessage$CertificateEntry;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLAlgorithmDecomposer = ::sun::security::ssl::SSLAlgorithmDecomposer;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $StatusResponseManager$StaplingParameters = ::sun::security::ssl::StatusResponseManager$StaplingParameters;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $AbstractAlgorithmConstraints = ::sun::security::util::AbstractAlgorithmConstraints;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;
using $LegacyAlgorithmConstraints = ::sun::security::util::LegacyAlgorithmConstraints;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ServerHandshakeContext_FieldInfo_[] = {
	{"rejectClientInitiatedRenego", "Z", nullptr, $STATIC | $FINAL, $staticField(ServerHandshakeContext, rejectClientInitiatedRenego)},
	{"legacyAlgorithmConstraints", "Ljava/security/AlgorithmConstraints;", nullptr, $STATIC | $FINAL, $staticField(ServerHandshakeContext, legacyAlgorithmConstraints)},
	{"interimAuthn", "Lsun/security/ssl/SSLPossession;", nullptr, 0, $field(ServerHandshakeContext, interimAuthn)},
	{"stapleParams", "Lsun/security/ssl/StatusResponseManager$StaplingParameters;", nullptr, 0, $field(ServerHandshakeContext, stapleParams)},
	{"currentCertEntry", "Lsun/security/ssl/CertificateMessage$CertificateEntry;", nullptr, 0, $field(ServerHandshakeContext, currentCertEntry)},
	{"DEFAULT_STATUS_RESP_DELAY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerHandshakeContext, DEFAULT_STATUS_RESP_DELAY)},
	{"statusRespTimeout", "J", nullptr, $FINAL, $field(ServerHandshakeContext, statusRespTimeout)},
	{}
};

$MethodInfo _ServerHandshakeContext_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Lsun/security/ssl/TransportContext;)V", nullptr, 0, $method(static_cast<void(ServerHandshakeContext::*)($SSLContextImpl*,$TransportContext*)>(&ServerHandshakeContext::init$)), "java.io.IOException"},
	{"kickstart", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ServerHandshakeContext_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.ServerHandshakeContext",
	"sun.security.ssl.HandshakeContext",
	nullptr,
	_ServerHandshakeContext_FieldInfo_,
	_ServerHandshakeContext_MethodInfo_
};

$Object* allocate$ServerHandshakeContext($Class* clazz) {
	return $of($alloc(ServerHandshakeContext));
}

bool ServerHandshakeContext::rejectClientInitiatedRenego = false;
$AlgorithmConstraints* ServerHandshakeContext::legacyAlgorithmConstraints = nullptr;

void ServerHandshakeContext::init$($SSLContextImpl* sslContext, $TransportContext* conContext) {
	$beforeCallerSensitive();
	$HandshakeContext::init$(sslContext, conContext);
	int64_t respTimeOut = $nc(($cast($Long, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetLongAction, "jdk.tls.stapling.responseTimeout"_s, ServerHandshakeContext::DEFAULT_STATUS_RESP_DELAY)))))))->longValue();
	this->statusRespTimeout = respTimeOut >= 0 ? respTimeOut : ServerHandshakeContext::DEFAULT_STATUS_RESP_DELAY;
	$init($SSLHandshake);
	$nc(this->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
}

void ServerHandshakeContext::kickstart() {
	if (!$nc(this->conContext)->isNegotiated || this->kickstartMessageDelivered) {
		return;
	}
	$SSLHandshake::kickstart(this);
	this->kickstartMessageDelivered = true;
}

void clinit$ServerHandshakeContext($Class* class$) {
	ServerHandshakeContext::rejectClientInitiatedRenego = $Utilities::getBooleanProperty("jdk.tls.rejectClientInitiatedRenegotiation"_s, false);
	$init($LegacyAlgorithmConstraints);
	$assignStatic(ServerHandshakeContext::legacyAlgorithmConstraints, $new($LegacyAlgorithmConstraints, $LegacyAlgorithmConstraints::PROPERTY_TLS_LEGACY_ALGS, $$new($SSLAlgorithmDecomposer)));
}

ServerHandshakeContext::ServerHandshakeContext() {
}

$Class* ServerHandshakeContext::load$($String* name, bool initialize) {
	$loadClass(ServerHandshakeContext, name, initialize, &_ServerHandshakeContext_ClassInfo_, clinit$ServerHandshakeContext, allocate$ServerHandshakeContext);
	return class$;
}

$Class* ServerHandshakeContext::class$ = nullptr;

		} // ssl
	} // security
} // sun