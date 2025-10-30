#include <sun/security/ssl/MaxFragExtension.h>

#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/MaxFragExtension$CHMaxFragmentLengthConsumer.h>
#include <sun/security/ssl/MaxFragExtension$CHMaxFragmentLengthProducer.h>
#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthConsumer.h>
#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthProducer.h>
#include <sun/security/ssl/MaxFragExtension$EEMaxFragmentLengthUpdate.h>
#include <sun/security/ssl/MaxFragExtension$MaxFragLenStringizer.h>
#include <sun/security/ssl/MaxFragExtension$SHMaxFragmentLengthConsumer.h>
#include <sun/security/ssl/MaxFragExtension$SHMaxFragmentLengthProducer.h>
#include <sun/security/ssl/MaxFragExtension$SHMaxFragmentLengthUpdate.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $MaxFragExtension$CHMaxFragmentLengthConsumer = ::sun::security::ssl::MaxFragExtension$CHMaxFragmentLengthConsumer;
using $MaxFragExtension$CHMaxFragmentLengthProducer = ::sun::security::ssl::MaxFragExtension$CHMaxFragmentLengthProducer;
using $MaxFragExtension$EEMaxFragmentLengthConsumer = ::sun::security::ssl::MaxFragExtension$EEMaxFragmentLengthConsumer;
using $MaxFragExtension$EEMaxFragmentLengthProducer = ::sun::security::ssl::MaxFragExtension$EEMaxFragmentLengthProducer;
using $MaxFragExtension$EEMaxFragmentLengthUpdate = ::sun::security::ssl::MaxFragExtension$EEMaxFragmentLengthUpdate;
using $MaxFragExtension$MaxFragLenStringizer = ::sun::security::ssl::MaxFragExtension$MaxFragLenStringizer;
using $MaxFragExtension$SHMaxFragmentLengthConsumer = ::sun::security::ssl::MaxFragExtension$SHMaxFragmentLengthConsumer;
using $MaxFragExtension$SHMaxFragmentLengthProducer = ::sun::security::ssl::MaxFragExtension$SHMaxFragmentLengthProducer;
using $MaxFragExtension$SHMaxFragmentLengthUpdate = ::sun::security::ssl::MaxFragExtension$SHMaxFragmentLengthUpdate;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _MaxFragExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, chOnLoadConsumer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, shOnLoadConsumer)},
	{"shOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, shOnTradeConsumer)},
	{"eeNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, eeNetworkProducer)},
	{"eeOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, eeOnLoadConsumer)},
	{"eeOnTradeConsumer", "Lsun/security/ssl/HandshakeConsumer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, eeOnTradeConsumer)},
	{"maxFragLenStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(MaxFragExtension, maxFragLenStringizer)},
	{}
};

$MethodInfo _MaxFragExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MaxFragExtension::*)()>(&MaxFragExtension::init$))},
	{}
};

$InnerClassInfo _MaxFragExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "EEMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthUpdate", "sun.security.ssl.MaxFragExtension", "SHMaxFragmentLengthUpdate", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "SHMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "SHMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthConsumer", "sun.security.ssl.MaxFragExtension", "CHMaxFragmentLengthConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer", "sun.security.ssl.MaxFragExtension", "CHMaxFragmentLengthProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$MaxFragLenEnum", "sun.security.ssl.MaxFragExtension", "MaxFragLenEnum", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.MaxFragExtension$MaxFragLenStringizer", "sun.security.ssl.MaxFragExtension", "MaxFragLenStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.MaxFragExtension$MaxFragLenSpec", "sun.security.ssl.MaxFragExtension", "MaxFragLenSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _MaxFragExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension",
	"java.lang.Object",
	nullptr,
	_MaxFragExtension_FieldInfo_,
	_MaxFragExtension_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthUpdate,sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthConsumer,sun.security.ssl.MaxFragExtension$EEMaxFragmentLengthProducer,sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthUpdate,sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthConsumer,sun.security.ssl.MaxFragExtension$SHMaxFragmentLengthProducer,sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthConsumer,sun.security.ssl.MaxFragExtension$CHMaxFragmentLengthProducer,sun.security.ssl.MaxFragExtension$MaxFragLenEnum,sun.security.ssl.MaxFragExtension$MaxFragLenStringizer,sun.security.ssl.MaxFragExtension$MaxFragLenSpec"
};

$Object* allocate$MaxFragExtension($Class* clazz) {
	return $of($alloc(MaxFragExtension));
}

$HandshakeProducer* MaxFragExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* MaxFragExtension::chOnLoadConsumer = nullptr;
$HandshakeProducer* MaxFragExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* MaxFragExtension::shOnLoadConsumer = nullptr;
$HandshakeConsumer* MaxFragExtension::shOnTradeConsumer = nullptr;
$HandshakeProducer* MaxFragExtension::eeNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* MaxFragExtension::eeOnLoadConsumer = nullptr;
$HandshakeConsumer* MaxFragExtension::eeOnTradeConsumer = nullptr;
$SSLStringizer* MaxFragExtension::maxFragLenStringizer = nullptr;

void MaxFragExtension::init$() {
}

void clinit$MaxFragExtension($Class* class$) {
	$assignStatic(MaxFragExtension::chNetworkProducer, $new($MaxFragExtension$CHMaxFragmentLengthProducer));
	$assignStatic(MaxFragExtension::chOnLoadConsumer, $new($MaxFragExtension$CHMaxFragmentLengthConsumer));
	$assignStatic(MaxFragExtension::shNetworkProducer, $new($MaxFragExtension$SHMaxFragmentLengthProducer));
	$assignStatic(MaxFragExtension::shOnLoadConsumer, $new($MaxFragExtension$SHMaxFragmentLengthConsumer));
	$assignStatic(MaxFragExtension::shOnTradeConsumer, $new($MaxFragExtension$SHMaxFragmentLengthUpdate));
	$assignStatic(MaxFragExtension::eeNetworkProducer, $new($MaxFragExtension$EEMaxFragmentLengthProducer));
	$assignStatic(MaxFragExtension::eeOnLoadConsumer, $new($MaxFragExtension$EEMaxFragmentLengthConsumer));
	$assignStatic(MaxFragExtension::eeOnTradeConsumer, $new($MaxFragExtension$EEMaxFragmentLengthUpdate));
	$assignStatic(MaxFragExtension::maxFragLenStringizer, $new($MaxFragExtension$MaxFragLenStringizer));
}

MaxFragExtension::MaxFragExtension() {
}

$Class* MaxFragExtension::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension, name, initialize, &_MaxFragExtension_ClassInfo_, clinit$MaxFragExtension, allocate$MaxFragExtension);
	return class$;
}

$Class* MaxFragExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun