#include <java/nio/channels/FileLockInterruptionException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void FileLockInterruptionException::init$() {
	$IOException::init$();
}

FileLockInterruptionException::FileLockInterruptionException() {
}

FileLockInterruptionException::FileLockInterruptionException(const FileLockInterruptionException& e) : $IOException(e) {
}

void FileLockInterruptionException::throw$() {
	throw *this;
}

$Class* FileLockInterruptionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileLockInterruptionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileLockInterruptionException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.FileLockInterruptionException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileLockInterruptionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileLockInterruptionException);
	});
	return class$;
}

$Class* FileLockInterruptionException::class$ = nullptr;

		} // channels
	} // nio
} // java