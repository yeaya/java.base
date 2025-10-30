#include <Basic$5.h>

#include <Basic.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Basic = ::Basic;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Basic$5_FieldInfo_[] = {
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$5, val$latch)},
	{}
};

$MethodInfo _Basic$5_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(static_cast<void(Basic$5::*)($CountDownLatch*)>(&Basic$5::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Basic$5_EnclosingMethodInfo_ = {
	"Basic",
	"testCustomThreadPool",
	"(Ljava/nio/file/Path;)V"
};

$InnerClassInfo _Basic$5_InnerClassesInfo_[] = {
	{"Basic$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$5_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$5",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Basic$5_FieldInfo_,
	_Basic$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Void;>;",
	&_Basic$5_EnclosingMethodInfo_,
	_Basic$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$5($Class* clazz) {
	return $of($alloc(Basic$5));
}

void Basic$5::init$($CountDownLatch* val$latch) {
	$set(this, val$latch, val$latch);
}

void Basic$5::completed($Integer* result, $Void* att) {
	$nc(this->val$latch)->countDown();
}

void Basic$5::failed($Throwable* exc, $Void* att) {
}

void Basic$5::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void Basic$5::completed(Object$* result, Object$* att) {
	this->completed($cast($Integer, result), $cast($Void, att));
}

Basic$5::Basic$5() {
}

$Class* Basic$5::load$($String* name, bool initialize) {
	$loadClass(Basic$5, name, initialize, &_Basic$5_ClassInfo_, allocate$Basic$5);
	return class$;
}

$Class* Basic$5::class$ = nullptr;