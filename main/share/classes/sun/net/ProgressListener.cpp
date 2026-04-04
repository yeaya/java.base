#include <sun/net/ProgressListener.h>
#include <sun/net/ProgressEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProgressEvent = ::sun::net::ProgressEvent;

namespace sun {
	namespace net {

$Class* ProgressListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"progressFinish", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressFinish, void, $ProgressEvent*)},
		{"progressStart", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressStart, void, $ProgressEvent*)},
		{"progressUpdate", "(Lsun/net/ProgressEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressListener, progressUpdate, void, $ProgressEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.ProgressListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProgressListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressListener);
	});
	return class$;
}

$Class* ProgressListener::class$ = nullptr;

	} // net
} // sun