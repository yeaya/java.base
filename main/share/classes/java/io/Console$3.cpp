#include <java/io/Console$3.h>

#include <java/io/Console.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _Console$3_FieldInfo_[] = {
	{"this$0", "Ljava/io/Console;", nullptr, $FINAL | $SYNTHETIC, $field(Console$3, this$0)},
	{}
};

$MethodInfo _Console$3_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Console;Ljava/io/Writer;Z)V", nullptr, 0, $method(Console$3, init$, void, $Console*, $Writer*, bool)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Console$3, close, void)},
	{}
};

$EnclosingMethodInfo _Console$3_EnclosingMethodInfo_ = {
	"java.io.Console",
	"<init>",
	"()V"
};

$InnerClassInfo _Console$3_InnerClassesInfo_[] = {
	{"java.io.Console$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Console$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Console$3",
	"java.io.PrintWriter",
	nullptr,
	_Console$3_FieldInfo_,
	_Console$3_MethodInfo_,
	nullptr,
	&_Console$3_EnclosingMethodInfo_,
	_Console$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.Console"
};

$Object* allocate$Console$3($Class* clazz) {
	return $of($alloc(Console$3));
}

void Console$3::init$($Console* this$0, $Writer* out, bool autoFlush) {
	$set(this, this$0, this$0);
	$PrintWriter::init$(out, autoFlush);
}

void Console$3::close() {
}

Console$3::Console$3() {
}

$Class* Console$3::load$($String* name, bool initialize) {
	$loadClass(Console$3, name, initialize, &_Console$3_ClassInfo_, allocate$Console$3);
	return class$;
}

$Class* Console$3::class$ = nullptr;

	} // io
} // java