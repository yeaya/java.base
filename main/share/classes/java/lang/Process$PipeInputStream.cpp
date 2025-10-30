#include <java/lang/Process$PipeInputStream.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Math.h>
#include <java/lang/Process.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;

namespace java {
	namespace lang {

$MethodInfo _Process$PipeInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(static_cast<void(Process$PipeInputStream::*)($FileDescriptor*)>(&Process$PipeInputStream::init$))},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Process$PipeInputStream_InnerClassesInfo_[] = {
	{"java.lang.Process$PipeInputStream", "java.lang.Process", "PipeInputStream", $STATIC},
	{}
};

$ClassInfo _Process$PipeInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Process$PipeInputStream",
	"java.io.FileInputStream",
	nullptr,
	nullptr,
	_Process$PipeInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Process$PipeInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Process"
};

$Object* allocate$Process$PipeInputStream($Class* clazz) {
	return $of($alloc(Process$PipeInputStream));
}

void Process$PipeInputStream::init$($FileDescriptor* fd) {
	$FileInputStream::init$(fd);
}

int64_t Process$PipeInputStream::skip(int64_t n) {
	int64_t remaining = n;
	int32_t nr = 0;
	if (n <= 0) {
		return 0;
	}
	int32_t size = (int32_t)$Math::min((int64_t)2048, remaining);
	$var($bytes, skipBuffer, $new($bytes, size));
	while (remaining > 0) {
		nr = read(skipBuffer, 0, (int32_t)$Math::min((int64_t)size, remaining));
		if (nr < 0) {
			break;
		}
		remaining -= nr;
	}
	return n - remaining;
}

Process$PipeInputStream::Process$PipeInputStream() {
}

$Class* Process$PipeInputStream::load$($String* name, bool initialize) {
	$loadClass(Process$PipeInputStream, name, initialize, &_Process$PipeInputStream_ClassInfo_, allocate$Process$PipeInputStream);
	return class$;
}

$Class* Process$PipeInputStream::class$ = nullptr;

	} // lang
} // java