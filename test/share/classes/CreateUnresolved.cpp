#include <CreateUnresolved.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void CreateUnresolved::init$() {
}

void CreateUnresolved::main($StringArray* args) {
	$var($InetSocketAddress, a, $InetSocketAddress::createUnresolved("unresolved"_s, 1234));
	if (!$nc(a)->isUnresolved()) {
		$throwNew($RuntimeException, "Address is not flagged as \'unresolved\'"_s);
	}
}

CreateUnresolved::CreateUnresolved() {
}

$Class* CreateUnresolved::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CreateUnresolved, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CreateUnresolved, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CreateUnresolved",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CreateUnresolved, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CreateUnresolved);
	});
	return class$;
}

$Class* CreateUnresolved::class$ = nullptr;