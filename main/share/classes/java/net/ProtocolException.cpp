#include <java/net/ProtocolException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _ProtocolException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProtocolException, serialVersionUID)},
	{}
};

$MethodInfo _ProtocolException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProtocolException::*)($String*)>(&ProtocolException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProtocolException::*)()>(&ProtocolException::init$))},
	{}
};

$ClassInfo _ProtocolException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.ProtocolException",
	"java.io.IOException",
	nullptr,
	_ProtocolException_FieldInfo_,
	_ProtocolException_MethodInfo_
};

$Object* allocate$ProtocolException($Class* clazz) {
	return $of($alloc(ProtocolException));
}

void ProtocolException::init$($String* message) {
	$IOException::init$(message);
}

void ProtocolException::init$() {
	$IOException::init$();
}

ProtocolException::ProtocolException() {
}

ProtocolException::ProtocolException(const ProtocolException& e) {
}

ProtocolException ProtocolException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ProtocolException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ProtocolException::load$($String* name, bool initialize) {
	$loadClass(ProtocolException, name, initialize, &_ProtocolException_ClassInfo_, allocate$ProtocolException);
	return class$;
}

$Class* ProtocolException::class$ = nullptr;

	} // net
} // java