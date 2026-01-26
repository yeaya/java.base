#include <java/io/InterruptedIOException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _InterruptedIOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedIOException, serialVersionUID)},
	{"bytesTransferred", "I", nullptr, $PUBLIC, $field(InterruptedIOException, bytesTransferred)},
	{}
};

$MethodInfo _InterruptedIOException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedIOException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedIOException, init$, void, $String*)},
	{}
};

$ClassInfo _InterruptedIOException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.InterruptedIOException",
	"java.io.IOException",
	nullptr,
	_InterruptedIOException_FieldInfo_,
	_InterruptedIOException_MethodInfo_
};

$Object* allocate$InterruptedIOException($Class* clazz) {
	return $of($alloc(InterruptedIOException));
}

void InterruptedIOException::init$() {
	$IOException::init$();
	this->bytesTransferred = 0;
}

void InterruptedIOException::init$($String* s) {
	$IOException::init$(s);
	this->bytesTransferred = 0;
}

InterruptedIOException::InterruptedIOException() {
}

InterruptedIOException::InterruptedIOException(const InterruptedIOException& e) : $IOException(e) {
}

void InterruptedIOException::throw$() {
	throw *this;
}

$Class* InterruptedIOException::load$($String* name, bool initialize) {
	$loadClass(InterruptedIOException, name, initialize, &_InterruptedIOException_ClassInfo_, allocate$InterruptedIOException);
	return class$;
}

$Class* InterruptedIOException::class$ = nullptr;

	} // io
} // java