#include <Reuse.h>
#include <java/net/BindException.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BindException = ::java::net::BindException;
using $MulticastSocket = ::java::net::MulticastSocket;

void Reuse::init$() {
}

void Reuse::main($StringArray* args) {
	$useLocalObjectStack();
	$var($MulticastSocket, s1, nullptr);
	$var($MulticastSocket, s2, nullptr);
	try {
		$assign(s1, $new($MulticastSocket, 4160));
		$assign(s2, $new($MulticastSocket, 4160));
		s1->close();
		s2->close();
	} catch ($BindException& e) {
		$throwNew($RuntimeException, "MulticastSocket do no set SO_REUSEADDR"_s);
	}
}

Reuse::Reuse() {
}

$Class* Reuse::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Reuse, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Reuse, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Reuse",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Reuse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reuse);
	});
	return class$;
}

$Class* Reuse::class$ = nullptr;