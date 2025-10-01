#include <Sender.h>

#include <Sender$Client.h>
#include <Sender$Server.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $Sender$Client = ::Sender$Client;
using $Sender$Server = ::Sender$Server;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _Sender_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Sender, log)},
	{"clientISA", "Ljava/net/SocketAddress;", nullptr, $STATIC | $VOLATILE, $staticField(Sender, clientISA)},
	{}
};

$MethodInfo _Sender_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Sender::*)()>(&Sender::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sender::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Sender::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Sender_InnerClassesInfo_[] = {
	{"Sender$Server", "Sender", "Server", $PUBLIC | $STATIC},
	{"Sender$Client", "Sender", "Client", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Sender_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sender",
	"java.lang.Object",
	nullptr,
	_Sender_FieldInfo_,
	_Sender_MethodInfo_,
	nullptr,
	nullptr,
	_Sender_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Sender$Server,Sender$Client"
};

$Object* allocate$Sender($Class* clazz) {
	return $of($alloc(Sender));
}

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
	$var($Sender$Server, server, $new($Sender$Server));
	$var($Sender$Client, client, $new($Sender$Client, server->port()));
	$var($Thread, serverThread, $new($Thread, static_cast<$Runnable*>(server)));
	serverThread->start();
	$var($Thread, clientThread, $new($Thread, static_cast<$Runnable*>(client)));
	clientThread->start();
	serverThread->join();
	clientThread->join();
	server->throwException();
	client->throwException();
}

void clinit$Sender($Class* class$) {
	$init($System);
	$assignStatic(Sender::log, $System::err);
	$assignStatic(Sender::clientISA, nullptr);
}

Sender::Sender() {
}

$Class* Sender::load$($String* name, bool initialize) {
	$loadClass(Sender, name, initialize, &_Sender_ClassInfo_, clinit$Sender, allocate$Sender);
	return class$;
}

$Class* Sender::class$ = nullptr;