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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharacterCodingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharacterCodingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.CharacterCodingException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharacterCodingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterCodingException);
	});
	return class$;
}

$Class* CharacterCodingException::class$ = nullptr;

		} // charset
	} // nio
} // java