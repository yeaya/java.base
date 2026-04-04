#include <java/lang/ProcessImpl$ProcessPipeInputStream.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Process$PipeInputStream.h>
#include <java/lang/ProcessBuilder$NullInputStream.h>
#include <java/lang/ProcessImpl.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef INSTANCE

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process$PipeInputStream = ::java::lang::Process$PipeInputStream;
using $ProcessBuilder$NullInputStream = ::java::lang::ProcessBuilder$NullInputStream;
using $ProcessImpl = ::java::lang::ProcessImpl;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace lang {

void ProcessImpl$ProcessPipeInputStream::init$(int32_t fd) {
	$useLocalObjectStack();
	$BufferedInputStream::init$($$new($Process$PipeInputStream, $($ProcessImpl::newFileDescriptor(fd))));
	$set(this, closeLock, $new($Object));
}

$bytes* ProcessImpl$ProcessPipeInputStream::drainInputStream($InputStream* in) {
	$init(ProcessImpl$ProcessPipeInputStream);
	int32_t n = 0;
	int32_t j = 0;
	$var($bytes, a, nullptr);
	while ((j = $nc(in)->available()) > 0) {
		$assign(a, (a == nullptr) ? $new($bytes, j) : $Arrays::copyOf(a, n + j));
		n += in->read(a, n, j);
	}
	return (a == nullptr || n == a->length) ? a : $Arrays::copyOf(a, n);
}

void ProcessImpl$ProcessPipeInputStream::processExited() {
	$synchronized(this) {
		$useLocalObjectStack();
		$synchronized(this->closeLock) {
			try {
				$var($InputStream, in, this->in);
				if (in != nullptr) {
					$var($bytes, stragglers, drainInputStream(in));
					in->close();
					$init($ProcessBuilder$NullInputStream);
					$set(this, in, (stragglers == nullptr) ? $cast($InputStream, $ProcessBuilder$NullInputStream::INSTANCE) : $cast($InputStream, $new($ByteArrayInputStream, stragglers)));
				}
			} catch ($IOException& ignored) {
			}
		}
	}
}

void ProcessImpl$ProcessPipeInputStream::close() {
	$synchronized(this->closeLock) {
		$BufferedInputStream::close();
	}
}

ProcessImpl$ProcessPipeInputStream::ProcessImpl$ProcessPipeInputStream() {
}

$Class* ProcessImpl$ProcessPipeInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ProcessImpl$ProcessPipeInputStream, closeLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ProcessImpl$ProcessPipeInputStream, init$, void, int32_t)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$ProcessPipeInputStream, close, void), "java.io.IOException"},
		{"drainInputStream", "(Ljava/io/InputStream;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(ProcessImpl$ProcessPipeInputStream, drainInputStream, $bytes*, $InputStream*), "java.io.IOException"},
		{"processExited", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(ProcessImpl$ProcessPipeInputStream, processExited, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$ProcessPipeInputStream", "java.lang.ProcessImpl", "ProcessPipeInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessImpl$ProcessPipeInputStream",
		"java.io.BufferedInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$ProcessPipeInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessImpl$ProcessPipeInputStream);
	});
	return class$;
}

$Class* ProcessImpl$ProcessPipeInputStream::class$ = nullptr;

	} // lang
} // java