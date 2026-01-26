#include <java/io/EOFException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _EOFException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EOFException, serialVersionUID)},
	{}
};

$MethodInfo _EOFException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EOFException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EOFException, init$, void, $String*)},
	{}
};

$ClassInfo _EOFException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.EOFException",
	"java.io.IOException",
	nullptr,
	_EOFException_FieldInfo_,
	_EOFException_MethodInfo_
};

$Object* allocate$EOFException($Class* clazz) {
	return $of($alloc(EOFException));
}

void EOFException::init$() {
	$IOException::init$();
}

void EOFException::init$($String* s) {
	$IOException::init$(s);
}

EOFException::EOFException() {
}

EOFException::EOFException(const EOFException& e) : $IOException(e) {
}

void EOFException::throw$() {
	throw *this;
}

$Class* EOFException::load$($String* name, bool initialize) {
	$loadClass(EOFException, name, initialize, &_EOFException_ClassInfo_, allocate$EOFException);
	return class$;
}

$Class* EOFException::class$ = nullptr;

	} // io
} // java