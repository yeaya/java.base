#include <java/io/NotActiveException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void NotActiveException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

void NotActiveException::init$() {
	$ObjectStreamException::init$();
}

NotActiveException::NotActiveException() {
}

NotActiveException::NotActiveException(const NotActiveException& e) : $ObjectStreamException(e) {
}

void NotActiveException::throw$() {
	throw *this;
}

$Class* NotActiveException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotActiveException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotActiveException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotActiveException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.NotActiveException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotActiveException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotActiveException);
	});
	return class$;
}

$Class* NotActiveException::class$ = nullptr;

	} // io
} // java