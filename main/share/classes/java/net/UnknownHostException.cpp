#include <java/net/UnknownHostException.h>

#include <java/io/IOException.h>
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

UnknownHostException::UnknownHostException(const UnknownHostException& e) : $IOException(e) {
}

void UnknownHostException::throw$() {
	throw *this;
}

$Class* UnknownHostException::load$($String* name, bool initialize) {
	$loadClass(UnknownHostException, name, initialize, &_UnknownHostException_ClassInfo_, allocate$UnknownHostException);
	return class$;
}

$Class* UnknownHostException::class$ = nullptr;

	} // net
} // java