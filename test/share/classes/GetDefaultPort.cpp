#include <GetDefaultPort.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

void GetDefaultPort::init$() {
}

void GetDefaultPort::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t p = 0;
	$var($URL, url, $new($URL, "http://www.sun.com"_s));
	if ((p = url->getDefaultPort()) != 80) {
		$throwNew($Exception, $$str({"getDefaultPort returned wrong value: "_s, $$str(p)}));
	}
}

GetDefaultPort::GetDefaultPort() {
}

$Class* GetDefaultPort::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetDefaultPort, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetDefaultPort, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetDefaultPort",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetDefaultPort, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetDefaultPort);
	});
	return class$;
}

$Class* GetDefaultPort::class$ = nullptr;