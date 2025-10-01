#include <java/io/StreamCorruptedException.h>

#include <java/io/ObjectStreamException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamCorruptedException::*)($String*)>(&StreamCorruptedException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamCorruptedException::*)()>(&StreamCorruptedException::init$))},
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

StreamCorruptedException::StreamCorruptedException(const StreamCorruptedException& e) {
}

StreamCorruptedException StreamCorruptedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void StreamCorruptedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* StreamCorruptedException::load$($String* name, bool initialize) {
	$loadClass(StreamCorruptedException, name, initialize, &_StreamCorruptedException_ClassInfo_, allocate$StreamCorruptedException);
	return class$;
}

$Class* StreamCorruptedException::class$ = nullptr;

	} // io
} // java