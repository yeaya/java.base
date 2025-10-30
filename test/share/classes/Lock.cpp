#include <Lock.h>

#include <Lock$IOHandler.h>
#include <Lock$LockWorkerMirror.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/TimeoutException.h>
#include <jcpp.h>

#undef CLOSE_CMD
#undef LOCK_CMD
#undef MILLISECONDS
#undef OPEN_CMD
#undef READ
#undef SECONDS
#undef TERMINATOR
#undef UNLOCK_CMD
#undef WRITE

using $Lock$IOHandler = ::Lock$IOHandler;
using $Lock$LockWorkerMirror = ::Lock$LockWorkerMirror;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Charset = ::java::nio::charset::Charset;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TimeoutException = ::java::util::concurrent::TimeoutException;

$FieldInfo _Lock_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Lock, rand)},
	{"OPEN_CMD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Lock, OPEN_CMD)},
	{"CLOSE_CMD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Lock, CLOSE_CMD)},
	{"LOCK_CMD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Lock, LOCK_CMD)},
	{"UNLOCK_CMD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Lock, UNLOCK_CMD)},
	{"TERMINATOR", "C", nullptr, $STATIC | $FINAL, $constField(Lock, TERMINATOR)},
	{}
};

$MethodInfo _Lock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Lock::*)()>(&Lock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Lock::main)), "java.lang.Exception"},
	{"runLockWorker", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Lock::runLockWorker)), "java.lang.Exception"},
	{"startLockWorker", "()LLock$LockWorkerMirror;", nullptr, $STATIC, $method(static_cast<$Lock$LockWorkerMirror*(*)()>(&Lock::startLockWorker)), "java.lang.Exception"},
	{"testAsyncClose", "(Ljava/io/File;LLock$LockWorkerMirror;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*,$Lock$LockWorkerMirror*)>(&Lock::testAsyncClose)), "java.lang.Exception"},
	{"testLockProtocol", "(Ljava/io/File;LLock$LockWorkerMirror;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*,$Lock$LockWorkerMirror*)>(&Lock::testLockProtocol)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Lock_InnerClassesInfo_[] = {
	{"Lock$IOHandler", "Lock", "IOHandler", $STATIC},
	{"Lock$LockWorkerMirror", "Lock", "LockWorkerMirror", $STATIC},
	{}
};

$ClassInfo _Lock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Lock",
	"java.lang.Object",
	nullptr,
	_Lock_FieldInfo_,
	_Lock_MethodInfo_,
	nullptr,
	nullptr,
	_Lock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Lock$IOHandler,Lock$LockWorkerMirror"
};

$Object* allocate$Lock($Class* clazz) {
	return $of($alloc(Lock));
}

$Random* Lock::rand = nullptr;
$String* Lock::OPEN_CMD = nullptr;
$String* Lock::CLOSE_CMD = nullptr;
$String* Lock::LOCK_CMD = nullptr;
$String* Lock::UNLOCK_CMD = nullptr;

void Lock::init$() {
}

void Lock::main($StringArray* args) {
	$init(Lock);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length > 0 && $nc(args->get(0))->equals("-lockworker"_s)) {
		int32_t port = $Integer::parseInt(args->get(1));
		runLockWorker(port);
		$System::exit(0);
	}
	$var($Lock$LockWorkerMirror, worker, startLockWorker());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($File, blah, $File::createTempFile("blah"_s, nullptr));
			$nc(blah)->deleteOnExit();
			testLockProtocol(blah, worker);
			testAsyncClose(blah, worker);
			blah->delete$();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(worker)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Lock::testLockProtocol($File* file, $Lock$LockWorkerMirror* worker) {
	$init(Lock);
	$useLocalCurrentObjectStackCache();
	$var($FileLock, fl, nullptr);
	$nc($($nc(worker)->open($($nc(file)->getPath()))))->lock();
	$init($StandardOpenOption);
	$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {
		static_cast<$OpenOption*>($StandardOpenOption::READ),
		static_cast<$OpenOption*>($StandardOpenOption::WRITE)
	})));
	$var($Future, result, $nc(ch)->lock());
	try {
		$init($TimeUnit);
		$nc(result)->get(2, $TimeUnit::SECONDS);
		$throwNew($RuntimeException, "Timeout expected"_s);
	} catch ($TimeoutException& x) {
	}
	worker->unlock();
	$assign(fl, $cast($FileLock, $nc(result)->get()));
	$nc(fl)->release();
	worker->lock(0, 10, false);
	$assign(fl, $cast($FileLock, $nc($(ch->lock(10, 10, false)))->get()));
	fl->release();
	ch->close();
	worker->close();
}

void Lock::testAsyncClose($File* file, $Lock$LockWorkerMirror* worker) {
	$init(Lock);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(worker)->open($($nc(file)->getPath()))))->lock();
	for (int32_t i = 0; i < 100; ++i) {
		$init($StandardOpenOption);
		$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::READ),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
		$var($Future, result, $nc(ch)->lock());
		try {
			$init($TimeUnit);
			$nc(result)->get($nc(Lock::rand)->nextInt(100), $TimeUnit::MILLISECONDS);
			$throwNew($RuntimeException, "Timeout expected"_s);
		} catch ($TimeoutException& x) {
		}
		ch->close();
		try {
			$nc(result)->get();
			$throwNew($RuntimeException, "ExecutionException expected"_s);
		} catch ($ExecutionException& x) {
			if (!($instanceOf($AsynchronousCloseException, $(x->getCause())))) {
				$nc($(x->getCause()))->printStackTrace();
				$throwNew($RuntimeException, "AsynchronousCloseException expected"_s);
			}
		}
	}
	worker->close();
}

$Lock$LockWorkerMirror* Lock::startLockWorker() {
	$init(Lock);
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(ssc)->getLocalAddress())))))->getPort();
	$var($String, sep, $nc($($FileSystems::getDefault()))->getSeparator());
	$var($String, command, $str({$($System::getProperty("java.home"_s)), sep, "bin"_s, sep, "java"_s}));
	$var($String, testClasses, $System::getProperty("test.classes"_s));
	if (testClasses != nullptr) {
		$plusAssign(command, $$str({" -cp "_s, testClasses}));
	}
	$plusAssign(command, $$str({" Lock -lockworker "_s, $$str(port)}));
	$var($Process, p, $nc($($Runtime::getRuntime()))->exec(command));
	$Lock$IOHandler::handle($($nc(p)->getInputStream()));
	$Lock$IOHandler::handle($($nc(p)->getErrorStream()));
	$var($SocketChannel, sc, ssc->accept());
	return $new($Lock$LockWorkerMirror, sc);
}

void Lock::runLockWorker(int32_t port) {
	$init(Lock);
	$useLocalCurrentObjectStackCache();
	$var($SocketChannel, sc, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, port))));
	$var($ByteBuffer, buf, $ByteBuffer::allocateDirect(1024));
	$var($FileChannel, fc, nullptr);
	$var($FileLock, fl, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				$nc(buf)->clear();
				int32_t n = 0;
				int32_t last = 0;
				do {
					n = $nc(sc)->read(buf);
					if (n < 0) {
						return$1 = true;
						goto $finally;
					}
					if (n == 0) {
						$throwNew($AssertionError);
					}
					last += n;
				} while (buf->get(last - 1) != Lock::TERMINATOR);
				buf->flip();
				$var($String, s, $nc($($nc($($Charset::defaultCharset()))->decode(buf)))->toString());
				int32_t sp = $nc(s)->indexOf(" "_s);
				$var($String, cmd, (sp < 0) ? s->substring(0, s->length() - 1) : s->substring(0, sp));
				$var($String, param, (sp < 0) ? ""_s : s->substring(sp + 1, s->length() - 1));
				if ($nc(cmd)->equals(Lock::OPEN_CMD)) {
					if (fc != nullptr) {
						$throwNew($RuntimeException, "File already open"_s);
					}
					$init($StandardOpenOption);
					$assign(fc, $FileChannel::open($($Paths::get(param, $$new($StringArray, 0))), $$new($OpenOptionArray, {
						static_cast<$OpenOption*>($StandardOpenOption::READ),
						static_cast<$OpenOption*>($StandardOpenOption::WRITE)
					})));
				}
				if ($nc(cmd)->equals(Lock::CLOSE_CMD)) {
					if (fc == nullptr) {
						$throwNew($RuntimeException, "No file open"_s);
					}
					$nc(fc)->close();
					$assign(fc, nullptr);
					$assign(fl, nullptr);
				}
				if ($nc(cmd)->equals(Lock::LOCK_CMD)) {
					if (fl != nullptr) {
						$throwNew($RuntimeException, "Already holding lock"_s);
					}
					if ($nc(param)->length() == 0) {
						$assign(fl, $nc(fc)->lock());
					} else {
						$var($StringArray, values, param->split(","_s));
						if (values->length != 3) {
							$throwNew($RuntimeException, "Lock parameter invalid"_s);
						}
						int64_t position = $Long::parseLong(values->get(0));
						int64_t size = $Long::parseLong(values->get(1));
						bool shared = $Boolean::parseBoolean(values->get(2));
						$assign(fl, $nc(fc)->lock(position, size, shared));
					}
				}
				if ($nc(cmd)->equals(Lock::UNLOCK_CMD)) {
					if (fl == nullptr) {
						$throwNew($RuntimeException, "Not holding lock"_s);
					}
					$nc(fl)->release();
					$assign(fl, nullptr);
				}
				$var($bytes, reply, $new($bytes, {(int8_t)Lock::TERMINATOR}));
				n = $nc(sc)->write($($ByteBuffer::wrap(reply)));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(sc)->close();
			if (fc != nullptr) {
				fc->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void clinit$Lock($Class* class$) {
	$assignStatic(Lock::OPEN_CMD, "open"_s);
	$assignStatic(Lock::CLOSE_CMD, "close"_s);
	$assignStatic(Lock::LOCK_CMD, "lock"_s);
	$assignStatic(Lock::UNLOCK_CMD, "unlock"_s);
	$assignStatic(Lock::rand, $new($Random));
}

Lock::Lock() {
}

$Class* Lock::load$($String* name, bool initialize) {
	$loadClass(Lock, name, initialize, &_Lock_ClassInfo_, clinit$Lock, allocate$Lock);
	return class$;
}

$Class* Lock::class$ = nullptr;