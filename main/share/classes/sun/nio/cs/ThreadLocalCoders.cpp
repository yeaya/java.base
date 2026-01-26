#include <sun/nio/cs/ThreadLocalCoders.h>

#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ThreadLocalCoders$1.h>
#include <sun/nio/cs/ThreadLocalCoders$2.h>
#include <sun/nio/cs/ThreadLocalCoders$Cache.h>
#include <jcpp.h>

#undef CACHE_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $ThreadLocalCoders$1 = ::sun::nio::cs::ThreadLocalCoders$1;
using $ThreadLocalCoders$2 = ::sun::nio::cs::ThreadLocalCoders$2;
using $ThreadLocalCoders$Cache = ::sun::nio::cs::ThreadLocalCoders$Cache;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ThreadLocalCoders_FieldInfo_[] = {
	{"CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocalCoders, CACHE_SIZE)},
	{"decoderCache", "Lsun/nio/cs/ThreadLocalCoders$Cache;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadLocalCoders, decoderCache)},
	{"encoderCache", "Lsun/nio/cs/ThreadLocalCoders$Cache;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadLocalCoders, encoderCache)},
	{}
};

$MethodInfo _ThreadLocalCoders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadLocalCoders, init$, void)},
	{"decoderFor", "(Ljava/lang/Object;)Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadLocalCoders, decoderFor, $CharsetDecoder*, Object$*)},
	{"encoderFor", "(Ljava/lang/Object;)Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadLocalCoders, encoderFor, $CharsetEncoder*, Object$*)},
	{}
};

$InnerClassInfo _ThreadLocalCoders_InnerClassesInfo_[] = {
	{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.nio.cs.ThreadLocalCoders$2", nullptr, nullptr, 0},
	{"sun.nio.cs.ThreadLocalCoders$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ThreadLocalCoders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ThreadLocalCoders",
	"java.lang.Object",
	nullptr,
	_ThreadLocalCoders_FieldInfo_,
	_ThreadLocalCoders_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadLocalCoders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ThreadLocalCoders$Cache,sun.nio.cs.ThreadLocalCoders$2,sun.nio.cs.ThreadLocalCoders$1"
};

$Object* allocate$ThreadLocalCoders($Class* clazz) {
	return $of($alloc(ThreadLocalCoders));
}

$ThreadLocalCoders$Cache* ThreadLocalCoders::decoderCache = nullptr;
$ThreadLocalCoders$Cache* ThreadLocalCoders::encoderCache = nullptr;

void ThreadLocalCoders::init$() {
}

$CharsetDecoder* ThreadLocalCoders::decoderFor(Object$* name) {
	$init(ThreadLocalCoders);
	$var($CharsetDecoder, cd, $cast($CharsetDecoder, $nc(ThreadLocalCoders::decoderCache)->forName(name)));
	$nc(cd)->reset();
	return cd;
}

$CharsetEncoder* ThreadLocalCoders::encoderFor(Object$* name) {
	$init(ThreadLocalCoders);
	$var($CharsetEncoder, ce, $cast($CharsetEncoder, $nc(ThreadLocalCoders::encoderCache)->forName(name)));
	$nc(ce)->reset();
	return ce;
}

void clinit$ThreadLocalCoders($Class* class$) {
	$assignStatic(ThreadLocalCoders::decoderCache, $new($ThreadLocalCoders$1, ThreadLocalCoders::CACHE_SIZE));
	$assignStatic(ThreadLocalCoders::encoderCache, $new($ThreadLocalCoders$2, ThreadLocalCoders::CACHE_SIZE));
}

ThreadLocalCoders::ThreadLocalCoders() {
}

$Class* ThreadLocalCoders::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalCoders, name, initialize, &_ThreadLocalCoders_ClassInfo_, clinit$ThreadLocalCoders, allocate$ThreadLocalCoders);
	return class$;
}

$Class* ThreadLocalCoders::class$ = nullptr;

		} // cs
	} // nio
} // sun