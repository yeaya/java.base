#include <NonOverridableHandlerFactory.h>
#include <NonOverridableHandlerFactory$NonOverridableHandler.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $NonOverridableHandlerFactory$NonOverridableHandler = ::NonOverridableHandlerFactory$NonOverridableHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void NonOverridableHandlerFactory::init$() {
}

$URLStreamHandler* NonOverridableHandlerFactory::createURLStreamHandler($String* protocol) {
	return $new($NonOverridableHandlerFactory$NonOverridableHandler);
}

void NonOverridableHandlerFactory::main($StringArray* args) {
	$init(NonOverridableHandlerFactory);
	$useLocalObjectStack();
	$URL::setURLStreamHandlerFactory($$new(NonOverridableHandlerFactory));
	{
		$var($StringArray, arr$, $new($StringArray, {
			"file"_s,
			"jrt"_s
		}));
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, protocol, arr$->get(i$));
			{
				$var($String, urlString, $str({protocol, ":///test/somefile"_s}));
				try {
					$$new($URL, urlString)->openConnection();
				} catch ($RuntimeException& r) {
					$throw(r);
				} catch ($Throwable& t) {
					$nc($System::out)->println($$str({"encountered: "_s, t, "(testing: "_s, urlString, ")"_s}));
				}
				$nc($System::out)->println($$str({"Default URLStreamHandler used for "_s, urlString}));
			}
		}
	}
}

NonOverridableHandlerFactory::NonOverridableHandlerFactory() {
}

$Class* NonOverridableHandlerFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonOverridableHandlerFactory, init$, void)},
		{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC, $virtualMethod(NonOverridableHandlerFactory, createURLStreamHandler, $URLStreamHandler*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonOverridableHandlerFactory, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOverridableHandlerFactory$NonOverridableHandler", "NonOverridableHandlerFactory", "NonOverridableHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonOverridableHandlerFactory",
		"java.lang.Object",
		"java.net.URLStreamHandlerFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NonOverridableHandlerFactory$NonOverridableHandler"
	};
	$loadClass(NonOverridableHandlerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonOverridableHandlerFactory);
	});
	return class$;
}

$Class* NonOverridableHandlerFactory::class$ = nullptr;