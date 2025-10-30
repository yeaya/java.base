#include <Streams$StreamGetter.h>

#include <Streams.h>
#include <java/io/IOException.h>
#include <java/net/Socket.h>
#include <java/util/concurrent/Phaser.h>
#include <jcpp.h>

using $Streams = ::Streams;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Socket = ::java::net::Socket;
using $Phaser = ::java::util::concurrent::Phaser;

$FieldInfo _Streams$StreamGetter_FieldInfo_[] = {
	{"socket", "Ljava/net/Socket;", nullptr, $FINAL, $field(Streams$StreamGetter, socket)},
	{}
};

$MethodInfo _Streams$StreamGetter_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, 0, $method(static_cast<void(Streams$StreamGetter::*)($Socket*)>(&Streams$StreamGetter::init$))},
	{"getStream", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Streams$StreamGetter_InnerClassesInfo_[] = {
	{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Streams$StreamGetter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Streams$StreamGetter",
	"java.lang.Thread",
	nullptr,
	_Streams$StreamGetter_FieldInfo_,
	_Streams$StreamGetter_MethodInfo_,
	nullptr,
	nullptr,
	_Streams$StreamGetter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Streams"
};

$Object* allocate$Streams$StreamGetter($Class* clazz) {
	return $of($alloc(Streams$StreamGetter));
}

void Streams$StreamGetter::init$($Socket* s) {
	$Thread::init$();
	$set(this, socket, s);
}

void Streams$StreamGetter::run() {
	try {
		$init($Streams);
		$nc($Streams::startingGate)->arriveAndAwaitAdvance();
		getStream();
	} catch ($IOException& x) {
	} catch ($NullPointerException& x) {
		x->printStackTrace();
		$init($Streams);
		$Streams::failed = true;
	}
}

Streams$StreamGetter::Streams$StreamGetter() {
}

$Class* Streams$StreamGetter::load$($String* name, bool initialize) {
	$loadClass(Streams$StreamGetter, name, initialize, &_Streams$StreamGetter_ClassInfo_, allocate$Streams$StreamGetter);
	return class$;
}

$Class* Streams$StreamGetter::class$ = nullptr;