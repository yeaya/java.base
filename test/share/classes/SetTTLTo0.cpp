#include <SetTTLTo0.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MulticastSocket = ::java::net::MulticastSocket;

void SetTTLTo0::init$() {
}

void SetTTLTo0::main($StringArray* args) {
	$var($MulticastSocket, soc, nullptr);
	try {
		$assign(soc, $new($MulticastSocket));
	} catch ($Exception& e) {
		$throwNew($Exception, "Unexpected Exception"_s);
	}
	$nc(soc)->setTTL((int8_t)0);
	soc->setTimeToLive(0);
}

SetTTLTo0::SetTTLTo0() {
}

$Class* SetTTLTo0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetTTLTo0, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetTTLTo0, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetTTLTo0",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SetTTLTo0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetTTLTo0);
	});
	return class$;
}

$Class* SetTTLTo0::class$ = nullptr;