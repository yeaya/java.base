#include <java/net/URL$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $JavaNetURLAccess = ::jdk::internal::access::JavaNetURLAccess;

namespace java {
	namespace net {

$MethodInfo _URL$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(URL$3::*)()>(&URL$3::init$))},
	{"getHandler", "(Ljava/net/URL;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URL$3_EnclosingMethodInfo_ = {
	"java.net.URL",
	nullptr,
	nullptr
};

$InnerClassInfo _URL$3_InnerClassesInfo_[] = {
	{"java.net.URL$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URL$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URL$3",
	"java.lang.Object",
	"jdk.internal.access.JavaNetURLAccess",
	nullptr,
	_URL$3_MethodInfo_,
	nullptr,
	&_URL$3_EnclosingMethodInfo_,
	_URL$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URL"
};

$Object* allocate$URL$3($Class* clazz) {
	return $of($alloc(URL$3));
}

void URL$3::init$() {
}

$URLStreamHandler* URL$3::getHandler($URL* u) {
	return $nc(u)->handler;
}

URL$3::URL$3() {
}

$Class* URL$3::load$($String* name, bool initialize) {
	$loadClass(URL$3, name, initialize, &_URL$3_ClassInfo_, allocate$URL$3);
	return class$;
}

$Class* URL$3::class$ = nullptr;

	} // net
} // java