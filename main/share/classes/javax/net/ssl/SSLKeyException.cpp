#include <javax/net/ssl/SSLKeyException.h>
#include <javax/net/ssl/SSLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;

namespace javax {
	namespace net {
		namespace ssl {

void SSLKeyException::init$($String* reason) {
	$SSLException::init$(reason);
}

SSLKeyException::SSLKeyException() {
}

SSLKeyException::SSLKeyException(const SSLKeyException& e) : $SSLException(e) {
}

void SSLKeyException::throw$() {
	throw *this;
}

$Class* SSLKeyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLKeyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLKeyException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLKeyException",
		"javax.net.ssl.SSLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLKeyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyException);
	});
	return class$;
}

$Class* SSLKeyException::class$ = nullptr;

		} // ssl
	} // net
} // javax