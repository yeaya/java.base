#include <sun/nio/ch/NioSocketImpl$2.h>
#include <java/io/OutputStream.h>
#include <sun/nio/ch/NioSocketImpl.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NioSocketImpl = ::sun::nio::ch::NioSocketImpl;

namespace sun {
	namespace nio {
		namespace ch {

void NioSocketImpl$2::init$($NioSocketImpl* this$0) {
	$set(this, this$0, this$0);
	$OutputStream::init$();
}

void NioSocketImpl$2::write(int32_t b) {
	$var($bytes, a, $new($bytes, {(int8_t)b}));
	write(a, 0, 1);
}

void NioSocketImpl$2::write($bytes* b, int32_t off, int32_t len) {
	this->this$0->write(b, off, len);
}

void NioSocketImpl$2::close() {
	this->this$0->close();
}

NioSocketImpl$2::NioSocketImpl$2() {
}

$Class* NioSocketImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/NioSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(NioSocketImpl$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/NioSocketImpl;)V", nullptr, 0, $method(NioSocketImpl$2, init$, void, $NioSocketImpl*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$2, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$2, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(NioSocketImpl$2, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.NioSocketImpl",
		"getOutputStream",
		"()Ljava/io/OutputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.NioSocketImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.NioSocketImpl$2",
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
		"sun.nio.ch.NioSocketImpl"
	};
	$loadClass(NioSocketImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NioSocketImpl$2));
	});
	return class$;
}

$Class* NioSocketImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun