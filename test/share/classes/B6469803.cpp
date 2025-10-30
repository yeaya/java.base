#include <B6469803.h>

#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

$MethodInfo _B6469803_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6469803::*)()>(&B6469803::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6469803::main))},
	{}
};

$ClassInfo _B6469803_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6469803",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6469803_MethodInfo_
};

$Object* allocate$B6469803($Class* clazz) {
	return $of($alloc(B6469803));
}

void B6469803::init$() {
}

void B6469803::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, "192.168.1.1"_s, 12345));
	$var($String, s, addr->getHostString());
	if (!$nc(s)->equals("192.168.1.1"_s)) {
		$throwNew($RuntimeException, $$str({"getHostString() returned the wrong string: "_s, s}));
	}
	$assign(addr, $new($InetSocketAddress, "localhost"_s, 12345));
	$assign(s, addr->getHostString());
	if (!$nc(s)->equals("localhost"_s)) {
		$throwNew($RuntimeException, $$str({"getHostString() returned the wrong string: "_s, s}));
	}
}

B6469803::B6469803() {
}

$Class* B6469803::load$($String* name, bool initialize) {
	$loadClass(B6469803, name, initialize, &_B6469803_ClassInfo_, allocate$B6469803);
	return class$;
}

$Class* B6469803::class$ = nullptr;