#include <java/lang/ProcessImpl$DeferredCloseProcessPipeInputStream.h>
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

void ProcessImpl$DeferredCloseProcessPipeInputStream::init$(int32_t fd) {
	$useLocalObjectStack();
	$BufferedInputStream::init$($$new($Process$PipeInputStream, $($ProcessImpl::newFileDescriptor(fd))));
	$set(this, closeLock, $new($Object));
	this->useCount = 0;
	this->closePending = false;
}

$InputStream* ProcessImpl$DeferredCloseProcessPipeInputStream::drainInputStream($InputStream* in) {
	$useLocalObjectStack();
	int32_t n = 0;
	int32_t j = 0;
	$var($bytes, a, nullptr);
	$synchronized(this->closeLock) {
		if (this->buf == nullptr) {
			return nullptr;
		}
		j = $nc(in)->available();
	}
	while (j > 0) {
		$assign(a, (a == nullptr) ? $new($bytes, j) : $Arrays::copyOf(a, n + j));
		$synchronized(this->closeLock) {
			if (this->buf == nullptr) {
				return nullptr;
			}
			n += in->read(a, n, j);
			j = in->available();
		}
	}
	$init($ProcessBuilder$NullInputStream);
	return (a == nullptr) ? $cast($InputStream, $ProcessBuilder$NullInputStream::INSTANCE) : $cast($InputStream, $new($ByteArrayInputStream, n == a->length ? a : $($Arrays::copyOf(a, n))));
}

void ProcessImpl$DeferredCloseProcessPipeInputStream::processExited() {
	$synchronized(this) {
		$useLocalObjectStack();
		try {
			$var($InputStream, in, this->in);
			if (in != nullptr) {
				$var($InputStream, stragglers, drainInputStream(in));
				in->close();
				$set(this, in, stragglers);
			}
		} catch ($IOException& ignored) {
		}
	}
}

void ProcessImpl$DeferredCloseProcessPipeInputStream::raise() {
	$synchronized(this->closeLock) {
		++this->useCount;
	}
}

void ProcessImpl$DeferredCloseProcessPipeInputStream::lower() {
	$synchronized(this->closeLock) {
		--this->useCount;
		if (this->useCount == 0 && this->closePending) {
			this->closePending = false;
			$BufferedInputStream::close();
		}
	}
}

int32_t ProcessImpl$DeferredCloseProcessPipeInputStream::read() {
	raise();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $BufferedInputStream::read();
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lower();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseProcessPipeInputStream::read($bytes* b) {
	raise();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $BufferedInputStream::read(b);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lower();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseProcessPipeInputStream::read($bytes* b, int32_t off, int32_t len) {
	raise();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $BufferedInputStream::read(b, off, len);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lower();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ProcessImpl$DeferredCloseProcessPipeInputStream::skip(int64_t n) {
	raise();
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $BufferedInputStream::skip(n);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lower();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseProcessPipeInputStream::available() {
	raise();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $BufferedInputStream::available();
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lower();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ProcessImpl$DeferredCloseProcessPipeInputStream::close() {
	$synchronized(this->closeLock) {
		if (this->useCount == 0) {
			$BufferedInputStream::close();
		} else {
			this->closePending = true;
		}
	}
}

ProcessImpl$DeferredCloseProcessPipeInputStream::ProcessImpl$DeferredCloseProcessPipeInputStream() {
}

$Class* ProcessImpl$DeferredCloseProcessPipeInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ProcessImpl$DeferredCloseProcessPipeInputStream, closeLock)},
		{"useCount", "I", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseProcessPipeInputStream, useCount)},
		{"closePending", "Z", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseProcessPipeInputStream, closePending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ProcessImpl$DeferredCloseProcessPipeInputStream, init$, void, int32_t)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, close, void), "java.io.IOException"},
		{"drainInputStream", "(Ljava/io/InputStream;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseProcessPipeInputStream, drainInputStream, $InputStream*, $InputStream*), "java.io.IOException"},
		{"lower", "()V", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseProcessPipeInputStream, lower, void), "java.io.IOException"},
		{"processExited", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, processExited, void)},
		{"raise", "()V", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseProcessPipeInputStream, raise, void)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseProcessPipeInputStream, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$DeferredCloseProcessPipeInputStream", "java.lang.ProcessImpl", "DeferredCloseProcessPipeInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessImpl$DeferredCloseProcessPipeInputStream",
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
	$loadClass(ProcessImpl$DeferredCloseProcessPipeInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessImpl$DeferredCloseProcessPipeInputStream);
	});
	return class$;
}

$Class* ProcessImpl$DeferredCloseProcessPipeInputStream::class$ = nullptr;

	} // lang
} // java