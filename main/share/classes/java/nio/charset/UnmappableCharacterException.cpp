#include <java/nio/charset/UnmappableCharacterException.h>

#include <java/nio/charset/CharacterCodingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _UnmappableCharacterException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmappableCharacterException, serialVersionUID)},
	{"inputLength", "I", nullptr, $PRIVATE, $field(UnmappableCharacterException, inputLength)},
	{}
};

$MethodInfo _UnmappableCharacterException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(UnmappableCharacterException::*)(int32_t)>(&UnmappableCharacterException::init$))},
	{"getInputLength", "()I", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnmappableCharacterException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.UnmappableCharacterException",
	"java.nio.charset.CharacterCodingException",
	nullptr,
	_UnmappableCharacterException_FieldInfo_,
	_UnmappableCharacterException_MethodInfo_
};

$Object* allocate$UnmappableCharacterException($Class* clazz) {
	return $of($alloc(UnmappableCharacterException));
}

void UnmappableCharacterException::init$(int32_t inputLength) {
	$CharacterCodingException::init$();
	this->inputLength = inputLength;
}

int32_t UnmappableCharacterException::getInputLength() {
	return this->inputLength;
}

$String* UnmappableCharacterException::getMessage() {
	return $str({"Input length = "_s, $$str(this->inputLength)});
}

UnmappableCharacterException::UnmappableCharacterException() {
}

UnmappableCharacterException::UnmappableCharacterException(const UnmappableCharacterException& e) : $CharacterCodingException(e) {
}

void UnmappableCharacterException::throw$() {
	throw *this;
}

$Class* UnmappableCharacterException::load$($String* name, bool initialize) {
	$loadClass(UnmappableCharacterException, name, initialize, &_UnmappableCharacterException_ClassInfo_, allocate$UnmappableCharacterException);
	return class$;
}

$Class* UnmappableCharacterException::class$ = nullptr;

		} // charset
	} // nio
} // java