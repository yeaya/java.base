#include <java/nio/file/FileChannelLinesSpliterator$1.h>

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
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/FileChannelLinesSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $FileChannelLinesSpliterator = ::java::nio::file::FileChannelLinesSpliterator;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileChannelLinesSpliterator$1_FieldInfo_[] = {
	{"this$0", "Ljava/nio/file/FileChannelLinesSpliterator;", nullptr, $FINAL | $SYNTHETIC, $field(FileChannelLinesSpliterator$1, this$0)},
	{}
};

$MethodInfo _FileChannelLinesSpliterator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/FileChannelLinesSpliterator;)V", nullptr, 0, $method(static_cast<void(FileChannelLinesSpliterator$1::*)($FileChannelLinesSpliterator*)>(&FileChannelLinesSpliterator$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _FileChannelLinesSpliterator$1_EnclosingMethodInfo_ = {
	"java.nio.file.FileChannelLinesSpliterator",
	"getBufferedReader",
	"()Ljava/io/BufferedReader;"
};

$InnerClassInfo _FileChannelLinesSpliterator$1_InnerClassesInfo_[] = {
	{"java.nio.file.FileChannelLinesSpliterator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileChannelLinesSpliterator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.FileChannelLinesSpliterator$1",
	"java.lang.Object",
	"java.nio.channels.ReadableByteChannel",
	_FileChannelLinesSpliterator$1_FieldInfo_,
	_FileChannelLinesSpliterator$1_MethodInfo_,
	nullptr,
	&_FileChannelLinesSpliterator$1_EnclosingMethodInfo_,
	_FileChannelLinesSpliterator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.FileChannelLinesSpliterator"
};

$Object* allocate$FileChannelLinesSpliterator$1($Class* clazz) {
	return $of($alloc(FileChannelLinesSpliterator$1));
}

void FileChannelLinesSpliterator$1::init$($FileChannelLinesSpliterator* this$0) {
	$set(this, this$0, this$0);
}

int32_t FileChannelLinesSpliterator$1::read($ByteBuffer* dst) {
	int32_t bytesToRead = this->this$0->fence - this->this$0->index;
	if (bytesToRead == 0) {
		return -1;
	}
	int32_t bytesRead = 0;
	if (bytesToRead < $nc(dst)->remaining()) {
		int32_t oldLimit = dst->limit();
		dst->limit(dst->position() + bytesToRead);
		bytesRead = $nc(this->this$0->fc)->read(dst, this->this$0->index);
		dst->limit(oldLimit);
	} else {
		bytesRead = $nc(this->this$0->fc)->read(dst, this->this$0->index);
	}
	if (bytesRead == -1) {
		this->this$0->index = this->this$0->fence;
		return bytesRead;
	}
	this->this$0->index += bytesRead;
	return bytesRead;
}

bool FileChannelLinesSpliterator$1::isOpen() {
	return $nc(this->this$0->fc)->isOpen();
}

void FileChannelLinesSpliterator$1::close() {
	$nc(this->this$0->fc)->close();
}

FileChannelLinesSpliterator$1::FileChannelLinesSpliterator$1() {
}

$Class* FileChannelLinesSpliterator$1::load$($String* name, bool initialize) {
	$loadClass(FileChannelLinesSpliterator$1, name, initialize, &_FileChannelLinesSpliterator$1_ClassInfo_, allocate$FileChannelLinesSpliterator$1);
	return class$;
}

$Class* FileChannelLinesSpliterator$1::class$ = nullptr;

		} // file
	} // nio
} // java