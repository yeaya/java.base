#include <sun/security/ssl/KeyUpdate.h>

#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateConsumer.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateKickstartProducer.h>
#include <sun/security/ssl/KeyUpdate$KeyUpdateProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/SSLProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyUpdate$KeyUpdateConsumer = ::sun::security::ssl::KeyUpdate$KeyUpdateConsumer;
using $KeyUpdate$KeyUpdateKickstartProducer = ::sun::security::ssl::KeyUpdate$KeyUpdateKickstartProducer;
using $KeyUpdate$KeyUpdateProducer = ::sun::security::ssl::KeyUpdate$KeyUpdateProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLProducer = ::sun::security::ssl::SSLProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyUpdate_FieldInfo_[] = {
	{"kickstartProducer", "Lsun/security/ssl/SSLProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyUpdate, kickstartProducer)},
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(KeyUpdate, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(KeyUpdate, handshakeProducer)},
	{}
};

$MethodInfo _KeyUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyUpdate::*)()>(&KeyUpdate::init$))},
	{}
};

$InnerClassInfo _KeyUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyUpdate$KeyUpdateProducer", "sun.security.ssl.KeyUpdate", "KeyUpdateProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyUpdate$KeyUpdateConsumer", "sun.security.ssl.KeyUpdate", "KeyUpdateConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer", "sun.security.ssl.KeyUpdate", "KeyUpdateKickstartProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.KeyUpdate$KeyUpdateRequest", "sun.security.ssl.KeyUpdate", "KeyUpdateRequest", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.KeyUpdate$KeyUpdateMessage", "sun.security.ssl.KeyUpdate", "KeyUpdateMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyUpdate",
	"java.lang.Object",
	nullptr,
	_KeyUpdate_FieldInfo_,
	_KeyUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_KeyUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyUpdate$KeyUpdateProducer,sun.security.ssl.KeyUpdate$KeyUpdateConsumer,sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer,sun.security.ssl.KeyUpdate$KeyUpdateRequest,sun.security.ssl.KeyUpdate$KeyUpdateMessage"
};

$Object* allocate$KeyUpdate($Class* clazz) {
	return $of($alloc(KeyUpdate));
}

$SSLProducer* KeyUpdate::kickstartProducer = nullptr;
$SSLConsumer* KeyUpdate::handshakeConsumer = nullptr;
$HandshakeProducer* KeyUpdate::handshakeProducer = nullptr;

void KeyUpdate::init$() {
}

void clinit$KeyUpdate($Class* class$) {
	$assignStatic(KeyUpdate::kickstartProducer, $new($KeyUpdate$KeyUpdateKickstartProducer));
	$assignStatic(KeyUpdate::handshakeConsumer, $new($KeyUpdate$KeyUpdateConsumer));
	$assignStatic(KeyUpdate::handshakeProducer, $new($KeyUpdate$KeyUpdateProducer));
}

KeyUpdate::KeyUpdate() {
}

$Class* KeyUpdate::load$($String* name, bool initialize) {
	$loadClass(KeyUpdate, name, initialize, &_KeyUpdate_ClassInfo_, clinit$KeyUpdate, allocate$KeyUpdate);
	return class$;
}

$Class* KeyUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun