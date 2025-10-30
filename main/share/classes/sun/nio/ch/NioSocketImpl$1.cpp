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

$FieldInfo _NioSocketImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/NioSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(NioSocketImpl$1, this$0)},
	{}
};

$MethodInfo _NioSocketImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/NioSocketImpl;)V", nullptr, 0, $method(static_cast<void(NioSocketImpl$1::*)($NioSocketImpl*)>(&NioSocketImpl$1::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _NioSocketImpl$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.NioSocketImpl",
	"getInputStream",
	"()Ljava/io/InputStream;"
};

$InnerClassInfo _NioSocketImpl$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.NioSocketImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NioSocketImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.NioSocketImpl$1",
	"java.io.InputStream",
	nullptr,
	_NioSocketImpl$1_FieldInfo_,
	_NioSocketImpl$1_MethodInfo_,
	nullptr,
	&_NioSocketImpl$1_EnclosingMethodInfo_,
	_NioSocketImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.NioSocketImpl"
};

$Object* allocate$NioSocketImpl$1($Class* clazz) {
	return $of($alloc(NioSocketImpl$1));
}

void NioSocketImpl$1::init$($NioSocketImpl* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t NioSocketImpl$1::read() {
	$var($bytes, a, $new($bytes, 1));
	int32_t n = read(a, 0, 1);
	return (n > 0) ? ((int32_t)(a->get(0) & (uint32_t)255)) : -1;
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
	$loadClass(NioSocketImpl$1, name, initialize, &_NioSocketImpl$1_ClassInfo_, allocate$NioSocketImpl$1);
	return class$;
}

$Class* NioSocketImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun