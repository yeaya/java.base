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

$FieldInfo _OutOfBand$2_FieldInfo_[] = {
	{"val$STOP", "I", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$2, val$STOP)},
	{"val$server", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(OutOfBand$2, val$server)},
	{}
};

$MethodInfo _OutOfBand$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;I)V", "()V", 0, $method(static_cast<void(OutOfBand$2::*)($SocketChannel*,int32_t)>(&OutOfBand$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OutOfBand$2_EnclosingMethodInfo_ = {
	"OutOfBand",
	"test3",
	"(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V"
};

$InnerClassInfo _OutOfBand$2_InnerClassesInfo_[] = {
	{"OutOfBand$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OutOfBand$2_ClassInfo_ = {
	$ACC_SUPER,
	"OutOfBand$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_OutOfBand$2_FieldInfo_,
	_OutOfBand$2_MethodInfo_,
	nullptr,
	&_OutOfBand$2_EnclosingMethodInfo_,
	_OutOfBand$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OutOfBand"
};

$Object* allocate$OutOfBand$2($Class* clazz) {
	return $of($alloc(OutOfBand$2));
}

void OutOfBand$2::init$($SocketChannel* val$server, int32_t val$STOP) {
	$set(this, val$server, val$server);
	this->val$STOP = val$STOP;
}

void OutOfBand$2::run() {
	$useLocalCurrentObjectStackCache();
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
		$nc(this->val$server)->write(bb);
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

OutOfBand$2::OutOfBand$2() {
}

$Class* OutOfBand$2::load$($String* name, bool initialize) {
	$loadClass(OutOfBand$2, name, initialize, &_OutOfBand$2_ClassInfo_, allocate$OutOfBand$2);
	return class$;
}

$Class* OutOfBand$2::class$ = nullptr;