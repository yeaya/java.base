#include <sun/nio/ch/SocketAdaptor$2.h>

#include <java/io/OutputStream.h>
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
#include <sun/nio/ch/SocketAdaptor.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $SocketAdaptor = ::sun::nio::ch::SocketAdaptor;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketAdaptor$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/SocketAdaptor;", nullptr, $FINAL | $SYNTHETIC, $field(SocketAdaptor$2, this$0)},
	{}
};

$MethodInfo _SocketAdaptor$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/SocketAdaptor;)V", nullptr, 0, $method(static_cast<void(SocketAdaptor$2::*)($SocketAdaptor*)>(&SocketAdaptor$2::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SocketAdaptor$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.SocketAdaptor",
	"getOutputStream",
	"()Ljava/io/OutputStream;"
};

$InnerClassInfo _SocketAdaptor$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketAdaptor$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketAdaptor$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketAdaptor$2",
	"java.io.OutputStream",
	nullptr,
	_SocketAdaptor$2_FieldInfo_,
	_SocketAdaptor$2_MethodInfo_,
	nullptr,
	&_SocketAdaptor$2_EnclosingMethodInfo_,
	_SocketAdaptor$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketAdaptor"
};

$Object* allocate$SocketAdaptor$2($Class* clazz) {
	return $of($alloc(SocketAdaptor$2));
}

void SocketAdaptor$2::init$($SocketAdaptor* this$0) {
	$set(this, this$0, this$0);
	$OutputStream::init$();
}

void SocketAdaptor$2::write(int32_t b) {
	$var($bytes, a, $new($bytes, {(int8_t)b}));
	write(a, 0, 1);
}

void SocketAdaptor$2::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->this$0->sc)->blockingWriteFully(b, off, len);
}

void SocketAdaptor$2::close() {
	$nc(this->this$0->sc)->close();
}

SocketAdaptor$2::SocketAdaptor$2() {
}

$Class* SocketAdaptor$2::load$($String* name, bool initialize) {
	$loadClass(SocketAdaptor$2, name, initialize, &_SocketAdaptor$2_ClassInfo_, allocate$SocketAdaptor$2);
	return class$;
}

$Class* SocketAdaptor$2::class$ = nullptr;

		} // ch
	} // nio
} // sun