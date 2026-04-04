#include <DieBeforeComplete$1.h>
#include <DieBeforeComplete.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $Future = ::java::util::concurrent::Future;

void DieBeforeComplete$1::init$($AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$listener, val$listener);
}

$Future* DieBeforeComplete$1::run() {
	return $nc(this->val$listener)->accept();
}

DieBeforeComplete$1::DieBeforeComplete$1() {
}

$Class* DieBeforeComplete$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$1, val$listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(DieBeforeComplete$1, init$, void, $AsynchronousServerSocketChannel*)},
		{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/nio/channels/AsynchronousSocketChannel;>;", $PUBLIC, $virtualMethod(DieBeforeComplete$1, run, $Future*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DieBeforeComplete",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DieBeforeComplete$1", nullptr, nullptr, 0},
		{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DieBeforeComplete$1",
		"java.lang.Object",
		"DieBeforeComplete$Task",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;LDieBeforeComplete$Task<Ljava/nio/channels/AsynchronousSocketChannel;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DieBeforeComplete"
	};
	$loadClass(DieBeforeComplete$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DieBeforeComplete$1);
	});
	return class$;
}

$Class* DieBeforeComplete$1::class$ = nullptr;