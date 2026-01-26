#include <java/io/PipedReader.h>

#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/PipedWriter.h>
#include <java/io/Reader.h>
#include <java/lang/InterruptedException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DEFAULT_PIPE_SIZE

using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $PipedWriter = ::java::io::PipedWriter;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _PipedReader_FieldInfo_[] = {
	{"closedByWriter", "Z", nullptr, 0, $field(PipedReader, closedByWriter)},
	{"closedByReader", "Z", nullptr, 0, $field(PipedReader, closedByReader)},
	{"connected", "Z", nullptr, 0, $field(PipedReader, connected)},
	{"readSide", "Ljava/lang/Thread;", nullptr, 0, $field(PipedReader, readSide)},
	{"writeSide", "Ljava/lang/Thread;", nullptr, 0, $field(PipedReader, writeSide)},
	{"DEFAULT_PIPE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PipedReader, DEFAULT_PIPE_SIZE)},
	{"buffer", "[C", nullptr, 0, $field(PipedReader, buffer)},
	{"in", "I", nullptr, 0, $field(PipedReader, in)},
	{"out", "I", nullptr, 0, $field(PipedReader, out)},
	{}
};

$MethodInfo _PipedReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PipedWriter;)V", nullptr, $PUBLIC, $method(PipedReader, init$, void, $PipedWriter*), "java.io.IOException"},
	{"<init>", "(Ljava/io/PipedWriter;I)V", nullptr, $PUBLIC, $method(PipedReader, init$, void, $PipedWriter*, int32_t), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(PipedReader, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(PipedReader, init$, void, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(PipedReader, close, void), "java.io.IOException"},
	{"connect", "(Ljava/io/PipedWriter;)V", nullptr, $PUBLIC, $virtualMethod(PipedReader, connect, void, $PipedWriter*), "java.io.IOException"},
	{"initPipe", "(I)V", nullptr, $PRIVATE, $method(PipedReader, initPipe, void, int32_t)},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PipedReader, ready, bool), "java.io.IOException"},
	{"receive", "(I)V", nullptr, $SYNCHRONIZED, $virtualMethod(PipedReader, receive, void, int32_t), "java.io.IOException"},
	{"receive", "([CII)V", nullptr, $SYNCHRONIZED, $virtualMethod(PipedReader, receive, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"receivedLast", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(PipedReader, receivedLast, void)},
	{}
};

$ClassInfo _PipedReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PipedReader",
	"java.io.Reader",
	nullptr,
	_PipedReader_FieldInfo_,
	_PipedReader_MethodInfo_
};

$Object* allocate$PipedReader($Class* clazz) {
	return $of($alloc(PipedReader));
}

void PipedReader::init$($PipedWriter* src) {
	PipedReader::init$(src, PipedReader::DEFAULT_PIPE_SIZE);
}

void PipedReader::init$($PipedWriter* src, int32_t pipeSize) {
	$Reader::init$();
	this->closedByWriter = false;
	this->closedByReader = false;
	this->connected = false;
	this->in = -1;
	this->out = 0;
	initPipe(pipeSize);
	connect(src);
}

void PipedReader::init$() {
	$Reader::init$();
	this->closedByWriter = false;
	this->closedByReader = false;
	this->connected = false;
	this->in = -1;
	this->out = 0;
	initPipe(PipedReader::DEFAULT_PIPE_SIZE);
}

void PipedReader::init$(int32_t pipeSize) {
	$Reader::init$();
	this->closedByWriter = false;
	this->closedByReader = false;
	this->connected = false;
	this->in = -1;
	this->out = 0;
	initPipe(pipeSize);
}

void PipedReader::initPipe(int32_t pipeSize) {
	if (pipeSize <= 0) {
		$throwNew($IllegalArgumentException, "Pipe size <= 0"_s);
	}
	$set(this, buffer, $new($chars, pipeSize));
}

void PipedReader::connect($PipedWriter* src) {
	$nc(src)->connect(this);
}

void PipedReader::receive(int32_t c) {
	$synchronized(this) {
		if (!this->connected) {
			$throwNew($IOException, "Pipe not connected"_s);
		} else if (this->closedByWriter || this->closedByReader) {
			$throwNew($IOException, "Pipe closed"_s);
		} else if (this->readSide != nullptr && !$nc(this->readSide)->isAlive()) {
			$throwNew($IOException, "Read end dead"_s);
		}
		$set(this, writeSide, $Thread::currentThread());
		while (this->in == this->out) {
			if ((this->readSide != nullptr) && !$nc(this->readSide)->isAlive()) {
				$throwNew($IOException, "Pipe broken"_s);
			}
			$of(this)->notifyAll();
			try {
				$of(this)->wait(1000);
			} catch ($InterruptedException& ex) {
				$throwNew($InterruptedIOException);
			}
		}
		if (this->in < 0) {
			this->in = 0;
			this->out = 0;
		}
		$nc(this->buffer)->set(this->in++, (char16_t)c);
		if (this->in >= $nc(this->buffer)->length) {
			this->in = 0;
		}
	}
}

void PipedReader::receive($chars* c, int32_t off, int32_t len) {
	$synchronized(this) {
		while (--len >= 0) {
			receive($nc(c)->get(off++));
		}
	}
}

void PipedReader::receivedLast() {
	$synchronized(this) {
		this->closedByWriter = true;
		$of(this)->notifyAll();
	}
}

int32_t PipedReader::read() {
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
		int32_t ret = $nc(this->buffer)->get(this->out++);
		if (this->out >= $nc(this->buffer)->length) {
			this->out = 0;
		}
		if (this->in == this->out) {
			this->in = -1;
		}
		return ret;
	}
}

int32_t PipedReader::read($chars* cbuf, int32_t off, int32_t len) {
	$synchronized(this) {
		if (!this->connected) {
			$throwNew($IOException, "Pipe not connected"_s);
		} else if (this->closedByReader) {
			$throwNew($IOException, "Pipe closed"_s);
		} else if (this->writeSide != nullptr && !$nc(this->writeSide)->isAlive() && !this->closedByWriter && (this->in < 0)) {
			$throwNew($IOException, "Write end dead"_s);
		}
		$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
		if (len == 0) {
			return 0;
		}
		int32_t c = read();
		if (c < 0) {
			return -1;
		}
		$nc(cbuf)->set(off, (char16_t)c);
		int32_t rlen = 1;
		while ((this->in >= 0) && (--len > 0)) {
			cbuf->set(off + rlen, $nc(this->buffer)->get(this->out++));
			++rlen;
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

bool PipedReader::ready() {
	$synchronized(this) {
		if (!this->connected) {
			$throwNew($IOException, "Pipe not connected"_s);
		} else if (this->closedByReader) {
			$throwNew($IOException, "Pipe closed"_s);
		} else if (this->writeSide != nullptr && !$nc(this->writeSide)->isAlive() && !this->closedByWriter && (this->in < 0)) {
			$throwNew($IOException, "Write end dead"_s);
		}
		if (this->in < 0) {
			return false;
		} else {
			return true;
		}
	}
}

void PipedReader::close() {
	this->in = -1;
	this->closedByReader = true;
}

PipedReader::PipedReader() {
}

$Class* PipedReader::load$($String* name, bool initialize) {
	$loadClass(PipedReader, name, initialize, &_PipedReader_ClassInfo_, allocate$PipedReader);
	return class$;
}

$Class* PipedReader::class$ = nullptr;

	} // io
} // java