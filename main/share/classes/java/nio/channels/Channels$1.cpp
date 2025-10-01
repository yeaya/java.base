#include <java/nio/channels/Channels$1.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channel = ::java::nio::channels::Channel;
using $Channels = ::java::nio::channels::Channels;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _Channels$1_FieldInfo_[] = {
	{"val$ch", "Ljava/nio/channels/WritableByteChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Channels$1, val$ch)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Channels$1, bb)},
	{"bs", "[B", nullptr, $PRIVATE, $field(Channels$1, bs)},
	{"b1", "[B", nullptr, $PRIVATE, $field(Channels$1, b1)},
	{}
};

$MethodInfo _Channels$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/WritableByteChannel;)V", nullptr, 0, $method(static_cast<void(Channels$1::*)($WritableByteChannel*)>(&Channels$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Channels$1_EnclosingMethodInfo_ = {
	"java.nio.channels.Channels",
	"newOutputStream",
	"(Ljava/nio/channels/WritableByteChannel;)Ljava/io/OutputStream;"
};

$InnerClassInfo _Channels$1_InnerClassesInfo_[] = {
	{"java.nio.channels.Channels$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Channels$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.Channels$1",
	"java.io.OutputStream",
	nullptr,
	_Channels$1_FieldInfo_,
	_Channels$1_MethodInfo_,
	nullptr,
	&_Channels$1_EnclosingMethodInfo_,
	_Channels$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.Channels"
};

$Object* allocate$Channels$1($Class* clazz) {
	return $of($alloc(Channels$1));
}

void Channels$1::init$($WritableByteChannel* val$ch) {
	$set(this, val$ch, val$ch);
	$OutputStream::init$();
}

void Channels$1::write(int32_t b) {
	$synchronized(this) {
		if (this->b1 == nullptr) {
			$set(this, b1, $new($bytes, 1));
		}
		$nc(this->b1)->set(0, (int8_t)b);
		this->write(this->b1);
	}
}

void Channels$1::write($bytes* bs, int32_t off, int32_t len) {
	$synchronized(this) {
		if ((off < 0) || (off > $nc(bs)->length) || (len < 0) || ((off + len) > $nc(bs)->length) || ((off + len) < 0)) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return;
		}
		$var($ByteBuffer, bb, (this->bs == bs) ? this->bb : $ByteBuffer::wrap(bs));
		$nc(bb)->limit($Math::min(off + len, bb->capacity()));
		bb->position(off);
		$set(this, bb, bb);
		$set(this, bs, bs);
		$Channels::writeFully(this->val$ch, bb);
	}
}

void Channels$1::close() {
	$nc(this->val$ch)->close();
}

Channels$1::Channels$1() {
}

$Class* Channels$1::load$($String* name, bool initialize) {
	$loadClass(Channels$1, name, initialize, &_Channels$1_ClassInfo_, allocate$Channels$1);
	return class$;
}

$Class* Channels$1::class$ = nullptr;

		} // channels
	} // nio
} // java