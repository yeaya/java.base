#include <java/nio/file/WatchService.h>

#include <java/nio/file/WatchKey.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchKey = ::java::nio::file::WatchKey;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchService_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"poll", "()Ljava/nio/file/WatchKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchService, poll, $WatchKey*)},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/WatchKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchService, poll, $WatchKey*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"take", "()Ljava/nio/file/WatchKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchService, take, $WatchKey*), "java.lang.InterruptedException"},
	{}
};

$ClassInfo _WatchService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.WatchService",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_WatchService_MethodInfo_
};

$Object* allocate$WatchService($Class* clazz) {
	return $of($alloc(WatchService));
}

$Class* WatchService::load$($String* name, bool initialize) {
	$loadClass(WatchService, name, initialize, &_WatchService_ClassInfo_, allocate$WatchService);
	return class$;
}

$Class* WatchService::class$ = nullptr;

		} // file
	} // nio
} // java