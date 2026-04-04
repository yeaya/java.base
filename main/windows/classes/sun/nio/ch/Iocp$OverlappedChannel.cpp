#include <sun/nio/ch/Iocp$OverlappedChannel.h>
#include <sun/nio/ch/Iocp.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Iocp$OverlappedChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getByOverlapped", "(J)Lsun/nio/ch/PendingFuture;", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(J)Lsun/nio/ch/PendingFuture<TV;TA;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$OverlappedChannel, getByOverlapped, $PendingFuture*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Iocp$OverlappedChannel", "sun.nio.ch.Iocp", "OverlappedChannel", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.Iocp$OverlappedChannel",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Iocp"
	};
	$loadClass(Iocp$OverlappedChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iocp$OverlappedChannel);
	});
	return class$;
}

$Class* Iocp$OverlappedChannel::class$ = nullptr;

		} // ch
	} // nio
} // sun