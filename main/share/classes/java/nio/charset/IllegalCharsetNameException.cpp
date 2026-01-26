#include <java/nio/charset/IllegalCharsetNameException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _IllegalCharsetNameException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalCharsetNameException, serialVersionUID)},
	{"charsetName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IllegalCharsetNameException, charsetName)},
	{}
};

$MethodInfo _IllegalCharsetNameException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalCharsetNameException, init$, void, $String*)},
	{"getCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalCharsetNameException, getCharsetName, $String*)},
	{}
};

$ClassInfo _IllegalCharsetNameException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.IllegalCharsetNameException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalCharsetNameException_FieldInfo_,
	_IllegalCharsetNameException_MethodInfo_
};

$Object* allocate$IllegalCharsetNameException($Class* clazz) {
	return $of($alloc(IllegalCharsetNameException));
}

void IllegalCharsetNameException::init$($String* charsetName) {
	$IllegalArgumentException::init$($($String::valueOf($of(charsetName))));
	$set(this, charsetName, charsetName);
}

$String* IllegalCharsetNameException::getCharsetName() {
	return this->charsetName;
}

IllegalCharsetNameException::IllegalCharsetNameException() {
}

IllegalCharsetNameException::IllegalCharsetNameException(const IllegalCharsetNameException& e) : $IllegalArgumentException(e) {
}

void IllegalCharsetNameException::throw$() {
	throw *this;
}

$Class* IllegalCharsetNameException::load$($String* name, bool initialize) {
	$loadClass(IllegalCharsetNameException, name, initialize, &_IllegalCharsetNameException_ClassInfo_, allocate$IllegalCharsetNameException);
	return class$;
}

$Class* IllegalCharsetNameException::class$ = nullptr;

		} // charset
	} // nio
} // java