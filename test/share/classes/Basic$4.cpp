#include <Basic$4.h>
#include <Basic.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void Basic$4::init$() {
}

int32_t Basic$4::read($ByteBuffer* dst) {
	$nc(dst)->put((int8_t)7);
	return 1;
}

bool Basic$4::isOpen() {
	return true;
}

void Basic$4::close() {
	$throwNew($IOException);
}

Basic$4::Basic$4() {
}

$Class* Basic$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic$4, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Basic$4, close, void), "java.io.IOException"},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Basic$4, isOpen, bool)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Basic$4, read, int32_t, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic",
		"testNewReaderClose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic$4",
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
	$loadClass(Basic$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic$4);
	});
	return class$;
}

$Class* Basic$4::class$ = nullptr;