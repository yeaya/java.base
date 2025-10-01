#include <java/net/MalformedURLException.h>

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

$FieldInfo _MalformedURLException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedURLException, serialVersionUID)},
	{}
};

$MethodInfo _MalformedURLException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MalformedURLException::*)()>(&MalformedURLException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedURLException::*)($String*)>(&MalformedURLException::init$))},
	{}
};

$ClassInfo _MalformedURLException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.MalformedURLException",
	"java.io.IOException",
	nullptr,
	_MalformedURLException_FieldInfo_,
	_MalformedURLException_MethodInfo_
};

$Object* allocate$MalformedURLException($Class* clazz) {
	return $of($alloc(MalformedURLException));
}

void MalformedURLException::init$() {
	$IOException::init$();
}

void MalformedURLException::init$($String* msg) {
	$IOException::init$(msg);
}

MalformedURLException::MalformedURLException() {
}

MalformedURLException::MalformedURLException(const MalformedURLException& e) {
}

MalformedURLException MalformedURLException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MalformedURLException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MalformedURLException::load$($String* name, bool initialize) {
	$loadClass(MalformedURLException, name, initialize, &_MalformedURLException_ClassInfo_, allocate$MalformedURLException);
	return class$;
}

$Class* MalformedURLException::class$ = nullptr;

	} // net
} // java