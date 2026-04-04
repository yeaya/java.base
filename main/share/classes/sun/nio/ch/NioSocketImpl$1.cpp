#include <sun/nio/ch/NioSocketImpl$1.h>
#include <java/io/InputStream.h>
#include <sun/nio/ch/NioSocketImpl.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NioSocketImpl = ::sun::nio::ch::NioSocketImpl;

namespace sun {
	namespace nio {
		namespace ch {

void NioSocketImpl$1::init$($NioSocketImpl* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t NioSocketImpl$1::read() {
	$var($bytes, a, $new($bytes, 1));
	int32_t n = read(a, 0, 1);
	return (n > 0) ? (a->get(0) & 0xff) : -1;
}

int32_t NioSocketImpl$1::read($bytes* b, int32_t off, int32_t len) {
	return this->this$0->read(b, off, len);
}

int32_t NioSocketImpl$1::available() {
	return this->this$0->available();
}

void NioSocketImpl$1::close() {
	this->this$0->close();
}

NioSocketImpl$1::NioSocketImpl$1() {
}

$Class* NioSocketImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/NioSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(NioSocketImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/NioSocketImpl;)V", nullptr, 0, $method(NioSocketImpl$1, init$, void, $NioSocketImpl*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$1, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$1, close, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$1, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$1, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.NioSocketImpl",
		"getInputStream",
		"()Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.NioSocketImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.NioSocketImpl$1",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.NioSocketImpl"
	};
	$loadClass(NioSocketImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NioSocketImpl$1);
	});
	return class$;
}

$Class* NioSocketImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun