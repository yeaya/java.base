#include <Write$Sink.h>

#include <Write.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Write$Sink_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Write$Sink, init$, void)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Write$Sink, write, void, int32_t)},
	{}
};

$InnerClassInfo _Write$Sink_InnerClassesInfo_[] = {
	{"Write$Sink", "Write", "Sink", $STATIC},
	{}
};

$ClassInfo _Write$Sink_ClassInfo_ = {
	$ACC_SUPER,
	"Write$Sink",
	"java.io.OutputStream",
	nullptr,
	nullptr,
	_Write$Sink_MethodInfo_,
	nullptr,
	nullptr,
	_Write$Sink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Write"
};

$Object* allocate$Write$Sink($Class* clazz) {
	return $of($alloc(Write$Sink));
}

void Write$Sink::init$() {
	$OutputStream::init$();
}

void Write$Sink::write(int32_t b) {
	$throwNew($RuntimeException, "Filter stream directly invoked write(int) method of underlying stream"_s);
}

Write$Sink::Write$Sink() {
}

$Class* Write$Sink::load$($String* name, bool initialize) {
	$loadClass(Write$Sink, name, initialize, &_Write$Sink_ClassInfo_, allocate$Write$Sink);
	return class$;
}

$Class* Write$Sink::class$ = nullptr;