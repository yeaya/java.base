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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _ShortWrite$Reader_FieldInfo_[] = {
	{"sc", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL, $field(ShortWrite$Reader, sc)},
	{"buf", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(ShortWrite$Reader, buf)},
	{}
};

$MethodInfo _ShortWrite$Reader_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;I)V", nullptr, 0, $method(static_cast<void(ShortWrite$Reader::*)($SocketChannel*,int32_t)>(&ShortWrite$Reader::init$))},
	{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _ShortWrite$Reader_InnerClassesInfo_[] = {
	{"ShortWrite$Reader", "ShortWrite", "Reader", $STATIC},
	{}
};

$ClassInfo _ShortWrite$Reader_ClassInfo_ = {
	$ACC_SUPER,
	"ShortWrite$Reader",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_ShortWrite$Reader_FieldInfo_,
	_ShortWrite$Reader_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
	nullptr,
	_ShortWrite$Reader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortWrite"
};

$Object* allocate$ShortWrite$Reader($Class* clazz) {
	return $of($alloc(ShortWrite$Reader));
}

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
	$nc(this->buf)->flip();
	return $of($Long::valueOf($ShortWrite::computeChecksum($$new($ByteBufferArray, {this->buf}))));
}

ShortWrite$Reader::ShortWrite$Reader() {
}

$Class* ShortWrite$Reader::load$($String* name, bool initialize) {
	$loadClass(ShortWrite$Reader, name, initialize, &_ShortWrite$Reader_ClassInfo_, allocate$ShortWrite$Reader);
	return class$;
}

$Class* ShortWrite$Reader::class$ = nullptr;