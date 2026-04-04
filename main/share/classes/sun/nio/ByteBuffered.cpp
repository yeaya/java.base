#include <sun/nio/ByteBuffered.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace sun {
	namespace nio {

$Class* ByteBuffered::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteBuffered, getByteBuffer, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.ByteBuffered",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteBuffered, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteBuffered);
	});
	return class$;
}

$Class* ByteBuffered::class$ = nullptr;

	} // nio
} // sun