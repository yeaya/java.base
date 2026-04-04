#include <RacyHandler$CustomHttpHandler.h>
#include <RacyHandler.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $RacyHandler = ::RacyHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void RacyHandler$CustomHttpHandler::init$($RacyHandler* this$0) {
	$set(this, this$0, this$0);
	$URLStreamHandler::init$();
}

$URLConnection* RacyHandler$CustomHttpHandler::openConnection($URL* u) {
	return nullptr;
}

RacyHandler$CustomHttpHandler::RacyHandler$CustomHttpHandler() {
}

$Class* RacyHandler$CustomHttpHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LRacyHandler;", nullptr, $FINAL | $SYNTHETIC, $field(RacyHandler$CustomHttpHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LRacyHandler;)V", nullptr, 0, $method(RacyHandler$CustomHttpHandler, init$, void, $RacyHandler*)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(RacyHandler$CustomHttpHandler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RacyHandler$CustomHttpHandler", "RacyHandler", "CustomHttpHandler", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RacyHandler$CustomHttpHandler",
		"java.net.URLStreamHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RacyHandler"
	};
	$loadClass(RacyHandler$CustomHttpHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RacyHandler$CustomHttpHandler);
	});
	return class$;
}

$Class* RacyHandler$CustomHttpHandler::class$ = nullptr;