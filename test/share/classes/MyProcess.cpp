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
	{"<init>", "(Ljava/lang/Process;)V", nullptr, $PUBLIC, $method(MyProcess, init$, void, $Process*)},
	{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(MyProcess, destroy, void)},
	{"exitValue", "()I", nullptr, $PUBLIC, $virtualMethod(MyProcess, exitValue, int32_t)},
	{"getErrorStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(MyProcess, getErrorStream, $InputStream*)},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(MyProcess, getInputStream, $InputStream*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(MyProcess, getOutputStream, $OutputStream*)},
	{"toHandle", "()Ljava/lang/ProcessHandle;", nullptr, $PUBLIC, $virtualMethod(MyProcess, toHandle, $ProcessHandle*)},
	{"waitFor", "()I", nullptr, $PUBLIC, $virtualMethod(MyProcess, waitFor, int32_t), "java.lang.InterruptedException"},
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