#include <sun/security/ssl/SupportedVersionsExtension.h>

#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsConsumer.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsProducer.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsStringizer.h>
#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsConsumer.h>
#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsProducer.h>
#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsReproducer.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsConsumer.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsProducer.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SupportedVersionsExtension$CHSupportedVersionsConsumer = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsConsumer;
using $SupportedVersionsExtension$CHSupportedVersionsProducer = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsProducer;
using $SupportedVersionsExtension$CHSupportedVersionsStringizer = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsStringizer;
using $SupportedVersionsExtension$HRRSupportedVersionsConsumer = ::sun::security::ssl::SupportedVersionsExtension$HRRSupportedVersionsConsumer;
using $SupportedVersionsExtension$HRRSupportedVersionsProducer = ::sun::security::ssl::SupportedVersionsExtension$HRRSupportedVersionsProducer;
using $SupportedVersionsExtension$HRRSupportedVersionsReproducer = ::sun::security::ssl::SupportedVersionsExtension$HRRSupportedVersionsReproducer;
using $SupportedVersionsExtension$SHSupportedVersionsConsumer = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsConsumer;
using $SupportedVersionsExtension$SHSupportedVersionsProducer = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsProducer;
using $SupportedVersionsExtension$SHSupportedVersionsStringizer = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SupportedVersionsExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, chOnLoadConsumer)},
	{"chStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, chStringizer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, shOnLoadConsumer)},
	{"shStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, shStringizer)},
	{"hrrNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, hrrNetworkProducer)},
	{"hrrOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, hrrOnLoadConsumer)},
	{"hrrReproducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, hrrReproducer)},
	{"hrrStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SupportedVersionsExtension, hrrStringizer)},
	{}
};

$MethodInfo _SupportedVersionsExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SupportedVersionsExtension::*)()>(&SupportedVersionsExtension::init$))},
	{}
};

$InnerClassInfo _SupportedVersionsExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsReproducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsSpec", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsSpec", $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsStringizer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsSpec", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension",
	"java.lang.Object",
	nullptr,
	_SupportedVersionsExtension_FieldInfo_,
	_SupportedVersionsExtension_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer,sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsConsumer,sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsProducer,sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsConsumer,sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsProducer,sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer,sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsSpec,sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsConsumer,sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsProducer,sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsStringizer,sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsSpec"
};

$Object* allocate$SupportedVersionsExtension($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension));
}

$HandshakeProducer* SupportedVersionsExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SupportedVersionsExtension::chOnLoadConsumer = nullptr;
$SSLStringizer* SupportedVersionsExtension::chStringizer = nullptr;
$HandshakeProducer* SupportedVersionsExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SupportedVersionsExtension::shOnLoadConsumer = nullptr;
$SSLStringizer* SupportedVersionsExtension::shStringizer = nullptr;
$HandshakeProducer* SupportedVersionsExtension::hrrNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SupportedVersionsExtension::hrrOnLoadConsumer = nullptr;
$HandshakeProducer* SupportedVersionsExtension::hrrReproducer = nullptr;
$SSLStringizer* SupportedVersionsExtension::hrrStringizer = nullptr;

void SupportedVersionsExtension::init$() {
}

void clinit$SupportedVersionsExtension($Class* class$) {
	$assignStatic(SupportedVersionsExtension::chNetworkProducer, $new($SupportedVersionsExtension$CHSupportedVersionsProducer));
	$assignStatic(SupportedVersionsExtension::chOnLoadConsumer, $new($SupportedVersionsExtension$CHSupportedVersionsConsumer));
	$assignStatic(SupportedVersionsExtension::chStringizer, $new($SupportedVersionsExtension$CHSupportedVersionsStringizer));
	$assignStatic(SupportedVersionsExtension::shNetworkProducer, $new($SupportedVersionsExtension$SHSupportedVersionsProducer));
	$assignStatic(SupportedVersionsExtension::shOnLoadConsumer, $new($SupportedVersionsExtension$SHSupportedVersionsConsumer));
	$assignStatic(SupportedVersionsExtension::shStringizer, $new($SupportedVersionsExtension$SHSupportedVersionsStringizer));
	$assignStatic(SupportedVersionsExtension::hrrNetworkProducer, $new($SupportedVersionsExtension$HRRSupportedVersionsProducer));
	$assignStatic(SupportedVersionsExtension::hrrOnLoadConsumer, $new($SupportedVersionsExtension$HRRSupportedVersionsConsumer));
	$assignStatic(SupportedVersionsExtension::hrrReproducer, $new($SupportedVersionsExtension$HRRSupportedVersionsReproducer));
	$assignStatic(SupportedVersionsExtension::hrrStringizer, $new($SupportedVersionsExtension$SHSupportedVersionsStringizer));
}

SupportedVersionsExtension::SupportedVersionsExtension() {
}

$Class* SupportedVersionsExtension::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension, name, initialize, &_SupportedVersionsExtension_ClassInfo_, clinit$SupportedVersionsExtension, allocate$SupportedVersionsExtension);
	return class$;
}

$Class* SupportedVersionsExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun