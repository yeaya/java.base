#include <NullConstructor.h>
#include <NullConstructor$1.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $NullConstructor$1 = ::NullConstructor$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketImpl = ::java::net::SocketImpl;

void NullConstructor::init$() {
}

void NullConstructor::main($StringArray* args) {
	try {
		$var($ServerSocket, server, $new($NullConstructor$1, ($SocketImpl*)nullptr));
		$throwNew($RuntimeException, "Test failed"_s);
	} catch ($NullPointerException& ee) {
	}
}

NullConstructor::NullConstructor() {
}

$Class* NullConstructor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullConstructor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullConstructor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullConstructor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NullConstructor$1"
	};
	$loadClass(NullConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullConstructor);
	});
	return class$;
}

$Class* NullConstructor::class$ = nullptr;