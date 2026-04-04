#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void InvalidObjectException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

InvalidObjectException::InvalidObjectException() {
}

InvalidObjectException::InvalidObjectException(const InvalidObjectException& e) : $ObjectStreamException(e) {
}

void InvalidObjectException::throw$() {
	throw *this;
}

$Class* InvalidObjectException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidObjectException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidObjectException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.InvalidObjectException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidObjectException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidObjectException);
	});
	return class$;
}

$Class* InvalidObjectException::class$ = nullptr;

	} // io
} // java