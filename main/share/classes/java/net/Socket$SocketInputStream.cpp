#include <java/net/Socket$SocketInputStream.h>

#include <java/io/InputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

namespace java {
	namespace net {

$FieldInfo _Socket$SocketInputStream_FieldInfo_[] = {
	{"parent", "Ljava/net/Socket;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketInputStream, parent)},
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketInputStream, in)},
	{}
};

$MethodInfo _Socket$SocketInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(Socket$SocketInputStream::*)($Socket*,$InputStream*)>(&Socket$SocketInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Socket$SocketInputStream_InnerClassesInfo_[] = {
	{"java.net.Socket$SocketInputStream", "java.net.Socket", "SocketInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Socket$SocketInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.Socket$SocketInputStream",
	"java.io.InputStream",
	nullptr,
	_Socket$SocketInputStream_FieldInfo_,
	_Socket$SocketInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Socket$SocketInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.Socket"
};

$Object* allocate$Socket$SocketInputStream($Class* clazz) {
	return $of($alloc(Socket$SocketInputStream));
}

void Socket$SocketInputStream::init$($Socket* parent, $InputStream* in) {
	$InputStream::init$();
	$set(this, parent, parent);
	$set(this, in, in);
}

int32_t Socket$SocketInputStream::read() {
	$var($bytes, a, $new($bytes, 1));
	int32_t n = read(a, 0, 1);
	return (n > 0) ? ((int32_t)(a->get(0) & (uint32_t)255)) : -1;
}

int32_t Socket$SocketInputStream::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->in)->read(b, off, len);
}

int32_t Socket$SocketInputStream::available() {
	return $nc(this->in)->available();
}

void Socket$SocketInputStream::close() {
	$nc(this->parent)->close();
}

Socket$SocketInputStream::Socket$SocketInputStream() {
}

$Class* Socket$SocketInputStream::load$($String* name, bool initialize) {
	$loadClass(Socket$SocketInputStream, name, initialize, &_Socket$SocketInputStream_ClassInfo_, allocate$Socket$SocketInputStream);
	return class$;
}

$Class* Socket$SocketInputStream::class$ = nullptr;

	} // net
} // java