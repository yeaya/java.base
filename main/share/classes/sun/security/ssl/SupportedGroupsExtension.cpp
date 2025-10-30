#include <sun/security/ssl/SupportedGroupsExtension.h>

#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/SupportedGroupsExtension$CHSupportedGroupsConsumer.h>
#include <sun/security/ssl/SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence.h>
#include <sun/security/ssl/SupportedGroupsExtension$CHSupportedGroupsProducer.h>
#include <sun/security/ssl/SupportedGroupsExtension$EESupportedGroupsConsumer.h>
#include <sun/security/ssl/SupportedGroupsExtension$EESupportedGroupsProducer.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SupportedGroupsExtension$CHSupportedGroupsConsumer = ::sun::security::ssl::SupportedGroupsExtension$CHSupportedGroupsConsumer;
using $SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence = ::sun::security::ssl::SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence;
using $SupportedGroupsExtension$CHSupportedGroupsProducer = ::sun::security::ssl::SupportedGroupsExtension$CHSupportedGroupsProducer;
using $SupportedGroupsExtension$EESupportedGroupsConsumer = ::sun::security::ssl::SupportedGroupsExtension$EESupportedGroupsConsumer;
using $SupportedGroupsExtension$EESupportedGroupsProducer = ::sun::security::ssl::SupportedGroupsExtension$EESupportedGroupsProducer;
using $SupportedGroupsExtension$SupportedGroupsStringizer = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroupsStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SupportedGroupsExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, chOnLoadConsumer)},
	{"chOnTradAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, chOnTradAbsence)},
	{"sgsStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, sgsStringizer)},
	{"eeNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, eeNetworkProducer)},
	{"eeOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension, eeOnLoadConsumer)},
	{}
};

$MethodInfo _SupportedGroupsExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SupportedGroupsExtension::*)()>(&SupportedGroupsExtension::init$))},
	{}
};

$InnerClassInfo _SupportedGroupsExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsConsumer", "sun.security.ssl.SupportedGroupsExtension", "EESupportedGroupsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsProducer", "sun.security.ssl.SupportedGroupsExtension", "EESupportedGroupsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence", "sun.security.ssl.SupportedGroupsExtension", "CHSupportedGroupsOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsConsumer", "sun.security.ssl.SupportedGroupsExtension", "CHSupportedGroupsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsProducer", "sun.security.ssl.SupportedGroupsExtension", "CHSupportedGroupsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroups", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroups", $STATIC},
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroupsStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsSpec", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroupsSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedGroupsExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedGroupsExtension",
	"java.lang.Object",
	nullptr,
	_SupportedGroupsExtension_FieldInfo_,
	_SupportedGroupsExtension_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedGroupsExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsConsumer,sun.security.ssl.SupportedGroupsExtension$EESupportedGroupsProducer,sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence,sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsConsumer,sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsProducer,sun.security.ssl.SupportedGroupsExtension$SupportedGroups,sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer,sun.security.ssl.SupportedGroupsExtension$SupportedGroupsSpec"
};

$Object* allocate$SupportedGroupsExtension($Class* clazz) {
	return $of($alloc(SupportedGroupsExtension));
}

$HandshakeProducer* SupportedGroupsExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SupportedGroupsExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* SupportedGroupsExtension::chOnTradAbsence = nullptr;
$SSLStringizer* SupportedGroupsExtension::sgsStringizer = nullptr;
$HandshakeProducer* SupportedGroupsExtension::eeNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SupportedGroupsExtension::eeOnLoadConsumer = nullptr;

void SupportedGroupsExtension::init$() {
}

void clinit$SupportedGroupsExtension($Class* class$) {
	$assignStatic(SupportedGroupsExtension::chNetworkProducer, $new($SupportedGroupsExtension$CHSupportedGroupsProducer));
	$assignStatic(SupportedGroupsExtension::chOnLoadConsumer, $new($SupportedGroupsExtension$CHSupportedGroupsConsumer));
	$assignStatic(SupportedGroupsExtension::chOnTradAbsence, $new($SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence));
	$assignStatic(SupportedGroupsExtension::sgsStringizer, $new($SupportedGroupsExtension$SupportedGroupsStringizer));
	$assignStatic(SupportedGroupsExtension::eeNetworkProducer, $new($SupportedGroupsExtension$EESupportedGroupsProducer));
	$assignStatic(SupportedGroupsExtension::eeOnLoadConsumer, $new($SupportedGroupsExtension$EESupportedGroupsConsumer));
}

SupportedGroupsExtension::SupportedGroupsExtension() {
}

$Class* SupportedGroupsExtension::load$($String* name, bool initialize) {
	$loadClass(SupportedGroupsExtension, name, initialize, &_SupportedGroupsExtension_ClassInfo_, clinit$SupportedGroupsExtension, allocate$SupportedGroupsExtension);
	return class$;
}

$Class* SupportedGroupsExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun