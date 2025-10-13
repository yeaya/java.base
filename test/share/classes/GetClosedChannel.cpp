#include <GetClosedChannel.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NUM_CHANNELS
#undef NUM_EXCEPTIONS

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _GetClosedChannel_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GetClosedChannel, $assertionsDisabled)},
	{"NUM_CHANNELS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GetClosedChannel, NUM_CHANNELS)},
	{"NUM_EXCEPTIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GetClosedChannel, NUM_EXCEPTIONS)},
	{}
};

$MethodInfo _GetClosedChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetClosedChannel::*)()>(&GetClosedChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetClosedChannel::main)), "java.io.IOException"},
	{}
};

$ClassInfo _GetClosedChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetClosedChannel",
	"java.lang.Object",
	nullptr,
	_GetClosedChannel_FieldInfo_,
	_GetClosedChannel_MethodInfo_
};

$Object* allocate$GetClosedChannel($Class* clazz) {
	return $of($alloc(GetClosedChannel));
}

bool GetClosedChannel::$assertionsDisabled = false;

void GetClosedChannel::init$() {
}

void GetClosedChannel::main($StringArray* args) {
	$init(GetClosedChannel);
	int32_t exceptions = 0;
	int32_t openChannels = 0;
	for (int32_t i = 0; i < GetClosedChannel::NUM_CHANNELS; ++i) {
		$var($File, f, $File::createTempFile("fcbug"_s, ".tmp"_s));
		$nc(f)->deleteOnExit();
		$var($FileChannel, fc, nullptr);
		bool shared = false;
		{
			$var($FileInputStream, fis, nullptr)
			$var($FileOutputStream, fos, nullptr)
			$var($RandomAccessFile, raf, nullptr)
			switch (i) {
			case 0:
				{
					$init($System);
					$nc($System::out)->print("FileInputStream..."_s);
					$assign(fis, $new($FileInputStream, f));
					$nc(fis)->close();
					$assign(fc, $nc(fis)->getChannel());
					if ($nc(fc)->isOpen()) {
						$init($System);
						$nc($System::err)->println("FileInputStream channel should not be open"_s);
						++openChannels;
					}
					shared = true;
					break;
				}
			case 1:
				{
					$init($System);
					$nc($System::out)->print("FileOutputStream..."_s);
					$assign(fos, $new($FileOutputStream, f));
					$nc(fos)->close();
					$assign(fc, $nc(fos)->getChannel());
					if ($nc(fc)->isOpen()) {
						$init($System);
						$nc($System::err)->println("FileOutputStream channel should not be open"_s);
						++openChannels;
					}
					break;
				}
			case 2:
				{
					$init($System);
					$nc($System::out)->print("RandomAccessFile..."_s);
					$assign(raf, $new($RandomAccessFile, f, "rw"_s));
					$nc(raf)->close();
					$assign(fc, $nc(raf)->getChannel());
					if ($nc(fc)->isOpen()) {
						$init($System);
						$nc($System::err)->println("RandomAccessFile channel should not be open"_s);
						++openChannels;
					}
					break;
				}
			default:
				{
					if (!GetClosedChannel::$assertionsDisabled) {
						$throwNew($AssertionError, $of("Should not get here"_s));
					}
				}
			}
		}
		try {
			int64_t position = $nc(fc)->position();
			$init($System);
			$nc($System::err)->println($$str({"Channel "_s, $$str(i), " position is "_s, $$str(position)}));
		} catch ($ClosedChannelException&) {
			$var($ClosedChannelException, cce, $catch());
			++exceptions;
		}
		try {
			$nc(fc)->tryLock(0, $Long::MAX_VALUE, shared);
		} catch ($ClosedChannelException&) {
			$var($ClosedChannelException, e, $catch());
			$init($System);
			$nc($System::out)->println("OK"_s);
			++exceptions;
		} catch ($Error&) {
			$var($Error, err, $catch());
			$init($System);
			$nc($System::err)->println($of(err));
		}
	}
	if (exceptions != GetClosedChannel::NUM_EXCEPTIONS || openChannels != 0) {
		$throwNew($RuntimeException, $$str({"FAILED: ClosedChannelExceptions: expected: "_s, $$str(GetClosedChannel::NUM_EXCEPTIONS), " actual: "_s, $$str(exceptions), ";"_s, $($System::lineSeparator()), " number of open channels: expected: 0  actual: "_s, $$str(openChannels), "."_s}));
	}
}

void clinit$GetClosedChannel($Class* class$) {
	GetClosedChannel::$assertionsDisabled = !GetClosedChannel::class$->desiredAssertionStatus();
}

GetClosedChannel::GetClosedChannel() {
}

$Class* GetClosedChannel::load$($String* name, bool initialize) {
	$loadClass(GetClosedChannel, name, initialize, &_GetClosedChannel_ClassInfo_, clinit$GetClosedChannel, allocate$GetClosedChannel);
	return class$;
}

$Class* GetClosedChannel::class$ = nullptr;