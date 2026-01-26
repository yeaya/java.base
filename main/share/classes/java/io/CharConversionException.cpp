#include <java/io/CharConversionException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _CharConversionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharConversionException, serialVersionUID)},
	{}
};

$MethodInfo _CharConversionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CharConversionException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CharConversionException, init$, void, $String*)},
	{}
};

$ClassInfo _CharConversionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.CharConversionException",
	"java.io.IOException",
	nullptr,
	_CharConversionException_FieldInfo_,
	_CharConversionException_MethodInfo_
};

$Object* allocate$CharConversionException($Class* clazz) {
	return $of($alloc(CharConversionException));
}

void CharConversionException::init$() {
	$IOException::init$();
}

void CharConversionException::init$($String* s) {
	$IOException::init$(s);
}

CharConversionException::CharConversionException() {
}

CharConversionException::CharConversionException(const CharConversionException& e) : $IOException(e) {
}

void CharConversionException::throw$() {
	throw *this;
}

$Class* CharConversionException::load$($String* name, bool initialize) {
	$loadClass(CharConversionException, name, initialize, &_CharConversionException_ClassInfo_, allocate$CharConversionException);
	return class$;
}

$Class* CharConversionException::class$ = nullptr;

	} // io
} // java