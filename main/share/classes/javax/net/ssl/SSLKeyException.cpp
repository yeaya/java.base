#include <javax/net/ssl/SSLKeyException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/net/ssl/SSLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLKeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLKeyException, serialVersionUID)},
	{}
};

$MethodInfo _SSLKeyException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLKeyException::*)($String*)>(&SSLKeyException::init$))},
	{}
};

$ClassInfo _SSLKeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLKeyException",
	"javax.net.ssl.SSLException",
	nullptr,
	_SSLKeyException_FieldInfo_,
	_SSLKeyException_MethodInfo_
};

$Object* allocate$SSLKeyException($Class* clazz) {
	return $of($alloc(SSLKeyException));
}

void SSLKeyException::init$($String* reason) {
	$SSLException::init$(reason);
}

SSLKeyException::SSLKeyException() {
}

SSLKeyException::SSLKeyException(const SSLKeyException& e) {
}

SSLKeyException SSLKeyException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SSLKeyException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SSLKeyException::load$($String* name, bool initialize) {
	$loadClass(SSLKeyException, name, initialize, &_SSLKeyException_ClassInfo_, allocate$SSLKeyException);
	return class$;
}

$Class* SSLKeyException::class$ = nullptr;

		} // ssl
	} // net
} // javax