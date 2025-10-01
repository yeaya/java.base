#include <OutOfBand$1.h>

#include <OutOfBand.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $OutOfBand = ::OutOfBand;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Socket = ::java::net::Socket;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _OutOfBand$1_FieldInfo_[] = {
	{"val$client", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$1, val$client)},
	{}
};

$MethodInfo _OutOfBand$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;)V", "()V", 0, $method(static_cast<void(OutOfBand$1::*)($SocketChannel*)>(&OutOfBand$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OutOfBand$1_EnclosingMethodInfo_ = {
	"OutOfBand",
	"test2",
	"(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V"
};

$InnerClassInfo _OutOfBand$1_InnerClassesInfo_[] = {
	{"OutOfBand$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OutOfBand$1_ClassInfo_ = {
	$ACC_SUPER,
	"OutOfBand$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_OutOfBand$1_FieldInfo_,
	_OutOfBand$1_MethodInfo_,
	nullptr,
	&_OutOfBand$1_EnclosingMethodInfo_,
	_OutOfBand$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OutOfBand"
};

$Object* allocate$OutOfBand$1($Class* clazz) {
	return $of($alloc(OutOfBand$1));
}

void OutOfBand$1::init$($SocketChannel* val$client) {
	$set(this, val$client, val$client);
}

void OutOfBand$1::run() {
	try {
		for (int32_t i = 0; i < 256; ++i) {
			$nc($($nc(this->val$client)->socket()))->sendUrgentData(i);
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		ioe->printStackTrace();
	}
}

OutOfBand$1::OutOfBand$1() {
}

$Class* OutOfBand$1::load$($String* name, bool initialize) {
	$loadClass(OutOfBand$1, name, initialize, &_OutOfBand$1_ClassInfo_, allocate$OutOfBand$1);
	return class$;
}

$Class* OutOfBand$1::class$ = nullptr;