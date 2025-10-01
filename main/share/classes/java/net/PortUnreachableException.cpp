#include <java/net/PortUnreachableException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;

namespace java {
	namespace net {

$FieldInfo _PortUnreachableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortUnreachableException, serialVersionUID)},
	{}
};

$MethodInfo _PortUnreachableException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PortUnreachableException::*)($String*)>(&PortUnreachableException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PortUnreachableException::*)()>(&PortUnreachableException::init$))},
	{}
};

$ClassInfo _PortUnreachableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.PortUnreachableException",
	"java.net.SocketException",
	nullptr,
	_PortUnreachableException_FieldInfo_,
	_PortUnreachableException_MethodInfo_
};

$Object* allocate$PortUnreachableException($Class* clazz) {
	return $of($alloc(PortUnreachableException));
}

void PortUnreachableException::init$($String* msg) {
	$SocketException::init$(msg);
}

void PortUnreachableException::init$() {
	$SocketException::init$();
}

PortUnreachableException::PortUnreachableException() {
}

PortUnreachableException::PortUnreachableException(const PortUnreachableException& e) {
}

PortUnreachableException PortUnreachableException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PortUnreachableException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PortUnreachableException::load$($String* name, bool initialize) {
	$loadClass(PortUnreachableException, name, initialize, &_PortUnreachableException_ClassInfo_, allocate$PortUnreachableException);
	return class$;
}

$Class* PortUnreachableException::class$ = nullptr;

	} // net
} // java