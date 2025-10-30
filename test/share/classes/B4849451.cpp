#include <B4849451.h>

#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

$MethodInfo _B4849451_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B4849451::*)()>(&B4849451::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B4849451::main))},
	{}
};

$ClassInfo _B4849451_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B4849451",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B4849451_MethodInfo_
};

$Object* allocate$B4849451($Class* clazz) {
	return $of($alloc(B4849451));
}

void B4849451::init$() {
}

void B4849451::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr1, $InetSocketAddress::createUnresolved("unresolveable"_s, 10));
	$var($InetSocketAddress, addr2, $InetSocketAddress::createUnresolved("UNRESOLVEABLE"_s, 10));
	if (!($nc(addr1)->equals(addr2))) {
		$throwNew($RuntimeException, $$str({addr1, " and "_s, addr2, " should be equal"_s}));
	}
}

B4849451::B4849451() {
}

$Class* B4849451::load$($String* name, bool initialize) {
	$loadClass(B4849451, name, initialize, &_B4849451_ClassInfo_, allocate$B4849451);
	return class$;
}

$Class* B4849451::class$ = nullptr;