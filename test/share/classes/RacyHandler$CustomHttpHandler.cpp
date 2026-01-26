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

$FieldInfo _RacyHandler$CustomHttpHandler_FieldInfo_[] = {
	{"this$0", "LRacyHandler;", nullptr, $FINAL | $SYNTHETIC, $field(RacyHandler$CustomHttpHandler, this$0)},
	{}
};

$MethodInfo _RacyHandler$CustomHttpHandler_MethodInfo_[] = {
	{"<init>", "(LRacyHandler;)V", nullptr, 0, $method(RacyHandler$CustomHttpHandler, init$, void, $RacyHandler*)},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(RacyHandler$CustomHttpHandler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
	{}
};

$InnerClassInfo _RacyHandler$CustomHttpHandler_InnerClassesInfo_[] = {
	{"RacyHandler$CustomHttpHandler", "RacyHandler", "CustomHttpHandler", 0},
	{}
};

$ClassInfo _RacyHandler$CustomHttpHandler_ClassInfo_ = {
	$ACC_SUPER,
	"RacyHandler$CustomHttpHandler",
	"java.net.URLStreamHandler",
	nullptr,
	_RacyHandler$CustomHttpHandler_FieldInfo_,
	_RacyHandler$CustomHttpHandler_MethodInfo_,
	nullptr,
	nullptr,
	_RacyHandler$CustomHttpHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RacyHandler"
};

$Object* allocate$RacyHandler$CustomHttpHandler($Class* clazz) {
	return $of($alloc(RacyHandler$CustomHttpHandler));
}

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
	$loadClass(RacyHandler$CustomHttpHandler, name, initialize, &_RacyHandler$CustomHttpHandler_ClassInfo_, allocate$RacyHandler$CustomHttpHandler);
	return class$;
}

$Class* RacyHandler$CustomHttpHandler::class$ = nullptr;