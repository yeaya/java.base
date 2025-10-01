#include <java/net/URL$DefaultFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Constructor = ::java::lang::reflect::Constructor;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $1Handler = ::sun::net::www::protocol::file::Handler;
using $2Handler = ::sun::net::www::protocol::jar::Handler;
using $Handler = ::sun::net::www::protocol::jrt::Handler;

namespace java {
	namespace net {

$FieldInfo _URL$DefaultFactory_FieldInfo_[] = {
	{"PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(URL$DefaultFactory, PREFIX)},
	{}
};

$MethodInfo _URL$DefaultFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(URL$DefaultFactory::*)()>(&URL$DefaultFactory::init$))},
	{"createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _URL$DefaultFactory_InnerClassesInfo_[] = {
	{"java.net.URL$DefaultFactory", "java.net.URL", "DefaultFactory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _URL$DefaultFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URL$DefaultFactory",
	"java.lang.Object",
	"java.net.URLStreamHandlerFactory",
	_URL$DefaultFactory_FieldInfo_,
	_URL$DefaultFactory_MethodInfo_,
	nullptr,
	nullptr,
	_URL$DefaultFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URL"
};

$Object* allocate$URL$DefaultFactory($Class* clazz) {
	return $of($alloc(URL$DefaultFactory));
}

$String* URL$DefaultFactory::PREFIX = nullptr;

void URL$DefaultFactory::init$() {
}

$URLStreamHandler* URL$DefaultFactory::createURLStreamHandler($String* protocol) {
	$beforeCallerSensitive();
	{
		$var($String, s49437$, protocol);
		int32_t tmp49437$ = -1;
		switch ($nc(s49437$)->hashCode()) {
		case 0x002FF57C:
			{
				if (s49437$->equals("file"_s)) {
					tmp49437$ = 0;
				}
				break;
			}
		case 0x00019A1B:
			{
				if (s49437$->equals("jar"_s)) {
					tmp49437$ = 1;
				}
				break;
			}
		case 0x00019C2C:
			{
				if (s49437$->equals("jrt"_s)) {
					tmp49437$ = 2;
				}
				break;
			}
		}
		switch (tmp49437$) {
		case 0:
			{
				return $new($1Handler);
			}
		case 1:
			{
				return $new($2Handler);
			}
		case 2:
			{
				return $new($Handler);
			}
		}
	}
	$var($String, name, $str({URL$DefaultFactory::PREFIX, protocol, ".Handler"_s}));
	try {
		$var($Object, o, $nc($($Class::forName(name)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		return $cast($URLStreamHandler, o);
	} catch ($Exception&) {
		$catch();
	}
	return nullptr;
}

void clinit$URL$DefaultFactory($Class* class$) {
	$assignStatic(URL$DefaultFactory::PREFIX, "sun.net.www.protocol."_s);
}

URL$DefaultFactory::URL$DefaultFactory() {
}

$Class* URL$DefaultFactory::load$($String* name, bool initialize) {
	$loadClass(URL$DefaultFactory, name, initialize, &_URL$DefaultFactory_ClassInfo_, clinit$URL$DefaultFactory, allocate$URL$DefaultFactory);
	return class$;
}

$Class* URL$DefaultFactory::class$ = nullptr;

	} // net
} // java