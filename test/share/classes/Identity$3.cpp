#include <Identity$3.h>
#include <Identity$3$1.h>
#include <Identity.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
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

void Identity$3::init$($AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$listener, val$listener);
}

void Identity$3::completed($AsynchronousSocketChannel* ch, $Void* att) {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$3, val$listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(Identity$3, init$, void, $AsynchronousServerSocketChannel*)},
		{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Identity$3, completed, void, $AsynchronousSocketChannel*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Identity$3, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Identity$3, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Identity$3, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Identity",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Identity$3", nullptr, nullptr, 0},
		{"Identity$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Identity$3",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Identity"
	};
	$loadClass(Identity$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Identity$3);
	});
	return class$;
}

$Class* Identity$3::class$ = nullptr;