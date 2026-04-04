#include <java/io/SyncFailedException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void SyncFailedException::init$($String* desc) {
	$IOException::init$(desc);
}

SyncFailedException::SyncFailedException() {
}

SyncFailedException::SyncFailedException(const SyncFailedException& e) : $IOException(e) {
}

void SyncFailedException::throw$() {
	throw *this;
}

$Class* SyncFailedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SyncFailedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SyncFailedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.SyncFailedException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SyncFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SyncFailedException);
	});
	return class$;
}

$Class* SyncFailedException::class$ = nullptr;

	} // io
} // java