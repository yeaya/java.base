#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>

#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLEngine.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLEngineImpl.h>
#include <jcpp.h>

#undef SSL30
#undef TLS10
#undef TLS11
#undef TLS12
#undef TLS13

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLEngineImpl = ::sun::security::ssl::SSLEngineImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLContextImpl$AbstractTLSContext_FieldInfo_[] = {
	{"supportedProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractTLSContext, supportedProtocols)},
	{"serverDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractTLSContext, serverDefaultProtocols)},
	{"supportedCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractTLSContext, supportedCipherSuites)},
	{"serverDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractTLSContext, serverDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$AbstractTLSContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLContextImpl$AbstractTLSContext::*)()>(&SSLContextImpl$AbstractTLSContext::init$))},
	{"createSSLEngineImpl", "()Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"createSSLEngineImpl", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"getServerDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getServerDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{"getSupportedCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getSupportedProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{"isDTLS", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _SSLContextImpl$AbstractTLSContext_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$AbstractTLSContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
	"sun.security.ssl.SSLContextImpl",
	nullptr,
	_SSLContextImpl$AbstractTLSContext_FieldInfo_,
	_SSLContextImpl$AbstractTLSContext_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$AbstractTLSContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$AbstractTLSContext($Class* clazz) {
	return $of($alloc(SSLContextImpl$AbstractTLSContext));
}

$List* SSLContextImpl$AbstractTLSContext::supportedProtocols = nullptr;
$List* SSLContextImpl$AbstractTLSContext::serverDefaultProtocols = nullptr;
$List* SSLContextImpl$AbstractTLSContext::supportedCipherSuites = nullptr;
$List* SSLContextImpl$AbstractTLSContext::serverDefaultCipherSuites = nullptr;

void SSLContextImpl$AbstractTLSContext::init$() {
	$SSLContextImpl::init$();
}

$List* SSLContextImpl$AbstractTLSContext::getSupportedProtocolVersions() {
	return SSLContextImpl$AbstractTLSContext::supportedProtocols;
}

$List* SSLContextImpl$AbstractTLSContext::getSupportedCipherSuites() {
	return SSLContextImpl$AbstractTLSContext::supportedCipherSuites;
}

$List* SSLContextImpl$AbstractTLSContext::getServerDefaultProtocolVersions() {
	return SSLContextImpl$AbstractTLSContext::serverDefaultProtocols;
}

$List* SSLContextImpl$AbstractTLSContext::getServerDefaultCipherSuites() {
	return SSLContextImpl$AbstractTLSContext::serverDefaultCipherSuites;
}

$SSLEngine* SSLContextImpl$AbstractTLSContext::createSSLEngineImpl() {
	return $new($SSLEngineImpl, this);
}

$SSLEngine* SSLContextImpl$AbstractTLSContext::createSSLEngineImpl($String* host, int32_t port) {
	return $new($SSLEngineImpl, this, host, port);
}

bool SSLContextImpl$AbstractTLSContext::isDTLS() {
	return false;
}

void clinit$SSLContextImpl$AbstractTLSContext($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$AbstractTLSContext::supportedProtocols, $Arrays::asList($$new($ProtocolVersionArray, {
			$ProtocolVersion::TLS13,
			$ProtocolVersion::TLS12,
			$ProtocolVersion::TLS11,
			$ProtocolVersion::TLS10,
			$ProtocolVersion::SSL30,
			$ProtocolVersion::SSL20Hello
		})));
		$assignStatic(SSLContextImpl$AbstractTLSContext::serverDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::TLS13,
			$ProtocolVersion::TLS12,
			$ProtocolVersion::TLS11,
			$ProtocolVersion::TLS10
		})));
		$assignStatic(SSLContextImpl$AbstractTLSContext::supportedCipherSuites, $SSLContextImpl::getApplicableSupportedCipherSuites(SSLContextImpl$AbstractTLSContext::supportedProtocols));
		$assignStatic(SSLContextImpl$AbstractTLSContext::serverDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$AbstractTLSContext::serverDefaultProtocols, false));
	}
}

SSLContextImpl$AbstractTLSContext::SSLContextImpl$AbstractTLSContext() {
}

$Class* SSLContextImpl$AbstractTLSContext::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$AbstractTLSContext, name, initialize, &_SSLContextImpl$AbstractTLSContext_ClassInfo_, clinit$SSLContextImpl$AbstractTLSContext, allocate$SSLContextImpl$AbstractTLSContext);
	return class$;
}

$Class* SSLContextImpl$AbstractTLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun