#include <java/lang/ProcessImpl$DeferredCloseInputStream.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Process$PipeInputStream.h>
#include <java/lang/ProcessImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process$PipeInputStream = ::java::lang::Process$PipeInputStream;

namespace java {
	namespace lang {

$FieldInfo _ProcessImpl$DeferredCloseInputStream_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseInputStream, lock)},
	{"closePending", "Z", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseInputStream, closePending)},
	{"useCount", "I", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseInputStream, useCount)},
	{"streamToClose", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ProcessImpl$DeferredCloseInputStream, streamToClose)},
	{}
};

$MethodInfo _ProcessImpl$DeferredCloseInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(ProcessImpl$DeferredCloseInputStream, init$, void, $FileDescriptor*)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, close, void), "java.io.IOException"},
	{"closeDeferred", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseInputStream, closeDeferred, void, $InputStream*), "java.io.IOException"},
	{"lower", "()V", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseInputStream, lower, void), "java.io.IOException"},
	{"raise", "()V", nullptr, $PRIVATE, $method(ProcessImpl$DeferredCloseInputStream, raise, void)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, read, int32_t, $bytes*), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$DeferredCloseInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _ProcessImpl$DeferredCloseInputStream_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$DeferredCloseInputStream", "java.lang.ProcessImpl", "DeferredCloseInputStream", $PRIVATE | $STATIC},
	{"java.lang.Process$PipeInputStream", "java.lang.Process", "PipeInputStream", $STATIC},
	{}
};

$ClassInfo _ProcessImpl$DeferredCloseInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessImpl$DeferredCloseInputStream",
	"java.lang.Process$PipeInputStream",
	nullptr,
	_ProcessImpl$DeferredCloseInputStream_FieldInfo_,
	_ProcessImpl$DeferredCloseInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessImpl$DeferredCloseInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$DeferredCloseInputStream($Class* clazz) {
	return $of($alloc(ProcessImpl$DeferredCloseInputStream));
}

void ProcessImpl$DeferredCloseInputStream::init$($FileDescriptor* fd) {
	$Process$PipeInputStream::init$(fd);
	$set(this, lock, $new($Object));
	this->closePending = false;
	this->useCount = 0;
}

void ProcessImpl$DeferredCloseInputStream::raise() {
	$synchronized(this->lock) {
		++this->useCount;
	}
}

void ProcessImpl$DeferredCloseInputStream::lower() {
	$synchronized(this->lock) {
		--this->useCount;
		if (this->useCount == 0 && this->closePending) {
			$nc(this->streamToClose)->close();
		}
	}
}

void ProcessImpl$DeferredCloseInputStream::closeDeferred($InputStream* stc) {
	$synchronized(this->lock) {
		if (this->useCount == 0) {
			$nc(stc)->close();
		} else {
			this->closePending = true;
			$set(this, streamToClose, stc);
		}
	}
}

void ProcessImpl$DeferredCloseInputStream::close() {
	$synchronized(this->lock) {
		this->useCount = 0;
		this->closePending = false;
	}
	$Process$PipeInputStream::close();
}

int32_t ProcessImpl$DeferredCloseInputStream::read() {
	raise();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $Process$PipeInputStream::read();
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
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseInputStream::read($bytes* b) {
	raise();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $Process$PipeInputStream::read(b);
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
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseInputStream::read($bytes* b, int32_t off, int32_t len) {
	raise();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $Process$PipeInputStream::read(b, off, len);
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
	}
	$shouldNotReachHere();
}

int64_t ProcessImpl$DeferredCloseInputStream::skip(int64_t n) {
	raise();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $Process$PipeInputStream::skip(n);
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
	}
	$shouldNotReachHere();
}

int32_t ProcessImpl$DeferredCloseInputStream::available() {
	raise();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $Process$PipeInputStream::available();
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
	}
	$shouldNotReachHere();
}

ProcessImpl$DeferredCloseInputStream::ProcessImpl$DeferredCloseInputStream() {
}

$Class* ProcessImpl$DeferredCloseInputStream::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$DeferredCloseInputStream, name, initialize, &_ProcessImpl$DeferredCloseInputStream_ClassInfo_, allocate$ProcessImpl$DeferredCloseInputStream);
	return class$;
}

$Class* ProcessImpl$DeferredCloseInputStream::class$ = nullptr;

	} // lang
} // java