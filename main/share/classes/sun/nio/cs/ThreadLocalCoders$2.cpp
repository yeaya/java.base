#include <sun/nio/cs/ThreadLocalCoders$2.h>
#include <java/lang/AssertionError.h>
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

bool ThreadLocalCoders$2::$assertionsDisabled = false;

void ThreadLocalCoders$2::init$(int32_t size) {
	$ThreadLocalCoders$Cache::init$(size);
}

bool ThreadLocalCoders$2::hasName(Object$* ob, Object$* name) {
	$useLocalObjectStack();
	if ($instanceOf($Charset, name)) {
		return $$nc($nc($cast($CharsetEncoder, ob))->charset())->equals(name);
	}
	if ($instanceOf($String, name)) {
		return ($$nc($$nc($nc($cast($CharsetEncoder, ob))->charset())->name())->equals(name));
	}
	return false;
}

$Object* ThreadLocalCoders$2::create(Object$* name) {
	if ($instanceOf($Charset, name)) {
		return $cast($Charset, name)->newEncoder();
	}
	if ($instanceOf($String, name)) {
		return $$nc($Charset::forName($cast($String, name)))->newEncoder();
	}
	if (!ThreadLocalCoders$2::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return nullptr;
}

void ThreadLocalCoders$2::clinit$($Class* clazz) {
	$load($ThreadLocalCoders);
	ThreadLocalCoders$2::$assertionsDisabled = !$ThreadLocalCoders::class$->desiredAssertionStatus();
}

ThreadLocalCoders$2::ThreadLocalCoders$2() {
}

$Class* ThreadLocalCoders$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThreadLocalCoders$2, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ThreadLocalCoders$2, init$, void, int32_t)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(ThreadLocalCoders$2, create, $Object*, Object$*)},
		{"hasName", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(ThreadLocalCoders$2, hasName, bool, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.ThreadLocalCoders",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ThreadLocalCoders$2", nullptr, nullptr, 0},
		{"sun.nio.cs.ThreadLocalCoders$Cache", "sun.nio.cs.ThreadLocalCoders", "Cache", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ThreadLocalCoders$2",
		"sun.nio.cs.ThreadLocalCoders$Cache",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ThreadLocalCoders"
	};
	$loadClass(ThreadLocalCoders$2, name, initialize, &classInfo$$, ThreadLocalCoders$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadLocalCoders$2);
	});
	return class$;
}

$Class* ThreadLocalCoders$2::class$ = nullptr;

		} // cs
	} // nio
} // sun