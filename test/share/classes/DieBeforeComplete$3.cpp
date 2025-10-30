#include <DieBeforeComplete$3.h>

#include <DieBeforeComplete.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $DieBeforeComplete = ::DieBeforeComplete;
using $DieBeforeComplete$Task = ::DieBeforeComplete$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $Future = ::java::util::concurrent::Future;

$FieldInfo _DieBeforeComplete$3_FieldInfo_[] = {
	{"val$src", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$3, val$src)},
	{"val$channel", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$3, val$channel)},
	{}
};

$MethodInfo _DieBeforeComplete$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/nio/ByteBuffer;)V", "()V", 0, $method(static_cast<void(DieBeforeComplete$3::*)($AsynchronousSocketChannel*,$ByteBuffer*)>(&DieBeforeComplete$3::init$))},
	{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DieBeforeComplete$3_EnclosingMethodInfo_ = {
	"DieBeforeComplete",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DieBeforeComplete$3_InnerClassesInfo_[] = {
	{"DieBeforeComplete$3", nullptr, nullptr, 0},
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DieBeforeComplete$3_ClassInfo_ = {
	$ACC_SUPER,
	"DieBeforeComplete$3",
	"java.lang.Object",
	"DieBeforeComplete$Task",
	_DieBeforeComplete$3_FieldInfo_,
	_DieBeforeComplete$3_MethodInfo_,
	"Ljava/lang/Object;LDieBeforeComplete$Task<Ljava/lang/Integer;>;",
	&_DieBeforeComplete$3_EnclosingMethodInfo_,
	_DieBeforeComplete$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DieBeforeComplete"
};

$Object* allocate$DieBeforeComplete$3($Class* clazz) {
	return $of($alloc(DieBeforeComplete$3));
}

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
	$loadClass(DieBeforeComplete$3, name, initialize, &_DieBeforeComplete$3_ClassInfo_, allocate$DieBeforeComplete$3);
	return class$;
}

$Class* DieBeforeComplete$3::class$ = nullptr;