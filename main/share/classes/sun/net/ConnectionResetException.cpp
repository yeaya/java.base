#include <sun/net/ConnectionResetException.h>

#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace sun {
	namespace net {

$FieldInfo _ConnectionResetException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectionResetException, serialVersionUID)},
	{}
};

$MethodInfo _ConnectionResetException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ConnectionResetException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConnectionResetException, init$, void)},
	{}
};

$ClassInfo _ConnectionResetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ConnectionResetException",
	"java.net.SocketException",
	nullptr,
	_ConnectionResetException_FieldInfo_,
	_ConnectionResetException_MethodInfo_
};

$Object* allocate$ConnectionResetException($Class* clazz) {
	return $of($alloc(ConnectionResetException));
}

void ConnectionResetException::init$($String* msg) {
	$SocketException::init$(msg);
}

void ConnectionResetException::init$() {
	$SocketException::init$();
}

ConnectionResetException::ConnectionResetException() {
}

ConnectionResetException::ConnectionResetException(const ConnectionResetException& e) : $SocketException(e) {
}

void ConnectionResetException::throw$() {
	throw *this;
}

$Class* ConnectionResetException::load$($String* name, bool initialize) {
	$loadClass(ConnectionResetException, name, initialize, &_ConnectionResetException_ClassInfo_, allocate$ConnectionResetException);
	return class$;
}

$Class* ConnectionResetException::class$ = nullptr;

	} // net
} // sun