#include <sun/security/ssl/Alert$AlertConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert$AlertMessage.h>
#include <sun/security/ssl/Alert$Level.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_VERIFY
#undef CLIENT_AUTH_REQUESTED
#undef CLOSE_NOTIFY
#undef HANDSHAKE_FAILURE
#undef NO_CERTIFICATE
#undef UNEXPECTED_MESSAGE
#undef USER_CANCELED
#undef WARNING

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Alert = ::sun::security::ssl::Alert;
using $Alert$AlertMessage = ::sun::security::ssl::Alert$AlertMessage;
using $Alert$Level = ::sun::security::ssl::Alert$Level;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Alert$AlertConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Alert$AlertConsumer::*)()>(&Alert$AlertConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Alert$AlertConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.Alert$AlertConsumer", "sun.security.ssl.Alert", "AlertConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Alert$AlertConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Alert$AlertConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_Alert$AlertConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_Alert$AlertConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Alert"
};

$Object* allocate$Alert$AlertConsumer($Class* clazz) {
	return $of($alloc(Alert$AlertConsumer));
}

void Alert$AlertConsumer::init$() {
}

void Alert$AlertConsumer::consume($ConnectionContext* context, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	$var($TransportContext, tc, $cast($TransportContext, context));
	$var($Alert$AlertMessage, am, $new($Alert$AlertMessage, tc, m));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine("Received alert message"_s, $$new($ObjectArray, {$of(am)}));
	}
	$Alert$Level* level = $Alert$Level::valueOf(am->level);
	$Alert* alert = $Alert::valueOf(am->id);
	if (alert == $Alert::CLOSE_NOTIFY) {
		$nc(tc)->isInputCloseNotified = true;
		tc->closeInbound();
		if (tc->peerUserCanceled) {
			tc->closeOutbound();
		} else if (tc->handshakeContext != nullptr) {
			$throw($(tc->fatal($Alert::UNEXPECTED_MESSAGE, "Received close_notify during handshake"_s)));
		}
	} else {
		if (alert == $Alert::USER_CANCELED) {
			if (level == $Alert$Level::WARNING) {
				$nc(tc)->peerUserCanceled = true;
			} else {
				$throw($($nc(tc)->fatal(alert, "Received fatal close_notify alert"_s, true, nullptr)));
			}
		} else {
			if ((level == $Alert$Level::WARNING) && (alert != nullptr)) {
				if (alert->handshakeOnly && ($nc(tc)->handshakeContext != nullptr)) {
					$init($ClientAuthType);
					if ($nc(tc->sslConfig)->isClientMode || alert != $Alert::NO_CERTIFICATE || ($nc(tc->sslConfig)->clientAuthType != $ClientAuthType::CLIENT_AUTH_REQUESTED)) {
						$throw($(tc->fatal($Alert::HANDSHAKE_FAILURE, $$str({"received handshake warning: "_s, alert->description}))));
					} else {
						$init($SSLHandshake);
						$nc($nc(tc->handshakeContext)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)));
						$nc($nc(tc->handshakeContext)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)));
					}
				}
			} else {
				$var($String, diagnostic, nullptr);
				if (alert == nullptr) {
					alert = $Alert::UNEXPECTED_MESSAGE;
					$assign(diagnostic, $str({"Unknown alert description ("_s, $$str(am->id), ")"_s}));
				} else {
					$assign(diagnostic, $str({"Received fatal alert: "_s, alert->description}));
				}
				$throw($($nc(tc)->fatal(alert, diagnostic, true, nullptr)));
			}
		}
	}
}

Alert$AlertConsumer::Alert$AlertConsumer() {
}

$Class* Alert$AlertConsumer::load$($String* name, bool initialize) {
	$loadClass(Alert$AlertConsumer, name, initialize, &_Alert$AlertConsumer_ClassInfo_, allocate$Alert$AlertConsumer);
	return class$;
}

$Class* Alert$AlertConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun