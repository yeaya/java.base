#include <InterruptDeadlock.h>
#include <InterruptDeadlock$Reader.h>
#include <java/lang/InterruptedException.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

void InterruptDeadlock::init$() {
}

void InterruptDeadlock::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Path, file, $Paths::get("data.txt"_s, $$new($StringArray, 0)));
	{
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, {
			$StandardOpenOption::CREATE,
			$StandardOpenOption::TRUNCATE_EXISTING,
			$StandardOpenOption::WRITE
		})));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(fc)->position((int64_t)1024 * (int64_t)1024);
				fc->write($($ByteBuffer::wrap($$new($bytes, 1))));
			} catch ($Throwable& t$) {
				if (fc != nullptr) {
					try {
						fc->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (fc != nullptr) {
				fc->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($InterruptDeadlock$ReaderArray, readers, $new($InterruptDeadlock$ReaderArray, InterruptDeadlock::READER_COUNT));
	for (int32_t i = 1; i <= 20; ++i) {
		$nc($System::out)->format("Iteration: %s%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
		{
			$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, 0)));
			$var($Throwable, var$2, nullptr);
			try {
				try {
					bool failed = false;
					for (int32_t j = 0; j < InterruptDeadlock::READER_COUNT; ++j) {
						readers->set(j, $($InterruptDeadlock$Reader::startReader(fc)));
					}
					$Thread::sleep(100);
					{
						$var($InterruptDeadlock$ReaderArray, arr$, readers);
						for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
							$var($InterruptDeadlock$Reader, r, arr$->get(i$));
							{
								$nc(r)->interrupt();
							}
						}
					}
					{
						$var($InterruptDeadlock$ReaderArray, arr$, readers);
						for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
							$var($InterruptDeadlock$Reader, r, arr$->get(i$));
							try {
								$nc(r)->join(10000);
								$var($Exception, e, r->exception());
								if (e != nullptr) {
									$nc($System::err)->println($$str({"Reader thread failed with: "_s, e}));
									failed = true;
								}
							} catch ($InterruptedException& x) {
								$nc($System::err)->println("Reader thread did not terminte"_s);
								failed = true;
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
				} catch ($Throwable& t$) {
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

InterruptDeadlock::InterruptDeadlock() {
}

$Class* InterruptDeadlock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READER_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptDeadlock, READER_COUNT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptDeadlock, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InterruptDeadlock, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InterruptDeadlock$Reader", "InterruptDeadlock", "Reader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InterruptDeadlock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"InterruptDeadlock$Reader"
	};
	$loadClass(InterruptDeadlock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptDeadlock);
	});
	return class$;
}

$Class* InterruptDeadlock::class$ = nullptr;