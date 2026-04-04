#include <sun/nio/ch/SocketAdaptor$2.h>
#include <java/io/OutputStream.h>
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
using $SocketAdaptor = ::sun::nio::ch::SocketAdaptor;

namespace sun {
	namespace nio {
		namespace ch {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/SocketAdaptor;", nullptr, $FINAL | $SYNTHETIC, $field(SocketAdaptor$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/SocketAdaptor;)V", nullptr, 0, $method(SocketAdaptor$2, init$, void, $SocketAdaptor*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor$2, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor$2, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor$2, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.SocketAdaptor",
		"getOutputStream",
		"()Ljava/io/OutputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.SocketAdaptor$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.SocketAdaptor$2",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.SocketAdaptor"
	};
	$loadClass(SocketAdaptor$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SocketAdaptor$2));
	});
	return class$;
}

$Class* SocketAdaptor$2::class$ = nullptr;

		} // ch
	} // nio
} // sun