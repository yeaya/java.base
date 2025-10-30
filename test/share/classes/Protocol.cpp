#include <Protocol.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _Protocol_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Protocol::*)()>(&Protocol::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Protocol::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Protocol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Protocol",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Protocol_MethodInfo_
};

$Object* allocate$Protocol($Class* clazz) {
	return $of($alloc(Protocol));
}

void Protocol::init$() {
}

void Protocol::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, "file://bogus/index.html"_s));
	$var($URL, url2, $new($URL, url, "here.pl?notaspec:atall"_s));
}

Protocol::Protocol() {
}

$Class* Protocol::load$($String* name, bool initialize) {
	$loadClass(Protocol, name, initialize, &_Protocol_ClassInfo_, allocate$Protocol);
	return class$;
}

$Class* Protocol::class$ = nullptr;