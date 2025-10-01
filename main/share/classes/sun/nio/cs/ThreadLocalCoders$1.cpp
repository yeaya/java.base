#include <sun/nio/cs/ThreadLocalCoders$1.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/ThreadLocalCoders$Cache.h>
#include <sun/nio/cs/ThreadLocalCoders.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $ThreadLocalCoders = ::sun::nio::cs::ThreadLocalCoders;
using $ThreadLocalCoders$Cache = ::sun::nio::cs::ThreadLocalCoders$Cache;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ThreadLocalCoders$1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThreadLocalCoders$1, $assertionsDisabled)},
	{}
};

$MethodInfo _ThreadLocalCoders$1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ThreadLocalCoders$1::*)(int32_t)>(&ThreadLocalCoders$1::init$))},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"hasName", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _ThreadLocalCoders$1_EnclosingMethodInfo_ = {
	"sun.nio.cs.ThreadLocalCoders",
	nullptr,
	nullptr
};

$InnerClassInfo _ThreadLocalCoders$1_InnerClassesInfo_[] = {
	{"sun.nio.cs.ThreadLocalCoders$1", nullptr, nullptr, 0},
	{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ThreadLocalCoders$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ThreadLocalCoders$1",
	"sun.nio.cs.ThreadLocalCoders$Cache",
	nullptr,
	_ThreadLocalCoders$1_FieldInfo_,
	_ThreadLocalCoders$1_MethodInfo_,
	nullptr,
	&_ThreadLocalCoders$1_EnclosingMethodInfo_,
	_ThreadLocalCoders$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ThreadLocalCoders"
};

$Object* allocate$ThreadLocalCoders$1($Class* clazz) {
	return $of($alloc(ThreadLocalCoders$1));
}

bool ThreadLocalCoders$1::$assertionsDisabled = false;

void ThreadLocalCoders$1::init$(int32_t size) {
	$ThreadLocalCoders$Cache::init$(size);
}

bool ThreadLocalCoders$1::hasName(Object$* ob, Object$* name) {
	if ($instanceOf($Charset, name)) {
		return $nc($($nc(($cast($CharsetDecoder, ob)))->charset()))->equals(name);
	}
	if ($instanceOf($String, name)) {
		return ($nc($($nc($($nc(($cast($CharsetDecoder, ob)))->charset()))->name()))->equals(name));
	}
	return false;
}

$Object* ThreadLocalCoders$1::create(Object$* name) {
	if ($instanceOf($Charset, name)) {
		return $of($nc(($cast($Charset, name)))->newDecoder());
	}
	if ($instanceOf($String, name)) {
		return $of($nc($($Charset::forName($cast($String, name))))->newDecoder());
	}
	if (!ThreadLocalCoders$1::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return $of(nullptr);
}

void clinit$ThreadLocalCoders$1($Class* class$) {
	$load($ThreadLocalCoders);
	ThreadLocalCoders$1::$assertionsDisabled = !$ThreadLocalCoders::class$->desiredAssertionStatus();
}

ThreadLocalCoders$1::ThreadLocalCoders$1() {
}

$Class* ThreadLocalCoders$1::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalCoders$1, name, initialize, &_ThreadLocalCoders$1_ClassInfo_, clinit$ThreadLocalCoders$1, allocate$ThreadLocalCoders$1);
	return class$;
}

$Class* ThreadLocalCoders$1::class$ = nullptr;

		} // cs
	} // nio
} // sun