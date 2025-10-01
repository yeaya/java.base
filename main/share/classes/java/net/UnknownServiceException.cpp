#include <java/net/UnknownServiceException.h>

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

$FieldInfo _UnknownServiceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownServiceException, serialVersionUID)},
	{}
};

$MethodInfo _UnknownServiceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnknownServiceException::*)()>(&UnknownServiceException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownServiceException::*)($String*)>(&UnknownServiceException::init$))},
	{}
};

$ClassInfo _UnknownServiceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.UnknownServiceException",
	"java.io.IOException",
	nullptr,
	_UnknownServiceException_FieldInfo_,
	_UnknownServiceException_MethodInfo_
};

$Object* allocate$UnknownServiceException($Class* clazz) {
	return $of($alloc(UnknownServiceException));
}

void UnknownServiceException::init$() {
	$IOException::init$();
}

void UnknownServiceException::init$($String* msg) {
	$IOException::init$(msg);
}

UnknownServiceException::UnknownServiceException() {
}

UnknownServiceException::UnknownServiceException(const UnknownServiceException& e) {
}

UnknownServiceException UnknownServiceException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnknownServiceException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnknownServiceException::load$($String* name, bool initialize) {
	$loadClass(UnknownServiceException, name, initialize, &_UnknownServiceException_ClassInfo_, allocate$UnknownServiceException);
	return class$;
}

$Class* UnknownServiceException::class$ = nullptr;

	} // net
} // java