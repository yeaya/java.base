#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <javax/net/ssl/SSLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLException = ::javax::net::ssl::SSLException;

namespace javax {
	namespace net {
		namespace ssl {

void SSLPeerUnverifiedException::init$($String* reason) {
	$SSLException::init$(reason);
}

SSLPeerUnverifiedException::SSLPeerUnverifiedException() {
}

SSLPeerUnverifiedException::SSLPeerUnverifiedException(const SSLPeerUnverifiedException& e) : $SSLException(e) {
}

void SSLPeerUnverifiedException::throw$() {
	throw *this;
}

$Class* SSLPeerUnverifiedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLPeerUnverifiedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLPeerUnverifiedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLPeerUnverifiedException",
		"javax.net.ssl.SSLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLPeerUnverifiedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLPeerUnverifiedException);
	});
	return class$;
}

$Class* SSLPeerUnverifiedException::class$ = nullptr;

		} // ssl
	} // net
} // javax