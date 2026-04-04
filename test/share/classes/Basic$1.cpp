#include <Basic$1.h>
#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void Basic$1::init$() {
}

int32_t Basic$1::write($ByteBuffer* src) {
	return 0;
}

void Basic$1::close() {
}

bool Basic$1::isOpen() {
	return true;
}

Basic$1::Basic$1() {
}

$Class* Basic$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic$1, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Basic$1, close, void), "java.io.IOException"},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Basic$1, isOpen, bool)},
		{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Basic$1, write, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic$1",
		"java.lang.Object",
		"java.nio.channels.WritableByteChannel",
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
	$loadClass(Basic$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic$1);
	});
	return class$;
}

$Class* Basic$1::class$ = nullptr;