#include <sun/security/ssl/SessionTicketExtension.h>

#include <java/lang/NumberFormatException.h>
#include <java/security/SecureRandom.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketStringizer.h>
#include <sun/security/ssl/SessionTicketExtension$T12CHSessionTicketConsumer.h>
#include <sun/security/ssl/SessionTicketExtension$T12CHSessionTicketProducer.h>
#include <sun/security/ssl/SessionTicketExtension$T12SHSessionTicketConsumer.h>
#include <sun/security/ssl/SessionTicketExtension$T12SHSessionTicketProducer.h>
#include <jcpp.h>

#undef KEYLEN
#undef MAX_TICKET_LIFETIME
#undef TIMEOUT_DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecureRandom = ::java::security::SecureRandom;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SessionTicketExtension$SessionTicketStringizer = ::sun::security::ssl::SessionTicketExtension$SessionTicketStringizer;
using $SessionTicketExtension$T12CHSessionTicketConsumer = ::sun::security::ssl::SessionTicketExtension$T12CHSessionTicketConsumer;
using $SessionTicketExtension$T12CHSessionTicketProducer = ::sun::security::ssl::SessionTicketExtension$T12CHSessionTicketProducer;
using $SessionTicketExtension$T12SHSessionTicketConsumer = ::sun::security::ssl::SessionTicketExtension$T12SHSessionTicketConsumer;
using $SessionTicketExtension$T12SHSessionTicketProducer = ::sun::security::ssl::SessionTicketExtension$T12SHSessionTicketProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SessionTicketExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SessionTicketExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SessionTicketExtension, chOnLoadConsumer)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(SessionTicketExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(SessionTicketExtension, shOnLoadConsumer)},
	{"steStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(SessionTicketExtension, steStringizer)},
	{"TIMEOUT_DEFAULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SessionTicketExtension, TIMEOUT_DEFAULT)},
	{"keyTimeout", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SessionTicketExtension, keyTimeout)},
	{"currentKeyID", "I", nullptr, $PRIVATE | $STATIC, $staticField(SessionTicketExtension, currentKeyID)},
	{"KEYLEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SessionTicketExtension, KEYLEN)},
	{}
};

$MethodInfo _SessionTicketExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SessionTicketExtension, init$, void)},
	{}
};

$InnerClassInfo _SessionTicketExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12SHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketProducer", "sun.security.ssl.SessionTicketExtension", "T12SHSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12CHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketProducer", "sun.security.ssl.SessionTicketExtension", "T12CHSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$SessionTicketStringizer", "sun.security.ssl.SessionTicketExtension", "SessionTicketStringizer", $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$SessionTicketSpec", "sun.security.ssl.SessionTicketExtension", "SessionTicketSpec", $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$KeyState", "sun.security.ssl.SessionTicketExtension", "KeyState", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SessionTicketExtension$StatelessKey", "sun.security.ssl.SessionTicketExtension", "StatelessKey", $STATIC | $FINAL},
	{}
};

$ClassInfo _SessionTicketExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension",
	"java.lang.Object",
	nullptr,
	_SessionTicketExtension_FieldInfo_,
	_SessionTicketExtension_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer,sun.security.ssl.SessionTicketExtension$T12SHSessionTicketProducer,sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer,sun.security.ssl.SessionTicketExtension$T12CHSessionTicketProducer,sun.security.ssl.SessionTicketExtension$SessionTicketStringizer,sun.security.ssl.SessionTicketExtension$SessionTicketSpec,sun.security.ssl.SessionTicketExtension$KeyState,sun.security.ssl.SessionTicketExtension$StatelessKey"
};

$Object* allocate$SessionTicketExtension($Class* clazz) {
	return $of($alloc(SessionTicketExtension));
}

$HandshakeProducer* SessionTicketExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SessionTicketExtension::chOnLoadConsumer = nullptr;
$HandshakeProducer* SessionTicketExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* SessionTicketExtension::shOnLoadConsumer = nullptr;
$SSLStringizer* SessionTicketExtension::steStringizer = nullptr;
int32_t SessionTicketExtension::keyTimeout = 0;
int32_t SessionTicketExtension::currentKeyID = 0;

void SessionTicketExtension::init$() {
}

void clinit$SessionTicketExtension($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SessionTicketExtension::chNetworkProducer, $new($SessionTicketExtension$T12CHSessionTicketProducer));
	$assignStatic(SessionTicketExtension::chOnLoadConsumer, $new($SessionTicketExtension$T12CHSessionTicketConsumer));
	$assignStatic(SessionTicketExtension::shNetworkProducer, $new($SessionTicketExtension$T12SHSessionTicketProducer));
	$assignStatic(SessionTicketExtension::shOnLoadConsumer, $new($SessionTicketExtension$T12SHSessionTicketConsumer));
	$assignStatic(SessionTicketExtension::steStringizer, $new($SessionTicketExtension$SessionTicketStringizer));
	SessionTicketExtension::currentKeyID = $$new($SecureRandom)->nextInt();
	{
		$var($String, s, $GetPropertyAction::privilegedGetProperty("jdk.tls.server.statelessKeyTimeout"_s));
		if (s != nullptr) {
			int32_t kt = 0;
			try {
				kt = $Integer::parseInt(s) * 1000;
				if (kt < 0 || kt > $NewSessionTicket::MAX_TICKET_LIFETIME) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
						$SSLLogger::warning($$str({"Invalid timeout for jdk.tls.server.statelessKeyTimeout: "_s, $$str(kt), ".  Set to default value "_s, $$str(SessionTicketExtension::TIMEOUT_DEFAULT), "sec"_s}), $$new($ObjectArray, 0));
					}
					kt = SessionTicketExtension::TIMEOUT_DEFAULT;
				}
			} catch ($NumberFormatException& e) {
				kt = SessionTicketExtension::TIMEOUT_DEFAULT;
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning($$str({"Invalid timeout for jdk.tls.server.statelessKeyTimeout: "_s, s, ".  Set to default value "_s, $$str(SessionTicketExtension::TIMEOUT_DEFAULT), "sec"_s}), $$new($ObjectArray, 0));
				}
			}
			SessionTicketExtension::keyTimeout = kt;
		} else {
			SessionTicketExtension::keyTimeout = SessionTicketExtension::TIMEOUT_DEFAULT;
		}
	}
}

SessionTicketExtension::SessionTicketExtension() {
}

$Class* SessionTicketExtension::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension, name, initialize, &_SessionTicketExtension_ClassInfo_, clinit$SessionTicketExtension, allocate$SessionTicketExtension);
	return class$;
}

$Class* SessionTicketExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun