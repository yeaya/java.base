#include <java/net/HttpCookie$12.h>

#include <java/net/HttpCookie.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $List = ::java::util::List;

namespace java {
	namespace net {

$MethodInfo _HttpCookie$12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HttpCookie$12, init$, void)},
	{"header", "(Ljava/net/HttpCookie;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpCookie$12, header, $String*, $HttpCookie*)},
	{"parse", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC, $virtualMethod(HttpCookie$12, parse, $List*, $String*)},
	{}
};

$EnclosingMethodInfo _HttpCookie$12_EnclosingMethodInfo_ = {
	"java.net.HttpCookie",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpCookie$12_InnerClassesInfo_[] = {
	{"java.net.HttpCookie$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpCookie$12_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpCookie$12",
	"java.lang.Object",
	"jdk.internal.access.JavaNetHttpCookieAccess",
	nullptr,
	_HttpCookie$12_MethodInfo_,
	nullptr,
	&_HttpCookie$12_EnclosingMethodInfo_,
	_HttpCookie$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpCookie"
};

$Object* allocate$HttpCookie$12($Class* clazz) {
	return $of($alloc(HttpCookie$12));
}

void HttpCookie$12::init$() {
}

$List* HttpCookie$12::parse($String* header) {
	return $HttpCookie::parse(header, true);
}

$String* HttpCookie$12::header($HttpCookie* cookie) {
	return $nc(cookie)->header$;
}

HttpCookie$12::HttpCookie$12() {
}

$Class* HttpCookie$12::load$($String* name, bool initialize) {
	$loadClass(HttpCookie$12, name, initialize, &_HttpCookie$12_ClassInfo_, allocate$HttpCookie$12);
	return class$;
}

$Class* HttpCookie$12::class$ = nullptr;

	} // net
} // java