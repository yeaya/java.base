#include <java/lang/ProcessImpl$ProcessPipeOutputStream.h>

#include <java/io/BufferedOutputStream.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/ProcessBuilder$NullOutputStream.h>
#include <java/lang/ProcessImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$NullOutputStream = ::java::lang::ProcessBuilder$NullOutputStream;
using $ProcessImpl = ::java::lang::ProcessImpl;

namespace java {
	namespace lang {

$MethodInfo _ProcessImpl$ProcessPipeOutputStream_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ProcessImpl$ProcessPipeOutputStream::*)(int32_t)>(&ProcessImpl$ProcessPipeOutputStream::init$))},
	{"processExited", "()V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ProcessImpl$ProcessPipeOutputStream_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$ProcessPipeOutputStream", "java.lang.ProcessImpl", "ProcessPipeOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessImpl$ProcessPipeOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessImpl$ProcessPipeOutputStream",
	"java.io.BufferedOutputStream",
	nullptr,
	nullptr,
	_ProcessImpl$ProcessPipeOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessImpl$ProcessPipeOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$ProcessPipeOutputStream($Class* clazz) {
	return $of($alloc(ProcessImpl$ProcessPipeOutputStream));
}

void ProcessImpl$ProcessPipeOutputStream::init$(int32_t fd) {
	$useLocalCurrentObjectStackCache();
	$BufferedOutputStream::init$($$new($FileOutputStream, $($ProcessImpl::newFileDescriptor(fd))));
}

void ProcessImpl$ProcessPipeOutputStream::processExited() {
	$synchronized(this) {
		$var($OutputStream, out, this->out);
		if (out != nullptr) {
			try {
				out->close();
			} catch ($IOException& ignored) {
			}
			$init($ProcessBuilder$NullOutputStream);
			$set(this, out, $ProcessBuilder$NullOutputStream::INSTANCE);
		}
	}
}

ProcessImpl$ProcessPipeOutputStream::ProcessImpl$ProcessPipeOutputStream() {
}

$Class* ProcessImpl$ProcessPipeOutputStream::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$ProcessPipeOutputStream, name, initialize, &_ProcessImpl$ProcessPipeOutputStream_ClassInfo_, allocate$ProcessImpl$ProcessPipeOutputStream);
	return class$;
}

$Class* ProcessImpl$ProcessPipeOutputStream::class$ = nullptr;

	} // lang
} // java