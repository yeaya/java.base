#include <Streams$InputStreamGetter.h>

#include <Streams$StreamGetter.h>
#include <Streams.h>
#include <java/io/InputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $Streams = ::Streams;
using $Streams$StreamGetter = ::Streams$StreamGetter;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

$MethodInfo _Streams$InputStreamGetter_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(Streams$InputStreamGetter::*)($Socket*)>(&Streams$InputStreamGetter::init$))},
	{"getStream", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Streams$InputStreamGetter_InnerClassesInfo_[] = {
	{"Streams$InputStreamGetter", "Streams", "InputStreamGetter", $STATIC},
	{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Streams$InputStreamGetter_ClassInfo_ = {
	$ACC_SUPER,
	"Streams$InputStreamGetter",
	"Streams$StreamGetter",
	nullptr,
	nullptr,
	_Streams$InputStreamGetter_MethodInfo_,
	nullptr,
	nullptr,
	_Streams$InputStreamGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Streams"
};

$Object* allocate$Streams$InputStreamGetter($Class* clazz) {
	return $of($alloc(Streams$InputStreamGetter));
}

void Streams$InputStreamGetter::init$($Socket* s) {
	$Streams$StreamGetter::init$(s);
}

void Streams$InputStreamGetter::getStream() {
	$nc(this->socket)->getInputStream();
}

Streams$InputStreamGetter::Streams$InputStreamGetter() {
}

$Class* Streams$InputStreamGetter::load$($String* name, bool initialize) {
	$loadClass(Streams$InputStreamGetter, name, initialize, &_Streams$InputStreamGetter_ClassInfo_, allocate$Streams$InputStreamGetter);
	return class$;
}

$Class* Streams$InputStreamGetter::class$ = nullptr;