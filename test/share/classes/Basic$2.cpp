#include <Basic$2.h>
#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void Basic$2::init$() {
}

int32_t Basic$2::read($ByteBuffer* dst) {
	return 0;
}

void Basic$2::close() {
}

bool Basic$2::isOpen() {
	return true;
}

Basic$2::Basic$2() {
}

$Class* Basic$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic$2, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Basic$2, close, void)},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Basic$2, isOpen, bool)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Basic$2, read, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic$2",
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
		"Basic"
	};
	$loadClass(Basic$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic$2);
	});
	return class$;
}

$Class* Basic$2::class$ = nullptr;