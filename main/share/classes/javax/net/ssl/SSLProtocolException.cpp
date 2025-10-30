#include <javax/net/ssl/SSLProtocolException.h>

#include <javax/net/ssl/SSLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLProtocolException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLProtocolException, serialVersionUID)},
	{}
};

$MethodInfo _SSLProtocolException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLProtocolException::*)($String*)>(&SSLProtocolException::init$))},
	{}
};

$ClassInfo _SSLProtocolException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLProtocolException",
	"javax.net.ssl.SSLException",
	nullptr,
	_SSLProtocolException_FieldInfo_,
	_SSLProtocolException_MethodInfo_
};

$Object* allocate$SSLProtocolException($Class* clazz) {
	return $of($alloc(SSLProtocolException));
}

void SSLProtocolException::init$($String* reason) {
	$SSLException::init$(reason);
}

SSLProtocolException::SSLProtocolException() {
}

SSLProtocolException::SSLProtocolException(const SSLProtocolException& e) : $SSLException(e) {
}

void SSLProtocolException::throw$() {
	throw *this;
}

$Class* SSLProtocolException::load$($String* name, bool initialize) {
	$loadClass(SSLProtocolException, name, initialize, &_SSLProtocolException_ClassInfo_, allocate$SSLProtocolException);
	return class$;
}

$Class* SSLProtocolException::class$ = nullptr;

		} // ssl
	} // net
} // javax