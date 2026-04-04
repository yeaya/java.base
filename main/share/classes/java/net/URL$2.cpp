#include <java/net/URL$2.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/net/spi/URLStreamHandlerProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerProvider = ::java::net::spi::URLStreamHandlerProvider;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace net {

void URL$2::init$($String* val$protocol) {
	$set(this, val$protocol, val$protocol);
}

$Object* URL$2::run() {
	$useLocalObjectStack();
	$var($Iterator, itr, $URL::providers());
	while ($nc(itr)->hasNext()) {
		$var($URLStreamHandlerProvider, f, $cast($URLStreamHandlerProvider, itr->next()));
		$var($URLStreamHandler, h, $nc(f)->createURLStreamHandler(this->val$protocol));
		if (h != nullptr) {
			return h;
		}
	}
	return nullptr;
}

URL$2::URL$2() {
}

$Class* URL$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$protocol", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URL$2, val$protocol)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(URL$2, init$, void, $String*)},
		{"run", "()Ljava/net/URLStreamHandler;", nullptr, $PUBLIC, $virtualMethod(URL$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URL",
		"lookupViaProviders",
		"(Ljava/lang/String;)Ljava/net/URLStreamHandler;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URL$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URL$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLStreamHandler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URL"
	};
	$loadClass(URL$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URL$2);
	});
	return class$;
}

$Class* URL$2::class$ = nullptr;

	} // net
} // java