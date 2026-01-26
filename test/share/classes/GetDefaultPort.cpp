#include <GetDefaultPort.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$MethodInfo _GetDefaultPort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetDefaultPort, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetDefaultPort, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _GetDefaultPort_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetDefaultPort",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetDefaultPort_MethodInfo_
};

$Object* allocate$GetDefaultPort($Class* clazz) {
	return $of($alloc(GetDefaultPort));
}

void GetDefaultPort::init$() {
}

void GetDefaultPort::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t p = 0;
	$var($URL, url, $new($URL, "http://www.sun.com"_s));
	if ((p = url->getDefaultPort()) != 80) {
		$throwNew($Exception, $$str({"getDefaultPort returned wrong value: "_s, $$str(p)}));
	}
}

GetDefaultPort::GetDefaultPort() {
}

$Class* GetDefaultPort::load$($String* name, bool initialize) {
	$loadClass(GetDefaultPort, name, initialize, &_GetDefaultPort_ClassInfo_, allocate$GetDefaultPort);
	return class$;
}

$Class* GetDefaultPort::class$ = nullptr;