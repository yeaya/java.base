#include <java/io/NotSerializableException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void NotSerializableException::init$($String* classname) {
	$ObjectStreamException::init$(classname);
}

void NotSerializableException::init$() {
	$ObjectStreamException::init$();
}

NotSerializableException::NotSerializableException() {
}

NotSerializableException::NotSerializableException(const NotSerializableException& e) : $ObjectStreamException(e) {
}

void NotSerializableException::throw$() {
	throw *this;
}

$Class* NotSerializableException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotSerializableException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotSerializableException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotSerializableException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.NotSerializableException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotSerializableException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotSerializableException);
	});
	return class$;
}

$Class* NotSerializableException::class$ = nullptr;

	} // io
} // java