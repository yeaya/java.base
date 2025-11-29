#include <java/io/Console$1.h>

#include <java/io/Console.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _Console$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/Console;", nullptr, $FINAL | $SYNTHETIC, $field(Console$1, this$0)},
	{}
};

$MethodInfo _Console$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Console;)V", nullptr, 0, $method(static_cast<void(Console$1::*)($Console*)>(&Console$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Console$1_EnclosingMethodInfo_ = {
	"java.io.Console",
	"installShutdownHook",
	"()V"
};

$InnerClassInfo _Console$1_InnerClassesInfo_[] = {
	{"java.io.Console$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Console$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Console$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Console$1_FieldInfo_,
	_Console$1_MethodInfo_,
	nullptr,
	&_Console$1_EnclosingMethodInfo_,
	_Console$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.Console"
};

$Object* allocate$Console$1($Class* clazz) {
	return $of($alloc(Console$1));
}

void Console$1::init$($Console* this$0) {
	$set(this, this$0, this$0);
}

void Console$1::run() {
	try {
		if (this->this$0->restoreEcho) {
			$Console::echo(true);
		}
	} catch ($IOException& x) {
	}
}

Console$1::Console$1() {
}

$Class* Console$1::load$($String* name, bool initialize) {
	$loadClass(Console$1, name, initialize, &_Console$1_ClassInfo_, allocate$Console$1);
	return class$;
}

$Class* Console$1::class$ = nullptr;

	} // io
} // java