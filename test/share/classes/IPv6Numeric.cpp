#include <IPv6Numeric.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _IPv6Numeric_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IPv6Numeric, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IPv6Numeric, main, void, $StringArray*)},
	{}
};

$ClassInfo _IPv6Numeric_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IPv6Numeric",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IPv6Numeric_MethodInfo_
};

$Object* allocate$IPv6Numeric($Class* clazz) {
	return $of($alloc(IPv6Numeric));
}

void IPv6Numeric::init$() {
}

void IPv6Numeric::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InetAddress, addr, $InetAddress::getByName(":"_s));
	} catch ($UnknownHostException& uhe) {
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $(e->toString()));
	}
}

IPv6Numeric::IPv6Numeric() {
}

$Class* IPv6Numeric::load$($String* name, bool initialize) {
	$loadClass(IPv6Numeric, name, initialize, &_IPv6Numeric_ClassInfo_, allocate$IPv6Numeric);
	return class$;
}

$Class* IPv6Numeric::class$ = nullptr;