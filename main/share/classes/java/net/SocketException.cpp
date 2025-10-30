#include <java/net/SocketException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _SocketException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketException, serialVersionUID)},
	{}
};

$MethodInfo _SocketException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SocketException::*)($String*)>(&SocketException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketException::*)()>(&SocketException::init$))},
	{}
};

$ClassInfo _SocketException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.SocketException",
	"java.io.IOException",
	nullptr,
	_SocketException_FieldInfo_,
	_SocketException_MethodInfo_
};

$Object* allocate$SocketException($Class* clazz) {
	return $of($alloc(SocketException));
}

void SocketException::init$($String* msg) {
	$IOException::init$(msg);
}

void SocketException::init$() {
	$IOException::init$();
}

SocketException::SocketException() {
}

SocketException::SocketException(const SocketException& e) : $IOException(e) {
}

void SocketException::throw$() {
	throw *this;
}

$Class* SocketException::load$($String* name, bool initialize) {
	$loadClass(SocketException, name, initialize, &_SocketException_ClassInfo_, allocate$SocketException);
	return class$;
}

$Class* SocketException::class$ = nullptr;

	} // net
} // java