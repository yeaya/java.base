#include <SocksServer$ClientHandler$Tunnel.h>
#include <SocksServer$ClientHandler.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $SocksServer$ClientHandler = ::SocksServer$ClientHandler;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SocksServer$ClientHandler$Tunnel::init$($SocksServer$ClientHandler* this$1, $InputStream* in, $OutputStream* out) {
	$set(this, this$1, this$1);
	$Thread::init$();
	$set(this, tin, in);
	$set(this, tout, out);
}

void SocksServer$ClientHandler$Tunnel::run() {
	int32_t b = 0;
	while (true) {
		try {
			b = $nc(this->tin)->read();
			if (b == -1) {
				this->tin->close();
				$nc(this->tout)->close();
				return;
			}
			$nc(this->tout)->write(b);
			this->tout->flush();
		} catch ($IOException& e) {
			return;
		}
	}
}

SocksServer$ClientHandler$Tunnel::SocksServer$ClientHandler$Tunnel() {
}

$Class* SocksServer$ClientHandler$Tunnel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSocksServer$ClientHandler;", nullptr, $FINAL | $SYNTHETIC, $field(SocksServer$ClientHandler$Tunnel, this$1)},
		{"tin", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(SocksServer$ClientHandler$Tunnel, tin)},
		{"tout", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(SocksServer$ClientHandler$Tunnel, tout)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSocksServer$ClientHandler;Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, 0, $method(SocksServer$ClientHandler$Tunnel, init$, void, $SocksServer$ClientHandler*, $InputStream*, $OutputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocksServer$ClientHandler$Tunnel, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SocksServer$ClientHandler", "SocksServer", "ClientHandler", 0},
		{"SocksServer$ClientHandler$Tunnel", "SocksServer$ClientHandler", "Tunnel", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SocksServer$ClientHandler$Tunnel",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SocksServer"
	};
	$loadClass(SocksServer$ClientHandler$Tunnel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocksServer$ClientHandler$Tunnel);
	});
	return class$;
}

$Class* SocksServer$ClientHandler$Tunnel::class$ = nullptr;