#include <sun/net/ProgressListener.h>

#include <sun/net/ProgressEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProgressEvent = ::sun::net::ProgressEvent;

namespace sun {
	namespace net {

$MethodInfo _ProgressListener_MethodInfo_[] = {
	{"progressFinish", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressFinish, void, $ProgressEvent*)},
	{"progressStart", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressStart, void, $ProgressEvent*)},
	{"progressUpdate", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressUpdate, void, $ProgressEvent*)},
	{}
};

$ClassInfo _ProgressListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.ProgressListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ProgressListener_MethodInfo_
};

$Object* allocate$ProgressListener($Class* clazz) {
	return $of($alloc(ProgressListener));
}

$Class* ProgressListener::load$($String* name, bool initialize) {
	$loadClass(ProgressListener, name, initialize, &_ProgressListener_ClassInfo_, allocate$ProgressListener);
	return class$;
}

$Class* ProgressListener::class$ = nullptr;

	} // net
} // sun