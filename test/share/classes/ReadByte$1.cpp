#include <ReadByte$1.h>
#include <ReadByte.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void ReadByte$1::init$() {
}

int32_t ReadByte$1::read($ByteBuffer* dst) {
	$nc(dst)->put((int8_t)129);
	return 1;
}

bool ReadByte$1::isOpen() {
	return true;
}

void ReadByte$1::close() {
}

ReadByte$1::ReadByte$1() {
}

$Class* ReadByte$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReadByte$1, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReadByte$1, close, void)},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(ReadByte$1, isOpen, bool)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(ReadByte$1, read, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ReadByte",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadByte$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReadByte$1",
		"java.lang.Object",
		"java.nio.channels.ReadableByteChannel",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReadByte"
	};
	$loadClass(ReadByte$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadByte$1);
	});
	return class$;
}

$Class* ReadByte$1::class$ = nullptr;