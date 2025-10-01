#include <Basic$4.h>

#include <Basic.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Basic = ::Basic;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

$MethodInfo _Basic$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic$4::*)()>(&Basic$4::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Basic$4_EnclosingMethodInfo_ = {
	"Basic",
	"testNewReaderClose",
	"()V"
};

$InnerClassInfo _Basic$4_InnerClassesInfo_[] = {
	{"Basic$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$4_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$4",
	"java.lang.Object",
	"java.nio.channels.ReadableByteChannel",
	nullptr,
	_Basic$4_MethodInfo_,
	nullptr,
	&_Basic$4_EnclosingMethodInfo_,
	_Basic$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$4($Class* clazz) {
	return $of($alloc(Basic$4));
}

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
	$loadClass(Basic$4, name, initialize, &_Basic$4_ClassInfo_, allocate$Basic$4);
	return class$;
}

$Class* Basic$4::class$ = nullptr;