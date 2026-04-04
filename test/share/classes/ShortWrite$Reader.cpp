#include <ShortWrite$Reader.h>
#include <ShortWrite.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $ShortWrite = ::ShortWrite;
using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void ShortWrite$Reader::init$($SocketChannel* sc, int32_t expectedSize) {
	$set(this, sc, sc);
	$set(this, buf, $ByteBuffer::allocate(expectedSize));
}

$Object* ShortWrite$Reader::call() {
	while ($nc(this->buf)->hasRemaining()) {
		int32_t n = $nc(this->sc)->read(this->buf);
		if (n == -1) {
			$throwNew($RuntimeException, "Premature EOF encountered"_s);
		}
	}
	this->buf->flip();
	return $of($Long::valueOf($ShortWrite::computeChecksum($$new($ByteBufferArray, {this->buf}))));
}

ShortWrite$Reader::ShortWrite$Reader() {
}

$Class* ShortWrite$Reader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL, $field(ShortWrite$Reader, sc)},
		{"buf", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(ShortWrite$Reader, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SocketChannel;I)V", nullptr, 0, $method(ShortWrite$Reader, init$, void, $SocketChannel*, int32_t)},
		{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(ShortWrite$Reader, call, $Object*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortWrite$Reader", "ShortWrite", "Reader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShortWrite$Reader",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ShortWrite"
	};
	$loadClass(ShortWrite$Reader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortWrite$Reader);
	});
	return class$;
}

$Class* ShortWrite$Reader::class$ = nullptr;