#include <java/io/SequenceInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;

namespace java {
	namespace io {

$FieldInfo _SequenceInputStream_FieldInfo_[] = {
	{"e", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<+Ljava/io/InputStream;>;", 0, $field(SequenceInputStream, e)},
	{"in", "Ljava/io/InputStream;", nullptr, 0, $field(SequenceInputStream, in)},
	{}
};

$MethodInfo _SequenceInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<+Ljava/io/InputStream;>;)V", $PUBLIC, $method(static_cast<void(SequenceInputStream::*)($Enumeration*)>(&SequenceInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(SequenceInputStream::*)($InputStream*,$InputStream*)>(&SequenceInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"nextStream", "()V", nullptr, $FINAL, $method(static_cast<void(SequenceInputStream::*)()>(&SequenceInputStream::nextStream)), "java.io.IOException"},
	{"peekNextStream", "()V", nullptr, $PRIVATE, $method(static_cast<void(SequenceInputStream::*)()>(&SequenceInputStream::peekNextStream))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SequenceInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.SequenceInputStream",
	"java.io.InputStream",
	nullptr,
	_SequenceInputStream_FieldInfo_,
	_SequenceInputStream_MethodInfo_
};

$Object* allocate$SequenceInputStream($Class* clazz) {
	return $of($alloc(SequenceInputStream));
}

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
		$nc(this->in)->close();
	}
	peekNextStream();
}

void SequenceInputStream::peekNextStream() {
	if ($nc(this->e)->hasMoreElements()) {
		$set(this, in, $cast($InputStream, $nc(this->e)->nextElement()));
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
		int32_t c = $nc(this->in)->read();
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
	} else if (off < 0 || len < 0 || len > $nc(b)->length - off) {
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
			$nc(this->in)->close();
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			if (ioe == nullptr) {
				$assign(ioe, e);
			} else {
				$nc(ioe)->addSuppressed(e);
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
	$loadClass(SequenceInputStream, name, initialize, &_SequenceInputStream_ClassInfo_, allocate$SequenceInputStream);
	return class$;
}

$Class* SequenceInputStream::class$ = nullptr;

	} // io
} // java