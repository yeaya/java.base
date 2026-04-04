#include <java/io/SequenceInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;

namespace java {
	namespace io {

void SequenceInputStream::init$($Enumeration* e) {
	$InputStream::init$();
	$set(this, e, e);
	peekNextStream();
}

void SequenceInputStream::init$($InputStream* s1, $InputStream* s2) {
	$InputStream::init$();
	$var($Vector, v, $new($Vector, 2));
	v->addElement(s1);
	v->addElement(s2);
	$set(this, e, v->elements());
	peekNextStream();
}

void SequenceInputStream::nextStream() {
	if (this->in != nullptr) {
		this->in->close();
	}
	peekNextStream();
}

void SequenceInputStream::peekNextStream() {
	if ($nc(this->e)->hasMoreElements()) {
		$set(this, in, $cast($InputStream, this->e->nextElement()));
		if (this->in == nullptr) {
			$throwNew($NullPointerException);
		}
	} else {
		$set(this, in, nullptr);
	}
}

int32_t SequenceInputStream::available() {
	if (this->in == nullptr) {
		return 0;
	}
	return $nc(this->in)->available();
}

int32_t SequenceInputStream::read() {
	while (this->in != nullptr) {
		int32_t c = this->in->read();
		if (c != -1) {
			return c;
		}
		nextStream();
	}
	return -1;
}

int32_t SequenceInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (this->in == nullptr) {
		return -1;
	} else if (b == nullptr) {
		$throwNew($NullPointerException);
	} else if (off < 0 || len < 0 || len > b->length - off) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return 0;
	}
	do {
		int32_t n = $nc(this->in)->read(b, off, len);
		if (n > 0) {
			return n;
		}
		nextStream();
	} while (this->in != nullptr);
	return -1;
}

void SequenceInputStream::close() {
	$var($IOException, ioe, nullptr);
	while (this->in != nullptr) {
		try {
			this->in->close();
		} catch ($IOException& e) {
			if (ioe == nullptr) {
				$assign(ioe, e);
			} else {
				ioe->addSuppressed(e);
			}
		}
		peekNextStream();
	}
	if (ioe != nullptr) {
		$throw(ioe);
	}
}

SequenceInputStream::SequenceInputStream() {
}

$Class* SequenceInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<+Ljava/io/InputStream;>;", 0, $field(SequenceInputStream, e)},
		{"in", "Ljava/io/InputStream;", nullptr, 0, $field(SequenceInputStream, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<+Ljava/io/InputStream;>;)V", $PUBLIC, $method(SequenceInputStream, init$, void, $Enumeration*)},
		{"<init>", "(Ljava/io/InputStream;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(SequenceInputStream, init$, void, $InputStream*, $InputStream*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(SequenceInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SequenceInputStream, close, void), "java.io.IOException"},
		{"nextStream", "()V", nullptr, $FINAL, $method(SequenceInputStream, nextStream, void), "java.io.IOException"},
		{"peekNextStream", "()V", nullptr, $PRIVATE, $method(SequenceInputStream, peekNextStream, void)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(SequenceInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(SequenceInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.SequenceInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SequenceInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequenceInputStream);
	});
	return class$;
}

$Class* SequenceInputStream::class$ = nullptr;

	} // io
} // java