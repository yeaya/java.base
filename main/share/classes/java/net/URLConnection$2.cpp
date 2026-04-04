#include <java/net/URLConnection$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/net/ContentHandler.h>
#include <java/net/ContentHandlerFactory.h>
#include <java/net/URLConnection.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $ContentHandler = ::java::net::ContentHandler;
using $ContentHandlerFactory = ::java::net::ContentHandlerFactory;
using $URLConnection = ::java::net::URLConnection;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace net {

void URLConnection$2::init$($URLConnection* this$0, $String* val$contentType) {
	$set(this, this$0, this$0);
	$set(this, val$contentType, val$contentType);
}

$Object* URLConnection$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
	$load($ContentHandlerFactory);
	$var($ServiceLoader, sl, $ServiceLoader::load($ContentHandlerFactory::class$, cl));
	$var($Iterator, iterator, $nc(sl)->iterator());
	$var($ContentHandler, handler, nullptr);
	while ($nc(iterator)->hasNext()) {
		$var($ContentHandlerFactory, f, nullptr);
		try {
			$assign(f, $cast($ContentHandlerFactory, iterator->next()));
		} catch ($ServiceConfigurationError& e) {
			if ($instanceOf($SecurityException, $(e->getCause()))) {
				continue;
			}
			$throw(e);
		}
		$assign(handler, $nc(f)->createContentHandler(this->val$contentType));
		if (handler != nullptr) {
			break;
		}
	}
	return handler;
}

URLConnection$2::URLConnection$2() {
}

$Class* URLConnection$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(URLConnection$2, this$0)},
		{"val$contentType", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLConnection$2, val$contentType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URLConnection;Ljava/lang/String;)V", nullptr, 0, $method(URLConnection$2, init$, void, $URLConnection*, $String*)},
		{"run", "()Ljava/net/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(URLConnection$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLConnection",
		"lookupContentHandlerViaProvider",
		"(Ljava/lang/String;)Ljava/net/ContentHandler;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLConnection$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLConnection$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ContentHandler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URLConnection"
	};
	$loadClass(URLConnection$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLConnection$2);
	});
	return class$;
}

$Class* URLConnection$2::class$ = nullptr;

	} // net
} // java