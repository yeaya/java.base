#include <OutOfBand$1.h>
#include <OutOfBand.h>
#include <java/io/IOException.h>
#include <java/net/Socket.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void OutOfBand$1::init$($SocketChannel* val$client) {
	$set(this, val$client, val$client);
}

void OutOfBand$1::run() {
	$useLocalObjectStack();
	try {
		for (int32_t i = 0; i < 256; ++i) {
			$$nc($nc(this->val$client)->socket())->sendUrgentData(i);
		}
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

OutOfBand$1::OutOfBand$1() {
}

$Class* OutOfBand$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$client", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$1, val$client)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SocketChannel;)V", "()V", 0, $method(OutOfBand$1, init$, void, $SocketChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(OutOfBand$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OutOfBand",
		"test2",
		"(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OutOfBand$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"OutOfBand$1",
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
	$loadClass(OutOfBand$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutOfBand$1);
	});
	return class$;
}

$Class* OutOfBand$1::class$ = nullptr;