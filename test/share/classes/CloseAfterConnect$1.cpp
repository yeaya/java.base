#include <CloseAfterConnect$1.h>
#include <CloseAfterConnect.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void CloseAfterConnect$1::init$($SocketChannel* val$sc, $InetSocketAddress* val$isa) {
	$set(this, val$sc, val$sc);
	$set(this, val$isa, val$isa);
}

void CloseAfterConnect$1::run() {
	try {
		$nc(this->val$sc)->connect(this->val$isa);
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

CloseAfterConnect$1::CloseAfterConnect$1() {
}

$Class* CloseAfterConnect$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$isa", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAfterConnect$1, val$isa)},
		{"val$sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAfterConnect$1, val$sc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SocketChannel;Ljava/net/InetSocketAddress;)V", "()V", 0, $method(CloseAfterConnect$1, init$, void, $SocketChannel*, $InetSocketAddress*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseAfterConnect$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CloseAfterConnect",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseAfterConnect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CloseAfterConnect$1",
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
		"CloseAfterConnect"
	};
	$loadClass(CloseAfterConnect$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseAfterConnect$1);
	});
	return class$;
}

$Class* CloseAfterConnect$1::class$ = nullptr;