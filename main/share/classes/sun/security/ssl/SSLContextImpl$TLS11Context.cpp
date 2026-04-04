#include <sun/security/ssl/SSLContextImpl$TLS11Context.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef TLS10
#undef TLS11

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLContextImpl$AbstractTLSContext = ::sun::security::ssl::SSLContextImpl$AbstractTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

$List* SSLContextImpl$TLS11Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$TLS11Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$TLS11Context::init$() {
	$SSLContextImpl$AbstractTLSContext::init$();
}

$List* SSLContextImpl$TLS11Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$TLS11Context::clientDefaultProtocols;
}

$List* SSLContextImpl$TLS11Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$TLS11Context::clientDefaultCipherSuites;
}

void SSLContextImpl$TLS11Context::clinit$($Class* clazz) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$TLS11Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::TLS11,
			$ProtocolVersion::TLS10
		})));
		$assignStatic(SSLContextImpl$TLS11Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$TLS11Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$TLS11Context::SSLContextImpl$TLS11Context() {
}

$Class* SSLContextImpl$TLS11Context::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS11Context, clientDefaultProtocols)},
		{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS11Context, clientDefaultCipherSuites)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$TLS11Context, init$, void)},
		{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$TLS11Context, getClientDefaultCipherSuites, $List*)},
		{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$TLS11Context, getClientDefaultProtocolVersions, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$TLS11Context", "sun.security.ssl.SSLContextImpl", "TLS11Context", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$TLS11Context",
		"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLContextImpl"
	};
	$loadClass(SSLContextImpl$TLS11Context, name, initialize, &classInfo$$, SSLContextImpl$TLS11Context::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$TLS11Context);
	});
	return class$;
}

$Class* SSLContextImpl$TLS11Context::class$ = nullptr;

		} // ssl
	} // security
} // sun