#include <java/net/NoRouteToHostException.h>

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

$FieldInfo _NoRouteToHostException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoRouteToHostException, serialVersionUID)},
	{}
};

$MethodInfo _NoRouteToHostException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoRouteToHostException::*)($String*)>(&NoRouteToHostException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoRouteToHostException::*)()>(&NoRouteToHostException::init$))},
	{}
};

$ClassInfo _NoRouteToHostException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.NoRouteToHostException",
	"java.net.SocketException",
	nullptr,
	_NoRouteToHostException_FieldInfo_,
	_NoRouteToHostException_MethodInfo_
};

$Object* allocate$NoRouteToHostException($Class* clazz) {
	return $of($alloc(NoRouteToHostException));
}

void NoRouteToHostException::init$($String* msg) {
	$SocketException::init$(msg);
}

void NoRouteToHostException::init$() {
	$SocketException::init$();
}

NoRouteToHostException::NoRouteToHostException() {
}

NoRouteToHostException::NoRouteToHostException(const NoRouteToHostException& e) {
}

NoRouteToHostException NoRouteToHostException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoRouteToHostException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoRouteToHostException::load$($String* name, bool initialize) {
	$loadClass(NoRouteToHostException, name, initialize, &_NoRouteToHostException_ClassInfo_, allocate$NoRouteToHostException);
	return class$;
}

$Class* NoRouteToHostException::class$ = nullptr;

	} // net
} // java