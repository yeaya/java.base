#include <sun/security/ssl/KeyShareExtension$SHKeyShareAbsence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$SHKeyShareAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$SHKeyShareAbsence::*)()>(&KeyShareExtension$SHKeyShareAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$SHKeyShareAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$SHKeyShareAbsence", "sun.security.ssl.KeyShareExtension", "SHKeyShareAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$SHKeyShareAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$SHKeyShareAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_KeyShareExtension$SHKeyShareAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$SHKeyShareAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$SHKeyShareAbsence($Class* clazz) {
	return $of($alloc(KeyShareExtension$SHKeyShareAbsence));
}

void KeyShareExtension$SHKeyShareAbsence::init$() {
}

void KeyShareExtension$SHKeyShareAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("handshake"_s)) {
		$SSLLogger::fine("No key_share extension in ServerHello, cleanup the key shares if necessary"_s, $$new($ObjectArray, 0));
	}
	$nc($nc(chc)->handshakePossessions)->clear();
}

KeyShareExtension$SHKeyShareAbsence::KeyShareExtension$SHKeyShareAbsence() {
}

$Class* KeyShareExtension$SHKeyShareAbsence::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$SHKeyShareAbsence, name, initialize, &_KeyShareExtension$SHKeyShareAbsence_ClassInfo_, allocate$KeyShareExtension$SHKeyShareAbsence);
	return class$;
}

$Class* KeyShareExtension$SHKeyShareAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun