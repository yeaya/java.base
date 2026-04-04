#include <java/net/URI$1.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace java {
	namespace net {

void URI$1::init$() {
}

$URI* URI$1::create($String* scheme, $String* path) {
	return $new($URI, scheme, path);
}

URI$1::URI$1() {
}

$Class* URI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(URI$1, init$, void)},
		{"create", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(URI$1, create, $URI*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URI$1",
		"java.lang.Object",
		"jdk.internal.access.JavaNetUriAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URI"
	};
	$loadClass(URI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URI$1);
	});
	return class$;
}

$Class* URI$1::class$ = nullptr;

	} // net
} // java