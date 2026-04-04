#include <CloseAndAvailableRC$Sink.h>
#include <CloseAndAvailableRC.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <jcpp.h>

using $CloseAndAvailableRC = ::CloseAndAvailableRC;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void CloseAndAvailableRC$Sink::init$($CloseAndAvailableRC* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void CloseAndAvailableRC$Sink::run() {
	$useLocalObjectStack();
	while (!this->this$0->stop) {
		try {
			int32_t num = $nc(this->this$0->inPipe)->available();
			if (num < 0) {
				this->this$0->stopTest = true;
			}
		} catch ($IOException& e) {
			$nc($System::err)->println($$str({"Error on available:"_s, $(e->getMessage())}));
			e->printStackTrace($System::err);
		}
	}
}

CloseAndAvailableRC$Sink::CloseAndAvailableRC$Sink() {
}

$Class* CloseAndAvailableRC$Sink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LCloseAndAvailableRC;", nullptr, $FINAL | $SYNTHETIC, $field(CloseAndAvailableRC$Sink, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LCloseAndAvailableRC;)V", nullptr, $PRIVATE, $method(CloseAndAvailableRC$Sink, init$, void, $CloseAndAvailableRC*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseAndAvailableRC$Sink, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseAndAvailableRC$Sink", "CloseAndAvailableRC", "Sink", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CloseAndAvailableRC$Sink",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseAndAvailableRC"
	};
	$loadClass(CloseAndAvailableRC$Sink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseAndAvailableRC$Sink);
	});
	return class$;
}

$Class* CloseAndAvailableRC$Sink::class$ = nullptr;