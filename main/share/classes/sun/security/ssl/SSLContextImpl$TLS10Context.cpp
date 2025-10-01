#include <sun/security/ssl/SSLContextImpl$TLS10Context.h>

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

$FieldInfo _SSLContextImpl$TLS10Context_FieldInfo_[] = {
	{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS10Context, clientDefaultProtocols)},
	{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$TLS10Context, clientDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$TLS10Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$TLS10Context::*)()>(&SSLContextImpl$TLS10Context::init$))},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{}
};

$InnerClassInfo _SSLContextImpl$TLS10Context_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$TLS10Context", "sun.security.ssl.SSLContextImpl", "TLS10Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$TLS10Context_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$TLS10Context",
	"sun.security.ssl.SSLContextImpl$AbstractTLSContext",
	nullptr,
	_SSLContextImpl$TLS10Context_FieldInfo_,
	_SSLContextImpl$TLS10Context_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$TLS10Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$TLS10Context($Class* clazz) {
	return $of($alloc(SSLContextImpl$TLS10Context));
}

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

void clinit$SSLContextImpl$TLS10Context($Class* class$) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$TLS10Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {$ProtocolVersion::TLS10})));
		$assignStatic(SSLContextImpl$TLS10Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$TLS10Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$TLS10Context::SSLContextImpl$TLS10Context() {
}

$Class* SSLContextImpl$TLS10Context::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$TLS10Context, name, initialize, &_SSLContextImpl$TLS10Context_ClassInfo_, clinit$SSLContextImpl$TLS10Context, allocate$SSLContextImpl$TLS10Context);
	return class$;
}

$Class* SSLContextImpl$TLS10Context::class$ = nullptr;

		} // ssl
	} // security
} // sun