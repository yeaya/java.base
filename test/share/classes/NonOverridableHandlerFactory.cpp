#include <NonOverridableHandlerFactory.h>

#include <NonOverridableHandlerFactory$NonOverridableHandler.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <jcpp.h>

using $NonOverridableHandlerFactory$NonOverridableHandler = ::NonOverridableHandlerFactory$NonOverridableHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;

$MethodInfo _NonOverridableHandlerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonOverridableHandlerFactory::*)()>(&NonOverridableHandlerFactory::init$))},
	{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NonOverridableHandlerFactory::main))},
	{}
};

$InnerClassInfo _NonOverridableHandlerFactory_InnerClassesInfo_[] = {
	{"NonOverridableHandlerFactory$NonOverridableHandler", "NonOverridableHandlerFactory", "NonOverridableHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NonOverridableHandlerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonOverridableHandlerFactory",
	"java.lang.Object",
	"java.net.URLStreamHandlerFactory",
	nullptr,
	_NonOverridableHandlerFactory_MethodInfo_,
	nullptr,
	nullptr,
	_NonOverridableHandlerFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NonOverridableHandlerFactory$NonOverridableHandler"
};

$Object* allocate$NonOverridableHandlerFactory($Class* clazz) {
	return $of($alloc(NonOverridableHandlerFactory));
}

void NonOverridableHandlerFactory::init$() {
}

$URLStreamHandler* NonOverridableHandlerFactory::createURLStreamHandler($String* protocol) {
	return $new($NonOverridableHandlerFactory$NonOverridableHandler);
}

void NonOverridableHandlerFactory::main($StringArray* args) {
	$init(NonOverridableHandlerFactory);
	$useLocalCurrentObjectStackCache();
	$URL::setURLStreamHandlerFactory($$new(NonOverridableHandlerFactory));
	{
		$var($StringArray, arr$, $new($StringArray, {
			"file"_s,
			"jrt"_s
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
	$loadClass(NonOverridableHandlerFactory, name, initialize, &_NonOverridableHandlerFactory_ClassInfo_, allocate$NonOverridableHandlerFactory);
	return class$;
}

$Class* NonOverridableHandlerFactory::class$ = nullptr;