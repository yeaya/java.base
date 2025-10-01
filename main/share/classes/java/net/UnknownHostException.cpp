#include <java/net/UnknownHostException.h>

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

$FieldInfo _UnknownHostException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownHostException, serialVersionUID)},
	{}
};

$MethodInfo _UnknownHostException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownHostException::*)($String*)>(&UnknownHostException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnknownHostException::*)()>(&UnknownHostException::init$))},
	{}
};

$ClassInfo _UnknownHostException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.UnknownHostException",
	"java.io.IOException",
	nullptr,
	_UnknownHostException_FieldInfo_,
	_UnknownHostException_MethodInfo_
};

$Object* allocate$UnknownHostException($Class* clazz) {
	return $of($alloc(UnknownHostException));
}

void UnknownHostException::init$($String* message) {
	$IOException::init$(message);
}

void UnknownHostException::init$() {
	$IOException::init$();
}

UnknownHostException::UnknownHostException() {
}

UnknownHostException::UnknownHostException(const UnknownHostException& e) {
}

UnknownHostException UnknownHostException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnknownHostException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnknownHostException::load$($String* name, bool initialize) {
	$loadClass(UnknownHostException, name, initialize, &_UnknownHostException_ClassInfo_, allocate$UnknownHostException);
	return class$;
}

$Class* UnknownHostException::class$ = nullptr;

	} // net
} // java