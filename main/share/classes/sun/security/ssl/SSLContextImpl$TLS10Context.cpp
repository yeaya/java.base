#include <sun/security/ssl/SSLContextImpl$TLS10Context.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef TLS10

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

$List* SSLContextImpl$TLS10Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$TLS10Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$TLS10Context::init$() {
	$SSLContextImpl$AbstractTLSContext::init$();
}

$List* SSLContextImpl$TLS10Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$TLS10Context::clientDefaultProtocols;
}

$List* SSLContextImpl$TLS10Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$TLS10Context::clientDefaultCipherSuites;
}

void SSLContextImpl$TLS10Context::clinit$($Class* clazz) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$TLS10Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {$ProtocolVersion::TLS10})));
		$assignStatic(SSLContextImpl$TLS10Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$TLS10Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$TLS10Context::SSLContextImpl$TLS10Context() {
}

$Class* SSLContextImpl$TLS10Context::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS10Context, clientDefaultProtocols)},
		{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS10Context, clientDefaultCipherSuites)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$TLS10Context, init$, void)},
		{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$TLS10Context, getClientDefaultCipherSuites, $List*)},
		{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$TLS10Context, getClientDefaultProtocolVersions, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$TLS10Context", "sun.security.ssl.SSLContextImpl", "TLS10Context", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$TLS10Context",
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
	$loadClass(SSLContextImpl$TLS10Context, name, initialize, &classInfo$$, SSLContextImpl$TLS10Context::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$TLS10Context);
	});
	return class$;
}

$Class* SSLContextImpl$TLS10Context::class$ = nullptr;

		} // ssl
	} // security
} // sun