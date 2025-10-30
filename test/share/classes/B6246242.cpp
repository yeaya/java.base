#include <B6246242.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _B6246242_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6246242::*)()>(&B6246242::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6246242::main))},
	{}
};

$ClassInfo _B6246242_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6246242",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6246242_MethodInfo_
};

$Object* allocate$B6246242($Class* clazz) {
	return $of($alloc(B6246242));
}

void B6246242::init$() {
}

void B6246242::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, a, nullptr);
	try {
		$assign(a, $InetAddress::getByName("foo.bar"_s));
	} catch ($UnknownHostException& e) {
		$var($String, s, e->getMessage());
		if ($nc(s)->indexOf("foo.bar: foo.bar"_s) >= 0) {
			$throwNew($RuntimeException, $$str({"UnknownHostException has wrong message: "_s, s}));
		}
	}
}

B6246242::B6246242() {
}

$Class* B6246242::load$($String* name, bool initialize) {
	$loadClass(B6246242, name, initialize, &_B6246242_ClassInfo_, allocate$B6246242);
	return class$;
}

$Class* B6246242::class$ = nullptr;