#include <java/nio/channels/ByteChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _ByteChannel_MethodInfo_[] = {
	{"*isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _ByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.ByteChannel",
	nullptr,
	"java.nio.channels.ReadableByteChannel,java.nio.channels.WritableByteChannel",
	nullptr,
	_ByteChannel_MethodInfo_
};

$Object* allocate$ByteChannel($Class* clazz) {
	return $of($alloc(ByteChannel));
}

int32_t ByteChannel::hashCode() {
	 return this->$ReadableByteChannel::hashCode();
}

bool ByteChannel::equals(Object$* obj) {
	 return this->$ReadableByteChannel::equals(obj);
}

$Object* ByteChannel::clone() {
	 return this->$ReadableByteChannel::clone();
}

$String* ByteChannel::toString() {
	 return this->$ReadableByteChannel::toString();
}

void ByteChannel::finalize() {
	this->$ReadableByteChannel::finalize();
}

$Class* ByteChannel::load$($String* name, bool initialize) {
	$loadClass(ByteChannel, name, initialize, &_ByteChannel_ClassInfo_, allocate$ByteChannel);
	return class$;
}

$Class* ByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java