#include <java/nio/file/Paths.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace nio {
		namespace file {

void Paths::init$() {
}

$Path* Paths::get($String* first, $StringArray* more) {
	return $Path::of(first, more);
}

$Path* Paths::get($URI* uri) {
	return $Path::of(uri);
}

Paths::Paths() {
}

$Class* Paths::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Paths, init$, void)},
		{"get", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Paths, get, $Path*, $String*, $StringArray*)},
		{"get", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $staticMethod(Paths, get, $Path*, $URI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.nio.file.Paths",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Paths, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Paths);
	});
	return class$;
}

$Class* Paths::class$ = nullptr;

		} // file
	} // nio
} // java