#include <IPv6Numeric.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IPv6Numeric::*)()>(&IPv6Numeric::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IPv6Numeric::main))},
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
	try {
		$var($InetAddress, addr, $InetAddress::getByName(":"_s));
	} catch ($UnknownHostException&) {
		$catch();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
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