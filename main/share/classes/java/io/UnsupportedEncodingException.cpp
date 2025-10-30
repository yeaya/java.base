#include <java/io/UnsupportedEncodingException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _UnsupportedEncodingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedEncodingException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedEncodingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedEncodingException::*)()>(&UnsupportedEncodingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedEncodingException::*)($String*)>(&UnsupportedEncodingException::init$))},
	{}
};

$ClassInfo _UnsupportedEncodingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.UnsupportedEncodingException",
	"java.io.IOException",
	nullptr,
	_UnsupportedEncodingException_FieldInfo_,
	_UnsupportedEncodingException_MethodInfo_
};

$Object* allocate$UnsupportedEncodingException($Class* clazz) {
	return $of($alloc(UnsupportedEncodingException));
}

void UnsupportedEncodingException::init$() {
	$IOException::init$();
}

void UnsupportedEncodingException::init$($String* s) {
	$IOException::init$(s);
}

UnsupportedEncodingException::UnsupportedEncodingException() {
}

UnsupportedEncodingException::UnsupportedEncodingException(const UnsupportedEncodingException& e) : $IOException(e) {
}

void UnsupportedEncodingException::throw$() {
	throw *this;
}

$Class* UnsupportedEncodingException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedEncodingException, name, initialize, &_UnsupportedEncodingException_ClassInfo_, allocate$UnsupportedEncodingException);
	return class$;
}

$Class* UnsupportedEncodingException::class$ = nullptr;

	} // io
} // java