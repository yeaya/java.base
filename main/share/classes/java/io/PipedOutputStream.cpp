#include <java/io/PipedOutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PipedInputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PipedInputStream = ::java::io::PipedInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {

$FieldInfo _PipedOutputStream_FieldInfo_[] = {
	{"sink", "Ljava/io/PipedInputStream;", nullptr, $PRIVATE | $VOLATILE, $field(PipedOutputStream, sink)},
	{}
};

$MethodInfo _PipedOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PipedInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PipedOutputStream::*)($PipedInputStream*)>(&PipedOutputStream::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PipedOutputStream::*)()>(&PipedOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/io/PipedInputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PipedOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PipedOutputStream",
	"java.io.OutputStream",
	nullptr,
	_PipedOutputStream_FieldInfo_,
	_PipedOutputStream_MethodInfo_
};

$Object* allocate$PipedOutputStream($Class* clazz) {
	return $of($alloc(PipedOutputStream));
}

void PipedOutputStream::init$($PipedInputStream* snk) {
	$OutputStream::init$();
	connect(snk);
}

void PipedOutputStream::init$() {
	$OutputStream::init$();
}

void PipedOutputStream::connect($PipedInputStream* snk) {
	$synchronized(this) {
		if (snk == nullptr) {
			$throwNew($NullPointerException);
		} else if (this->sink != nullptr || $nc(snk)->connected) {
			$throwNew($IOException, "Already connected"_s);
		}
		$set(this, sink, snk);
		$nc(snk)->in = -1;
		snk->out = 0;
		snk->connected = true;
	}
}

void PipedOutputStream::write(int32_t b) {
	$var($PipedInputStream, sink, this->sink);
	if (sink == nullptr) {
		$throwNew($IOException, "Pipe not connected"_s);
	}
	$nc(sink)->receive(b);
}

void PipedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$var($PipedInputStream, sink, this->sink);
	if (sink == nullptr) {
		$throwNew($IOException, "Pipe not connected"_s);
	} else if (b == nullptr) {
		$throwNew($NullPointerException);
	} else if ((off < 0) || (off > $nc(b)->length) || (len < 0) || ((off + len) > $nc(b)->length) || ((off + len) < 0)) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	$nc(sink)->receive(b, off, len);
}

void PipedOutputStream::flush() {
	$synchronized(this) {
		if (this->sink != nullptr) {
			$synchronized(this->sink) {
				$nc($of(this->sink))->notifyAll();
			}
		}
	}
}

void PipedOutputStream::close() {
	$var($PipedInputStream, sink, this->sink);
	if (sink != nullptr) {
		sink->receivedLast();
	}
}

PipedOutputStream::PipedOutputStream() {
}

$Class* PipedOutputStream::load$($String* name, bool initialize) {
	$loadClass(PipedOutputStream, name, initialize, &_PipedOutputStream_ClassInfo_, allocate$PipedOutputStream);
	return class$;
}

$Class* PipedOutputStream::class$ = nullptr;

	} // io
} // java