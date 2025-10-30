#include <java/nio/file/WatchEvent$Kind.h>

#include <java/nio/file/WatchEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent = ::java::nio::file::WatchEvent;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchEvent$Kind_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _WatchEvent$Kind_InnerClassesInfo_[] = {
	{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WatchEvent$Kind_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.WatchEvent$Kind",
	nullptr,
	nullptr,
	nullptr,
	_WatchEvent$Kind_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WatchEvent$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.WatchEvent"
};

$Object* allocate$WatchEvent$Kind($Class* clazz) {
	return $of($alloc(WatchEvent$Kind));
}

$Class* WatchEvent$Kind::load$($String* name, bool initialize) {
	$loadClass(WatchEvent$Kind, name, initialize, &_WatchEvent$Kind_ClassInfo_, allocate$WatchEvent$Kind);
	return class$;
}

$Class* WatchEvent$Kind::class$ = nullptr;

		} // file
	} // nio
} // java