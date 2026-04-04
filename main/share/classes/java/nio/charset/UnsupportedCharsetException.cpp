#include <java/nio/charset/UnsupportedCharsetException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

void UnsupportedCharsetException::init$($String* charsetName) {
	$IllegalArgumentException::init$($($String::valueOf(charsetName)));
	$set(this, charsetName, charsetName);
}

$String* UnsupportedCharsetException::getCharsetName() {
	return this->charsetName;
}

UnsupportedCharsetException::UnsupportedCharsetException() {
}

UnsupportedCharsetException::UnsupportedCharsetException(const UnsupportedCharsetException& e) : $IllegalArgumentException(e) {
}

void UnsupportedCharsetException::throw$() {
	throw *this;
}

$Class* UnsupportedCharsetException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedCharsetException, serialVersionUID)},
		{"charsetName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnsupportedCharsetException, charsetName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedCharsetException, init$, void, $String*)},
		{"getCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnsupportedCharsetException, getCharsetName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.UnsupportedCharsetException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedCharsetException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedCharsetException);
	});
	return class$;
}

$Class* UnsupportedCharsetException::class$ = nullptr;

		} // charset
	} // nio
} // java