#include <sun/security/ssl/KeyShareExtension.h>

#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareConsumer.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareOnTradeAbsence.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareProducer.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareStringizer.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareConsumer.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareProducer.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareReproducer.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareStringizer.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareAbsence.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareConsumer.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareProducer.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareStringizer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyShareExtension$CHKeyShareConsumer = ::sun::security::ssl::KeyShareExtension$CHKeyShareConsumer;
using $KeyShareExtension$CHKeyShareOnTradeAbsence = ::sun::security::ssl::KeyShareExtension$CHKeyShareOnTradeAbsence;
using $KeyShareExtension$CHKeyShareProducer = ::sun::security::ssl::KeyShareExtension$CHKeyShareProducer;
using $KeyShareExtension$CHKeyShareStringizer = ::sun::security::ssl::KeyShareExtension$CHKeyShareStringizer;
using $KeyShareExtension$HRRKeyShareConsumer = ::sun::security::ssl::KeyShareExtension$HRRKeyShareConsumer;
using $KeyShareExtension$HRRKeyShareProducer = ::sun::security::ssl::KeyShareExtension$HRRKeyShareProducer;
using $KeyShareExtension$HRRKeyShareReproducer = ::sun::security::ssl::KeyShareExtension$HRRKeyShareReproducer;
using $KeyShareExtension$HRRKeyShareStringizer = ::sun::security::ssl::KeyShareExtension$HRRKeyShareStringizer;
using $KeyShareExtension$SHKeyShareAbsence = ::sun::security::ssl::KeyShareExtension$SHKeyShareAbsence;
using $KeyShareExtension$SHKeyShareConsumer = ::sun::security::ssl::KeyShareExtension$SHKeyShareConsumer;
using $KeyShareExtension$SHKeyShareProducer = ::sun::security::ssl::KeyShareExtension$SHKeyShareProducer;
using $KeyShareExtension$SHKeyShareStringizer = ::sun::security::ssl::KeyShareExtension$SHKeyShareStringizer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyShareExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, chOnLoadConsumer)},
	{"chOnTradAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, chOnTradAbsence)},
	{"chStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, chStringizer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, shOnLoadConsumer)},
	{"shOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, shOnLoadAbsence)},
	{"shStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, shStringizer)},
	{"hrrNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, hrrNetworkProducer)},
	{"hrrOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, hrrOnLoadConsumer)},
	{"hrrNetworkReproducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, hrrNetworkReproducer)},
	{"hrrStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(KeyShareExtension, hrrStringizer)},
	{}
};

$MethodInfo _KeyShareExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyShareExtension::*)()>(&KeyShareExtension::init$))},
	{}
};

$InnerClassInfo _KeyShareExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareConsumer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareReproducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareProducer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareSpec", "sun.security.ssl.KeyShareExtension", "HRRKeyShareSpec", $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$SHKeyShareAbsence", "sun.security.ssl.KeyShareExtension", "SHKeyShareAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$SHKeyShareConsumer", "sun.security.ssl.KeyShareExtension", "SHKeyShareConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$SHKeyShareProducer", "sun.security.ssl.KeyShareExtension", "SHKeyShareProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$SHKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "SHKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$SHKeyShareSpec", "sun.security.ssl.KeyShareExtension", "SHKeyShareSpec", $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence", "sun.security.ssl.KeyShareExtension", "CHKeyShareOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$CHKeyShareConsumer", "sun.security.ssl.KeyShareExtension", "CHKeyShareConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$CHKeyShareProducer", "sun.security.ssl.KeyShareExtension", "CHKeyShareProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$CHKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "CHKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$CHKeyShareSpec", "sun.security.ssl.KeyShareExtension", "CHKeyShareSpec", $STATIC | $FINAL},
	{"sun.security.ssl.KeyShareExtension$KeyShareEntry", "sun.security.ssl.KeyShareExtension", "KeyShareEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension",
	"java.lang.Object",
	nullptr,
	_KeyShareExtension_FieldInfo_,
	_KeyShareExtension_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension$HRRKeyShareConsumer,sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer,sun.security.ssl.KeyShareExtension$HRRKeyShareProducer,sun.security.ssl.KeyShareExtension$HRRKeyShareStringizer,sun.security.ssl.KeyShareExtension$HRRKeyShareSpec,sun.security.ssl.KeyShareExtension$SHKeyShareAbsence,sun.security.ssl.KeyShareExtension$SHKeyShareConsumer,sun.security.ssl.KeyShareExtension$SHKeyShareProducer,sun.security.ssl.KeyShareExtension$SHKeyShareStringizer,sun.security.ssl.KeyShareExtension$SHKeyShareSpec,sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence,sun.security.ssl.KeyShareExtension$CHKeyShareConsumer,sun.security.ssl.KeyShareExtension$CHKeyShareProducer,sun.security.ssl.KeyShareExtension$CHKeyShareStringizer,sun.security.ssl.KeyShareExtension$CHKeyShareSpec,sun.security.ssl.KeyShareExtension$KeyShareEntry"
};

$Object* allocate$KeyShareExtension($Class* clazz) {
	return $of($alloc(KeyShareExtension));
}

$HandshakeProducer* KeyShareExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* KeyShareExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* KeyShareExtension::chOnTradAbsence = nullptr;
$SSLStringizer* KeyShareExtension::chStringizer = nullptr;
$HandshakeProducer* KeyShareExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* KeyShareExtension::shOnLoadConsumer = nullptr;
$HandshakeAbsence* KeyShareExtension::shOnLoadAbsence = nullptr;
$SSLStringizer* KeyShareExtension::shStringizer = nullptr;
$HandshakeProducer* KeyShareExtension::hrrNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* KeyShareExtension::hrrOnLoadConsumer = nullptr;
$HandshakeProducer* KeyShareExtension::hrrNetworkReproducer = nullptr;
$SSLStringizer* KeyShareExtension::hrrStringizer = nullptr;

void KeyShareExtension::init$() {
}

void clinit$KeyShareExtension($Class* class$) {
	$assignStatic(KeyShareExtension::chNetworkProducer, $new($KeyShareExtension$CHKeyShareProducer));
	$assignStatic(KeyShareExtension::chOnLoadConsumer, $new($KeyShareExtension$CHKeyShareConsumer));
	$assignStatic(KeyShareExtension::chOnTradAbsence, $new($KeyShareExtension$CHKeyShareOnTradeAbsence));
	$assignStatic(KeyShareExtension::chStringizer, $new($KeyShareExtension$CHKeyShareStringizer));
	$assignStatic(KeyShareExtension::shNetworkProducer, $new($KeyShareExtension$SHKeyShareProducer));
	$assignStatic(KeyShareExtension::shOnLoadConsumer, $new($KeyShareExtension$SHKeyShareConsumer));
	$assignStatic(KeyShareExtension::shOnLoadAbsence, $new($KeyShareExtension$SHKeyShareAbsence));
	$assignStatic(KeyShareExtension::shStringizer, $new($KeyShareExtension$SHKeyShareStringizer));
	$assignStatic(KeyShareExtension::hrrNetworkProducer, $new($KeyShareExtension$HRRKeyShareProducer));
	$assignStatic(KeyShareExtension::hrrOnLoadConsumer, $new($KeyShareExtension$HRRKeyShareConsumer));
	$assignStatic(KeyShareExtension::hrrNetworkReproducer, $new($KeyShareExtension$HRRKeyShareReproducer));
	$assignStatic(KeyShareExtension::hrrStringizer, $new($KeyShareExtension$HRRKeyShareStringizer));
}

KeyShareExtension::KeyShareExtension() {
}

$Class* KeyShareExtension::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension, name, initialize, &_KeyShareExtension_ClassInfo_, clinit$KeyShareExtension, allocate$KeyShareExtension);
	return class$;
}

$Class* KeyShareExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun