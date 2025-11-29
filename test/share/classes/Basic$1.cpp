#include <Basic$1.h>

#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _Basic$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic$1::*)()>(&Basic$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic$1_EnclosingMethodInfo_ = {
	"Basic",
	"test",
	"()V"
};

$InnerClassInfo _Basic$1_InnerClassesInfo_[] = {
	{"Basic$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$1_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$1",
	"java.lang.Object",
	"java.nio.channels.WritableByteChannel",
	nullptr,
	_Basic$1_MethodInfo_,
	nullptr,
	&_Basic$1_EnclosingMethodInfo_,
	_Basic$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$1($Class* clazz) {
	return $of($alloc(Basic$1));
}

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
	$loadClass(Basic$1, name, initialize, &_Basic$1_ClassInfo_, allocate$Basic$1);
	return class$;
}

$Class* Basic$1::class$ = nullptr;