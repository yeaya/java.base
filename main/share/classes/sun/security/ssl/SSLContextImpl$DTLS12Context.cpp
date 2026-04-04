#include <sun/security/ssl/SSLContextImpl$DTLS12Context.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractDTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef DTLS10
#undef DTLS12

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLContextImpl$AbstractDTLSContext = ::sun::security::ssl::SSLContextImpl$AbstractDTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

$List* SSLContextImpl$DTLS12Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$DTLS12Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$DTLS12Context::init$() {
	$SSLContextImpl$AbstractDTLSContext::init$();
}

$List* SSLContextImpl$DTLS12Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$DTLS12Context::clientDefaultProtocols;
}

$List* SSLContextImpl$DTLS12Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$DTLS12Context::clientDefaultCipherSuites;
}

void SSLContextImpl$DTLS12Context::clinit$($Class* clazz) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$DTLS12Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::DTLS12,
			$ProtocolVersion::DTLS10
		})));
		$assignStatic(SSLContextImpl$DTLS12Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$DTLS12Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$DTLS12Context::SSLContextImpl$DTLS12Context() {
}

$Class* SSLContextImpl$DTLS12Context::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS12Context, clientDefaultProtocols)},
		{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS12Context, clientDefaultCipherSuites)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$DTLS12Context, init$, void)},
		{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$DTLS12Context, getClientDefaultCipherSuites, $List*)},
		{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$DTLS12Context, getClientDefaultProtocolVersions, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DTLS12Context", "sun.security.ssl.SSLContextImpl", "DTLS12Context", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$AbstractDTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractDTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DTLS12Context",
		"sun.security.ssl.SSLContextImpl$AbstractDTLSContext",
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
	$loadClass(SSLContextImpl$DTLS12Context, name, initialize, &classInfo$$, SSLContextImpl$DTLS12Context::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DTLS12Context);
	});
	return class$;
}

$Class* SSLContextImpl$DTLS12Context::class$ = nullptr;

		} // ssl
	} // security
} // sun