#include <B6529759$a.h>

#include <B6529759.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $B6529759 = ::B6529759;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

$MethodInfo _B6529759$a_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B6529759$a::*)()>(&B6529759$a::init$))},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED},
	{"parseURL", "(Ljava/net/URL;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _B6529759$a_InnerClassesInfo_[] = {
	{"B6529759$a", "B6529759", "a", $STATIC},
	{}
};

$ClassInfo _B6529759$a_ClassInfo_ = {
	$ACC_SUPER,
	"B6529759$a",
	"java.net.URLStreamHandler",
	nullptr,
	nullptr,
	_B6529759$a_MethodInfo_,
	nullptr,
	nullptr,
	_B6529759$a_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B6529759"
};

$Object* allocate$B6529759$a($Class* clazz) {
	return $of($alloc(B6529759$a));
}

void B6529759$a::init$() {
	$URLStreamHandler::init$();
}

$URLConnection* B6529759$a::openConnection($URL* u) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void B6529759$a::parseURL($URL* u, $String* spec, int32_t start, int32_t limit) {
	$throwNew($RuntimeException);
}

B6529759$a::B6529759$a() {
}

$Class* B6529759$a::load$($String* name, bool initialize) {
	$loadClass(B6529759$a, name, initialize, &_B6529759$a_ClassInfo_, allocate$B6529759$a);
	return class$;
}

$Class* B6529759$a::class$ = nullptr;