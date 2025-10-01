#include <sun/nio/cs/ThreadLocalCoders$2.h>

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
#include <java/nio/charset/CharsetEncoder.h>
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $ThreadLocalCoders = ::sun::nio::cs::ThreadLocalCoders;
using $ThreadLocalCoders$Cache = ::sun::nio::cs::ThreadLocalCoders$Cache;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ThreadLocalCoders$2_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThreadLocalCoders$2, $assertionsDisabled)},
	{}
};

$MethodInfo _ThreadLocalCoders$2_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ThreadLocalCoders$2::*)(int32_t)>(&ThreadLocalCoders$2::init$))},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"hasName", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _ThreadLocalCoders$2_EnclosingMethodInfo_ = {
	"sun.nio.cs.ThreadLocalCoders",
	nullptr,
	nullptr
};

$InnerClassInfo _ThreadLocalCoders$2_InnerClassesInfo_[] = {
	{"sun.nio.cs.ThreadLocalCoders$2", nullptr, nullptr, 0},
	{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ThreadLocalCoders$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ThreadLocalCoders$2",
	"sun.nio.cs.ThreadLocalCoders$Cache",
	nullptr,
	_ThreadLocalCoders$2_FieldInfo_,
	_ThreadLocalCoders$2_MethodInfo_,
	nullptr,
	&_ThreadLocalCoders$2_EnclosingMethodInfo_,
	_ThreadLocalCoders$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ThreadLocalCoders"
};

$Object* allocate$ThreadLocalCoders$2($Class* clazz) {
	return $of($alloc(ThreadLocalCoders$2));
}

bool ThreadLocalCoders$2::$assertionsDisabled = false;

void ThreadLocalCoders$2::init$(int32_t size) {
	$ThreadLocalCoders$Cache::init$(size);
}

bool ThreadLocalCoders$2::hasName(Object$* ob, Object$* name) {
	if ($instanceOf($Charset, name)) {
		return $nc($($nc(($cast($CharsetEncoder, ob)))->charset()))->equals(name);
	}
	if ($instanceOf($String, name)) {
		return ($nc($($nc($($nc(($cast($CharsetEncoder, ob)))->charset()))->name()))->equals(name));
	}
	return false;
}

$Object* ThreadLocalCoders$2::create(Object$* name) {
	if ($instanceOf($Charset, name)) {
		return $of($nc(($cast($Charset, name)))->newEncoder());
	}
	if ($instanceOf($String, name)) {
		return $of($nc($($Charset::forName($cast($String, name))))->newEncoder());
	}
	if (!ThreadLocalCoders$2::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return $of(nullptr);
}

void clinit$ThreadLocalCoders$2($Class* class$) {
	$load($ThreadLocalCoders);
	ThreadLocalCoders$2::$assertionsDisabled = !$ThreadLocalCoders::class$->desiredAssertionStatus();
}

ThreadLocalCoders$2::ThreadLocalCoders$2() {
}

$Class* ThreadLocalCoders$2::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalCoders$2, name, initialize, &_ThreadLocalCoders$2_ClassInfo_, clinit$ThreadLocalCoders$2, allocate$ThreadLocalCoders$2);
	return class$;
}

$Class* ThreadLocalCoders$2::class$ = nullptr;

		} // cs
	} // nio
} // sun