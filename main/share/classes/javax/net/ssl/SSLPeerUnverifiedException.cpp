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

$FieldInfo _SSLPeerUnverifiedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLPeerUnverifiedException, serialVersionUID)},
	{}
};

$MethodInfo _SSLPeerUnverifiedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLPeerUnverifiedException::*)($String*)>(&SSLPeerUnverifiedException::init$))},
	{}
};

$ClassInfo _SSLPeerUnverifiedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLPeerUnverifiedException",
	"javax.net.ssl.SSLException",
	nullptr,
	_SSLPeerUnverifiedException_FieldInfo_,
	_SSLPeerUnverifiedException_MethodInfo_
};

$Object* allocate$SSLPeerUnverifiedException($Class* clazz) {
	return $of($alloc(SSLPeerUnverifiedException));
}

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
	$loadClass(SSLPeerUnverifiedException, name, initialize, &_SSLPeerUnverifiedException_ClassInfo_, allocate$SSLPeerUnverifiedException);
	return class$;
}

$Class* SSLPeerUnverifiedException::class$ = nullptr;

		} // ssl
	} // net
} // javax