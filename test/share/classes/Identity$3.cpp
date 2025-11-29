#include <Identity$3.h>

#include <Identity$3$1.h>
#include <Identity.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <jcpp.h>

using $Identity$3$1 = ::Identity$3$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;

$FieldInfo _Identity$3_FieldInfo_[] = {
	{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$3, val$listener)},
	{}
};

$MethodInfo _Identity$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(static_cast<void(Identity$3::*)($AsynchronousServerSocketChannel*)>(&Identity$3::init$))},
	{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Identity$3_EnclosingMethodInfo_ = {
	"Identity",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Identity$3_InnerClassesInfo_[] = {
	{"Identity$3", nullptr, nullptr, 0},
	{"Identity$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity$3_ClassInfo_ = {
	$ACC_SUPER,
	"Identity$3",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Identity$3_FieldInfo_,
	_Identity$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
	&_Identity$3_EnclosingMethodInfo_,
	_Identity$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Identity"
};

$Object* allocate$Identity$3($Class* clazz) {
	return $of($alloc(Identity$3));
}

void Identity$3::init$($AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$listener, val$listener);
}

void Identity$3::completed($AsynchronousSocketChannel* ch, $Void* att) {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$listener)->accept(($Void*)nullptr, this);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(100));
	$nc(ch)->read(buf, ch, $$new($Identity$3$1, this, buf));
}

void Identity$3::failed($Throwable* exc, $Void* att) {
}

void Identity$3::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void Identity$3::completed(Object$* ch, Object$* att) {
	this->completed($cast($AsynchronousSocketChannel, ch), $cast($Void, att));
}

Identity$3::Identity$3() {
}

$Class* Identity$3::load$($String* name, bool initialize) {
	$loadClass(Identity$3, name, initialize, &_Identity$3_ClassInfo_, allocate$Identity$3);
	return class$;
}

$Class* Identity$3::class$ = nullptr;