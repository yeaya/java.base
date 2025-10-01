#include <sun/security/ssl/SSLContextImpl$DTLS10Context.h>

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

$FieldInfo _SSLContextImpl$DTLS10Context_FieldInfo_[] = {
	{"clientDefaultProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS10Context, clientDefaultProtocols)},
	{"clientDefaultCipherSuites", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl$DTLS10Context, clientDefaultCipherSuites)},
	{}
};

$MethodInfo _SSLContextImpl$DTLS10Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$DTLS10Context::*)()>(&SSLContextImpl$DTLS10Context::init$))},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{}
};

$InnerClassInfo _SSLContextImpl$DTLS10Context_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$DTLS10Context", "sun.security.ssl.SSLContextImpl", "DTLS10Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractDTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractDTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl$DTLS10Context_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$DTLS10Context",
	"sun.security.ssl.SSLContextImpl$AbstractDTLSContext",
	nullptr,
	_SSLContextImpl$DTLS10Context_FieldInfo_,
	_SSLContextImpl$DTLS10Context_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$DTLS10Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$DTLS10Context($Class* clazz) {
	return $of($alloc(SSLContextImpl$DTLS10Context));
}

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

void clinit$SSLContextImpl$DTLS10Context($Class* class$) {
	{
		$init($ProtocolVersion);
		$assignStatic(SSLContextImpl$DTLS10Context::clientDefaultProtocols, $SSLContextImpl::getAvailableProtocols($$new($ProtocolVersionArray, {$ProtocolVersion::DTLS10})));
		$assignStatic(SSLContextImpl$DTLS10Context::clientDefaultCipherSuites, $SSLContextImpl::getApplicableEnabledCipherSuites(SSLContextImpl$DTLS10Context::clientDefaultProtocols, true));
	}
}

SSLContextImpl$DTLS10Context::SSLContextImpl$DTLS10Context() {
}

$Class* SSLContextImpl$DTLS10Context::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$DTLS10Context, name, initialize, &_SSLContextImpl$DTLS10Context_ClassInfo_, clinit$SSLContextImpl$DTLS10Context, allocate$SSLContextImpl$DTLS10Context);
	return class$;
}

$Class* SSLContextImpl$DTLS10Context::class$ = nullptr;

		} // ssl
	} // security
} // sun