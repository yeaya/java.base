#include <java/net/URL$DefaultFactory.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <sun/net/www/protocol/file/Handler.h>
#include <sun/net/www/protocol/jar/Handler.h>
#include <sun/net/www/protocol/jrt/Handler.h>
#include <jcpp.h>

#undef PREFIX

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Handler = ::sun::net::www::protocol::file::Handler;
using $1Handler = ::sun::net::www::protocol::jar::Handler;
using $2Handler = ::sun::net::www::protocol::jrt::Handler;

namespace java {
	namespace net {

$String* URL$DefaultFactory::PREFIX = nullptr;

void URL$DefaultFactory::init$() {
}

$URLStreamHandler* URL$DefaultFactory::createURLStreamHandler($String* protocol) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($String, s49437$, protocol);
		int32_t tmp49437$ = -1;
		switch ($nc(s49437$)->hashCode()) {
		case 0x002ff57c:
			if (s49437$->equals("file"_s)) {
				tmp49437$ = 0;
			}
			break;
		case 0x00019a1b:
			if (s49437$->equals("jar"_s)) {
				tmp49437$ = 1;
			}
			break;
		case 0x00019c2c:
			if (s49437$->equals("jrt"_s)) {
				tmp49437$ = 2;
			}
			break;
		}
		switch (tmp49437$) {
		case 0:
			return $new($Handler);
		case 1:
			return $new($1Handler);
		case 2:
			return $new($2Handler);
		}
	}
	$var($String, name, $str({URL$DefaultFactory::PREFIX, protocol, ".Handler"_s}));
	try {
		$var($Object, o, $$nc($Class::forName(name)->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0)));
		return $cast($URLStreamHandler, o);
	} catch ($Exception& e) {
	}
	return nullptr;
}

void URL$DefaultFactory::clinit$($Class* clazz) {
	$assignStatic(URL$DefaultFactory::PREFIX, "sun.net.www.protocol."_s);
}

URL$DefaultFactory::URL$DefaultFactory() {
}

$Class* URL$DefaultFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(URL$DefaultFactory, PREFIX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(URL$DefaultFactory, init$, void)},
		{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC, $virtualMethod(URL$DefaultFactory, createURLStreamHandler, $URLStreamHandler*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URL$DefaultFactory", "java.net.URL", "DefaultFactory", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URL$DefaultFactory",
		"java.lang.Object",
		"java.net.URLStreamHandlerFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URL"
	};
	$loadClass(URL$DefaultFactory, name, initialize, &classInfo$$, URL$DefaultFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(URL$DefaultFactory);
	});
	return class$;
}

$Class* URL$DefaultFactory::class$ = nullptr;

	} // net
} // java