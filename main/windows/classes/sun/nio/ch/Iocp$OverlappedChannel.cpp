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

$MethodInfo _Iocp$OverlappedChannel_MethodInfo_[] = {
	{"getByOverlapped", "(J)Lsun/nio/ch/PendingFuture;", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(J)Lsun/nio/ch/PendingFuture<TV;TA;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$OverlappedChannel, getByOverlapped, $PendingFuture*, int64_t)},
	{}
};

$InnerClassInfo _Iocp$OverlappedChannel_InnerClassesInfo_[] = {
	{"sun.nio.ch.Iocp$OverlappedChannel", "sun.nio.ch.Iocp", "OverlappedChannel", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Iocp$OverlappedChannel_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.Iocp$OverlappedChannel",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_Iocp$OverlappedChannel_MethodInfo_,
	nullptr,
	nullptr,
	_Iocp$OverlappedChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Iocp"
};

$Object* allocate$Iocp$OverlappedChannel($Class* clazz) {
	return $of($alloc(Iocp$OverlappedChannel));
}

$Class* Iocp$OverlappedChannel::load$($String* name, bool initialize) {
	$loadClass(Iocp$OverlappedChannel, name, initialize, &_Iocp$OverlappedChannel_ClassInfo_, allocate$Iocp$OverlappedChannel);
	return class$;
}

$Class* Iocp$OverlappedChannel::class$ = nullptr;

		} // ch
	} // nio
} // sun