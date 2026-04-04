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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmappableCharacterException, serialVersionUID)},
		{"inputLength", "I", nullptr, $PRIVATE, $field(UnmappableCharacterException, inputLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(UnmappableCharacterException, init$, void, int32_t)},
		{"getInputLength", "()I", nullptr, $PUBLIC, $virtualMethod(UnmappableCharacterException, getInputLength, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnmappableCharacterException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.UnmappableCharacterException",
		"java.nio.charset.CharacterCodingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnmappableCharacterException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmappableCharacterException);
	});
	return class$;
}

$Class* UnmappableCharacterException::class$ = nullptr;

		} // charset
	} // nio
} // java