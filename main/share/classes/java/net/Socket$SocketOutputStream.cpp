#include <java/net/Socket$SocketOutputStream.h>
#include <java/io/OutputStream.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"parent", "Ljava/net/Socket;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketOutputStream, parent)},
		{"out", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(Socket$SocketOutputStream, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;Ljava/io/OutputStream;)V", nullptr, 0, $method(Socket$SocketOutputStream, init$, void, $Socket*, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Socket$SocketOutputStream, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Socket$SocketOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(Socket$SocketOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.Socket$SocketOutputStream", "java.net.Socket", "SocketOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.Socket$SocketOutputStream",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.Socket"
	};
	$loadClass(Socket$SocketOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Socket$SocketOutputStream));
	});
	return class$;
}

$Class* Socket$SocketOutputStream::class$ = nullptr;

	} // net
} // java