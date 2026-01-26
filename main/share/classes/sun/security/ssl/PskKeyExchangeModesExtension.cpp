#include <sun/security/ssl/PskKeyExchangeModesExtension.h>

#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesProducer.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesProducer = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesProducer;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _PskKeyExchangeModesExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(PskKeyExchangeModesExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(PskKeyExchangeModesExtension, chOnLoadConsumer)},
	{"chOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(PskKeyExchangeModesExtension, chOnLoadAbsence)},
	{"chOnTradeAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(PskKeyExchangeModesExtension, chOnTradeAbsence)},
	{"pkemStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(PskKeyExchangeModesExtension, pkemStringizer)},
	{}
};

$MethodInfo _PskKeyExchangeModesExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(PskKeyExchangeModesExtension, init$, void)},
	{}
};

$InnerClassInfo _PskKeyExchangeModesExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesProducer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesSpec", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesSpec", $STATIC | $FINAL},
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeMode", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PskKeyExchangeModesExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PskKeyExchangeModesExtension",
	"java.lang.Object",
	nullptr,
	_PskKeyExchangeModesExtension_FieldInfo_,
	_PskKeyExchangeModesExtension_MethodInfo_,
	nullptr,
	nullptr,
	_PskKeyExchangeModesExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesProducer,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesSpec,sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeMode"
};

$Object* allocate$PskKeyExchangeModesExtension($Class* clazz) {
	return $of($alloc(PskKeyExchangeModesExtension));
}

$HandshakeProducer* PskKeyExchangeModesExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* PskKeyExchangeModesExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* PskKeyExchangeModesExtension::chOnLoadAbsence = nullptr;
$HandshakeAbsence* PskKeyExchangeModesExtension::chOnTradeAbsence = nullptr;
$SSLStringizer* PskKeyExchangeModesExtension::pkemStringizer = nullptr;

void PskKeyExchangeModesExtension::init$() {
}

void clinit$PskKeyExchangeModesExtension($Class* class$) {
	$assignStatic(PskKeyExchangeModesExtension::chNetworkProducer, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesProducer));
	$assignStatic(PskKeyExchangeModesExtension::chOnLoadConsumer, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer));
	$assignStatic(PskKeyExchangeModesExtension::chOnLoadAbsence, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence));
	$assignStatic(PskKeyExchangeModesExtension::chOnTradeAbsence, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence));
	$assignStatic(PskKeyExchangeModesExtension::pkemStringizer, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer));
}

PskKeyExchangeModesExtension::PskKeyExchangeModesExtension() {
}

$Class* PskKeyExchangeModesExtension::load$($String* name, bool initialize) {
	$loadClass(PskKeyExchangeModesExtension, name, initialize, &_PskKeyExchangeModesExtension_ClassInfo_, clinit$PskKeyExchangeModesExtension, allocate$PskKeyExchangeModesExtension);
	return class$;
}

$Class* PskKeyExchangeModesExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun