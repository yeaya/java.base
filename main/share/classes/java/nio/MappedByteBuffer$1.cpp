#include <java/nio/MappedByteBuffer$1.h>
#include <java/io/FileDescriptor.h>
#include <java/nio/MappedByteBuffer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

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
	$$nc($Unsafe::getUnsafe())->invokeCleaner(this->this$0);
}

MappedByteBuffer$1::MappedByteBuffer$1() {
}

$Class* MappedByteBuffer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(MappedByteBuffer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/MappedByteBuffer;)V", nullptr, 0, $method(MappedByteBuffer$1, init$, void, $MappedByteBuffer*)},
		{"address", "()J", nullptr, $PUBLIC, $virtualMethod(MappedByteBuffer$1, address, int64_t)},
		{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC, $virtualMethod(MappedByteBuffer$1, fileDescriptor, $FileDescriptor*)},
		{"isSync", "()Z", nullptr, $PUBLIC, $virtualMethod(MappedByteBuffer$1, isSync, bool)},
		{"unmap", "()V", nullptr, $PUBLIC, $virtualMethod(MappedByteBuffer$1, unmap, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.MappedByteBuffer",
		"unmapper",
		"()Ljdk/internal/access/foreign/UnmapperProxy;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.MappedByteBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.MappedByteBuffer$1",
		"java.lang.Object",
		"jdk.internal.access.foreign.UnmapperProxy",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.MappedByteBuffer"
	};
	$loadClass(MappedByteBuffer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedByteBuffer$1);
	});
	return class$;
}

$Class* MappedByteBuffer$1::class$ = nullptr;

	} // nio
} // java