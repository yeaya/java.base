#include <sun/security/ssl/SSLContextImpl$TLS11Context.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLContextImpl$AbstractTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

#undef TLS11
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

$FieldInfo _SSLContextImpl$TLS11Context_FieldInfo_[] = {
	{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS11Context, clientDefaultProtocols)},
	{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS11Context, clientDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$TLS11Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$TLS11Context::*)()>(&SSLContextImpl$TLS11Context::init$))},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{}
};

$InnerClassInfo _SSLContextImpl$TLS11Context_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$TLS11Context", "sun.security.ssl.SSLContextImpl", "TLS11Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$TLS11Context_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$TLS11Context",
	"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
	nullptr,
	_SSLContextImpl$TLS11Context_FieldInfo_,
	_SSLContextImpl$TLS11Context_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$TLS11Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$TLS11Context($Class* clazz) {
	return $of($alloc(SSLContextImpl$TLS11Context));
}

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

void clinit$SSLContextImpl$TLS11Context($Class* class$) {
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
	$loadClass(SSLContextImpl$TLS11Context, name, initialize, &_SSLContextImpl$TLS11Context_ClassInfo_, clinit$SSLContextImpl$TLS11Context, allocate$SSLContextImpl$TLS11Context);
	return class$;
}

$Class* SSLContextImpl$TLS11Context::class$ = nullptr;

		} // ssl
	} // security
} // sun