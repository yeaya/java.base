#include <sun/nio/ch/SocketAdaptor$1.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/nio/ch/SocketAdaptor.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <jcpp.h>

#undef MILLISECONDS

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SocketAdaptor = ::sun::nio::ch::SocketAdaptor;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketAdaptor$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/SocketAdaptor;", nullptr, $FINAL | $SYNTHETIC, $field(SocketAdaptor$1, this$0)},
	{}
};

$MethodInfo _SocketAdaptor$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/SocketAdaptor;)V", nullptr, 0, $method(static_cast<void(SocketAdaptor$1::*)($SocketAdaptor*)>(&SocketAdaptor$1::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SocketAdaptor$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.SocketAdaptor",
	"getInputStream",
	"()Ljava/io/InputStream;"
};

$InnerClassInfo _SocketAdaptor$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketAdaptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketAdaptor$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketAdaptor$1",
	"java.io.InputStream",
	nullptr,
	_SocketAdaptor$1_FieldInfo_,
	_SocketAdaptor$1_MethodInfo_,
	nullptr,
	&_SocketAdaptor$1_EnclosingMethodInfo_,
	_SocketAdaptor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketAdaptor"
};

$Object* allocate$SocketAdaptor$1($Class* clazz) {
	return $of($alloc(SocketAdaptor$1));
}

void SocketAdaptor$1::init$($SocketAdaptor* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t SocketAdaptor$1::read() {
	$var($bytes, a, $new($bytes, 1));
	int32_t n = read(a, 0, 1);
	return (n > 0) ? ((int32_t)(a->get(0) & (uint32_t)255)) : -1;
}

int32_t SocketAdaptor$1::read($bytes* b, int32_t off, int32_t len) {
	int32_t timeout = this->this$0->timeout;
	if (timeout > 0) {
		$init($TimeUnit);
		int64_t nanos = $TimeUnit::MILLISECONDS->toNanos(timeout);
		return $nc(this->this$0->sc)->blockingRead(b, off, len, nanos);
	} else {
		return $nc(this->this$0->sc)->blockingRead(b, off, len, 0);
	}
}

int32_t SocketAdaptor$1::available() {
	return $nc(this->this$0->sc)->available();
}

void SocketAdaptor$1::close() {
	$nc(this->this$0->sc)->close();
}

SocketAdaptor$1::SocketAdaptor$1() {
}

$Class* SocketAdaptor$1::load$($String* name, bool initialize) {
	$loadClass(SocketAdaptor$1, name, initialize, &_SocketAdaptor$1_ClassInfo_, allocate$SocketAdaptor$1);
	return class$;
}

$Class* SocketAdaptor$1::class$ = nullptr;

		} // ch
	} // nio
} // sun