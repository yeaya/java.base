#include <SpecifyHandler.h>

#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

$MethodInfo _SpecifyHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpecifyHandler::*)()>(&SpecifyHandler::init$))},
	{"getFileHandler", "()Ljava/net/URLStreamHandler;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLStreamHandler*(*)()>(&SpecifyHandler::getFileHandler)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SpecifyHandler::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SpecifyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SpecifyHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SpecifyHandler_MethodInfo_
};

$Object* allocate$SpecifyHandler($Class* clazz) {
	return $of($alloc(SpecifyHandler));
}

void SpecifyHandler::init$() {
}

void SpecifyHandler::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URLStreamHandler, handler, getFileHandler());
	$var($URL, url1, $new($URL, "file"_s, ""_s, -1, "/bogus/index.html"_s, handler));
	$var($URL, url2, $new($URL, ($URL*)nullptr, "file://bogus.index.html"_s, handler));
}

$URLStreamHandler* SpecifyHandler::getFileHandler() {
	$load(SpecifyHandler);
	$beforeCallerSensitive();
	$Class* c = $Class::forName("sun.net.www.protocol.file.Handler"_s);
	return $cast($URLStreamHandler, $nc(c)->newInstance());
}

SpecifyHandler::SpecifyHandler() {
}

$Class* SpecifyHandler::load$($String* name, bool initialize) {
	$loadClass(SpecifyHandler, name, initialize, &_SpecifyHandler_ClassInfo_, allocate$SpecifyHandler);
	return class$;
}

$Class* SpecifyHandler::class$ = nullptr;