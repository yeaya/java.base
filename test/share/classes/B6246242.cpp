#include <B6246242.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

void B6246242::init$() {
}

void B6246242::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6246242, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6246242, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6246242",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6246242, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6246242);
	});
	return class$;
}

$Class* B6246242::class$ = nullptr;