#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>

#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

#undef OVERFLOW_OF_INT24

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLHandshake$HandshakeMessage_FieldInfo_[] = {
	{"handshakeContext", "Lsun/security/ssl/HandshakeContext;", nullptr, $FINAL, $field(SSLHandshake$HandshakeMessage, handshakeContext)},
	{}
};

$MethodInfo _SSLHandshake$HandshakeMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(SSLHandshake$HandshakeMessage::*)($HandshakeContext*)>(&SSLHandshake$HandshakeMessage::init$))},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $ABSTRACT},
	{"messageLength", "()I", nullptr, $ABSTRACT},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLHandshake$HandshakeMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLHandshake$HandshakeMessage_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	"java.lang.Object",
	nullptr,
	_SSLHandshake$HandshakeMessage_FieldInfo_,
	_SSLHandshake$HandshakeMessage_MethodInfo_,
	nullptr,
	nullptr,
	_SSLHandshake$HandshakeMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLHandshake"
};

$Object* allocate$SSLHandshake$HandshakeMessage($Class* clazz) {
	return $of($alloc(SSLHandshake$HandshakeMessage));
}

void SSLHandshake$HandshakeMessage::init$($HandshakeContext* handshakeContext) {
	$set(this, handshakeContext, handshakeContext);
}

void SSLHandshake$HandshakeMessage::write($HandshakeOutStream* hos) {
	$useLocalCurrentObjectStackCache();
	int32_t len = messageLength();
	if (len >= $Record::OVERFLOW_OF_INT24) {
		$throwNew($SSLException, $$str({"Handshake message is overflow, type = "_s, $(handshakeType()), ", len = "_s, $$str(len)}));
	}
	$nc(hos)->write((int32_t)$nc($(handshakeType()))->id);
	hos->putInt24(len);
	send(hos);
	hos->complete();
}

SSLHandshake$HandshakeMessage::SSLHandshake$HandshakeMessage() {
}

$Class* SSLHandshake$HandshakeMessage::load$($String* name, bool initialize) {
	$loadClass(SSLHandshake$HandshakeMessage, name, initialize, &_SSLHandshake$HandshakeMessage_ClassInfo_, allocate$SSLHandshake$HandshakeMessage);
	return class$;
}

$Class* SSLHandshake$HandshakeMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun