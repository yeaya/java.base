#include <java/io/StreamCorruptedException.h>

#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _StreamCorruptedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamCorruptedException, serialVersionUID)},
	{}
};

$MethodInfo _StreamCorruptedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StreamCorruptedException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(StreamCorruptedException, init$, void)},
	{}
};

$ClassInfo _StreamCorruptedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.StreamCorruptedException",
	"java.io.ObjectStreamException",
	nullptr,
	_StreamCorruptedException_FieldInfo_,
	_StreamCorruptedException_MethodInfo_
};

$Object* allocate$StreamCorruptedException($Class* clazz) {
	return $of($alloc(StreamCorruptedException));
}

void StreamCorruptedException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

void StreamCorruptedException::init$() {
	$ObjectStreamException::init$();
}

StreamCorruptedException::StreamCorruptedException() {
}

StreamCorruptedException::StreamCorruptedException(const StreamCorruptedException& e) : $ObjectStreamException(e) {
}

void StreamCorruptedException::throw$() {
	throw *this;
}

$Class* StreamCorruptedException::load$($String* name, bool initialize) {
	$loadClass(StreamCorruptedException, name, initialize, &_StreamCorruptedException_ClassInfo_, allocate$StreamCorruptedException);
	return class$;
}

$Class* StreamCorruptedException::class$ = nullptr;

	} // io
} // java