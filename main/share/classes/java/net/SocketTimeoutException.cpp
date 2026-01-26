#include <java/net/SocketTimeoutException.h>

#include <java/io/InterruptedIOException.h>
#include <jcpp.h>

using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _SocketTimeoutException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketTimeoutException, serialVersionUID)},
	{}
};

$MethodInfo _SocketTimeoutException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SocketTimeoutException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SocketTimeoutException, init$, void)},
	{}
};

$ClassInfo _SocketTimeoutException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.SocketTimeoutException",
	"java.io.InterruptedIOException",
	nullptr,
	_SocketTimeoutException_FieldInfo_,
	_SocketTimeoutException_MethodInfo_
};

$Object* allocate$SocketTimeoutException($Class* clazz) {
	return $of($alloc(SocketTimeoutException));
}

void SocketTimeoutException::init$($String* msg) {
	$InterruptedIOException::init$(msg);
}

void SocketTimeoutException::init$() {
	$InterruptedIOException::init$();
}

SocketTimeoutException::SocketTimeoutException() {
}

SocketTimeoutException::SocketTimeoutException(const SocketTimeoutException& e) : $InterruptedIOException(e) {
}

void SocketTimeoutException::throw$() {
	throw *this;
}

$Class* SocketTimeoutException::load$($String* name, bool initialize) {
	$loadClass(SocketTimeoutException, name, initialize, &_SocketTimeoutException_ClassInfo_, allocate$SocketTimeoutException);
	return class$;
}

$Class* SocketTimeoutException::class$ = nullptr;

	} // net
} // java