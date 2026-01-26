#include <Basic$3.h>

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

$MethodInfo _Basic$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Basic$3, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Basic$3, close, void), "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Basic$3, isOpen, bool)},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Basic$3, write, int32_t, $ByteBuffer*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Basic$3_EnclosingMethodInfo_ = {
	"Basic",
	"testNewWriterClose",
	"()V"
};

$InnerClassInfo _Basic$3_InnerClassesInfo_[] = {
	{"Basic$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$3_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$3",
	"java.lang.Object",
	"java.nio.channels.WritableByteChannel",
	nullptr,
	_Basic$3_MethodInfo_,
	nullptr,
	&_Basic$3_EnclosingMethodInfo_,
	_Basic$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$3($Class* clazz) {
	return $of($alloc(Basic$3));
}

void Basic$3::init$() {
}

int32_t Basic$3::write($ByteBuffer* src) {
	return 0;
}

bool Basic$3::isOpen() {
	return true;
}

void Basic$3::close() {
	$throwNew($IOException);
}

Basic$3::Basic$3() {
}

$Class* Basic$3::load$($String* name, bool initialize) {
	$loadClass(Basic$3, name, initialize, &_Basic$3_ClassInfo_, allocate$Basic$3);
	return class$;
}

$Class* Basic$3::class$ = nullptr;