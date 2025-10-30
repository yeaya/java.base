#include <java/nio/charset/CharacterCodingException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CharacterCodingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharacterCodingException, serialVersionUID)},
	{}
};

$MethodInfo _CharacterCodingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharacterCodingException::*)()>(&CharacterCodingException::init$))},
	{}
};

$ClassInfo _CharacterCodingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.CharacterCodingException",
	"java.io.IOException",
	nullptr,
	_CharacterCodingException_FieldInfo_,
	_CharacterCodingException_MethodInfo_
};

$Object* allocate$CharacterCodingException($Class* clazz) {
	return $of($alloc(CharacterCodingException));
}

void CharacterCodingException::init$() {
	$IOException::init$();
}

CharacterCodingException::CharacterCodingException() {
}

CharacterCodingException::CharacterCodingException(const CharacterCodingException& e) : $IOException(e) {
}

void CharacterCodingException::throw$() {
	throw *this;
}

$Class* CharacterCodingException::load$($String* name, bool initialize) {
	$loadClass(CharacterCodingException, name, initialize, &_CharacterCodingException_ClassInfo_, allocate$CharacterCodingException);
	return class$;
}

$Class* CharacterCodingException::class$ = nullptr;

		} // charset
	} // nio
} // java