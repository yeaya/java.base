#include <Write$F.h>

#include <Write.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $Write = ::Write;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Write$F_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Write$F::*)($OutputStream*)>(&Write$F::init$))},
	{"write", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Write$F_InnerClassesInfo_[] = {
	{"Write$F", "Write", "F", $STATIC},
	{}
};

$ClassInfo _Write$F_ClassInfo_ = {
	$ACC_SUPER,
	"Write$F",
	"java.io.FilterOutputStream",
	nullptr,
	nullptr,
	_Write$F_MethodInfo_,
	nullptr,
	nullptr,
	_Write$F_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Write"
};

$Object* allocate$Write$F($Class* clazz) {
	return $of($alloc(Write$F));
}

void Write$F::init$($OutputStream* o) {
	$FilterOutputStream::init$(o);
}

void Write$F::write(int32_t b) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({"Ignoring write of "_s, $$str(b)}));
}

Write$F::Write$F() {
}

$Class* Write$F::load$($String* name, bool initialize) {
	$loadClass(Write$F, name, initialize, &_Write$F_ClassInfo_, allocate$Write$F);
	return class$;
}

$Class* Write$F::class$ = nullptr;