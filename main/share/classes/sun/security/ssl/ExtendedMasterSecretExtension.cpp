#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence = ::sun::security::ssl::ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence;
using $ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer = ::sun::security::ssl::ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer;
using $ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer = ::sun::security::ssl::ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer;
using $ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence = ::sun::security::ssl::ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence;
using $ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer = ::sun::security::ssl::ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer;
using $ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer = ::sun::security::ssl::ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$HandshakeProducer* ExtendedMasterSecretExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ExtendedMasterSecretExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* ExtendedMasterSecretExtension::chOnLoadAbsence = nullptr;
$HandshakeProducer* ExtendedMasterSecretExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ExtendedMasterSecretExtension::shOnLoadConsumer = nullptr;
$HandshakeAbsence* ExtendedMasterSecretExtension::shOnLoadAbsence = nullptr;
$SSLStringizer* ExtendedMasterSecretExtension::emsStringizer = nullptr;

void ExtendedMasterSecretExtension::init$() {
}

void ExtendedMasterSecretExtension::clinit$($Class* clazz) {
	$assignStatic(ExtendedMasterSecretExtension::chNetworkProducer, $new($ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer));
	$assignStatic(ExtendedMasterSecretExtension::chOnLoadConsumer, $new($ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer));
	$assignStatic(ExtendedMasterSecretExtension::chOnLoadAbsence, $new($ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence));
	$assignStatic(ExtendedMasterSecretExtension::shNetworkProducer, $new($ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer));
	$assignStatic(ExtendedMasterSecretExtension::shOnLoadConsumer, $new($ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer));
	$assignStatic(ExtendedMasterSecretExtension::shOnLoadAbsence, $new($ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence));
	$assignStatic(ExtendedMasterSecretExtension::emsStringizer, $new($ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer));
}

ExtendedMasterSecretExtension::ExtendedMasterSecretExtension() {
}

$Class* ExtendedMasterSecretExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, chNetworkProducer)},
		{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, chOnLoadConsumer)},
		{"chOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, chOnLoadAbsence)},
		{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, shNetworkProducer)},
		{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, shOnLoadConsumer)},
		{"shOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, shOnLoadAbsence)},
		{"emsStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension, emsStringizer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ExtendedMasterSecretExtension, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretAbsence", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretAbsence", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "CHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretStringizer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretSpec", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretAbsence,sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretConsumer,sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer,sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretAbsence,sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretConsumer,sun.security.ssl.ExtendedMasterSecretExtension$CHExtendedMasterSecretProducer,sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer,sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec"
	};
	$loadClass(ExtendedMasterSecretExtension, name, initialize, &classInfo$$, ExtendedMasterSecretExtension::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun