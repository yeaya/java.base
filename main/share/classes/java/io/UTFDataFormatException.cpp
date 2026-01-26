#include <java/io/UTFDataFormatException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _UTFDataFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTFDataFormatException, serialVersionUID)},
	{}
};

$MethodInfo _UTFDataFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UTFDataFormatException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UTFDataFormatException, init$, void, $String*)},
	{}
};

$ClassInfo _UTFDataFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.UTFDataFormatException",
	"java.io.IOException",
	nullptr,
	_UTFDataFormatException_FieldInfo_,
	_UTFDataFormatException_MethodInfo_
};

$Object* allocate$UTFDataFormatException($Class* clazz) {
	return $of($alloc(UTFDataFormatException));
}

void UTFDataFormatException::init$() {
	$IOException::init$();
}

void UTFDataFormatException::init$($String* s) {
	$IOException::init$(s);
}

UTFDataFormatException::UTFDataFormatException() {
}

UTFDataFormatException::UTFDataFormatException(const UTFDataFormatException& e) : $IOException(e) {
}

void UTFDataFormatException::throw$() {
	throw *this;
}

$Class* UTFDataFormatException::load$($String* name, bool initialize) {
	$loadClass(UTFDataFormatException, name, initialize, &_UTFDataFormatException_ClassInfo_, allocate$UTFDataFormatException);
	return class$;
}

$Class* UTFDataFormatException::class$ = nullptr;

	} // io
} // java