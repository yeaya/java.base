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

void ProcessImpl$ProcessPipeOutputStream::init$(int32_t fd) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ProcessImpl$ProcessPipeOutputStream, init$, void, int32_t)},
		{"processExited", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(ProcessImpl$ProcessPipeOutputStream, processExited, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$ProcessPipeOutputStream", "java.lang.ProcessImpl", "ProcessPipeOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessImpl$ProcessPipeOutputStream",
		"java.io.BufferedOutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$ProcessPipeOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProcessImpl$ProcessPipeOutputStream));
	});
	return class$;
}

$Class* ProcessImpl$ProcessPipeOutputStream::class$ = nullptr;

	} // lang
} // java