#include <java/nio/file/WatchEvent$Modifier.h>

#include <java/nio/file/WatchEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _WatchEvent$Modifier_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent$Modifier, name, $String*)},
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