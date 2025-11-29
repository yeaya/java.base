#include <HandlerLoop.h>

#include <HandlerLoop$HandlerFactory.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <jcpp.h>

using $HandlerLoop$HandlerFactory = ::HandlerLoop$HandlerFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;

$MethodInfo _HandlerLoop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HandlerLoop::*)()>(&HandlerLoop::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HandlerLoop::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HandlerLoop_InnerClassesInfo_[] = {
	{"HandlerLoop$Dummy", "HandlerLoop", "Dummy", $PRIVATE | $STATIC},
	{"HandlerLoop$HandlerFactory", "HandlerLoop", "HandlerFactory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HandlerLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HandlerLoop",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HandlerLoop_MethodInfo_,
	nullptr,
	nullptr,
	_HandlerLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HandlerLoop$Dummy,HandlerLoop$HandlerFactory"
};

$Object* allocate$HandlerLoop($Class* clazz) {
	return $of($alloc(HandlerLoop));
}

void HandlerLoop::init$() {
}

void HandlerLoop::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$URL::setURLStreamHandlerFactory($$new($HandlerLoop$HandlerFactory, "sun.net.www.protocol"_s));
	$var($URL, url, $new($URL, "file:///bogus/index.html"_s));
	$nc($System::out)->println($$str({"url = "_s, url}));
	url->openConnection();
}

HandlerLoop::HandlerLoop() {
}

$Class* HandlerLoop::load$($String* name, bool initialize) {
	$loadClass(HandlerLoop, name, initialize, &_HandlerLoop_ClassInfo_, allocate$HandlerLoop);
	return class$;
}

$Class* HandlerLoop::class$ = nullptr;