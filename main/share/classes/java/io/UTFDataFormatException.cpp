#include <java/io/UTFDataFormatException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void UTFDataFormatException::init$() {
	$IOException::init$();
}

void UTFDataFormatException::init$($String* s) {
	$IOException::init$(s);
}

UTFDataFormatException::UTFDataFormatException() {
}

UTFDataFormatException::UTFDataFormatException(const UTFDataFormatException& e) : $IOException(e) {
}

void UTFDataFormatException::throw$() {
	throw *this;
}

$Class* UTFDataFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTFDataFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UTFDataFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UTFDataFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.UTFDataFormatException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UTFDataFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTFDataFormatException);
	});
	return class$;
}

$Class* UTFDataFormatException::class$ = nullptr;

	} // io
} // java