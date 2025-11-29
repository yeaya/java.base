#include <LongTransferTest.h>

#include <LongTransferTest$MyJob.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

#undef MAX_VALUE

using $LongTransferTest$MyJob = ::LongTransferTest$MyJob;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

$MethodInfo _LongTransferTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LongTransferTest::*)()>(&LongTransferTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LongTransferTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LongTransferTest_InnerClassesInfo_[] = {
	{"LongTransferTest$MyJob", "LongTransferTest", "MyJob", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongTransferTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LongTransferTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LongTransferTest_MethodInfo_,
	nullptr,
	nullptr,
	_LongTransferTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LongTransferTest$MyJob"
};

$Object* allocate$LongTransferTest($Class* clazz) {
	return $of($alloc(LongTransferTest));
}

void LongTransferTest::init$() {
}

void LongTransferTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("LongTransferTest-main: Test to transfer bytes with a size bigger than Integer.MAX_VALUE."_s);
	$nc($System::out)->println("LongTransferTest-main: Test at first the private method transferFromFileChannel with files..."_s);
	$var($String, dir, $System::getProperty("java.io.tmpdir"_s));
	$nc($System::out)->println($$str({"LongTransferTest-main: using the temp dir (java.io.tmpdir) "_s, dir}));
	$var($File, inFile, $new($File, dir, "LongTransferTest_channelTestInFile_tmp"_s));
	if (!inFile->exists()) {
		inFile->createNewFile();
	}
	$var($File, outFile, $new($File, dir, "LongTransferTest_channelTestOutFile_tmp"_s));
	if (!outFile->exists()) {
		outFile->createNewFile();
	}
	$var($FileInputStream, inStream, $new($FileInputStream, inFile));
	$var($FileChannel, inChannel, inStream->getChannel());
	$var($FileOutputStream, outStream, $new($FileOutputStream, outFile));
	$var($FileChannel, outChannel, outStream->getChannel());
	$nc(outChannel)->transferFrom(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(inChannel))), 0, (int64_t)$Integer::MAX_VALUE + (int64_t)1);
	$nc($System::out)->println("LongTransferTest-main: Test the method transferTo with files."_s);
	$nc(inChannel)->transferTo(0, (int64_t)$Integer::MAX_VALUE + (int64_t)1, static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(outChannel))));
	$nc($System::out)->println("LongTransferTest-main: Test the private method transferFromArbitraryChannel with sockets ..."_s);
	$var($ServerSocket, server, $new($ServerSocket, 0));
	$var($LongTransferTest$MyJob, job, $new($LongTransferTest$MyJob, server));
	job->start();
	$var($SocketChannel, socket, $SocketChannel::open());
	$var($InetAddress, var$0, server->getInetAddress());
	$nc($($nc(socket)->socket()))->connect($$new($InetSocketAddress, var$0, server->getLocalPort()));
	outChannel->transferFrom(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(socket)), 0, (int64_t)$Integer::MAX_VALUE + (int64_t)1);
	$nc($System::out)->println("LongTransferTest-main: OK!"_s);
	socket->close();
	server->close();
	inChannel->close();
	outChannel->close();
	inFile->delete$();
	outFile->delete$();
}

LongTransferTest::LongTransferTest() {
}

$Class* LongTransferTest::load$($String* name, bool initialize) {
	$loadClass(LongTransferTest, name, initialize, &_LongTransferTest_ClassInfo_, allocate$LongTransferTest);
	return class$;
}

$Class* LongTransferTest::class$ = nullptr;