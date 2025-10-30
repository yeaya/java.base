#include <sun/security/ssl/ECPointFormatsExtension.h>

#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsConsumer.h>
#include <sun/security/ssl/ECPointFormatsExtension$CHECPointFormatsProducer.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsStringizer.h>
#include <sun/security/ssl/ECPointFormatsExtension$SHECPointFormatsConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ECPointFormatsExtension$CHECPointFormatsConsumer = ::sun::security::ssl::ECPointFormatsExtension$CHECPointFormatsConsumer;
using $ECPointFormatsExtension$CHECPointFormatsProducer = ::sun::security::ssl::ECPointFormatsExtension$CHECPointFormatsProducer;
using $ECPointFormatsExtension$ECPointFormatsStringizer = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsStringizer;
using $ECPointFormatsExtension$SHECPointFormatsConsumer = ::sun::security::ssl::ECPointFormatsExtension$SHECPointFormatsConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECPointFormatsExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension, chOnLoadConsumer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension, shOnLoadConsumer)},
	{"epfStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension, epfStringizer)},
	{}
};

$MethodInfo _ECPointFormatsExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ECPointFormatsExtension::*)()>(&ECPointFormatsExtension::init$))},
	{}
};

$InnerClassInfo _ECPointFormatsExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "SHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer", "sun.security.ssl.ECPointFormatsExtension", "CHECPointFormatsProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormat", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormat", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsSpec", $STATIC},
	{}
};

$ClassInfo _ECPointFormatsExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension",
	"java.lang.Object",
	nullptr,
	_ECPointFormatsExtension_FieldInfo_,
	_ECPointFormatsExtension_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension$SHECPointFormatsConsumer,sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsConsumer,sun.security.ssl.ECPointFormatsExtension$CHECPointFormatsProducer,sun.security.ssl.ECPointFormatsExtension$ECPointFormat,sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer,sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec"
};

$Object* allocate$ECPointFormatsExtension($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension));
}

$HandshakeProducer* ECPointFormatsExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ECPointFormatsExtension::chOnLoadConsumer = nullptr;
$SSLExtension$ExtensionConsumer* ECPointFormatsExtension::shOnLoadConsumer = nullptr;
$SSLStringizer* ECPointFormatsExtension::epfStringizer = nullptr;

void ECPointFormatsExtension::init$() {
}

void clinit$ECPointFormatsExtension($Class* class$) {
	$assignStatic(ECPointFormatsExtension::chNetworkProducer, $new($ECPointFormatsExtension$CHECPointFormatsProducer));
	$assignStatic(ECPointFormatsExtension::chOnLoadConsumer, $new($ECPointFormatsExtension$CHECPointFormatsConsumer));
	$assignStatic(ECPointFormatsExtension::shOnLoadConsumer, $new($ECPointFormatsExtension$SHECPointFormatsConsumer));
	$assignStatic(ECPointFormatsExtension::epfStringizer, $new($ECPointFormatsExtension$ECPointFormatsStringizer));
}

ECPointFormatsExtension::ECPointFormatsExtension() {
}

$Class* ECPointFormatsExtension::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension, name, initialize, &_ECPointFormatsExtension_ClassInfo_, clinit$ECPointFormatsExtension, allocate$ECPointFormatsExtension);
	return class$;
}

$Class* ECPointFormatsExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun