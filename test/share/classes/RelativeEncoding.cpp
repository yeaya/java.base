#include <RelativeEncoding.h>
#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;

void RelativeEncoding::init$() {
}

void RelativeEncoding::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($URI, one, $new($URI, "Relative%20with%20spaces"_s));
		$var($URI, two, ($$new($File, "/tmp/dir with spaces/File with spaces"_s))->toURI());
		$var($URI, three, $nc(two)->resolve(one));
		if (!$$nc($nc(three)->getSchemeSpecificPart())->equals($($nc(three)->getPath()))) {
			$throwNew($RuntimeException, "Bad encoding on URI.resolve"_s);
		}
	} catch ($URISyntaxException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected exception: "_s, e}));
	}
}

RelativeEncoding::RelativeEncoding() {
}

$Class* RelativeEncoding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RelativeEncoding, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RelativeEncoding, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RelativeEncoding",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RelativeEncoding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelativeEncoding);
	});
	return class$;
}

$Class* RelativeEncoding::class$ = nullptr;