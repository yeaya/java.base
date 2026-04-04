#include <java/io/CharConversionException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharConversionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharConversionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CharConversionException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.CharConversionException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharConversionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharConversionException);
	});
	return class$;
}

$Class* CharConversionException::class$ = nullptr;

	} // io
} // java