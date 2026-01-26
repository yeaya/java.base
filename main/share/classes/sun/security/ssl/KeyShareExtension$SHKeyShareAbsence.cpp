#include <sun/security/ssl/KeyShareExtension$SHKeyShareAbsence.h>

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
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$SHKeyShareAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$SHKeyShareAbsence, init$, void)},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$SHKeyShareAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
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
	$useLocalCurrentObjectStackCache();
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