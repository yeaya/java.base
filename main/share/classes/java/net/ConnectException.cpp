#include <java/net/ConnectException.h>

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

$FieldInfo _ConnectException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectException, serialVersionUID)},
	{}
};

$MethodInfo _ConnectException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ConnectException::*)($String*)>(&ConnectException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConnectException::*)()>(&ConnectException::init$))},
	{}
};

$ClassInfo _ConnectException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.ConnectException",
	"java.net.SocketException",
	nullptr,
	_ConnectException_FieldInfo_,
	_ConnectException_MethodInfo_
};

$Object* allocate$ConnectException($Class* clazz) {
	return $of($alloc(ConnectException));
}

void ConnectException::init$($String* msg) {
	$SocketException::init$(msg);
}

void ConnectException::init$() {
	$SocketException::init$();
}

ConnectException::ConnectException() {
}

ConnectException::ConnectException(const ConnectException& e) {
}

ConnectException ConnectException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ConnectException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ConnectException::load$($String* name, bool initialize) {
	$loadClass(ConnectException, name, initialize, &_ConnectException_ClassInfo_, allocate$ConnectException);
	return class$;
}

$Class* ConnectException::class$ = nullptr;

	} // net
} // java