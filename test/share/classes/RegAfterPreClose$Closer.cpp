#include <RegAfterPreClose$Closer.h>
#include <RegAfterPreClose.h>
#include <java/io/IOException.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;

void RegAfterPreClose$Closer::init$($Channel* sc) {
	$set(this, channel, sc);
}

void RegAfterPreClose$Closer::run() {
	try {
		$nc(this->channel)->close();
	} catch ($IOException& ignore) {
	}
}

RegAfterPreClose$Closer::RegAfterPreClose$Closer() {
}

$Class* RegAfterPreClose$Closer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Ljava/nio/channels/Channel;", nullptr, $PRIVATE | $FINAL, $field(RegAfterPreClose$Closer, channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Channel;)V", nullptr, 0, $method(RegAfterPreClose$Closer, init$, void, $Channel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RegAfterPreClose$Closer, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RegAfterPreClose$Closer", "RegAfterPreClose", "Closer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RegAfterPreClose$Closer",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RegAfterPreClose"
	};
	$loadClass(RegAfterPreClose$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegAfterPreClose$Closer);
	});
	return class$;
}

$Class* RegAfterPreClose$Closer::class$ = nullptr;