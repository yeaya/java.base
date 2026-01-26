#include <sun/security/ssl/SSLContextImpl$TLS12Context.h>

#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef TLS10
#undef TLS11
#undef TLS12

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

$FieldInfo _SSLContextImpl$TLS12Context_FieldInfo_[] = {
	{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS12Context, clientDefaultProtocols)},
	{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS12Context, clientDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$TLS12Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SSLContextImpl$TLS12Context, init$, void)},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0, $virtualMethod(SSLContextImpl$TLS12Context, getClientDefaultCipherSuites, $List*)},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0, $virtualMethod(SSLContextImpl$TLS12Context, getClientDefaultProtocolVersions, $List*)},
	{}
};

$InnerClassInfo _SSLContextImpl$TLS12Context_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$TLS12Context", "sun.security.ssl.SSLContextImpl", "TLS12Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$TLS12Context_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$TLS12Context",
	"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
	nullptr,
	_SSLContextImpl$TLS12Context_FieldInfo_,
	_SSLContextImpl$TLS12Context_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$TLS12Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$TLS12Context($Class* clazz) {
	return $of($alloc(SSLContextImpl$TLS12Context));
}

$List* SSLContextImpl$TLS12Context::clientDefaultProtocols = nullptr;
$List* SSLContextImpl$TLS12Context::clientDefaultCipherSuites = nullptr;

void SSLContextImpl$TLS12Context::init$() {
	$SSLContextImpl$AbstractTLSContext::init$();
}

$List* SSLContextImpl$TLS12Context::getClientDefaultProtocolVersions() {
	return SSLContextImpl$TLS12Context::clientDefaultProtocols;
}

$List* SSLContextImpl$TLS12Context::getClientDefaultCipherSuites() {
	return SSLContextImpl$TLS12Context::clientDefaultCipherSuites;
}

void clinit$SSLContextImpl$TLS12Context($Class* class$) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$TLS12Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {
			$ProtocolVersion::TLS12,
			$ProtocolVersion::TLS11,
			$ProtocolVersion::TLS10
		})));
		$assignStatic(SSLContextImpl$TLS12Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$TLS12Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$TLS12Context::SSLContextImpl$TLS12Context() {
}

$Class* SSLContextImpl$TLS12Context::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$TLS12Context, name, initialize, &_SSLContextImpl$TLS12Context_ClassInfo_, clinit$SSLContextImpl$TLS12Context, allocate$SSLContextImpl$TLS12Context);
	return class$;
}

$Class* SSLContextImpl$TLS12Context::class$ = nullptr;

		} // ssl
	} // security
} // sun