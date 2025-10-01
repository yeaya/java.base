#include <sun/security/ssl/SSLContextImpl$TLS13Context.h>

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
#undef TLS13
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

$FieldInfo _SSLContextImpl$TLS13Context_FieldInfo_[] = {
	{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS13Context, clientDefaultProtocols)},
	{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS13Context, clientDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$TLS13Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$TLS13Context::*)()>(&SSLContextImpl$TLS13Context::init$))},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{}
};

$InnerClassInfo _SSLContextImpl$TLS13Context_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$TLS13Context", "sun.security.ssl.SSLContextImpl", "TLS13Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$TLS13Context_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$TLS13Context",
	"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
	nullptr,
	_SSLContextImpl$TLS13Context_FieldInfo_,
	_SSLContextImpl$TLS13Context_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$TLS13Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$TLS13Context($Class* clazz) {
	return $of($alloc(SSLContextImpl$TLS13Context));
}

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

void clinit$SSLContextImpl$TLS13Context($Class* class$) {
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
	$loadClass(SSLContextImpl$TLS13Context, name, initialize, &_SSLContextImpl$TLS13Context_ClassInfo_, clinit$SSLContextImpl$TLS13Context, allocate$SSLContextImpl$TLS13Context);
	return class$;
}

$Class* SSLContextImpl$TLS13Context::class$ = nullptr;

		} // ssl
	} // security
} // sun