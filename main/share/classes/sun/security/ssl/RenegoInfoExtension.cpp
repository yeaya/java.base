#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoAbsence.h>
#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoConsumer.h>
#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoProducer.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoStringizer.h>
#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoAbsence.h>
#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoConsumer.h>
#include <sun/security/ssl/RenegoInfoExtension$SHRenegotiationInfoProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $RenegoInfoExtension$CHRenegotiationInfoAbsence = ::sun::security::ssl::RenegoInfoExtension$CHRenegotiationInfoAbsence;
using $RenegoInfoExtension$CHRenegotiationInfoConsumer = ::sun::security::ssl::RenegoInfoExtension$CHRenegotiationInfoConsumer;
using $RenegoInfoExtension$CHRenegotiationInfoProducer = ::sun::security::ssl::RenegoInfoExtension$CHRenegotiationInfoProducer;
using $RenegoInfoExtension$RenegotiationInfoStringizer = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoStringizer;
using $RenegoInfoExtension$SHRenegotiationInfoAbsence = ::sun::security::ssl::RenegoInfoExtension$SHRenegotiationInfoAbsence;
using $RenegoInfoExtension$SHRenegotiationInfoConsumer = ::sun::security::ssl::RenegoInfoExtension$SHRenegotiationInfoConsumer;
using $RenegoInfoExtension$SHRenegotiationInfoProducer = ::sun::security::ssl::RenegoInfoExtension$SHRenegotiationInfoProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$HandshakeProducer* RenegoInfoExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* RenegoInfoExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* RenegoInfoExtension::chOnLoadAbsence = nullptr;
$HandshakeProducer* RenegoInfoExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* RenegoInfoExtension::shOnLoadConsumer = nullptr;
$HandshakeAbsence* RenegoInfoExtension::shOnLoadAbsence = nullptr;
$SSLStringizer* RenegoInfoExtension::rniStringizer = nullptr;

void RenegoInfoExtension::init$() {
}

void RenegoInfoExtension::clinit$($Class* clazz) {
	$assignStatic(RenegoInfoExtension::chNetworkProducer, $new($RenegoInfoExtension$CHRenegotiationInfoProducer));
	$assignStatic(RenegoInfoExtension::chOnLoadConsumer, $new($RenegoInfoExtension$CHRenegotiationInfoConsumer));
	$assignStatic(RenegoInfoExtension::chOnLoadAbsence, $new($RenegoInfoExtension$CHRenegotiationInfoAbsence));
	$assignStatic(RenegoInfoExtension::shNetworkProducer, $new($RenegoInfoExtension$SHRenegotiationInfoProducer));
	$assignStatic(RenegoInfoExtension::shOnLoadConsumer, $new($RenegoInfoExtension$SHRenegotiationInfoConsumer));
	$assignStatic(RenegoInfoExtension::shOnLoadAbsence, $new($RenegoInfoExtension$SHRenegotiationInfoAbsence));
	$assignStatic(RenegoInfoExtension::rniStringizer, $new($RenegoInfoExtension$RenegotiationInfoStringizer));
}

RenegoInfoExtension::RenegoInfoExtension() {
}

$Class* RenegoInfoExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, chNetworkProducer)},
		{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, chOnLoadConsumer)},
		{"chOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, chOnLoadAbsence)},
		{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, shNetworkProducer)},
		{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, shOnLoadConsumer)},
		{"shOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, shOnLoadAbsence)},
		{"rniStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension, rniStringizer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RenegoInfoExtension, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoAbsence", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoConsumer", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoProducer", "sun.security.ssl.RenegoInfoExtension", "SHRenegotiationInfoProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoAbsence", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoAbsence", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoConsumer", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer", "sun.security.ssl.RenegoInfoExtension", "RenegotiationInfoStringizer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoSpec", "sun.security.ssl.RenegoInfoExtension", "RenegotiationInfoSpec", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoAbsence,sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoConsumer,sun.security.ssl.RenegoInfoExtension$SHRenegotiationInfoProducer,sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoAbsence,sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoConsumer,sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoProducer,sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer,sun.security.ssl.RenegoInfoExtension$RenegotiationInfoSpec"
	};
	$loadClass(RenegoInfoExtension, name, initialize, &classInfo$$, RenegoInfoExtension::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension);
	});
	return class$;
}

$Class* RenegoInfoExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun