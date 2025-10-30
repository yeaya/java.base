#include <sun/security/ssl/CertSignAlgsExtension.h>

#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesConsumer.h>
#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesProducer.h>
#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesUpdate.h>
#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesConsumer.h>
#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesProducer.h>
#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesUpdate.h>
#include <sun/security/ssl/CertSignAlgsExtension$CertSignatureSchemesStringizer.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertSignAlgsExtension$CHCertSignatureSchemesConsumer = ::sun::security::ssl::CertSignAlgsExtension$CHCertSignatureSchemesConsumer;
using $CertSignAlgsExtension$CHCertSignatureSchemesProducer = ::sun::security::ssl::CertSignAlgsExtension$CHCertSignatureSchemesProducer;
using $CertSignAlgsExtension$CHCertSignatureSchemesUpdate = ::sun::security::ssl::CertSignAlgsExtension$CHCertSignatureSchemesUpdate;
using $CertSignAlgsExtension$CRCertSignatureSchemesConsumer = ::sun::security::ssl::CertSignAlgsExtension$CRCertSignatureSchemesConsumer;
using $CertSignAlgsExtension$CRCertSignatureSchemesProducer = ::sun::security::ssl::CertSignAlgsExtension$CRCertSignatureSchemesProducer;
using $CertSignAlgsExtension$CRCertSignatureSchemesUpdate = ::sun::security::ssl::CertSignAlgsExtension$CRCertSignatureSchemesUpdate;
using $CertSignAlgsExtension$CertSignatureSchemesStringizer = ::sun::security::ssl::CertSignAlgsExtension$CertSignatureSchemesStringizer;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertSignAlgsExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, chOnLoadConsumer)},
	{"chOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, chOnTradeConsumer)},
	{"crNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, crNetworkProducer)},
	{"crOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, crOnLoadConsumer)},
	{"crOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, crOnTradeConsumer)},
	{"ssStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(CertSignAlgsExtension, ssStringizer)},
	{}
};

$MethodInfo _CertSignAlgsExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertSignAlgsExtension::*)()>(&CertSignAlgsExtension::init$))},
	{}
};

$InnerClassInfo _CertSignAlgsExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesProducer", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesConsumer", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesProducer", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer", "sun.security.ssl.CertSignAlgsExtension", "CertSignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertSignAlgsExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension",
	"java.lang.Object",
	nullptr,
	_CertSignAlgsExtension_FieldInfo_,
	_CertSignAlgsExtension_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate,sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer,sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesProducer,sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate,sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesConsumer,sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesProducer,sun.security.ssl.CertSignAlgsExtension$CertSignatureSchemesStringizer"
};

$Object* allocate$CertSignAlgsExtension($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension));
}

$HandshakeProducer* CertSignAlgsExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertSignAlgsExtension::chOnLoadConsumer = nullptr;
$HandshakeConsumer* CertSignAlgsExtension::chOnTradeConsumer = nullptr;
$HandshakeProducer* CertSignAlgsExtension::crNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* CertSignAlgsExtension::crOnLoadConsumer = nullptr;
$HandshakeConsumer* CertSignAlgsExtension::crOnTradeConsumer = nullptr;
$SSLStringizer* CertSignAlgsExtension::ssStringizer = nullptr;

void CertSignAlgsExtension::init$() {
}

void clinit$CertSignAlgsExtension($Class* class$) {
	$assignStatic(CertSignAlgsExtension::chNetworkProducer, $new($CertSignAlgsExtension$CHCertSignatureSchemesProducer));
	$assignStatic(CertSignAlgsExtension::chOnLoadConsumer, $new($CertSignAlgsExtension$CHCertSignatureSchemesConsumer));
	$assignStatic(CertSignAlgsExtension::chOnTradeConsumer, $new($CertSignAlgsExtension$CHCertSignatureSchemesUpdate));
	$assignStatic(CertSignAlgsExtension::crNetworkProducer, $new($CertSignAlgsExtension$CRCertSignatureSchemesProducer));
	$assignStatic(CertSignAlgsExtension::crOnLoadConsumer, $new($CertSignAlgsExtension$CRCertSignatureSchemesConsumer));
	$assignStatic(CertSignAlgsExtension::crOnTradeConsumer, $new($CertSignAlgsExtension$CRCertSignatureSchemesUpdate));
	$assignStatic(CertSignAlgsExtension::ssStringizer, $new($CertSignAlgsExtension$CertSignatureSchemesStringizer));
}

CertSignAlgsExtension::CertSignAlgsExtension() {
}

$Class* CertSignAlgsExtension::load$($String* name, bool initialize) {
	$loadClass(CertSignAlgsExtension, name, initialize, &_CertSignAlgsExtension_ClassInfo_, clinit$CertSignAlgsExtension, allocate$CertSignAlgsExtension);
	return class$;
}

$Class* CertSignAlgsExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun