#include <sun/security/ssl/SSLContextImpl$AbstractDTLSContext.h>

#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLParameters.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLEngineImpl.h>
#include <jcpp.h>

#undef DTLS10
#undef DTLS12

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLEngineImpl = ::sun::security::ssl::SSLEngineImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLContextImpl$AbstractDTLSContext_FieldInfo_[] = {
	{"supportedProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractDTLSContext, supportedProtocols)},
	{"serverDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractDTLSContext, serverDefaultProtocols)},
	{"supportedCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractDTLSContext, supportedCipherSuites)},
	{"serverDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$AbstractDTLSContext, serverDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$AbstractDTLSContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLContextImpl$AbstractDTLSContext::*)()>(&SSLContextImpl$AbstractDTLSContext::init$))},
	{"createSSLEngineImpl", "()Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"createSSLEngineImpl", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"engineGetDefaultSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PROTECTED},
	{"engineGetSupportedSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PROTECTED},
	{"getServerDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getServerDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{"getSupportedCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getSupportedProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{"isDTLS", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _SSLContextImpl$AbstractDTLSContext_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$AbstractDTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractDTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$AbstractDTLSContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLContextImpl$AbstractDTLSContext",
	"sun.security.ssl.SSLContextImpl",
	nullptr,
	_SSLContextImpl$AbstractDTLSContext_FieldInfo_,
	_SSLContextImpl$AbstractDTLSContext_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$AbstractDTLSContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$AbstractDTLSContext($Class* clazz) {
	return $of($alloc(SSLContextImpl$AbstractDTLSContext));
}

$List* SSLContextImpl$AbstractDTLSContext::supportedProtocols = nullptr;
$List* SSLContextImpl$AbstractDTLSContext::serverDefaultProtocols = nullptr;
$List* SSLContextImpl$AbstractDTLSContext::supportedCipherSuites = nullptr;
$List* SSLContextImpl$AbstractDTLSContext::serverDefaultCipherSuites = nullptr;

void SSLContextImpl$AbstractDTLSContext::init$() {
	$SSLContextImpl::init$();
}

$SSLParameters* SSLContextImpl$AbstractDTLSContext::engineGetDefaultSSLParameters() {
	$var($SSLEngine, engine, createSSLEngineImpl());
	$nc(engine)->setUseClientMode(true);
	return engine->getSSLParameters();
}

$SSLParameters* SSLContextImpl$AbstractDTLSContext::engineGetSupportedSSLParameters() {
	$useLocalCurrentObjectStackCache();
	$var($SSLEngine, engine, createSSLEngineImpl());
	$var($SSLParameters, params, $new($SSLParameters));
	params->setCipherSuites($($nc(engine)->getSupportedCipherSuites()));
	params->setProtocols($($nc(engine)->getSupportedProtocols()));
	return params;
}

$List* SSLContextImpl$AbstractDTLSContext::getSupportedProtocolVersions() {
	return SSLContextImpl$AbstractDTLSContext::supportedProtocols;
}

$List* SSLContextImpl$AbstractDTLSContext::getSupportedCipherSuites() {
	return SSLContextImpl$AbstractDTLSContext::supportedCipherSuites;
}

$List* SSLContextImpl$AbstractDTLSContext::getServerDefaultProtocolVersions() {
	return SSLContextImpl$AbstractDTLSContext::serverDefaultProtocols;
}

$List* SSLContextImpl$AbstractDTLSContext::getServerDefaultCipherSuites() {
	return SSLContextImpl$AbstractDTLSContext::serverDefaultCipherSuites;
}

$SSLEngine* SSLContextImpl$AbstractDTLSContext::createSSLEngineImpl() {
	return $new($SSLEngineImpl, this);
}

$SSLEngine* SSLContextImpl$AbstractDTLSContext::createSSLEngineImpl($String* host, int32_t port) {
	return $new($SSLEngineImpl, this, host, port);
}

bool SSLContextImpl$AbstractDTLSContext::isDTLS() {
	return true;
}

void clinit$SSLContextImpl$AbstractDTLSContext($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$AbstractDTLSContext::supportedProtocols, $Arrays::asList($$new($ProtocolVersionArray, {
			$ProtocolVersion::DTLS12,
			$ProtocolVersion::DTLS10
		})));
		$assignStatic(SSLContextImpl$AbstractDTLSContext::serverDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::DTLS12,
			$ProtocolVersion::DTLS10
		})));
		$assignStatic(SSLContextImpl$AbstractDTLSContext::supportedCipherSuites, $SSLContextImpl::getApplicableSupportedCipherSuites(SSLContextImpl$AbstractDTLSContext::supportedProtocols));
		$assignStatic(SSLContextImpl$AbstractDTLSContext::serverDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$AbstractDTLSContext::serverDefaultProtocols, false));
	}
}

SSLContextImpl$AbstractDTLSContext::SSLContextImpl$AbstractDTLSContext() {
}

$Class* SSLContextImpl$AbstractDTLSContext::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$AbstractDTLSContext, name, initialize, &_SSLContextImpl$AbstractDTLSContext_ClassInfo_, clinit$SSLContextImpl$AbstractDTLSContext, allocate$SSLContextImpl$AbstractDTLSContext);
	return class$;
}

$Class* SSLContextImpl$AbstractDTLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun