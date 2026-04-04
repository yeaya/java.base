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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLProtocolException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLProtocolException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLProtocolException",
		"javax.net.ssl.SSLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLProtocolException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLProtocolException);
	});
	return class$;
}

$Class* SSLProtocolException::class$ = nullptr;

		} // ssl
	} // net
} // javax