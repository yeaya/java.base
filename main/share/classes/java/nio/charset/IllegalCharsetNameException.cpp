#include <java/nio/charset/IllegalCharsetNameException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

void IllegalCharsetNameException::init$($String* charsetName) {
	$IllegalArgumentException::init$($($String::valueOf(charsetName)));
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalCharsetNameException, serialVersionUID)},
		{"charsetName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IllegalCharsetNameException, charsetName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalCharsetNameException, init$, void, $String*)},
		{"getCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalCharsetNameException, getCharsetName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.IllegalCharsetNameException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalCharsetNameException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalCharsetNameException);
	});
	return class$;
}

$Class* IllegalCharsetNameException::class$ = nullptr;

		} // charset
	} // nio
} // java