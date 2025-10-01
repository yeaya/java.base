#include <CloseAndAvailableRC$Sink.h>

#include <CloseAndAvailableRC.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CloseAndAvailableRC = ::CloseAndAvailableRC;
using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _CloseAndAvailableRC$Sink_FieldInfo_[] = {
	{"this$0", "LCloseAndAvailableRC;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAndAvailableRC$Sink, this$0)},
	{}
};

$MethodInfo _CloseAndAvailableRC$Sink_MethodInfo_[] = {
	{"<init>", "(LCloseAndAvailableRC;)V", nullptr, $PRIVATE, $method(static_cast<void(CloseAndAvailableRC$Sink::*)($CloseAndAvailableRC*)>(&CloseAndAvailableRC$Sink::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CloseAndAvailableRC$Sink_InnerClassesInfo_[] = {
	{"CloseAndAvailableRC$Sink", "CloseAndAvailableRC", "Sink", $PRIVATE},
	{}
};

$ClassInfo _CloseAndAvailableRC$Sink_ClassInfo_ = {
	$ACC_SUPER,
	"CloseAndAvailableRC$Sink",
	"java.lang.Thread",
	nullptr,
	_CloseAndAvailableRC$Sink_FieldInfo_,
	_CloseAndAvailableRC$Sink_MethodInfo_,
	nullptr,
	nullptr,
	_CloseAndAvailableRC$Sink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseAndAvailableRC"
};

$Object* allocate$CloseAndAvailableRC$Sink($Class* clazz) {
	return $of($alloc(CloseAndAvailableRC$Sink));
}

void CloseAndAvailableRC$Sink::init$($CloseAndAvailableRC* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void CloseAndAvailableRC$Sink::run() {
	while (!this->this$0->stop) {
		try {
			int32_t num = $nc(this->this$0->inPipe)->available();
			if (num < 0) {
				this->this$0->stopTest = true;
			}
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Error on available:"_s, $(e->getMessage())}));
			e->printStackTrace($System::err);
		}
	}
}

CloseAndAvailableRC$Sink::CloseAndAvailableRC$Sink() {
}

$Class* CloseAndAvailableRC$Sink::load$($String* name, bool initialize) {
	$loadClass(CloseAndAvailableRC$Sink, name, initialize, &_CloseAndAvailableRC$Sink_ClassInfo_, allocate$CloseAndAvailableRC$Sink);
	return class$;
}

$Class* CloseAndAvailableRC$Sink::class$ = nullptr;