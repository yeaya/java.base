#include <java/nio/channels/ClosedChannelException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ClosedChannelException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedChannelException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedChannelException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedChannelException, init$, void)},
	{}
};

$ClassInfo _ClosedChannelException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ClosedChannelException",
	"java.io.IOException",
	nullptr,
	_ClosedChannelException_FieldInfo_,
	_ClosedChannelException_MethodInfo_
};

$Object* allocate$ClosedChannelException($Class* clazz) {
	return $of($alloc(ClosedChannelException));
}

void ClosedChannelException::init$() {
	$IOException::init$();
}

ClosedChannelException::ClosedChannelException() {
}

ClosedChannelException::ClosedChannelException(const ClosedChannelException& e) : $IOException(e) {
}

void ClosedChannelException::throw$() {
	throw *this;
}

$Class* ClosedChannelException::load$($String* name, bool initialize) {
	$loadClass(ClosedChannelException, name, initialize, &_ClosedChannelException_ClassInfo_, allocate$ClosedChannelException);
	return class$;
}

$Class* ClosedChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java