#include <java/nio/file/WatchEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchEvent_MethodInfo_[] = {
	{"context", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{"count", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"kind", "()Ljava/nio/file/WatchEvent$Kind;", "()Ljava/nio/file/WatchEvent$Kind<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _WatchEvent_InnerClassesInfo_[] = {
	{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WatchEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.WatchEvent",
	nullptr,
	nullptr,
	nullptr,
	_WatchEvent_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WatchEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.WatchEvent$Modifier,java.nio.file.WatchEvent$Kind"
};

$Object* allocate$WatchEvent($Class* clazz) {
	return $of($alloc(WatchEvent));
}

$Class* WatchEvent::load$($String* name, bool initialize) {
	$loadClass(WatchEvent, name, initialize, &_WatchEvent_ClassInfo_, allocate$WatchEvent);
	return class$;
}

$Class* WatchEvent::class$ = nullptr;

		} // file
	} // nio
} // java