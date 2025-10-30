#include <Streams$OutputStreamGetter.h>

#include <Streams$StreamGetter.h>
#include <Streams.h>
#include <java/io/OutputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $Streams = ::Streams;
using $Streams$StreamGetter = ::Streams$StreamGetter;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

$MethodInfo _Streams$OutputStreamGetter_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(Streams$OutputStreamGetter::*)($Socket*)>(&Streams$OutputStreamGetter::init$))},
	{"getStream", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Streams$OutputStreamGetter_InnerClassesInfo_[] = {
	{"Streams$OutputStreamGetter", "Streams", "OutputStreamGetter", $STATIC},
	{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Streams$OutputStreamGetter_ClassInfo_ = {
	$ACC_SUPER,
	"Streams$OutputStreamGetter",
	"Streams$StreamGetter",
	nullptr,
	nullptr,
	_Streams$OutputStreamGetter_MethodInfo_,
	nullptr,
	nullptr,
	_Streams$OutputStreamGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Streams"
};

$Object* allocate$Streams$OutputStreamGetter($Class* clazz) {
	return $of($alloc(Streams$OutputStreamGetter));
}

void Streams$OutputStreamGetter::init$($Socket* s) {
	$Streams$StreamGetter::init$(s);
}

void Streams$OutputStreamGetter::getStream() {
	$nc(this->socket)->getOutputStream();
}

Streams$OutputStreamGetter::Streams$OutputStreamGetter() {
}

$Class* Streams$OutputStreamGetter::load$($String* name, bool initialize) {
	$loadClass(Streams$OutputStreamGetter, name, initialize, &_Streams$OutputStreamGetter_ClassInfo_, allocate$Streams$OutputStreamGetter);
	return class$;
}

$Class* Streams$OutputStreamGetter::class$ = nullptr;