#include <DieBeforeComplete$3.h>
#include <DieBeforeComplete.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $Future = ::java::util::concurrent::Future;

void DieBeforeComplete$3::init$($AsynchronousSocketChannel* val$channel, $ByteBuffer* val$src) {
	$set(this, val$channel, val$channel);
	$set(this, val$src, val$src);
}

$Future* DieBeforeComplete$3::run() {
	return $nc(this->val$channel)->write(this->val$src);
}

DieBeforeComplete$3::DieBeforeComplete$3() {
}

$Class* DieBeforeComplete$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$src", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$3, val$src)},
		{"val$channel", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$3, val$channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/nio/ByteBuffer;)V", "()V", 0, $method(DieBeforeComplete$3, init$, void, $AsynchronousSocketChannel*, $ByteBuffer*)},
		{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(DieBeforeComplete$3, run, $Future*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DieBeforeComplete",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DieBeforeComplete$3", nullptr, nullptr, 0},
		{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DieBeforeComplete$3",
		"java.lang.Object",
		"DieBeforeComplete$Task",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;LDieBeforeComplete$Task<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DieBeforeComplete"
	};
	$loadClass(DieBeforeComplete$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DieBeforeComplete$3);
	});
	return class$;
}

$Class* DieBeforeComplete$3::class$ = nullptr;