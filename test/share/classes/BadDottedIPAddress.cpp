#include <BadDottedIPAddress.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

void BadDottedIPAddress::init$() {
}

void BadDottedIPAddress::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, host, "999.999.999.999"_s);
	bool exc_thrown = false;
	try {
		$var($InetAddress, ia, $InetAddress::getByName(host));
	} catch ($UnknownHostException& e) {
		exc_thrown = true;
	}
	if (!exc_thrown) {
		$throwNew($Exception, $$str({"UnknownHostException was not thrown for: "_s, host}));
	}
	$assign(host, "[]"_s);
	exc_thrown = false;
	try {
		$var($InetAddress, ia, $InetAddress::getByName(host));
	} catch ($UnknownHostException& e) {
		exc_thrown = true;
	} catch ($Exception& e) {
	}
	if (!exc_thrown) {
		$throwNew($Exception, $$str({"UnknownHostException was not thrown for: "_s, host}));
	}
	$assign(host, "[127.0.0.1]"_s);
	exc_thrown = false;
	try {
		$var($InetAddress, ia, $InetAddress::getByName(host));
	} catch ($UnknownHostException& e) {
		exc_thrown = true;
	} catch ($Exception& e) {
	}
	if (!exc_thrown) {
		$throwNew($Exception, $$str({"UnknownHostException was not thrown for: "_s, host}));
	}
	$assign(host, "[localhost]"_s);
	exc_thrown = false;
	try {
		$var($InetAddress, ia, $InetAddress::getByName(host));
	} catch ($UnknownHostException& e) {
		exc_thrown = true;
	} catch ($Exception& e) {
	}
	if (!exc_thrown) {
		$throwNew($Exception, $$str({"UnknownHostException was not thrown for: "_s, host}));
	}
}

BadDottedIPAddress::BadDottedIPAddress() {
}

$Class* BadDottedIPAddress::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BadDottedIPAddress, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BadDottedIPAddress, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BadDottedIPAddress",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BadDottedIPAddress, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadDottedIPAddress);
	});
	return class$;
}

$Class* BadDottedIPAddress::class$ = nullptr;