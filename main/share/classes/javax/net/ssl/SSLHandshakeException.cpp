#include <javax/net/ssl/SSLHandshakeException.h>

#include <javax/net/ssl/SSLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLHandshakeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLHandshakeException, serialVersionUID)},
	{}
};

$MethodInfo _SSLHandshakeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLHandshakeException::*)($String*)>(&SSLHandshakeException::init$))},
	{}
};

$ClassInfo _SSLHandshakeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLHandshakeException",
	"javax.net.ssl.SSLException",
	nullptr,
	_SSLHandshakeException_FieldInfo_,
	_SSLHandshakeException_MethodInfo_
};

$Object* allocate$SSLHandshakeException($Class* clazz) {
	return $of($alloc(SSLHandshakeException));
}

void SSLHandshakeException::init$($String* reason) {
	$SSLException::init$(reason);
}

SSLHandshakeException::SSLHandshakeException() {
}

SSLHandshakeException::SSLHandshakeException(const SSLHandshakeException& e) : $SSLException(e) {
}

void SSLHandshakeException::throw$() {
	throw *this;
}

$Class* SSLHandshakeException::load$($String* name, bool initialize) {
	$loadClass(SSLHandshakeException, name, initialize, &_SSLHandshakeException_ClassInfo_, allocate$SSLHandshakeException);
	return class$;
}

$Class* SSLHandshakeException::class$ = nullptr;

		} // ssl
	} // net
} // javax