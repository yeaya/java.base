#include <java/nio/file/WatchEvent$Modifier.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/WatchEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent = ::java::nio::file::WatchEvent;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchEvent$Modifier_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _WatchEvent$Modifier_InnerClassesInfo_[] = {
	{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WatchEvent$Modifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.WatchEvent$Modifier",
	nullptr,
	nullptr,
	nullptr,
	_WatchEvent$Modifier_MethodInfo_,
	nullptr,
	nullptr,
	_WatchEvent$Modifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.WatchEvent"
};

$Object* allocate$WatchEvent$Modifier($Class* clazz) {
	return $of($alloc(WatchEvent$Modifier));
}

$Class* WatchEvent$Modifier::load$($String* name, bool initialize) {
	$loadClass(WatchEvent$Modifier, name, initialize, &_WatchEvent$Modifier_ClassInfo_, allocate$WatchEvent$Modifier);
	return class$;
}

$Class* WatchEvent$Modifier::class$ = nullptr;

		} // file
	} // nio
} // java