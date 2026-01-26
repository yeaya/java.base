#include <ShortWrite4Channels$1.h>

#include <ShortWrite4Channels.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ShortWrite4Channels = ::ShortWrite4Channels;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Random = ::java::util::Random;

$MethodInfo _ShortWrite4Channels$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ShortWrite4Channels$1, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ShortWrite4Channels$1, close, void), "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(ShortWrite4Channels$1, isOpen, bool)},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(ShortWrite4Channels$1, write, int32_t, $ByteBuffer*)},
	{}
};

$EnclosingMethodInfo _ShortWrite4Channels$1_EnclosingMethodInfo_ = {
	"ShortWrite4Channels",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ShortWrite4Channels$1_InnerClassesInfo_[] = {
	{"ShortWrite4Channels$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShortWrite4Channels$1_ClassInfo_ = {
	$ACC_SUPER,
	"ShortWrite4Channels$1",
	"java.lang.Object",
	"java.nio.channels.WritableByteChannel",
	nullptr,
	_ShortWrite4Channels$1_MethodInfo_,
	nullptr,
	&_ShortWrite4Channels$1_EnclosingMethodInfo_,
	_ShortWrite4Channels$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortWrite4Channels"
};

$Object* allocate$ShortWrite4Channels$1($Class* clazz) {
	return $of($alloc(ShortWrite4Channels$1));
}

void ShortWrite4Channels$1::init$() {
}

int32_t ShortWrite4Channels$1::write($ByteBuffer* src) {
	int32_t rem = $nc(src)->remaining();
	if (rem > 0) {
		$init($ShortWrite4Channels);
		int32_t n = $nc($ShortWrite4Channels::rand)->nextInt(rem) + 1;
		src->position(src->position() + n);
		$ShortWrite4Channels::bytesWritten += n;
		return n;
	} else {
		return 0;
	}
}

void ShortWrite4Channels$1::close() {
	$throwNew($RuntimeException, "not implemented"_s);
}

bool ShortWrite4Channels$1::isOpen() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

ShortWrite4Channels$1::ShortWrite4Channels$1() {
}

$Class* ShortWrite4Channels$1::load$($String* name, bool initialize) {
	$loadClass(ShortWrite4Channels$1, name, initialize, &_ShortWrite4Channels$1_ClassInfo_, allocate$ShortWrite4Channels$1);
	return class$;
}

$Class* ShortWrite4Channels$1::class$ = nullptr;