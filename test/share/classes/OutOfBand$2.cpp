#include <OutOfBand$2.h>
#include <OutOfBand.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void OutOfBand$2::init$($SocketChannel* val$server, int32_t val$STOP) {
	$set(this, val$server, val$server);
	this->val$STOP = val$STOP;
}

void OutOfBand$2::run() {
	$useLocalObjectStack();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(100));
	try {
		int32_t n = $nc(this->val$server)->read(bb);
		if (n != 1) {
			$var($String, msg, (n < 0) ? "Unexpected EOF"_s : "One byte expected"_s);
			$throwNew($RuntimeException, msg);
		}
		$nc(bb)->flip();
		if (bb->get() != (int8_t)this->val$STOP) {
			$throwNew($RuntimeException, "Unexpected byte"_s);
		}
		bb->flip();
		this->val$server->write(bb);
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

OutOfBand$2::OutOfBand$2() {
}

$Class* OutOfBand$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$STOP", "I", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$2, val$STOP)},
		{"val$server", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$2, val$server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SocketChannel;I)V", "()V", 0, $method(OutOfBand$2, init$, void, $SocketChannel*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(OutOfBand$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OutOfBand",
		"test3",
		"(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OutOfBand$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"OutOfBand$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OutOfBand"
	};
	$loadClass(OutOfBand$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutOfBand$2);
	});
	return class$;
}

$Class* OutOfBand$2::class$ = nullptr;