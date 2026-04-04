#include <FileLockConstructor.h>
#include <FileLockSub.h>
#include <java/io/File.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef READ
#undef WRITE

using $FileLockSub = ::FileLockSub;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $longArray2 = $Array<int64_t, 2>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

void FileLockConstructor::init$() {
}

void FileLockConstructor::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileLock, fileLock, nullptr);
	int32_t failures = 0;
	bool exceptionThrown = false;
	try {
		$assign(fileLock, $new($FileLockSub, ($FileChannel*)nullptr, 0, 0, false));
	} catch ($NullPointerException& npe) {
		exceptionThrown = true;
	}
	if (!exceptionThrown) {
		$nc($System::err)->println("FileLock constructor did not throw NPE for null FileChannel"_s);
		++failures;
	}
	exceptionThrown = false;
	try {
		$assign(fileLock, $new($FileLockSub, ($AsynchronousFileChannel*)nullptr, 0, 0, true));
	} catch ($NullPointerException& npe) {
		exceptionThrown = true;
	}
	if (!exceptionThrown) {
		$nc($System::err)->println("FileLock constructor did not throw NPE for null AsynchronousFileChannel"_s);
		++failures;
	}
	$var($File, tmpFile, $File::createTempFile("FileLock"_s, "tmp"_s));
	$nc(tmpFile)->deleteOnExit();
	$var($longArray2, posAndSize, $new($longArray2, {
		$$new($longs, {
			0,
			42
		}),
		$$new($longs, {
			-1,
			42
		}),
		$$new($longs, {
			0,
			-1
		}),
		$$new($longs, {
			$Long::MAX_VALUE,
			1
		})
	}));
	{
		$init($StandardOpenOption);
		$var($FileChannel, syncChannel, $FileChannel::open($(tmpFile->toPath()), $$new($OpenOptionArray, {
			$StandardOpenOption::READ,
			$StandardOpenOption::WRITE
		})));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (int32_t i = 0; i < posAndSize->length; ++i) {
					bool preconditionsHold = i == 0;
					exceptionThrown = false;
					try {
						$assign(fileLock, $new($FileLockSub, syncChannel, $nc(posAndSize->get(i))->get(0), $nc(posAndSize->get(i))->get(1), true));
					} catch ($IllegalArgumentException& iae) {
						exceptionThrown = true;
					} catch ($Exception& e) {
						$nc($System::err)->println($$str({"Unexpected exception \""_s, e, "\" caught for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for FileChannel variant"_s}));
						++failures;
						continue;
					}
					if (preconditionsHold && exceptionThrown) {
						$nc($System::err)->println($$str({"FileLock constructor incorrectly threw IAE for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for FileChannel variant"_s}));
						++failures;
					} else if (!preconditionsHold && !exceptionThrown) {
						$nc($System::err)->println($$str({"FileLock constructor did not throw IAE for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for FileChannel variant"_s}));
						++failures;
					}
				}
			} catch ($Throwable& t$) {
				if (syncChannel != nullptr) {
					try {
						syncChannel->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (syncChannel != nullptr) {
				syncChannel->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	{
		$var($AsynchronousFileChannel, asyncChannel, $AsynchronousFileChannel::open($(tmpFile->toPath()), $$new($OpenOptionArray, {
			$StandardOpenOption::READ,
			$StandardOpenOption::WRITE
		})));
		$var($Throwable, var$2, nullptr);
		try {
			try {
				for (int32_t i = 0; i < posAndSize->length; ++i) {
					bool preconditionsHold = i == 0;
					exceptionThrown = false;
					try {
						$assign(fileLock, $new($FileLockSub, asyncChannel, $nc(posAndSize->get(i))->get(0), $nc(posAndSize->get(i))->get(1), true));
					} catch ($IllegalArgumentException& iae) {
						exceptionThrown = true;
					} catch ($Exception& e) {
						$nc($System::err)->println($$str({"Unexpected exception \""_s, e, "\" caught for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for AsynchronousFileChannel variant"_s}));
						++failures;
						continue;
					}
					if (preconditionsHold && exceptionThrown) {
						$nc($System::err)->println($$str({"FileLock constructor incorrectly threw IAE for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for AsynchronousFileChannel variant"_s}));
						++failures;
					} else if (!preconditionsHold && !exceptionThrown) {
						$nc($System::err)->println($$str({"FileLock constructor did not throw IAE for position "_s, $$str($nc(posAndSize->get(i))->get(0)), " and size "_s, $$str($nc(posAndSize->get(i))->get(1)), " for AsynchronousFileChannel variant"_s}));
						++failures;
					}
				}
			} catch ($Throwable& t$) {
				if (asyncChannel != nullptr) {
					try {
						asyncChannel->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			if (asyncChannel != nullptr) {
				asyncChannel->close();
			}
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing FileLock."_s}));
	}
}

FileLockConstructor::FileLockConstructor() {
}

$Class* FileLockConstructor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileLockConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileLockConstructor, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FileLockConstructor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileLockConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileLockConstructor);
	});
	return class$;
}

$Class* FileLockConstructor::class$ = nullptr;