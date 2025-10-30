#include <sun/nio/ch/SelChImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <jcpp.h>

#undef NANOSECONDS

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Net = ::sun::nio::ch::Net;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _SelChImpl_MethodInfo_[] = {
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFDVal", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"kill", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"park", "(IJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"park", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SelChImpl_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.ch.SelChImpl",
	nullptr,
	"java.nio.channels.Channel",
	nullptr,
	_SelChImpl_MethodInfo_
};

$Object* allocate$SelChImpl($Class* clazz) {
	return $of($alloc(SelChImpl));
}

void SelChImpl::park(int32_t event, int64_t nanos) {
	int64_t millis = 0;
	if (nanos <= 0) {
		millis = -1;
	} else {
		$init($TimeUnit);
		millis = $TimeUnit::NANOSECONDS->toMillis(nanos);
	}
	$Net::poll($(getFD()), event, millis);
}

void SelChImpl::park(int32_t event) {
	park(event, 0);
}

$Class* SelChImpl::load$($String* name, bool initialize) {
	$loadClass(SelChImpl, name, initialize, &_SelChImpl_ClassInfo_, allocate$SelChImpl);
	return class$;
}

$Class* SelChImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun