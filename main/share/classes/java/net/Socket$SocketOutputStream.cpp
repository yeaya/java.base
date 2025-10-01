#include <java/net/Socket$SocketOutputStream.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

namespace java {
	namespace net {

$FieldInfo _Socket$SocketOutputStream_FieldInfo_[] = {
	{"parent", "Ljava/net/Socket;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketOutputStream, parent)},
	{"out", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketOutputStream, out)},
	{}
};

$MethodInfo _Socket$SocketOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(Socket$SocketOutputStream::*)($Socket*,$OutputStream*)>(&Socket$SocketOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Socket$SocketOutputStream_InnerClassesInfo_[] = {
	{"java.net.Socket$SocketOutputStream", "java.net.Socket", "SocketOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Socket$SocketOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.Socket$SocketOutputStream",
	"java.io.OutputStream",
	nullptr,
	_Socket$SocketOutputStream_FieldInfo_,
	_Socket$SocketOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Socket$SocketOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.Socket"
};

$Object* allocate$Socket$SocketOutputStream($Class* clazz) {
	return $of($alloc(Socket$SocketOutputStream));
}

void Socket$SocketOutputStream::init$($Socket* parent, $OutputStream* out) {
	$OutputStream::init$();
	$set(this, parent, parent);
	$set(this, out, out);
}

void Socket$SocketOutputStream::write(int32_t b) {
	$var($bytes, a, $new($bytes, {(int8_t)b}));
	write(a, 0, 1);
}

void Socket$SocketOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
}

void Socket$SocketOutputStream::close() {
	$nc(this->parent)->close();
}

Socket$SocketOutputStream::Socket$SocketOutputStream() {
}

$Class* Socket$SocketOutputStream::load$($String* name, bool initialize) {
	$loadClass(Socket$SocketOutputStream, name, initialize, &_Socket$SocketOutputStream_ClassInfo_, allocate$Socket$SocketOutputStream);
	return class$;
}

$Class* Socket$SocketOutputStream::class$ = nullptr;

	} // net
} // java