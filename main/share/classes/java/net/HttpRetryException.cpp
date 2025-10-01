#include <java/net/HttpRetryException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _HttpRetryException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpRetryException, serialVersionUID)},
	{"responseCode", "I", nullptr, $PRIVATE, $field(HttpRetryException, responseCode$)},
	{"location", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HttpRetryException, location)},
	{}
};

$MethodInfo _HttpRetryException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRetryException::*)($String*,int32_t)>(&HttpRetryException::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRetryException::*)($String*,int32_t,$String*)>(&HttpRetryException::init$))},
	{"getLocation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReason", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"responseCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpRetryException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.HttpRetryException",
	"java.io.IOException",
	nullptr,
	_HttpRetryException_FieldInfo_,
	_HttpRetryException_MethodInfo_
};

$Object* allocate$HttpRetryException($Class* clazz) {
	return $of($alloc(HttpRetryException));
}

void HttpRetryException::init$($String* detail, int32_t code) {
	$IOException::init$(detail);
	this->responseCode$ = code;
}

void HttpRetryException::init$($String* detail, int32_t code, $String* location) {
	$IOException::init$(detail);
	this->responseCode$ = code;
	$set(this, location, location);
}

int32_t HttpRetryException::responseCode() {
	return this->responseCode$;
}

$String* HttpRetryException::getReason() {
	return $IOException::getMessage();
}

$String* HttpRetryException::getLocation() {
	return this->location;
}

HttpRetryException::HttpRetryException() {
}

HttpRetryException::HttpRetryException(const HttpRetryException& e) {
}

HttpRetryException HttpRetryException::wrapper$() {
	$pendingException(this);
	return *this;
}

void HttpRetryException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* HttpRetryException::load$($String* name, bool initialize) {
	$loadClass(HttpRetryException, name, initialize, &_HttpRetryException_ClassInfo_, allocate$HttpRetryException);
	return class$;
}

$Class* HttpRetryException::class$ = nullptr;

	} // net
} // java