#include <Identity$3$1.h>
#include <Identity$3.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <jcpp.h>

using $Identity$3 = ::Identity$3;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;

void Identity$3$1::init$($Identity$3* this$0, $ByteBuffer* val$buf) {
	$set(this, this$0, this$0);
	$set(this, val$buf, val$buf);
}

void Identity$3$1::completed($Integer* bytesRead, $AsynchronousSocketChannel* ch) {
	if ($nc(bytesRead)->intValue() < 0) {
		try {
			$nc(ch)->close();
		} catch ($IOException& ignore) {
		}
	} else {
		$nc(this->val$buf)->clear();
		$nc(ch)->read(this->val$buf, ch, this);
	}
}

void Identity$3$1::failed($Throwable* exc, $AsynchronousSocketChannel* ch) {
	try {
		$nc(ch)->close();
	} catch ($IOException& ignore) {
	}
}

void Identity$3$1::failed($Throwable* exc, Object$* ch) {
	this->failed(exc, $cast($AsynchronousSocketChannel, ch));
}

void Identity$3$1::completed(Object$* bytesRead, Object$* ch) {
	this->completed($cast($Integer, bytesRead), $cast($AsynchronousSocketChannel, ch));
}

Identity$3$1::Identity$3$1() {
}

$Class* Identity$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LIdentity$3;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$3$1, this$0)},
		{"val$buf", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$3$1, val$buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LIdentity$3;Ljava/nio/ByteBuffer;)V", "()V", 0, $method(Identity$3$1, init$, void, $Identity$3*, $ByteBuffer*)},
		{"completed", "(Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC, $virtualMethod(Identity$3$1, completed, void, $Integer*, $AsynchronousSocketChannel*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Identity$3$1, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC, $virtualMethod(Identity$3$1, failed, void, $Throwable*, $AsynchronousSocketChannel*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Identity$3$1, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Identity$3",
		"completed",
		"(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Identity$3", nullptr, nullptr, 0},
		{"Identity$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Identity$3$1",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Identity"
	};
	$loadClass(Identity$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Identity$3$1);
	});
	return class$;
}

$Class* Identity$3$1::class$ = nullptr;