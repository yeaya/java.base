#include <Basic$2.h>

#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Basic = ::Basic;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

$MethodInfo _Basic$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic$2::*)()>(&Basic$2::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic$2_EnclosingMethodInfo_ = {
	"Basic",
	"test",
	"()V"
};

$InnerClassInfo _Basic$2_InnerClassesInfo_[] = {
	{"Basic$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$2_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$2",
	"java.lang.Object",
	"java.nio.channels.ReadableByteChannel",
	nullptr,
	_Basic$2_MethodInfo_,
	nullptr,
	&_Basic$2_EnclosingMethodInfo_,
	_Basic$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$2($Class* clazz) {
	return $of($alloc(Basic$2));
}

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
	$loadClass(Basic$2, name, initialize, &_Basic$2_ClassInfo_, allocate$Basic$2);
	return class$;
}

$Class* Basic$2::class$ = nullptr;