#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

namespace java {
	namespace nio {
		namespace channels {

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
	$MethodInfo methodInfos$$[] = {
		{"*isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.ByteChannel",
		nullptr,
		"java.nio.channels.ReadableByteChannel,java.nio.channels.WritableByteChannel",
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ByteChannel));
	});
	return class$;
}

$Class* ByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java