#include <SetBufferSize.h>
#include <java/net/DatagramSocket.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;

void SetBufferSize::init$() {
}

void SetBufferSize::main($StringArray* args) {
	$var($DatagramSocket, soc, $new($DatagramSocket));
	soc->setReceiveBufferSize($Integer::MAX_VALUE);
}

SetBufferSize::SetBufferSize() {
}

$Class* SetBufferSize::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetBufferSize, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetBufferSize, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetBufferSize",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SetBufferSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetBufferSize);
	});
	return class$;
}

$Class* SetBufferSize::class$ = nullptr;