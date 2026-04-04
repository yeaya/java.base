#include <java/nio/charset/MalformedInputException.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;

namespace java {
	namespace nio {
		namespace charset {

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

MalformedInputException::MalformedInputException(const MalformedInputException& e) : $CharacterCodingException(e) {
}

void MalformedInputException::throw$() {
	throw *this;
}

$Class* MalformedInputException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedInputException, serialVersionUID)},
		{"inputLength", "I", nullptr, $PRIVATE, $field(MalformedInputException, inputLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MalformedInputException, init$, void, int32_t)},
		{"getInputLength", "()I", nullptr, $PUBLIC, $virtualMethod(MalformedInputException, getInputLength, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedInputException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.MalformedInputException",
		"java.nio.charset.CharacterCodingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedInputException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedInputException);
	});
	return class$;
}

$Class* MalformedInputException::class$ = nullptr;

		} // charset
	} // nio
} // java