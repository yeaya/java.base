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

$FieldInfo _RegAfterPreClose$Closer_FieldInfo_[] = {
	{"channel", "Ljava/nio/channels/Channel;", nullptr, $PRIVATE | $FINAL, $field(RegAfterPreClose$Closer, channel)},
	{}
};

$MethodInfo _RegAfterPreClose$Closer_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Channel;)V", nullptr, 0, $method(static_cast<void(RegAfterPreClose$Closer::*)($Channel*)>(&RegAfterPreClose$Closer::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RegAfterPreClose$Closer_InnerClassesInfo_[] = {
	{"RegAfterPreClose$Closer", "RegAfterPreClose", "Closer", $STATIC},
	{}
};

$ClassInfo _RegAfterPreClose$Closer_ClassInfo_ = {
	$ACC_SUPER,
	"RegAfterPreClose$Closer",
	"java.lang.Object",
	"java.lang.Runnable",
	_RegAfterPreClose$Closer_FieldInfo_,
	_RegAfterPreClose$Closer_MethodInfo_,
	nullptr,
	nullptr,
	_RegAfterPreClose$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RegAfterPreClose"
};

$Object* allocate$RegAfterPreClose$Closer($Class* clazz) {
	return $of($alloc(RegAfterPreClose$Closer));
}

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
	$loadClass(RegAfterPreClose$Closer, name, initialize, &_RegAfterPreClose$Closer_ClassInfo_, allocate$RegAfterPreClose$Closer);
	return class$;
}

$Class* RegAfterPreClose$Closer::class$ = nullptr;