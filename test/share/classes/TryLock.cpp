#include <TryLock.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/NonReadableChannelException.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $NonReadableChannelException = ::java::nio::channels::NonReadableChannelException;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _TryLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TryLock::*)()>(&TryLock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TryLock::main)), "java.lang.Exception"},
	{"test1", "(ZZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,bool)>(&TryLock::test1)), "java.lang.Exception"},
	{"test2", "(ZZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,bool)>(&TryLock::test2)), "java.lang.Exception"},
	{"test3", "(ZZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,bool)>(&TryLock::test3)), "java.lang.Exception"},
	{}
};

$ClassInfo _TryLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TryLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TryLock_MethodInfo_
};

$Object* allocate$TryLock($Class* clazz) {
	return $of($alloc(TryLock));
}

void TryLock::init$() {
}

void TryLock::main($StringArray* args) {
	test1(true, true);
	test1(false, true);
	test1(true, false);
	test1(false, false);
	test2(true, true);
	test2(false, true);
	test2(true, false);
	test2(false, false);
	test3(true, true);
	test3(false, true);
	test3(true, false);
	test3(false, false);
}

void TryLock::test1(bool shared, bool trylock) {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test1"_s, nullptr));
	$var($FileInputStream, fis, $new($FileInputStream, testFile));
	$var($FileChannel, fc, fis->getChannel());
	$var($FileLock, fl, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (trylock) {
					$assign(fl, $nc(fc)->tryLock(0, fc->size(), shared));
				} else {
					$assign(fl, $nc(fc)->lock(0, fc->size(), shared));
				}
				if (!shared) {
					$throwNew($RuntimeException, "No exception thrown for test1"_s);
				}
			} catch ($NonWritableChannelException& e) {
				if (shared) {
					$throwNew($RuntimeException, "Exception thrown for wrong case test1"_s);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (fl != nullptr) {
				fl->release();
			}
			$nc(fc)->close();
			$nc(testFile)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TryLock::test2(bool shared, bool trylock) {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test2"_s, nullptr));
	$var($FileOutputStream, fis, $new($FileOutputStream, testFile));
	$var($FileChannel, fc, fis->getChannel());
	$var($FileLock, fl, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (trylock) {
					$assign(fl, $nc(fc)->tryLock(0, fc->size(), shared));
				} else {
					$assign(fl, $nc(fc)->lock(0, fc->size(), shared));
				}
				if (shared) {
					$throwNew($RuntimeException, "No exception thrown for test2"_s);
				}
			} catch ($NonReadableChannelException& e) {
				if (!shared) {
					$throwNew($RuntimeException, "Exception thrown incorrectly for test2"_s);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (fl != nullptr) {
				fl->release();
			}
			$nc(fc)->close();
			$nc(testFile)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TryLock::test3(bool shared, bool trylock) {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test3"_s, nullptr));
	$var($RandomAccessFile, fis, $new($RandomAccessFile, testFile, "rw"_s));
	$var($FileChannel, fc, fis->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($FileLock, fl, nullptr);
			if (trylock) {
				$assign(fl, $nc(fc)->tryLock(0, fc->size(), shared));
			} else {
				$assign(fl, $nc(fc)->lock(0, fc->size(), shared));
			}
			$nc(fl)->release();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(fc)->close();
			$nc(testFile)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TryLock::TryLock() {
}

$Class* TryLock::load$($String* name, bool initialize) {
	$loadClass(TryLock, name, initialize, &_TryLock_ClassInfo_, allocate$TryLock);
	return class$;
}

$Class* TryLock::class$ = nullptr;