#include <sun/security/ssl/SSLContextImpl$DTLS10Context.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractDTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef DTLS10

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

$List* SSLContextImpl$DTLS10Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$DTLS10Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$DTLS10Context::init$() {
	$SSLContextImpl$AbstractDTLSContext::init$();
}

$List* SSLContextImpl$DTLS10Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$DTLS10Context::clientDefaultProtocols;
}

$List* SSLContextImpl$DTLS10Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$DTLS10Context::clientDefaultCipherSuites;
}

void SSLContextImpl$DTLS10Context::clinit$($Class* clazz) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$DTLS10Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {$ProtocolVersion::DTLS10})));
		$assignStatic(SSLContextImpl$DTLS10Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$DTLS10Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$DTLS10Context::SSLContextImpl$DTLS10Context() {
}

$Class* SSLContextImpl$DTLS10Context::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS10Context, clientDefaultProtocols)},
		{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS10Context, clientDefaultCipherSuites)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$DTLS10Context, init$, void)},
		{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$DTLS10Context, getClientDefaultCipherSuites, $List*)},
		{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$DTLS10Context, getClientDefaultProtocolVersions, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLContextImpl$DTLS10Context", "sun.security.ssl.SSLContextImpl", "DTLS10Context", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.ssl.SSLContextImpl$AbstractDTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractDTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLContextImpl$DTLS10Context",
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
	$loadClass(SSLContextImpl$DTLS10Context, name, initialize, &classInfo$$, SSLContextImpl$DTLS10Context::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLContextImpl$DTLS10Context);
	});
	return class$;
}

$Class* SSLContextImpl$DTLS10Context::class$ = nullptr;

		} // ssl
	} // security
} // sun