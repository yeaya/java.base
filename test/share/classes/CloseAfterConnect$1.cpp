#include <CloseAfterConnect$1.h>

#include <CloseAfterConnect.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _CloseAfterConnect$1_FieldInfo_[] = {
	{"val$isa", "Ljava/net/InetSocketAddress;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAfterConnect$1, val$isa)},
	{"val$sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAfterConnect$1, val$sc)},
	{}
};

$MethodInfo _CloseAfterConnect$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;Ljava/net/InetSocketAddress;)V", "()V", 0, $method(CloseAfterConnect$1, init$, void, $SocketChannel*, $InetSocketAddress*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseAfterConnect$1, run, void)},
	{}
};

$EnclosingMethodInfo _CloseAfterConnect$1_EnclosingMethodInfo_ = {
	"CloseAfterConnect",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _CloseAfterConnect$1_InnerClassesInfo_[] = {
	{"CloseAfterConnect$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CloseAfterConnect$1_ClassInfo_ = {
	$ACC_SUPER,
	"CloseAfterConnect$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CloseAfterConnect$1_FieldInfo_,
	_CloseAfterConnect$1_MethodInfo_,
	nullptr,
	&_CloseAfterConnect$1_EnclosingMethodInfo_,
	_CloseAfterConnect$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseAfterConnect"
};

$Object* allocate$CloseAfterConnect$1($Class* clazz) {
	return $of($alloc(CloseAfterConnect$1));
}

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
	$loadClass(CloseAfterConnect$1, name, initialize, &_CloseAfterConnect$1_ClassInfo_, allocate$CloseAfterConnect$1);
	return class$;
}

$Class* CloseAfterConnect$1::class$ = nullptr;