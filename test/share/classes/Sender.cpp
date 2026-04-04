#include <Sender.h>
#include <Sender$Client.h>
#include <Sender$Server.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $Sender$Client = ::Sender$Client;
using $Sender$Server = ::Sender$Server;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$PrintStream* Sender::log = nullptr;
$volatile($SocketAddress*) Sender::clientISA = nullptr;

void Sender::init$() {
}

void Sender::main($StringArray* args) {
	$init(Sender);
	test();
}

void Sender::test() {
	$init(Sender);
	$useLocalObjectStack();
	$var($Sender$Server, server, $new($Sender$Server));
	$var($Sender$Client, client, $new($Sender$Client, server->port()));
	$var($Thread, serverThread, $new($Thread, server));
	serverThread->start();
	$var($Thread, clientThread, $new($Thread, client));
	clientThread->start();
	serverThread->join();
	clientThread->join();
	server->throwException();
	client->throwException();
}

void Sender::clinit$($Class* clazz) {
	$assignStatic(Sender::log, $System::err);
	$assignStatic(Sender::clientISA, nullptr);
}

Sender::Sender() {
}

$Class* Sender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Sender, log)},
		{"clientISA", "Ljava/net/SocketAddress;", nullptr, $STATIC | $VOLATILE, $staticField(Sender, clientISA)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Sender, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sender, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $STATIC, $staticMethod(Sender, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sender$Server", "Sender", "Server", $PUBLIC | $STATIC},
		{"Sender$Client", "Sender", "Client", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sender",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Sender$Server,Sender$Client"
	};
	$loadClass(Sender, name, initialize, &classInfo$$, Sender::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Sender);
	});
	return class$;
}

$Class* Sender::class$ = nullptr;