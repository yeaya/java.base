#include <InterruptDeadlock.h>

#include <InterruptDeadlock$Reader.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardOpenOption.h>
#include <jcpp.h>

#undef CREATE
#undef READER_COUNT
#undef TRUNCATE_EXISTING
#undef WRITE

using $InterruptDeadlock$Reader = ::InterruptDeadlock$Reader;
using $InterruptDeadlock$ReaderArray = $Array<InterruptDeadlock$Reader>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

$FieldInfo _InterruptDeadlock_FieldInfo_[] = {
	{"READER_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptDeadlock, READER_COUNT)},
	{}
};

$MethodInfo _InterruptDeadlock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptDeadlock::*)()>(&InterruptDeadlock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InterruptDeadlock::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _InterruptDeadlock_InnerClassesInfo_[] = {
	{"InterruptDeadlock$Reader", "InterruptDeadlock", "Reader", $STATIC},
	{}
};

$ClassInfo _InterruptDeadlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InterruptDeadlock",
	"java.lang.Object",
	nullptr,
	_InterruptDeadlock_FieldInfo_,
	_InterruptDeadlock_MethodInfo_,
	nullptr,
	nullptr,
	_InterruptDeadlock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InterruptDeadlock$Reader"
};

$Object* allocate$InterruptDeadlock($Class* clazz) {
	return $of($alloc(InterruptDeadlock));
}

void InterruptDeadlock::init$() {
}

void InterruptDeadlock::main($StringArray* args) {
	$var($Path, file, $Paths::get("data.txt"_s, $$new($StringArray, 0)));
	{
			$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::CREATE),
			static_cast<$OpenOption*>($StandardOpenOption::TRUNCATE_EXISTING),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(fc)->position((int64_t)1024 * (int64_t)1024);
					fc->write($($ByteBuffer::wrap($$new($bytes, 1))));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($InterruptDeadlock$ReaderArray, readers, $new($InterruptDeadlock$ReaderArray, InterruptDeadlock::READER_COUNT));
	for (int32_t i = 1; i <= 20; ++i) {
		$init($System);
		$nc($System::out)->format("Iteration: %s%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		{
			$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, 0)));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						bool failed = false;
						for (int32_t j = 0; j < InterruptDeadlock::READER_COUNT; ++j) {
							readers->set(j, $($InterruptDeadlock$Reader::startReader(fc)));
						}
						$Thread::sleep(100);
						{
							$var($InterruptDeadlock$ReaderArray, arr$, readers);
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($InterruptDeadlock$Reader, r, arr$->get(i$));
								{
									$nc(r)->interrupt();
								}
							}
						}
						{
							$var($InterruptDeadlock$ReaderArray, arr$, readers);
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($InterruptDeadlock$Reader, r, arr$->get(i$));
								{
									try {
										$nc(r)->join(10000);
										$var($Exception, e, r->exception());
										if (e != nullptr) {
											$nc($System::err)->println($$str({"Reader thread failed with: "_s, e}));
											failed = true;
										}
									} catch ($InterruptedException&) {
										$var($InterruptedException, x, $catch());
										$nc($System::err)->println("Reader thread did not terminte"_s);
										failed = true;
									}
								}
							}
						}
						if ($nc(fc)->isOpen()) {
							$nc($System::err)->println("FileChannel was not closed"_s);
							failed = true;
						}
						if (failed) {
							$throwNew($RuntimeException, "Test failed - see log for details"_s);
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (fc != nullptr) {
							try {
								fc->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					if (fc != nullptr) {
						fc->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		}
	}
}

InterruptDeadlock::InterruptDeadlock() {
}

$Class* InterruptDeadlock::load$($String* name, bool initialize) {
	$loadClass(InterruptDeadlock, name, initialize, &_InterruptDeadlock_ClassInfo_, allocate$InterruptDeadlock);
	return class$;
}

$Class* InterruptDeadlock::class$ = nullptr;