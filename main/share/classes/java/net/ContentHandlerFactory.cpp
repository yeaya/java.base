#include <java/net/ContentHandlerFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ContentHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;

namespace java {
	namespace net {

$MethodInfo _ContentHandlerFactory_MethodInfo_[] = {
	{"createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContentHandlerFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.ContentHandlerFactory",
	nullptr,
	nullptr,
	nullptr,
	_ContentHandlerFactory_MethodInfo_
};

$Object* allocate$ContentHandlerFactory($Class* clazz) {
	return $of($alloc(ContentHandlerFactory));
}

$Class* ContentHandlerFactory::load$($String* name, bool initialize) {
	$loadClass(ContentHandlerFactory, name, initialize, &_ContentHandlerFactory_ClassInfo_, allocate$ContentHandlerFactory);
	return class$;
}

$Class* ContentHandlerFactory::class$ = nullptr;

	} // net
} // java