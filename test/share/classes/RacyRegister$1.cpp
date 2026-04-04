#include <RacyRegister$1.h>
#include <RacyRegister.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void RacyRegister$1::init$($SocketChannel* val$sc) {
	$set(this, val$sc, val$sc);
}

$Object* RacyRegister$1::call() {
	$nc(this->val$sc)->close();
	return nullptr;
}

RacyRegister$1::RacyRegister$1() {
}

$Class* RacyRegister$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(RacyRegister$1, val$sc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SocketChannel;)V", "()V", 0, $method(RacyRegister$1, init$, void, $SocketChannel*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RacyRegister$1, call, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RacyRegister",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RacyRegister$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RacyRegister$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RacyRegister"
	};
	$loadClass(RacyRegister$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RacyRegister$1);
	});
	return class$;
}

$Class* RacyRegister$1::class$ = nullptr;