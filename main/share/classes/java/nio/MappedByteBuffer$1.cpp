#include <java/nio/MappedByteBuffer$1.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _MappedByteBuffer$1_FieldInfo_[] = {
	{"this$0", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(MappedByteBuffer$1, this$0)},
	{}
};

$MethodInfo _MappedByteBuffer$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/MappedByteBuffer;)V", nullptr, 0, $method(static_cast<void(MappedByteBuffer$1::*)($MappedByteBuffer*)>(&MappedByteBuffer$1::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"isSync", "()Z", nullptr, $PUBLIC},
	{"unmap", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MappedByteBuffer$1_EnclosingMethodInfo_ = {
	"java.nio.MappedByteBuffer",
	"unmapper",
	"()Ljdk/internal/access/foreign/UnmapperProxy;"
};

$InnerClassInfo _MappedByteBuffer$1_InnerClassesInfo_[] = {
	{"java.nio.MappedByteBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MappedByteBuffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.MappedByteBuffer$1",
	"java.lang.Object",
	"jdk.internal.access.foreign.UnmapperProxy",
	_MappedByteBuffer$1_FieldInfo_,
	_MappedByteBuffer$1_MethodInfo_,
	nullptr,
	&_MappedByteBuffer$1_EnclosingMethodInfo_,
	_MappedByteBuffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.MappedByteBuffer"
};

$Object* allocate$MappedByteBuffer$1($Class* clazz) {
	return $of($alloc(MappedByteBuffer$1));
}

void MappedByteBuffer$1::init$($MappedByteBuffer* this$0) {
	$set(this, this$0, this$0);
}

int64_t MappedByteBuffer$1::address() {
	return this->this$0->address;
}

$FileDescriptor* MappedByteBuffer$1::fileDescriptor() {
	return this->this$0->fd;
}

bool MappedByteBuffer$1::isSync() {
	return this->this$0->isSync$;
}

void MappedByteBuffer$1::unmap() {
	$nc($($Unsafe::getUnsafe()))->invokeCleaner(this->this$0);
}

MappedByteBuffer$1::MappedByteBuffer$1() {
}

$Class* MappedByteBuffer$1::load$($String* name, bool initialize) {
	$loadClass(MappedByteBuffer$1, name, initialize, &_MappedByteBuffer$1_ClassInfo_, allocate$MappedByteBuffer$1);
	return class$;
}

$Class* MappedByteBuffer$1::class$ = nullptr;

	} // nio
} // java