#include <sun/security/ssl/ServerHelloDone.h>

#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneConsumer.h>
#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneProducer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $ServerHelloDone$ServerHelloDoneConsumer = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneConsumer;
using $ServerHelloDone$ServerHelloDoneProducer = ::sun::security::ssl::ServerHelloDone$ServerHelloDoneProducer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ServerHelloDone_FieldInfo_[] = {
	{"handshakeConsumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ServerHelloDone, handshakeConsumer)},
	{"handshakeProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ServerHelloDone, handshakeProducer)},
	{}
};

$MethodInfo _ServerHelloDone_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ServerHelloDone, init$, void)},
	{}
};

$InnerClassInfo _ServerHelloDone_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneMessage", $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerHelloDone_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHelloDone",
	"java.lang.Object",
	nullptr,
	_ServerHelloDone_FieldInfo_,
	_ServerHelloDone_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHelloDone_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer,sun.security.ssl.ServerHelloDone$ServerHelloDoneProducer,sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage"
};

$Object* allocate$ServerHelloDone($Class* clazz) {
	return $of($alloc(ServerHelloDone));
}

$SSLConsumer* ServerHelloDone::handshakeConsumer = nullptr;
$HandshakeProducer* ServerHelloDone::handshakeProducer = nullptr;

void ServerHelloDone::init$() {
}

void clinit$ServerHelloDone($Class* class$) {
	$assignStatic(ServerHelloDone::handshakeConsumer, $new($ServerHelloDone$ServerHelloDoneConsumer));
	$assignStatic(ServerHelloDone::handshakeProducer, $new($ServerHelloDone$ServerHelloDoneProducer));
}

ServerHelloDone::ServerHelloDone() {
}

$Class* ServerHelloDone::load$($String* name, bool initialize) {
	$loadClass(ServerHelloDone, name, initialize, &_ServerHelloDone_ClassInfo_, clinit$ServerHelloDone, allocate$ServerHelloDone);
	return class$;
}

$Class* ServerHelloDone::class$ = nullptr;

		} // ssl
	} // security
} // sun