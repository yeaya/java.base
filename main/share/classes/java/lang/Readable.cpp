#include <java/lang/Readable.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

namespace java {
	namespace lang {

$Class* Readable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Readable, read, int32_t, $CharBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Readable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Readable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Readable);
	});
	return class$;
}

$Class* Readable::class$ = nullptr;

	} // lang
} // java