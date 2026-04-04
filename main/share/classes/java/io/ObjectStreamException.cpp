#include <java/io/ObjectStreamException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectStreamException::init$($String* message) {
	$IOException::init$(message);
}

void ObjectStreamException::init$() {
	$IOException::init$();
}

ObjectStreamException::ObjectStreamException() {
}

ObjectStreamException::ObjectStreamException(const ObjectStreamException& e) : $IOException(e) {
}

void ObjectStreamException::throw$() {
	throw *this;
}

$Class* ObjectStreamException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectStreamException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ObjectStreamException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(ObjectStreamException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.io.ObjectStreamException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectStreamException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamException);
	});
	return class$;
}

$Class* ObjectStreamException::class$ = nullptr;

	} // io
} // java