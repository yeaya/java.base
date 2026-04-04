#include <java/io/StreamCorruptedException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void StreamCorruptedException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

void StreamCorruptedException::init$() {
	$ObjectStreamException::init$();
}

StreamCorruptedException::StreamCorruptedException() {
}

StreamCorruptedException::StreamCorruptedException(const StreamCorruptedException& e) : $ObjectStreamException(e) {
}

void StreamCorruptedException::throw$() {
	throw *this;
}

$Class* StreamCorruptedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamCorruptedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StreamCorruptedException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(StreamCorruptedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.StreamCorruptedException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamCorruptedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamCorruptedException);
	});
	return class$;
}

$Class* StreamCorruptedException::class$ = nullptr;

	} // io
} // java