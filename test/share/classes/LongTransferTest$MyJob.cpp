#include <LongTransferTest$MyJob.h>

#include <LongTransferTest.h>
#include <java/io/OutputStream.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$FieldInfo _LongTransferTest$MyJob_FieldInfo_[] = {
	{"server", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(LongTransferTest$MyJob, server)},
	{}
};

$MethodInfo _LongTransferTest$MyJob_MethodInfo_[] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(LongTransferTest$MyJob::*)($ServerSocket*)>(&LongTransferTest$MyJob::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LongTransferTest$MyJob_InnerClassesInfo_[] = {
	{"LongTransferTest$MyJob", "LongTransferTest", "MyJob", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongTransferTest$MyJob_ClassInfo_ = {
	$ACC_SUPER,
	"LongTransferTest$MyJob",
	"java.lang.Thread",
	nullptr,
	_LongTransferTest$MyJob_FieldInfo_,
	_LongTransferTest$MyJob_MethodInfo_,
	nullptr,
	nullptr,
	_LongTransferTest$MyJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LongTransferTest"
};

$Object* allocate$LongTransferTest$MyJob($Class* clazz) {
	return $of($alloc(LongTransferTest$MyJob));
}

void LongTransferTest$MyJob::init$($ServerSocket* server) {
	$Thread::init$();
	setDaemon(true);
	$set(this, server, server);
}

void LongTransferTest$MyJob::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Socket, s, $nc(this->server)->accept());
		$nc($System::out)->println($$str({"MyJob-run: client connected: "_s, s}));
		$var($bytes, bs, $new($bytes, 10));
		$nc($System::out)->println("MyJob-run: write some bytes to client."_s);
		$nc($($nc(s)->getOutputStream()))->write(bs);
		$nc($(s->getOutputStream()))->flush();
		$nc($System::out)->println("MyJob-run: close the client socket."_s);
		s->close();
	} catch ($Exception& e) {
		e->printStackTrace();
		$System::exit(1);
	}
}

LongTransferTest$MyJob::LongTransferTest$MyJob() {
}

$Class* LongTransferTest$MyJob::load$($String* name, bool initialize) {
	$loadClass(LongTransferTest$MyJob, name, initialize, &_LongTransferTest$MyJob_ClassInfo_, allocate$LongTransferTest$MyJob);
	return class$;
}

$Class* LongTransferTest$MyJob::class$ = nullptr;