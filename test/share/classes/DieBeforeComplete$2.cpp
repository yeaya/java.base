#include <DieBeforeComplete$2.h>
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

void DieBeforeComplete$2::init$($AsynchronousSocketChannel* val$channel, $ByteBuffer* val$dst) {
	$set(this, val$channel, val$channel);
	$set(this, val$dst, val$dst);
}

$Future* DieBeforeComplete$2::run() {
	return $nc(this->val$channel)->read(this->val$dst);
}

DieBeforeComplete$2::DieBeforeComplete$2() {
}

$Class* DieBeforeComplete$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$dst", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$2, val$dst)},
		{"val$channel", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$2, val$channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/nio/ByteBuffer;)V", "()V", 0, $method(DieBeforeComplete$2, init$, void, $AsynchronousSocketChannel*, $ByteBuffer*)},
		{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(DieBeforeComplete$2, run, $Future*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DieBeforeComplete",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DieBeforeComplete$2", nullptr, nullptr, 0},
		{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DieBeforeComplete$2",
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
	$loadClass(DieBeforeComplete$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DieBeforeComplete$2);
	});
	return class$;
}

$Class* DieBeforeComplete$2::class$ = nullptr;