#include <sun/nio/ch/DirectBuffer.h>
#include <jdk/internal/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::jdk::internal::ref::Cleaner;

namespace sun {
	namespace nio {
		namespace ch {

$Class* DirectBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"address", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, address, int64_t)},
		{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, attachment, $Object*)},
		{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirectBuffer, cleaner, $Cleaner*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.ch.DirectBuffer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DirectBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBuffer);
	});
	return class$;
}

$Class* DirectBuffer::class$ = nullptr;

		} // ch
	} // nio
} // sun