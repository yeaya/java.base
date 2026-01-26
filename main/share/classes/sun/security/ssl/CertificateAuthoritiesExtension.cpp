#include <sun/security/ssl/CertificateAuthoritiesExtension.h>

#include <sun/security/ssl/CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer = ::sun::security::ssl::CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer;
using $CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer = ::sun::security::ssl::CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer;
using $CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer = ::sun::security::ssl::CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer;
using $CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer = ::sun::security::ssl::CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateAuthoritiesExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateAuthoritiesExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateAuthoritiesExtension, chOnLoadConsumer)},
	{"crNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertificateAuthoritiesExtension, crNetworkProducer)},
	{"crOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertificateAuthoritiesExtension, crOnLoadConsumer)},
	{"ssStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(CertificateAuthoritiesExtension, ssStringizer)},
	{}
};

$MethodInfo _CertificateAuthoritiesExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CertificateAuthoritiesExtension, init$, void)},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer", "sun.security.ssl.CertificateAuthoritiesExtension", "CRCertificateAuthoritiesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer", "sun.security.ssl.CertificateAuthoritiesExtension", "CRCertificateAuthoritiesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer", "sun.security.ssl.CertificateAuthoritiesExtension", "CHCertificateAuthoritiesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer", "sun.security.ssl.CertificateAuthoritiesExtension", "CHCertificateAuthoritiesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer", "sun.security.ssl.CertificateAuthoritiesExtension", "CertificateAuthoritiesStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesSpec", "sun.security.ssl.CertificateAuthoritiesExtension", "CertificateAuthoritiesSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension",
	"java.lang.Object",
	nullptr,
	_CertificateAuthoritiesExtension_FieldInfo_,
	_CertificateAuthoritiesExtension_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer,sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer,sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer,sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer,sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer,sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesSpec"
};

$Object* allocate$CertificateAuthoritiesExtension($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension));
}

$HandshakeProducer* CertificateAuthoritiesExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertificateAuthoritiesExtension::chOnLoadConsumer = nullptr;
$HandshakeProducer* CertificateAuthoritiesExtension::crNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertificateAuthoritiesExtension::crOnLoadConsumer = nullptr;
$SSLStringizer* CertificateAuthoritiesExtension::ssStringizer = nullptr;

void CertificateAuthoritiesExtension::init$() {
}

void clinit$CertificateAuthoritiesExtension($Class* class$) {
	$assignStatic(CertificateAuthoritiesExtension::chNetworkProducer, $new($CertificateAuthoritiesExtension$CHCertificateAuthoritiesProducer));
	$assignStatic(CertificateAuthoritiesExtension::chOnLoadConsumer, $new($CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer));
	$assignStatic(CertificateAuthoritiesExtension::crNetworkProducer, $new($CertificateAuthoritiesExtension$CRCertificateAuthoritiesProducer));
	$assignStatic(CertificateAuthoritiesExtension::crOnLoadConsumer, $new($CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer));
	$assignStatic(CertificateAuthoritiesExtension::ssStringizer, $new($CertificateAuthoritiesExtension$CertificateAuthoritiesStringizer));
}

CertificateAuthoritiesExtension::CertificateAuthoritiesExtension() {
}

$Class* CertificateAuthoritiesExtension::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension, name, initialize, &_CertificateAuthoritiesExtension_ClassInfo_, clinit$CertificateAuthoritiesExtension, allocate$CertificateAuthoritiesExtension);
	return class$;
}

$Class* CertificateAuthoritiesExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun