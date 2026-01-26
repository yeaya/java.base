#include <java/io/PipedInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef DEFAULT_PIPE_SIZE
#undef PIPE_SIZE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {

$FieldInfo _PipedInputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PipedInputStream, $assertionsDisabled)},
	{"closedByWriter", "Z", nullptr, 0, $field(PipedInputStream, closedByWriter)},
	{"closedByReader", "Z", nullptr, $VOLATILE, $field(PipedInputStream, closedByReader)},
	{"connected", "Z", nullptr, 0, $field(PipedInputStream, connected)},
	{"readSide", "Ljava/lang/Thread;", nullptr, 0, $field(PipedInputStream, readSide)},
	{"writeSide", "Ljava/lang/Thread;", nullptr, 0, $field(PipedInputStream, writeSide)},
	{"DEFAULT_PIPE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PipedInputStream, DEFAULT_PIPE_SIZE)},
	{"PIPE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PipedInputStream, PIPE_SIZE)},
	{"buffer", "[B", nullptr, $PROTECTED, $field(PipedInputStream, buffer)},
	{"in", "I", nullptr, $PROTECTED, $field(PipedInputStream, in)},
	{"out", "I", nullptr, $PROTECTED, $field(PipedInputStream, out)},
	{}
};

$MethodInfo _PipedInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PipedOutputStream;)V", nullptr, $PUBLIC, $method(PipedInputStream, init$, void, $PipedOutputStream*), "java.io.IOException"},
	{"<init>", "(Ljava/io/PipedOutputStream;I)V", nullptr, $PUBLIC, $method(PipedInputStream, init$, void, $PipedOutputStream*, int32_t), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(PipedInputStream, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(PipedInputStream, init$, void, int32_t)},
	{"available", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedInputStream, available, int32_t), "java.io.IOException"},
	{"awaitSpace", "()V", nullptr, $PRIVATE, $method(PipedInputStream, awaitSpace, void), "java.io.IOException"},
	{"checkStateForReceive", "()V", nullptr, $PRIVATE, $method(PipedInputStream, checkStateForReceive, void), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(PipedInputStream, close, void), "java.io.IOException"},
	{"connect", "(Ljava/io/PipedOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(PipedInputStream, connect, void, $PipedOutputStream*), "java.io.IOException"},
	{"initPipe", "(I)V", nullptr, $PRIVATE, $method(PipedInputStream, initPipe, void, int32_t)},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"receive", "(I)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(PipedInputStream, receive, void, int32_t), "java.io.IOException"},
	{"receive", "([BII)V", nullptr, $SYNCHRONIZED, $virtualMethod(PipedInputStream, receive, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"receivedLast", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(PipedInputStream, receivedLast, void)},
	{}
};

$ClassInfo _PipedInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PipedInputStream",
	"java.io.InputStream",
	nullptr,
	_PipedInputStream_FieldInfo_,
	_PipedInputStream_MethodInfo_
};

$Object* allocate$PipedInputStream($Class* clazz) {
	return $of($alloc(PipedInputStream));
}

bool PipedInputStream::$assertionsDisabled = false;

void PipedInputStream::init$($PipedOutputStream* src) {
	PipedInputStream::init$(src, PipedInputStream::DEFAULT_PIPE_SIZE);
}

void PipedInputStream::init$($PipedOutputStream* src, int32_t pipeSize) {
	$InputStream::init$();
	this->in = -1;
	this->out = 0;
	initPipe(pipeSize);
	connect(src);
}

void PipedInputStream::init$() {
	$InputStream::init$();
	this->in = -1;
	this->out = 0;
	initPipe(PipedInputStream::DEFAULT_PIPE_SIZE);
}

void PipedInputStream::init$(int32_t pipeSize) {
	$InputStream::init$();
	this->in = -1;
	this->out = 0;
	initPipe(pipeSize);
}

void PipedInputStream::initPipe(int32_t pipeSize) {
	if (pipeSize <= 0) {
		$throwNew($IllegalArgumentException, "Pipe Size <= 0"_s);
	}
	$set(this, buffer, $new($bytes, pipeSize));
}

void PipedInputStream::connect($PipedOutputStream* src) {
	$nc(src)->connect(this);
}

void PipedInputStream::receive(int32_t b) {
	$synchronized(this) {
		checkStateForReceive();
		$set(this, writeSide, $Thread::currentThread());
		if (this->in == this->out) {
			awaitSpace();
		}
		if (this->in < 0) {
			this->in = 0;
			this->out = 0;
		}
		$nc(this->buffer)->set(this->in++, (int8_t)((int32_t)(b & (uint32_t)255)));
		if (this->in >= $nc(this->buffer)->length) {
			this->in = 0;
		}
	}
}

void PipedInputStream::receive($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		checkStateForReceive();
		$set(this, writeSide, $Thread::currentThread());
		int32_t bytesToTransfer = len;
		while (bytesToTransfer > 0) {
			if (this->in == this->out) {
				awaitSpace();
			}
			int32_t nextTransferAmount = 0;
			if (this->out < this->in) {
				nextTransferAmount = $nc(this->buffer)->length - this->in;
			} else if (this->in < this->out) {
				if (this->in == -1) {
					this->in = (this->out = 0);
					nextTransferAmount = $nc(this->buffer)->length - this->in;
				} else {
					nextTransferAmount = this->out - this->in;
				}
			}
			if (nextTransferAmount > bytesToTransfer) {
				nextTransferAmount = bytesToTransfer;
			}
			if (!PipedInputStream::$assertionsDisabled && !(nextTransferAmount > 0)) {
				$throwNew($AssertionError);
			}
			$System::arraycopy(b, off, this->buffer, this->in, nextTransferAmount);
			bytesToTransfer -= nextTransferAmount;
			off += nextTransferAmount;
			this->in += nextTransferAmount;
			if (this->in >= $nc(this->buffer)->length) {
				this->in = 0;
			}
		}
	}
}

void PipedInputStream::checkStateForReceive() {
	if (!this->connected) {
		$throwNew($IOException, "Pipe not connected"_s);
	} else if (this->closedByWriter || this->closedByReader) {
		$throwNew($IOException, "Pipe closed"_s);
	} else if (this->readSide != nullptr && !$nc(this->readSide)->isAlive()) {
		$throwNew($IOException, "Read end dead"_s);
	}
}

void PipedInputStream::awaitSpace() {
	while (this->in == this->out) {
		checkStateForReceive();
		$of(this)->notifyAll();
		try {
			$of(this)->wait(1000);
		} catch ($InterruptedException& ex) {
			$throwNew($InterruptedIOException);
		}
	}
}

void PipedInputStream::receivedLast() {
	$synchronized(this) {
		this->closedByWriter = true;
		$of(this)->notifyAll();
	}
}

int32_t PipedInputStream::read() {
	$synchronized(this) {
		if (!this->connected) {
			$throwNew($IOException, "Pipe not connected"_s);
		} else if (this->closedByReader) {
			$throwNew($IOException, "Pipe closed"_s);
		} else if (this->writeSide != nullptr && !$nc(this->writeSide)->isAlive() && !this->closedByWriter && (this->in < 0)) {
			$throwNew($IOException, "Write end dead"_s);
		}
		$set(this, readSide, $Thread::currentThread());
		int32_t trials = 2;
		while (this->in < 0) {
			if (this->closedByWriter) {
				return -1;
			}
			if ((this->writeSide != nullptr) && (!$nc(this->writeSide)->isAlive()) && (--trials < 0)) {
				$throwNew($IOException, "Pipe broken"_s);
			}
			$of(this)->notifyAll();
			try {
				$of(this)->wait(1000);
			} catch ($InterruptedException& ex) {
				$throwNew($InterruptedIOException);
			}
		}
		int32_t ret = (int32_t)($nc(this->buffer)->get(this->out++) & (uint32_t)255);
		if (this->out >= $nc(this->buffer)->length) {
			this->out = 0;
		}
		if (this->in == this->out) {
			this->in = -1;
		}
		return ret;
	}
}

int32_t PipedInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (b == nullptr) {
			$throwNew($NullPointerException);
		} else if (off < 0 || len < 0 || len > $nc(b)->length - off) {
			$throwNew($IndexOutOfBoundsException);
		} else if (len == 0) {
			return 0;
		}
		int32_t c = read();
		if (c < 0) {
			return -1;
		}
		$nc(b)->set(off, (int8_t)c);
		int32_t rlen = 1;
		while ((this->in >= 0) && (len > 1)) {
			int32_t available = 0;
			if (this->in > this->out) {
				available = $Math::min(($nc(this->buffer)->length - this->out), (this->in - this->out));
			} else {
				available = $nc(this->buffer)->length - this->out;
			}
			if (available > (len - 1)) {
				available = len - 1;
			}
			$System::arraycopy(this->buffer, this->out, b, off + rlen, available);
			this->out += available;
			rlen += available;
			len -= available;
			if (this->out >= $nc(this->buffer)->length) {
				this->out = 0;
			}
			if (this->in == this->out) {
				this->in = -1;
			}
		}
		return rlen;
	}
}

int32_t PipedInputStream::available() {
	$synchronized(this) {
		if (this->in < 0) {
			return 0;
		} else if (this->in == this->out) {
			return $nc(this->buffer)->length;
		} else if (this->in > this->out) {
			return this->in - this->out;
		} else {
			return this->in + $nc(this->buffer)->length - this->out;
		}
	}
}

void PipedInputStream::close() {
	this->closedByReader = true;
	$synchronized(this) {
		this->in = -1;
	}
}

void clinit$PipedInputStream($Class* class$) {
	PipedInputStream::$assertionsDisabled = !PipedInputStream::class$->desiredAssertionStatus();
}

PipedInputStream::PipedInputStream() {
}

$Class* PipedInputStream::load$($String* name, bool initialize) {
	$loadClass(PipedInputStream, name, initialize, &_PipedInputStream_ClassInfo_, clinit$PipedInputStream, allocate$PipedInputStream);
	return class$;
}

$Class* PipedInputStream::class$ = nullptr;

	} // io
} // java