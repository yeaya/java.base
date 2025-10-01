#include <java/nio/charset/MalformedInputException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _MalformedInputException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedInputException, serialVersionUID)},
	{"inputLength", "I", nullptr, $PRIVATE, $field(MalformedInputException, inputLength)},
	{}
};

$MethodInfo _MalformedInputException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedInputException::*)(int32_t)>(&MalformedInputException::init$))},
	{"getInputLength", "()I", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MalformedInputException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.MalformedInputException",
	"java.nio.charset.CharacterCodingException",
	nullptr,
	_MalformedInputException_FieldInfo_,
	_MalformedInputException_MethodInfo_
};

$Object* allocate$MalformedInputException($Class* clazz) {
	return $of($alloc(MalformedInputException));
}

void MalformedInputException::init$(int32_t inputLength) {
	$CharacterCodingException::init$();
	this->inputLength = inputLength;
}

int32_t MalformedInputException::getInputLength() {
	return this->inputLength;
}

$String* MalformedInputException::getMessage() {
	return $str({"Input length = "_s, $$str(this->inputLength)});
}

MalformedInputException::MalformedInputException() {
}

MalformedInputException::MalformedInputException(const MalformedInputException& e) {
}

MalformedInputException MalformedInputException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MalformedInputException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MalformedInputException::load$($String* name, bool initialize) {
	$loadClass(MalformedInputException, name, initialize, &_MalformedInputException_ClassInfo_, allocate$MalformedInputException);
	return class$;
}

$Class* MalformedInputException::class$ = nullptr;

		} // charset
	} // nio
} // java