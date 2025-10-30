#include <BadDottedIPAddress.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _BadDottedIPAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BadDottedIPAddress::*)()>(&BadDottedIPAddress::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BadDottedIPAddress::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _BadDottedIPAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BadDottedIPAddress",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BadDottedIPAddress_MethodInfo_
};

$Object* allocate$BadDottedIPAddress($Class* clazz) {
	return $of($alloc(BadDottedIPAddress));
}

void BadDottedIPAddress::init$() {
}

void BadDottedIPAddress::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(BadDottedIPAddress, name, initialize, &_BadDottedIPAddress_ClassInfo_, allocate$BadDottedIPAddress);
	return class$;
}

$Class* BadDottedIPAddress::class$ = nullptr;