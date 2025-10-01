#include <java/net/BindException.h>

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

$FieldInfo _BindException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BindException, serialVersionUID)},
	{}
};

$MethodInfo _BindException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BindException::*)($String*)>(&BindException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BindException::*)()>(&BindException::init$))},
	{}
};

$ClassInfo _BindException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.BindException",
	"java.net.SocketException",
	nullptr,
	_BindException_FieldInfo_,
	_BindException_MethodInfo_
};

$Object* allocate$BindException($Class* clazz) {
	return $of($alloc(BindException));
}

void BindException::init$($String* msg) {
	$SocketException::init$(msg);
}

void BindException::init$() {
	$SocketException::init$();
}

BindException::BindException() {
}

BindException::BindException(const BindException& e) {
}

BindException BindException::wrapper$() {
	$pendingException(this);
	return *this;
}

void BindException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* BindException::load$($String* name, bool initialize) {
	$loadClass(BindException, name, initialize, &_BindException_ClassInfo_, allocate$BindException);
	return class$;
}

$Class* BindException::class$ = nullptr;

	} // net
} // java