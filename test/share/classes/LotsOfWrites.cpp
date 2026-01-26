#include <LotsOfWrites.h>

#include <LotsOfWrites$Writer.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $LotsOfWrites$Writer = ::LotsOfWrites$Writer;
using $LotsOfWrites$WriterArray = $Array<LotsOfWrites$Writer>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _LotsOfWrites_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(LotsOfWrites, rand)},
	{}
};

$MethodInfo _LotsOfWrites_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LotsOfWrites, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LotsOfWrites, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LotsOfWrites_InnerClassesInfo_[] = {
	{"LotsOfWrites$Writer", "LotsOfWrites", "Writer", $STATIC},
	{}
};

$ClassInfo _LotsOfWrites_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LotsOfWrites",
	"java.lang.Object",
	nullptr,
	_LotsOfWrites_FieldInfo_,
	_LotsOfWrites_MethodInfo_,
	nullptr,
	nullptr,
	_LotsOfWrites_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LotsOfWrites$Writer"
};

$Object* allocate$LotsOfWrites($Class* clazz) {
	return $of($alloc(LotsOfWrites));
}

$Random* LotsOfWrites::rand = nullptr;

void LotsOfWrites::init$() {
}

void LotsOfWrites::main($StringArray* args) {
	$init(LotsOfWrites);
	$useLocalCurrentObjectStackCache();
	int32_t count = 20 + $nc(LotsOfWrites::rand)->nextInt(16);
	$var($LotsOfWrites$WriterArray, writers, $new($LotsOfWrites$WriterArray, count));
	$var($CountDownLatch, latch, $new($CountDownLatch, count));
	for (int32_t i = 0; i < count; ++i) {
		int64_t size = 512 * 1024 + $nc(LotsOfWrites::rand)->nextInt(512 * 1024);
		$var($File, blah, $File::createTempFile("blah"_s, nullptr));
		$nc(blah)->deleteOnExit();
		$var($LotsOfWrites$Writer, writer, $new($LotsOfWrites$Writer, blah, size, latch));
		writers->set(i, writer);
		writer->start();
	}
	latch->await();
	bool failed = false;
	$var($bytes, buf, $new($bytes, 8192));
	for (int32_t i = 0; i < count; ++i) {
		$var($LotsOfWrites$Writer, writer, writers->get(i));
		$var($FileInputStream, in, $new($FileInputStream, $($nc(writer)->file())));
		{
			$var($Throwable, var$0, nullptr);
			bool break$1 = false;
			try {
				int64_t size = 0;
				int8_t expected = (int8_t)0;
				int32_t nread = in->read(buf);
				while (nread > 0) {
					for (int32_t j = 0; j < nread; ++j) {
						if (buf->get(j) != expected) {
							$nc($System::err)->println("Unexpected contents"_s);
							failed = true;
							break;
						}
						++expected;
					}
					if (failed) {
						break;
					}
					size += nread;
					nread = in->read(buf);
				}
				if (!failed && size != $nc(writer)->size()) {
					$nc($System::err)->println("Unexpected size"_s);
					failed = true;
				}
				if (failed) {
					// break;
					break$1 = true;
					goto $finally;
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (break$1) {
				break;
			}
		}
	}
	for (int32_t i = 0; i < count; ++i) {
		$nc($($nc(writers->get(i))->file()))->delete$();
	}
	if (failed) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void clinit$LotsOfWrites($Class* class$) {
	$assignStatic(LotsOfWrites::rand, $new($Random));
}

LotsOfWrites::LotsOfWrites() {
}

$Class* LotsOfWrites::load$($String* name, bool initialize) {
	$loadClass(LotsOfWrites, name, initialize, &_LotsOfWrites_ClassInfo_, clinit$LotsOfWrites, allocate$LotsOfWrites);
	return class$;
}

$Class* LotsOfWrites::class$ = nullptr;