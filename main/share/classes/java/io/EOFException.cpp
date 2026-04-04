#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void EOFException::init$() {
	$IOException::init$();
}

void EOFException::init$($String* s) {
	$IOException::init$(s);
}

EOFException::EOFException() {
}

EOFException::EOFException(const EOFException& e) : $IOException(e) {
}

void EOFException::throw$() {
	throw *this;
}

$Class* EOFException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EOFException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EOFException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EOFException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.EOFException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EOFException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EOFException);
	});
	return class$;
}

$Class* EOFException::class$ = nullptr;

	} // io
} // java