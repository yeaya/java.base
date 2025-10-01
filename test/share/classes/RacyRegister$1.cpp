#include <RacyRegister$1.h>

#include <RacyRegister.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $RacyRegister = ::RacyRegister;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _RacyRegister$1_FieldInfo_[] = {
	{"val$sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(RacyRegister$1, val$sc)},
	{}
};

$MethodInfo _RacyRegister$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;)V", "()V", 0, $method(static_cast<void(RacyRegister$1::*)($SocketChannel*)>(&RacyRegister$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _RacyRegister$1_EnclosingMethodInfo_ = {
	"RacyRegister",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RacyRegister$1_InnerClassesInfo_[] = {
	{"RacyRegister$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RacyRegister$1_ClassInfo_ = {
	$ACC_SUPER,
	"RacyRegister$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_RacyRegister$1_FieldInfo_,
	_RacyRegister$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_RacyRegister$1_EnclosingMethodInfo_,
	_RacyRegister$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RacyRegister"
};

$Object* allocate$RacyRegister$1($Class* clazz) {
	return $of($alloc(RacyRegister$1));
}

void RacyRegister$1::init$($SocketChannel* val$sc) {
	$set(this, val$sc, val$sc);
}

$Object* RacyRegister$1::call() {
	$nc(this->val$sc)->close();
	return $of(nullptr);
}

RacyRegister$1::RacyRegister$1() {
}

$Class* RacyRegister$1::load$($String* name, bool initialize) {
	$loadClass(RacyRegister$1, name, initialize, &_RacyRegister$1_ClassInfo_, allocate$RacyRegister$1);
	return class$;
}

$Class* RacyRegister$1::class$ = nullptr;