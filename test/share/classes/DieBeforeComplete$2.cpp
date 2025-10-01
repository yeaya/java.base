#include <DieBeforeComplete$2.h>

#include <DieBeforeComplete.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DieBeforeComplete$2_FieldInfo_[] = {
	{"val$dst", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$2, val$dst)},
	{"val$channel", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$2, val$channel)},
	{}
};

$MethodInfo _DieBeforeComplete$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/nio/ByteBuffer;)V", "()V", 0, $method(static_cast<void(DieBeforeComplete$2::*)($AsynchronousSocketChannel*,$ByteBuffer*)>(&DieBeforeComplete$2::init$))},
	{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DieBeforeComplete$2_EnclosingMethodInfo_ = {
	"DieBeforeComplete",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DieBeforeComplete$2_InnerClassesInfo_[] = {
	{"DieBeforeComplete$2", nullptr, nullptr, 0},
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DieBeforeComplete$2_ClassInfo_ = {
	$ACC_SUPER,
	"DieBeforeComplete$2",
	"java.lang.Object",
	"DieBeforeComplete$Task",
	_DieBeforeComplete$2_FieldInfo_,
	_DieBeforeComplete$2_MethodInfo_,
	"Ljava/lang/Object;LDieBeforeComplete$Task<Ljava/lang/Integer;>;",
	&_DieBeforeComplete$2_EnclosingMethodInfo_,
	_DieBeforeComplete$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DieBeforeComplete"
};

$Object* allocate$DieBeforeComplete$2($Class* clazz) {
	return $of($alloc(DieBeforeComplete$2));
}

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
	$loadClass(DieBeforeComplete$2, name, initialize, &_DieBeforeComplete$2_ClassInfo_, allocate$DieBeforeComplete$2);
	return class$;
}

$Class* DieBeforeComplete$2::class$ = nullptr;