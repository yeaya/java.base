#include <ClosedChannelTransfer.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;
using $Channels = ::java::nio::channels::Channels;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _ClosedChannelTransfer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedChannelTransfer::*)()>(&ClosedChannelTransfer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedChannelTransfer::main)), "java.lang.Exception"},
	{"test1", "(Ljava/nio/channels/FileChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($FileChannel*)>(&ClosedChannelTransfer::test1)), "java.lang.Exception"},
	{"test2", "(Ljava/nio/channels/FileChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($FileChannel*)>(&ClosedChannelTransfer::test2)), "java.lang.Exception"},
	{}
};

$ClassInfo _ClosedChannelTransfer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedChannelTransfer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedChannelTransfer_MethodInfo_
};

$Object* allocate$ClosedChannelTransfer($Class* clazz) {
	return $of($alloc(ClosedChannelTransfer));
}

void ClosedChannelTransfer::init$() {
}

void ClosedChannelTransfer::main($StringArray* args) {
	$var($File, file, $File::createTempFile("test1"_s, nullptr));
	$nc(file)->deleteOnExit();
	$var($FileChannel, channel, ($$new($RandomAccessFile, "aaa"_s, "rw"_s))->getChannel());
	test1(channel);
	test2(channel);
	$nc(channel)->close();
	file->delete$();
}

void ClosedChannelTransfer::test1($FileChannel* channel) {
	$var($ByteArrayInputStream, istr, $new($ByteArrayInputStream, $$new($bytes, {
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4
	})));
	$var($ReadableByteChannel, rbc, $Channels::newChannel(static_cast<$InputStream*>(istr)));
	$nc(rbc)->close();
	try {
		$nc(channel)->transferFrom(rbc, 0, 2);
		$throwNew($Exception, "Test1: No ClosedChannelException was thrown"_s);
	} catch ($ClosedChannelException&) {
		$catch();
	}
}

void ClosedChannelTransfer::test2($FileChannel* channel) {
	$var($ByteArrayOutputStream, istr, $new($ByteArrayOutputStream, 4));
	$var($WritableByteChannel, wbc, $Channels::newChannel(static_cast<$OutputStream*>(istr)));
	$nc(wbc)->close();
	try {
		$nc(channel)->transferTo(0, 2, wbc);
		$throwNew($Exception, "Test2: No ClosedChannelException was thrown"_s);
	} catch ($ClosedChannelException&) {
		$catch();
	}
}

ClosedChannelTransfer::ClosedChannelTransfer() {
}

$Class* ClosedChannelTransfer::load$($String* name, bool initialize) {
	$loadClass(ClosedChannelTransfer, name, initialize, &_ClosedChannelTransfer_ClassInfo_, allocate$ClosedChannelTransfer);
	return class$;
}

$Class* ClosedChannelTransfer::class$ = nullptr;