#include <sun/security/ssl/SignatureAlgorithmsExtension.h>

#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesConsumer.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesProducer.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesUpdate.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesAbsence.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesConsumer.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesProducer.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesUpdate.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SignatureAlgorithmsExtension$CHSignatureSchemesConsumer = ::sun::security::ssl::SignatureAlgorithmsExtension$CHSignatureSchemesConsumer;
using $SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence = ::sun::security::ssl::SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence;
using $SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence = ::sun::security::ssl::SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence;
using $SignatureAlgorithmsExtension$CHSignatureSchemesProducer = ::sun::security::ssl::SignatureAlgorithmsExtension$CHSignatureSchemesProducer;
using $SignatureAlgorithmsExtension$CHSignatureSchemesUpdate = ::sun::security::ssl::SignatureAlgorithmsExtension$CHSignatureSchemesUpdate;
using $SignatureAlgorithmsExtension$CRSignatureSchemesAbsence = ::sun::security::ssl::SignatureAlgorithmsExtension$CRSignatureSchemesAbsence;
using $SignatureAlgorithmsExtension$CRSignatureSchemesConsumer = ::sun::security::ssl::SignatureAlgorithmsExtension$CRSignatureSchemesConsumer;
using $SignatureAlgorithmsExtension$CRSignatureSchemesProducer = ::sun::security::ssl::SignatureAlgorithmsExtension$CRSignatureSchemesProducer;
using $SignatureAlgorithmsExtension$CRSignatureSchemesUpdate = ::sun::security::ssl::SignatureAlgorithmsExtension$CRSignatureSchemesUpdate;
using $SignatureAlgorithmsExtension$SignatureSchemesStringizer = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SignatureAlgorithmsExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, chOnLoadConsumer)},
	{"chOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, chOnLoadAbsence)},
	{"chOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, chOnTradeConsumer)},
	{"chOnTradeAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, chOnTradeAbsence)},
	{"crNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, crNetworkProducer)},
	{"crOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, crOnLoadConsumer)},
	{"crOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, crOnLoadAbsence)},
	{"crOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, crOnTradeConsumer)},
	{"ssStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SignatureAlgorithmsExtension, ssStringizer)},
	{}
};

$MethodInfo _SignatureAlgorithmsExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SignatureAlgorithmsExtension, init$, void)},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesProducer", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesUpdate", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesConsumer", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesProducer", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer", "sun.security.ssl.SignatureAlgorithmsExtension", "SignatureSchemesStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesSpec", "sun.security.ssl.SignatureAlgorithmsExtension", "SignatureSchemesSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension",
	"java.lang.Object",
	nullptr,
	_SignatureAlgorithmsExtension_FieldInfo_,
	_SignatureAlgorithmsExtension_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesAbsence,sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate,sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer,sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesProducer,sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence,sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence,sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesUpdate,sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesConsumer,sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesProducer,sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesStringizer,sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesSpec"
};

$Object* allocate$SignatureAlgorithmsExtension($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension));
}

$HandshakeProducer* SignatureAlgorithmsExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SignatureAlgorithmsExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* SignatureAlgorithmsExtension::chOnLoadAbsence = nullptr;
$HandshakeConsumer* SignatureAlgorithmsExtension::chOnTradeConsumer = nullptr;
$HandshakeAbsence* SignatureAlgorithmsExtension::chOnTradeAbsence = nullptr;
$HandshakeProducer* SignatureAlgorithmsExtension::crNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SignatureAlgorithmsExtension::crOnLoadConsumer = nullptr;
$HandshakeAbsence* SignatureAlgorithmsExtension::crOnLoadAbsence = nullptr;
$HandshakeConsumer* SignatureAlgorithmsExtension::crOnTradeConsumer = nullptr;
$SSLStringizer* SignatureAlgorithmsExtension::ssStringizer = nullptr;

void SignatureAlgorithmsExtension::init$() {
}

void clinit$SignatureAlgorithmsExtension($Class* class$) {
	$assignStatic(SignatureAlgorithmsExtension::chNetworkProducer, $new($SignatureAlgorithmsExtension$CHSignatureSchemesProducer));
	$assignStatic(SignatureAlgorithmsExtension::chOnLoadConsumer, $new($SignatureAlgorithmsExtension$CHSignatureSchemesConsumer));
	$assignStatic(SignatureAlgorithmsExtension::chOnLoadAbsence, $new($SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence));
	$assignStatic(SignatureAlgorithmsExtension::chOnTradeConsumer, $new($SignatureAlgorithmsExtension$CHSignatureSchemesUpdate));
	$assignStatic(SignatureAlgorithmsExtension::chOnTradeAbsence, $new($SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence));
	$assignStatic(SignatureAlgorithmsExtension::crNetworkProducer, $new($SignatureAlgorithmsExtension$CRSignatureSchemesProducer));
	$assignStatic(SignatureAlgorithmsExtension::crOnLoadConsumer, $new($SignatureAlgorithmsExtension$CRSignatureSchemesConsumer));
	$assignStatic(SignatureAlgorithmsExtension::crOnLoadAbsence, $new($SignatureAlgorithmsExtension$CRSignatureSchemesAbsence));
	$assignStatic(SignatureAlgorithmsExtension::crOnTradeConsumer, $new($SignatureAlgorithmsExtension$CRSignatureSchemesUpdate));
	$assignStatic(SignatureAlgorithmsExtension::ssStringizer, $new($SignatureAlgorithmsExtension$SignatureSchemesStringizer));
}

SignatureAlgorithmsExtension::SignatureAlgorithmsExtension() {
}

$Class* SignatureAlgorithmsExtension::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension, name, initialize, &_SignatureAlgorithmsExtension_ClassInfo_, clinit$SignatureAlgorithmsExtension, allocate$SignatureAlgorithmsExtension);
	return class$;
}

$Class* SignatureAlgorithmsExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun