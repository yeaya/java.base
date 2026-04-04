#include <Responses$HttpServer.h>
#include <Responses.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/lang/Error.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $Responses = ::Responses;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

void Responses$HttpServer::init$() {
	$useLocalObjectStack();
	try {
		$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
		$set(this, ss, $new($ServerSocket));
		this->ss->bind($$new($InetSocketAddress, loopback, 0));
	} catch ($IOException& ioe) {
		$throwNew($Error, $$str({"Unable to create ServerSocket: "_s, ioe}));
	}
}

int32_t Responses$HttpServer::port() {
	return this->ss->getLocalPort();
}

$String* Responses$HttpServer::authority() {
	$useLocalObjectStack();
	$var($InetAddress, address, this->ss->getInetAddress());
	$var($String, hostaddr, $nc(address)->isAnyLocalAddress() ? "localhost"_s : address->getHostAddress());
	if ($nc(hostaddr)->indexOf(u':') > -1) {
		$assign(hostaddr, $str({"["_s, hostaddr, "]"_s}));
	}
	return $str({hostaddr, ":"_s, $$str(port())});
}

void Responses$HttpServer::shutdown() {
	this->shutdown$ = true;
	this->ss->close();
}

void Responses$HttpServer::run() {
	$useLocalObjectStack();
	$var($ObjectArray2, tests, $Responses::getTests());
	try {
		while (!this->shutdown$) {
			$var($Socket, s, this->ss->accept());
			$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(s)->getInputStream()))));
			$var($String, req, in->readLine());
			int32_t pos1 = $nc(req)->indexOf(u' ');
			int32_t pos2 = req->indexOf(u' ', pos1 + 1);
			int32_t i = $Integer::parseInt($(req->substring(pos1 + 2, pos2)));
			$nc($System::out)->println($$str({"Server replying to >"_s, $nc($nc(tests)->get(i))->get(0), "<"_s}));
			$var($PrintStream, out, $new($PrintStream, $$new($BufferedOutputStream, $(s->getOutputStream()))));
			out->print($nc(tests->get(i))->get(0));
			out->print("\r\n"_s);
			out->print("Content-Length: 0\r\n"_s);
			out->print("Connection: close\r\n"_s);
			out->print("\r\n"_s);
			out->flush();
			s->shutdownOutput();
			s->close();
		}
	} catch ($Exception& e) {
		if (!this->shutdown$) {
			e->printStackTrace();
		}
	}
}

Responses$HttpServer::Responses$HttpServer() {
}

$Class* Responses$HttpServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ss", "Ljava/net/ServerSocket;", nullptr, $FINAL, $field(Responses$HttpServer, ss)},
		{"shutdown", "Z", nullptr, $VOLATILE, $field(Responses$HttpServer, shutdown$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Responses$HttpServer, init$, void)},
		{"authority", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Responses$HttpServer, authority, $String*)},
		{"port", "()I", nullptr, $PUBLIC, $virtualMethod(Responses$HttpServer, port, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Responses$HttpServer, run, void)},
		{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(Responses$HttpServer, shutdown, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Responses$HttpServer", "Responses", "HttpServer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Responses$HttpServer",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Responses"
	};
	$loadClass(Responses$HttpServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Responses$HttpServer);
	});
	return class$;
}

$Class* Responses$HttpServer::class$ = nullptr;