#include <ReadOffset$1.h>
#include <ReadOffset.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void ReadOffset$1::init$() {
}

int32_t ReadOffset$1::read($ByteBuffer* dst) {
	$nc(dst)->put((int8_t)0);
	return 1;
}

bool ReadOffset$1::isOpen() {
	return true;
}

void ReadOffset$1::close() {
}

ReadOffset$1::ReadOffset$1() {
}

$Class* ReadOffset$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReadOffset$1, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOffset$1, close, void)},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(ReadOffset$1, isOpen, bool)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(ReadOffset$1, read, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ReadOffset",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadOffset$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReadOffset$1",
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
		"ReadOffset"
	};
	$loadClass(ReadOffset$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadOffset$1);
	});
	return class$;
}

$Class* ReadOffset$1::class$ = nullptr;