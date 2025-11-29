#include <jdk/internal/jrtfs/JrtFileSystem$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jdk/internal/jrtfs/JrtFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $JrtFileSystem = ::jdk::internal::jrtfs::JrtFileSystem;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtFileSystem$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/jrtfs/JrtFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(JrtFileSystem$1, this$0)},
	{"val$size", "J", nullptr, $FINAL | $SYNTHETIC, $field(JrtFileSystem$1, val$size)},
	{"val$rbc", "Ljava/nio/channels/ReadableByteChannel;", nullptr, $FINAL | $SYNTHETIC, $field(JrtFileSystem$1, val$rbc)},
	{"read", "J", nullptr, 0, $field(JrtFileSystem$1, read$)},
	{}
};

$MethodInfo _JrtFileSystem$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jrtfs/JrtFileSystem;Ljava/nio/channels/ReadableByteChannel;J)V", "()V", 0, $method(static_cast<void(JrtFileSystem$1::*)($JrtFileSystem*,$ReadableByteChannel*,int64_t)>(&JrtFileSystem$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"position", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"position", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"truncate", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JrtFileSystem$1_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.JrtFileSystem",
	"newByteChannel",
	"(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;"
};

$InnerClassInfo _JrtFileSystem$1_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JrtFileSystem$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileSystem$1",
	"java.lang.Object",
	"java.nio.channels.SeekableByteChannel",
	_JrtFileSystem$1_FieldInfo_,
	_JrtFileSystem$1_MethodInfo_,
	nullptr,
	&_JrtFileSystem$1_EnclosingMethodInfo_,
	_JrtFileSystem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileSystem"
};

$Object* allocate$JrtFileSystem$1($Class* clazz) {
	return $of($alloc(JrtFileSystem$1));
}

void JrtFileSystem$1::init$($JrtFileSystem* this$0, $ReadableByteChannel* val$rbc, int64_t val$size) {
	$set(this, this$0, this$0);
	$set(this, val$rbc, val$rbc);
	this->val$size = val$size;
	this->read$ = 0;
}

bool JrtFileSystem$1::isOpen() {
	return $nc(this->val$rbc)->isOpen();
}

int64_t JrtFileSystem$1::position() {
	return this->read$;
}

$SeekableByteChannel* JrtFileSystem$1::position(int64_t pos) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t JrtFileSystem$1::read($ByteBuffer* dst) {
	int32_t n = $nc(this->val$rbc)->read(dst);
	if (n > 0) {
		this->read$ += n;
	}
	return n;
}

$SeekableByteChannel* JrtFileSystem$1::truncate(int64_t size) {
	$throwNew($NonWritableChannelException);
	$shouldNotReachHere();
}

int32_t JrtFileSystem$1::write($ByteBuffer* src) {
	$throwNew($NonWritableChannelException);
	$shouldNotReachHere();
}

int64_t JrtFileSystem$1::size() {
	return this->val$size;
}

void JrtFileSystem$1::close() {
	$nc(this->val$rbc)->close();
}

JrtFileSystem$1::JrtFileSystem$1() {
}

$Class* JrtFileSystem$1::load$($String* name, bool initialize) {
	$loadClass(JrtFileSystem$1, name, initialize, &_JrtFileSystem$1_ClassInfo_, allocate$JrtFileSystem$1);
	return class$;
}

$Class* JrtFileSystem$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk