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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLHandshakeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLHandshakeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLHandshakeException",
		"javax.net.ssl.SSLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLHandshakeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLHandshakeException);
	});
	return class$;
}

$Class* SSLHandshakeException::class$ = nullptr;

		} // ssl
	} // net
} // javax