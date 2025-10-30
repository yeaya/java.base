#include <MyProcess.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessHandle.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessHandle = ::java::lang::ProcessHandle;

$FieldInfo _MyProcess_FieldInfo_[] = {
	{"impl", "Ljava/lang/Process;", nullptr, 0, $field(MyProcess, impl)},
	{}
};

$MethodInfo _MyProcess_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Process;)V", nullptr, $PUBLIC, $method(static_cast<void(MyProcess::*)($Process*)>(&MyProcess::init$))},
	{"destroy", "()V", nullptr, $PUBLIC},
	{"exitValue", "()I", nullptr, $PUBLIC},
	{"getErrorStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"toHandle", "()Ljava/lang/ProcessHandle;", nullptr, $PUBLIC},
	{"waitFor", "()I", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$ClassInfo _MyProcess_ClassInfo_ = {
	$ACC_SUPER,
	"MyProcess",
	"java.lang.Process",
	nullptr,
	_MyProcess_FieldInfo_,
	_MyProcess_MethodInfo_
};

$Object* allocate$MyProcess($Class* clazz) {
	return $of($alloc(MyProcess));
}

void MyProcess::init$($Process* impl) {
	$Process::init$();
	$set(this, impl, impl);
}

$OutputStream* MyProcess::getOutputStream() {
	return $nc(this->impl)->getOutputStream();
}

$InputStream* MyProcess::getInputStream() {
	return $nc(this->impl)->getInputStream();
}

$InputStream* MyProcess::getErrorStream() {
	return $nc(this->impl)->getErrorStream();
}

int32_t MyProcess::waitFor() {
	return $nc(this->impl)->waitFor();
}

int32_t MyProcess::exitValue() {
	return $nc(this->impl)->exitValue();
}

void MyProcess::destroy() {
	$nc(this->impl)->destroy();
}

$ProcessHandle* MyProcess::toHandle() {
	return $nc(this->impl)->toHandle();
}

MyProcess::MyProcess() {
}

$Class* MyProcess::load$($String* name, bool initialize) {
	$loadClass(MyProcess, name, initialize, &_MyProcess_ClassInfo_, allocate$MyProcess);
	return class$;
}

$Class* MyProcess::class$ = nullptr;