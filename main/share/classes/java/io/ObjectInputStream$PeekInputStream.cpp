#include <java/io/ObjectInputStream$PeekInputStream.h>

#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$PeekInputStream_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$PeekInputStream, in)},
	{"peekb", "I", nullptr, $PRIVATE, $field(ObjectInputStream$PeekInputStream, peekb)},
	{"totalBytesRead", "J", nullptr, $PRIVATE, $field(ObjectInputStream$PeekInputStream, totalBytesRead)},
	{}
};

$MethodInfo _ObjectInputStream$PeekInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$PeekInputStream::*)($InputStream*)>(&ObjectInputStream$PeekInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytesRead", "()J", nullptr, $PUBLIC},
	{"peek", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ObjectInputStream$PeekInputStream_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$PeekInputStream", "java.io.ObjectInputStream", "PeekInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputStream$PeekInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$PeekInputStream",
	"java.io.InputStream",
	nullptr,
	_ObjectInputStream$PeekInputStream_FieldInfo_,
	_ObjectInputStream$PeekInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$PeekInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$PeekInputStream($Class* clazz) {
	return $of($alloc(ObjectInputStream$PeekInputStream));
}

void ObjectInputStream$PeekInputStream::init$($InputStream* in) {
	$InputStream::init$();
	this->peekb = -1;
	this->totalBytesRead = 0;
	$set(this, in, in);
}

int32_t ObjectInputStream$PeekInputStream::peek() {
	if (this->peekb >= 0) {
		return this->peekb;
	}
	this->peekb = $nc(this->in)->read();
	this->totalBytesRead += this->peekb >= 0 ? 1 : 0;
	return this->peekb;
}

int32_t ObjectInputStream$PeekInputStream::read() {
	if (this->peekb >= 0) {
		int32_t v = this->peekb;
		this->peekb = -1;
		return v;
	} else {
		int32_t nbytes = $nc(this->in)->read();
		this->totalBytesRead += nbytes >= 0 ? 1 : 0;
		return nbytes;
	}
}

int32_t ObjectInputStream$PeekInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t nbytes = 0;
	if (len == 0) {
		return 0;
	} else if (this->peekb < 0) {
		nbytes = $nc(this->in)->read(b, off, len);
		this->totalBytesRead += nbytes >= 0 ? nbytes : 0;
		return nbytes;
	} else {
		$nc(b)->set(off++, (int8_t)this->peekb);
		--len;
		this->peekb = -1;
		nbytes = $nc(this->in)->read(b, off, len);
		this->totalBytesRead += nbytes >= 0 ? nbytes : 0;
		return (nbytes >= 0) ? (nbytes + 1) : 1;
	}
}

void ObjectInputStream$PeekInputStream::readFully($bytes* b, int32_t off, int32_t len) {
	int32_t n = 0;
	while (n < len) {
		int32_t count = read(b, off + n, len - n);
		if (count < 0) {
			$throwNew($EOFException);
		}
		n += count;
	}
}

int64_t ObjectInputStream$PeekInputStream::skip(int64_t n) {
	if (n <= 0) {
		return 0;
	}
	int32_t skipped = 0;
	if (this->peekb >= 0) {
		this->peekb = -1;
		++skipped;
		--n;
	}
	n = skipped + $nc(this->in)->skip(n);
	this->totalBytesRead += n;
	return n;
}

int32_t ObjectInputStream$PeekInputStream::available() {
	return $nc(this->in)->available() + ((this->peekb >= 0) ? 1 : 0);
}

void ObjectInputStream$PeekInputStream::close() {
	$nc(this->in)->close();
}

int64_t ObjectInputStream$PeekInputStream::getBytesRead() {
	return this->totalBytesRead;
}

ObjectInputStream$PeekInputStream::ObjectInputStream$PeekInputStream() {
}

$Class* ObjectInputStream$PeekInputStream::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$PeekInputStream, name, initialize, &_ObjectInputStream$PeekInputStream_ClassInfo_, allocate$ObjectInputStream$PeekInputStream);
	return class$;
}

$Class* ObjectInputStream$PeekInputStream::class$ = nullptr;

	} // io
} // java