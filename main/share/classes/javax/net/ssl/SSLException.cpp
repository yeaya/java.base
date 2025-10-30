#include <javax/net/ssl/SSLException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLException, serialVersionUID)},
	{}
};

$MethodInfo _SSLException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLException::*)($String*)>(&SSLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLException::*)($String*,$Throwable*)>(&SSLException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLException::*)($Throwable*)>(&SSLException::init$))},
	{}
};

$ClassInfo _SSLException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLException",
	"java.io.IOException",
	nullptr,
	_SSLException_FieldInfo_,
	_SSLException_MethodInfo_
};

$Object* allocate$SSLException($Class* clazz) {
	return $of($alloc(SSLException));
}

void SSLException::init$($String* reason) {
	$IOException::init$(reason);
}

void SSLException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	initCause(cause);
}

void SSLException::init$($Throwable* cause) {
	$IOException::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	initCause(cause);
}

SSLException::SSLException() {
}

SSLException::SSLException(const SSLException& e) : $IOException(e) {
}

void SSLException::throw$() {
	throw *this;
}

$Class* SSLException::load$($String* name, bool initialize) {
	$loadClass(SSLException, name, initialize, &_SSLException_ClassInfo_, allocate$SSLException);
	return class$;
}

$Class* SSLException::class$ = nullptr;

		} // ssl
	} // net
} // javax