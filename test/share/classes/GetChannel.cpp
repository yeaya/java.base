#include <GetChannel.h>

#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _GetChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetChannel::*)()>(&GetChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetChannel::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetChannel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetChannel_MethodInfo_
};

$Object* allocate$GetChannel($Class* clazz) {
	return $of($alloc(GetChannel));
}

void GetChannel::init$() {
}

void GetChannel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, sin, nullptr);
	$var($Socket, soc, nullptr);
	$var($Socket, soc1, nullptr);
	$var($InputStream, is, nullptr);
	$var($OutputStream, os, nullptr);
	$var($ServerSocket, srv, nullptr);
	int32_t port = 0;
	int32_t tout = 1000;
	$assign(sin, $InetAddress::getLocalHost());
	$assign(srv, $new($ServerSocket, port));
	port = srv->getLocalPort();
	$assign(soc, $new($Socket, sin, port));
	$assign(soc1, srv->accept());
	$var($BufferedReader, bin, $new($BufferedReader, $$new($InputStreamReader, $(soc->getInputStream()))));
	$var($BufferedWriter, bout, $new($BufferedWriter, $$new($OutputStreamWriter, $($nc(soc1)->getOutputStream()))));
	bout->write("hello"_s);
	bout->newLine();
	bout->flush();
	$var($String, reply, bin->readLine());
	if (!$nc(reply)->equals("hello"_s)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	soc->close();
	$nc(soc1)->close();
	srv->close();
}

GetChannel::GetChannel() {
}

$Class* GetChannel::load$($String* name, bool initialize) {
	$loadClass(GetChannel, name, initialize, &_GetChannel_ClassInfo_, allocate$GetChannel);
	return class$;
}

$Class* GetChannel::class$ = nullptr;