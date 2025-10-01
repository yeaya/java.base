#include <sun/security/ssl/ServerNameExtension.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNameConsumer.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNameProducer.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesStringizer.h>
#include <sun/security/ssl/ServerNameExtension$EEServerNameConsumer.h>
#include <sun/security/ssl/ServerNameExtension$EEServerNameProducer.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNameConsumer.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNameProducer.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesStringizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $ServerNameExtension$CHServerNameConsumer = ::sun::security::ssl::ServerNameExtension$CHServerNameConsumer;
using $ServerNameExtension$CHServerNameProducer = ::sun::security::ssl::ServerNameExtension$CHServerNameProducer;
using $ServerNameExtension$CHServerNamesStringizer = ::sun::security::ssl::ServerNameExtension$CHServerNamesStringizer;
using $ServerNameExtension$EEServerNameConsumer = ::sun::security::ssl::ServerNameExtension$EEServerNameConsumer;
using $ServerNameExtension$EEServerNameProducer = ::sun::security::ssl::ServerNameExtension$EEServerNameProducer;
using $ServerNameExtension$SHServerNameConsumer = ::sun::security::ssl::ServerNameExtension$SHServerNameConsumer;
using $ServerNameExtension$SHServerNameProducer = ::sun::security::ssl::ServerNameExtension$SHServerNameProducer;
using $ServerNameExtension$SHServerNamesStringizer = ::sun::security::ssl::ServerNameExtension$SHServerNamesStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ServerNameExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, chOnLoadConsumer)},
	{"chStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, chStringizer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, shOnLoadConsumer)},
	{"shStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, shStringizer)},
	{"eeNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, eeNetworkProducer)},
	{"eeOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerNameExtension, eeOnLoadConsumer)},
	{}
};

$MethodInfo _ServerNameExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServerNameExtension::*)()>(&ServerNameExtension::init$))},
	{}
};

$InnerClassInfo _ServerNameExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$EEServerNameConsumer", "sun.security.ssl.ServerNameExtension", "EEServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$EEServerNameProducer", "sun.security.ssl.ServerNameExtension", "EEServerNameProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$SHServerNameConsumer", "sun.security.ssl.ServerNameExtension", "SHServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$SHServerNameProducer", "sun.security.ssl.ServerNameExtension", "SHServerNameProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$SHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "SHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$SHServerNamesSpec", "sun.security.ssl.ServerNameExtension", "SHServerNamesSpec", $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$CHServerNameConsumer", "sun.security.ssl.ServerNameExtension", "CHServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$CHServerNameProducer", "sun.security.ssl.ServerNameExtension", "CHServerNameProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$CHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "CHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "sun.security.ssl.ServerNameExtension", "CHServerNamesSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerNameExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension",
	"java.lang.Object",
	nullptr,
	_ServerNameExtension_FieldInfo_,
	_ServerNameExtension_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension$EEServerNameConsumer,sun.security.ssl.ServerNameExtension$EEServerNameProducer,sun.security.ssl.ServerNameExtension$SHServerNameConsumer,sun.security.ssl.ServerNameExtension$SHServerNameProducer,sun.security.ssl.ServerNameExtension$SHServerNamesStringizer,sun.security.ssl.ServerNameExtension$SHServerNamesSpec,sun.security.ssl.ServerNameExtension$CHServerNameConsumer,sun.security.ssl.ServerNameExtension$CHServerNameProducer,sun.security.ssl.ServerNameExtension$CHServerNamesStringizer,sun.security.ssl.ServerNameExtension$CHServerNamesSpec,sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName"
};

$Object* allocate$ServerNameExtension($Class* clazz) {
	return $of($alloc(ServerNameExtension));
}

$HandshakeProducer* ServerNameExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ServerNameExtension::chOnLoadConsumer = nullptr;
$SSLStringizer* ServerNameExtension::chStringizer = nullptr;
$HandshakeProducer* ServerNameExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ServerNameExtension::shOnLoadConsumer = nullptr;
$SSLStringizer* ServerNameExtension::shStringizer = nullptr;
$HandshakeProducer* ServerNameExtension::eeNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* ServerNameExtension::eeOnLoadConsumer = nullptr;

void ServerNameExtension::init$() {
}

void clinit$ServerNameExtension($Class* class$) {
	$assignStatic(ServerNameExtension::chNetworkProducer, $new($ServerNameExtension$CHServerNameProducer));
	$assignStatic(ServerNameExtension::chOnLoadConsumer, $new($ServerNameExtension$CHServerNameConsumer));
	$assignStatic(ServerNameExtension::chStringizer, $new($ServerNameExtension$CHServerNamesStringizer));
	$assignStatic(ServerNameExtension::shNetworkProducer, $new($ServerNameExtension$SHServerNameProducer));
	$assignStatic(ServerNameExtension::shOnLoadConsumer, $new($ServerNameExtension$SHServerNameConsumer));
	$assignStatic(ServerNameExtension::shStringizer, $new($ServerNameExtension$SHServerNamesStringizer));
	$assignStatic(ServerNameExtension::eeNetworkProducer, $new($ServerNameExtension$EEServerNameProducer));
	$assignStatic(ServerNameExtension::eeOnLoadConsumer, $new($ServerNameExtension$EEServerNameConsumer));
}

ServerNameExtension::ServerNameExtension() {
}

$Class* ServerNameExtension::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension, name, initialize, &_ServerNameExtension_ClassInfo_, clinit$ServerNameExtension, allocate$ServerNameExtension);
	return class$;
}

$Class* ServerNameExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun