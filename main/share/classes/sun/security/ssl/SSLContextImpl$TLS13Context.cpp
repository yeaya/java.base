#include <sun/security/ssl/SSLContextImpl$TLS13Context.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef TLS10
#undef TLS11
#undef TLS12
#undef TLS13

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

$List* SSLContextImpl$TLS13Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$TLS13Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$TLS13Context::init$() {
	$SSLContextImpl$AbstractTLSContext::init$();
}

$List* SSLContextImpl$TLS13Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$TLS13Context::clientDefaultProtocols;
}

$List* SSLContextImpl$TLS13Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$TLS13Context::clientDefaultCipherSuites;
}

void SSLContextImpl$TLS13Context::clinit$($Class* clazz) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$TLS13Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::TLS13,
			$ProtocolVersion::TLS12,
			$ProtocolVersion::TLS11,
			$ProtocolVersion::TLS10
		})));
		$assignStatic(SSLContextImpl$TLS13Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$TLS13Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$TLS13Context::SSLContextImpl$TLS13Context() {
}

$Class* SSLContextImpl$TLS13Context::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS13Context, clientDefaultProtocols)},
		{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS13Context, clientDefaultCipherSuites)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$TLS13Context, init$, void)},
		{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$TLS13Context, getClientDefaultCipherSuites, $List*)},
		{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$TLS13Context, getClientDefaultProtocolVersions, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$TLS13Context", "sun.security.ssl.SSLContextImpl", "TLS13Context", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$TLS13Context",
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
	$loadClass(SSLContextImpl$TLS13Context, name, initialize, &classInfo$$, SSLContextImpl$TLS13Context::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$TLS13Context);
	});
	return class$;
}

$Class* SSLContextImpl$TLS13Context::class$ = nullptr;

		} // ssl
	} // security
} // sun