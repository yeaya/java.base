#include <java/nio/file/WatchKey.h>

#include <java/nio/file/Watchable.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Watchable = ::java::nio::file::Watchable;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchKey_MethodInfo_[] = {
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"pollEvents", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/WatchEvent<*>;>;", $PUBLIC | $ABSTRACT},
	{"reset", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"watchable", "()Ljava/nio/file/Watchable;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WatchKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.WatchKey",
	nullptr,
	nullptr,
	nullptr,
	_WatchKey_MethodInfo_
};

$Object* allocate$WatchKey($Class* clazz) {
	return $of($alloc(WatchKey));
}

$Class* WatchKey::load$($String* name, bool initialize) {
	$loadClass(WatchKey, name, initialize, &_WatchKey_ClassInfo_, allocate$WatchKey);
	return class$;
}

$Class* WatchKey::class$ = nullptr;

		} // file
	} // nio
} // java