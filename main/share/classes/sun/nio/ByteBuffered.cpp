#include <sun/nio/ByteBuffered.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {

$MethodInfo _ByteBuffered_MethodInfo_[] = {
	{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ByteBuffered_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.ByteBuffered",
	nullptr,
	nullptr,
	nullptr,
	_ByteBuffered_MethodInfo_
};

$Object* allocate$ByteBuffered($Class* clazz) {
	return $of($alloc(ByteBuffered));
}

$Class* ByteBuffered::load$($String* name, bool initialize) {
	$loadClass(ByteBuffered, name, initialize, &_ByteBuffered_ClassInfo_, allocate$ByteBuffered);
	return class$;
}

$Class* ByteBuffered::class$ = nullptr;

	} // nio
} // sun