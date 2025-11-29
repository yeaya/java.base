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

$FieldInfo _DieBeforeComplete$1_FieldInfo_[] = {
	{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(DieBeforeComplete$1, val$listener)},
	{}
};

$MethodInfo _DieBeforeComplete$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(static_cast<void(DieBeforeComplete$1::*)($AsynchronousServerSocketChannel*)>(&DieBeforeComplete$1::init$))},
	{"run", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/nio/channels/AsynchronousSocketChannel;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DieBeforeComplete$1_EnclosingMethodInfo_ = {
	"DieBeforeComplete",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DieBeforeComplete$1_InnerClassesInfo_[] = {
	{"DieBeforeComplete$1", nullptr, nullptr, 0},
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DieBeforeComplete$1_ClassInfo_ = {
	$ACC_SUPER,
	"DieBeforeComplete$1",
	"java.lang.Object",
	"DieBeforeComplete$Task",
	_DieBeforeComplete$1_FieldInfo_,
	_DieBeforeComplete$1_MethodInfo_,
	"Ljava/lang/Object;LDieBeforeComplete$Task<Ljava/nio/channels/AsynchronousSocketChannel;>;",
	&_DieBeforeComplete$1_EnclosingMethodInfo_,
	_DieBeforeComplete$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DieBeforeComplete"
};

$Object* allocate$DieBeforeComplete$1($Class* clazz) {
	return $of($alloc(DieBeforeComplete$1));
}

void DieBeforeComplete$1::init$($AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$listener, val$listener);
}

$Future* DieBeforeComplete$1::run() {
	return $nc(this->val$listener)->accept();
}

DieBeforeComplete$1::DieBeforeComplete$1() {
}

$Class* DieBeforeComplete$1::load$($String* name, bool initialize) {
	$loadClass(DieBeforeComplete$1, name, initialize, &_DieBeforeComplete$1_ClassInfo_, allocate$DieBeforeComplete$1);
	return class$;
}

$Class* DieBeforeComplete$1::class$ = nullptr;