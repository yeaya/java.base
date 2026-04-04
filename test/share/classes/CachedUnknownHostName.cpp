#include <CachedUnknownHostName.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

void CachedUnknownHostName::init$() {
}

void CachedUnknownHostName::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($String, hostname, $new($String, "bogusHostName"_s));
	try {
		$InetAddress::getByName(hostname);
		$nc($System::err)->println($$str({"Missing java.net.UnknownHostException for host "_s, hostname}));
		$throwNew($Exception, "Missing java.net.UnknownHostException"_s);
	} catch ($UnknownHostException& e) {
		$nc($System::out)->println($$str({"Caught expected exception:"_s, e}));
	}
	try {
		$InetAddress::getByName(hostname);
		$nc($System::err)->println($$str({"Missing java.net.UnknownHostException for host "_s, hostname}));
		$throwNew($Exception, "Missing java.net.UnknownHostException"_s);
	} catch ($UnknownHostException& e) {
		$nc($System::out)->println($$str({"Caught expected exception:"_s, e}));
	}
	$nc($System::out)->println("Passed. OKAY"_s);
}

CachedUnknownHostName::CachedUnknownHostName() {
}

$Class* CachedUnknownHostName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CachedUnknownHostName, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CachedUnknownHostName, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CachedUnknownHostName",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CachedUnknownHostName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CachedUnknownHostName);
	});
	return class$;
}

$Class* CachedUnknownHostName::class$ = nullptr;