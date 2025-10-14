#include <java/io/PipedWriter.h>

#include <java/io/IOException.h>
#include <java/io/PipedReader.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedReader = ::java::io::PipedReader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {

$FieldInfo _PipedWriter_FieldInfo_[] = {
	{"sink", "Ljava/io/PipedReader;", nullptr, $PRIVATE, $field(PipedWriter, sink)},
	{"closed", "Z", nullptr, $PRIVATE, $field(PipedWriter, closed)},
	{}
};

$MethodInfo _PipedWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PipedReader;)V", nullptr, $PUBLIC, $method(static_cast<void(PipedWriter::*)($PipedReader*)>(&PipedWriter::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PipedWriter::*)()>(&PipedWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/io/PipedReader;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PipedWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PipedWriter",
	"java.io.Writer",
	nullptr,
	_PipedWriter_FieldInfo_,
	_PipedWriter_MethodInfo_
};

$Object* allocate$PipedWriter($Class* clazz) {
	return $of($alloc(PipedWriter));
}

void PipedWriter::init$($PipedReader* snk) {
	$Writer::init$();
	this->closed = false;
	connect(snk);
}

void PipedWriter::init$() {
	$Writer::init$();
	this->closed = false;
}

void PipedWriter::connect($PipedReader* snk) {
	$synchronized(this) {
		if (snk == nullptr) {
			$throwNew($NullPointerException);
		} else if (this->sink != nullptr || $nc(snk)->connected) {
			$throwNew($IOException, "Already connected"_s);
		} else if (snk->closedByReader || this->closed) {
			$throwNew($IOException, "Pipe closed"_s);
		}
		$set(this, sink, snk);
		$nc(snk)->in = -1;
		snk->out = 0;
		snk->connected = true;
	}
}

void PipedWriter::write(int32_t c) {
	if (this->sink == nullptr) {
		$throwNew($IOException, "Pipe not connected"_s);
	}
	$nc(this->sink)->receive(c);
}

void PipedWriter::write($chars* cbuf, int32_t off, int32_t len) {
	if (this->sink == nullptr) {
		$throwNew($IOException, "Pipe not connected"_s);
	} else if ((((off | len) | (off + len)) | ($nc(cbuf)->length - (off + len))) < 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	$nc(this->sink)->receive(cbuf, off, len);
}

void PipedWriter::flush() {
	$synchronized(this) {
		if (this->sink != nullptr) {
			if ($nc(this->sink)->closedByReader || this->closed) {
				$throwNew($IOException, "Pipe closed"_s);
			}
			$synchronized(this->sink) {
				$nc($of(this->sink))->notifyAll();
			}
		}
	}
}

void PipedWriter::close() {
	this->closed = true;
	if (this->sink != nullptr) {
		$nc(this->sink)->receivedLast();
	}
}

PipedWriter::PipedWriter() {
}

$Class* PipedWriter::load$($String* name, bool initialize) {
	$loadClass(PipedWriter, name, initialize, &_PipedWriter_ClassInfo_, allocate$PipedWriter);
	return class$;
}

$Class* PipedWriter::class$ = nullptr;

	} // io
} // java