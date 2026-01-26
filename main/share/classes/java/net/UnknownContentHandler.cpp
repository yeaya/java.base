#include <java/net/UnknownContentHandler.h>

#include <java/io/InputStream.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;

namespace java {
	namespace net {

$FieldInfo _UnknownContentHandler_FieldInfo_[] = {
	{"INSTANCE", "Ljava/net/ContentHandler;", nullptr, $STATIC | $FINAL, $staticField(UnknownContentHandler, INSTANCE)},
	{}
};

$MethodInfo _UnknownContentHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(UnknownContentHandler, init$, void)},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownContentHandler, getContent, $Object*, $URLConnection*), "java.io.IOException"},
	{}
};

$ClassInfo _UnknownContentHandler_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.UnknownContentHandler",
	"java.net.ContentHandler",
	nullptr,
	_UnknownContentHandler_FieldInfo_,
	_UnknownContentHandler_MethodInfo_
};

$Object* allocate$UnknownContentHandler($Class* clazz) {
	return $of($alloc(UnknownContentHandler));
}

$ContentHandler* UnknownContentHandler::INSTANCE = nullptr;

void UnknownContentHandler::init$() {
	$ContentHandler::init$();
}

$Object* UnknownContentHandler::getContent($URLConnection* uc) {
	return $of($nc(uc)->getInputStream());
}

void clinit$UnknownContentHandler($Class* class$) {
	$assignStatic(UnknownContentHandler::INSTANCE, $new(UnknownContentHandler));
}

UnknownContentHandler::UnknownContentHandler() {
}

$Class* UnknownContentHandler::load$($String* name, bool initialize) {
	$loadClass(UnknownContentHandler, name, initialize, &_UnknownContentHandler_ClassInfo_, clinit$UnknownContentHandler, allocate$UnknownContentHandler);
	return class$;
}

$Class* UnknownContentHandler::class$ = nullptr;

	} // net
} // java