#include <BoundsCheck$DummyFilterStream.h>
#include <BoundsCheck.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void BoundsCheck$DummyFilterStream::init$($OutputStream* o) {
	$FilterOutputStream::init$(o);
}

void BoundsCheck$DummyFilterStream::write(int32_t val) {
	$FilterOutputStream::write(val + 1);
}

BoundsCheck$DummyFilterStream::BoundsCheck$DummyFilterStream() {
}

$Class* BoundsCheck$DummyFilterStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(BoundsCheck$DummyFilterStream, init$, void, $OutputStream*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(BoundsCheck$DummyFilterStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BoundsCheck$DummyFilterStream", "BoundsCheck", "DummyFilterStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BoundsCheck$DummyFilterStream",
		"java.io.FilterOutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"BoundsCheck"
	};
	$loadClass(BoundsCheck$DummyFilterStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BoundsCheck$DummyFilterStream));
	});
	return class$;
}

$Class* BoundsCheck$DummyFilterStream::class$ = nullptr;