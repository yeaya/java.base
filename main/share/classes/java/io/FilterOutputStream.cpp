#include <java/io/FilterOutputStream.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ThreadDeath = ::java::lang::ThreadDeath;

namespace java {
	namespace io {

$FieldInfo _FilterOutputStream_FieldInfo_[] = {
	{"out", "Ljava/io/OutputStream;", nullptr, $PROTECTED, $field(FilterOutputStream, out)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(FilterOutputStream, closed)},
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FilterOutputStream, closeLock)},
	{}
};

$MethodInfo _FilterOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(FilterOutputStream::*)($OutputStream*)>(&FilterOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FilterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FilterOutputStream",
	"java.io.OutputStream",
	nullptr,
	_FilterOutputStream_FieldInfo_,
	_FilterOutputStream_MethodInfo_
};

$Object* allocate$FilterOutputStream($Class* clazz) {
	return $of($alloc(FilterOutputStream));
}

void FilterOutputStream::init$($OutputStream* out) {
	$OutputStream::init$();
	$set(this, closeLock, $new($Object));
	$set(this, out, out);
}

void FilterOutputStream::write(int32_t b) {
	$nc(this->out)->write(b);
}

void FilterOutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void FilterOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if ((((off | len) | ($nc(b)->length - (len + off))) | (off + len)) < 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)$nc(b)->get(off + i));
	}
}

void FilterOutputStream::flush() {
	$nc(this->out)->flush();
}

void FilterOutputStream::close() {
	if (this->closed) {
		return;
	}
	$synchronized(this->closeLock) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	$var($Throwable, flushException, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				flush();
			} catch ($Throwable&) {
				$var($Throwable, e, $catch());
				$assign(flushException, e);
				$throw(e);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (flushException == nullptr) {
				$nc(this->out)->close();
			} else {
				try {
					$nc(this->out)->close();
				} catch ($Throwable&) {
					$var($Throwable, closeException, $catch());
					if (($instanceOf($ThreadDeath, flushException)) && !($instanceOf($ThreadDeath, closeException))) {
						$nc(flushException)->addSuppressed(closeException);
						$throw($cast($ThreadDeath, flushException));
					}
					if (flushException != closeException) {
						closeException->addSuppressed(flushException);
					}
					$throw(closeException);
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

FilterOutputStream::FilterOutputStream() {
}

$Class* FilterOutputStream::load$($String* name, bool initialize) {
	$loadClass(FilterOutputStream, name, initialize, &_FilterOutputStream_ClassInfo_, allocate$FilterOutputStream);
	return class$;
}

$Class* FilterOutputStream::class$ = nullptr;

	} // io
} // java