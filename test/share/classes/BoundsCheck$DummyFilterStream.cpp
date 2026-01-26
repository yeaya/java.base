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

$MethodInfo _BoundsCheck$DummyFilterStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(BoundsCheck$DummyFilterStream, init$, void, $OutputStream*)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(BoundsCheck$DummyFilterStream, write, void, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _BoundsCheck$DummyFilterStream_InnerClassesInfo_[] = {
	{"BoundsCheck$DummyFilterStream", "BoundsCheck", "DummyFilterStream", $STATIC},
	{}
};

$ClassInfo _BoundsCheck$DummyFilterStream_ClassInfo_ = {
	$ACC_SUPER,
	"BoundsCheck$DummyFilterStream",
	"java.io.FilterOutputStream",
	nullptr,
	nullptr,
	_BoundsCheck$DummyFilterStream_MethodInfo_,
	nullptr,
	nullptr,
	_BoundsCheck$DummyFilterStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BoundsCheck"
};

$Object* allocate$BoundsCheck$DummyFilterStream($Class* clazz) {
	return $of($alloc(BoundsCheck$DummyFilterStream));
}

void BoundsCheck$DummyFilterStream::init$($OutputStream* o) {
	$FilterOutputStream::init$(o);
}

void BoundsCheck$DummyFilterStream::write(int32_t val) {
	$FilterOutputStream::write(val + 1);
}

BoundsCheck$DummyFilterStream::BoundsCheck$DummyFilterStream() {
}

$Class* BoundsCheck$DummyFilterStream::load$($String* name, bool initialize) {
	$loadClass(BoundsCheck$DummyFilterStream, name, initialize, &_BoundsCheck$DummyFilterStream_ClassInfo_, allocate$BoundsCheck$DummyFilterStream);
	return class$;
}

$Class* BoundsCheck$DummyFilterStream::class$ = nullptr;