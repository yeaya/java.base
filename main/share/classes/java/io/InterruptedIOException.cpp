#include <java/io/InterruptedIOException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedIOException, serialVersionUID)},
		{"bytesTransferred", "I", nullptr, $PUBLIC, $field(InterruptedIOException, bytesTransferred)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedIOException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedIOException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.InterruptedIOException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InterruptedIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptedIOException);
	});
	return class$;
}

$Class* InterruptedIOException::class$ = nullptr;

	} // io
} // java