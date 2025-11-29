#include <java/util/stream/SliceOps$5.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/util/stream/SliceOps.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef DOUBLE_VALUE
#undef INT_VALUE
#undef LONG_VALUE
#undef REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$5_FieldInfo_[] = {
	{"$SwitchMap$java$util$stream$StreamShape", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SliceOps$5, $SwitchMap$java$util$stream$StreamShape)},
	{}
};

$EnclosingMethodInfo _SliceOps$5_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps",
	nullptr,
	nullptr
};

$InnerClassInfo _SliceOps$5_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SliceOps$5_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.stream.SliceOps$5",
	"java.lang.Object",
	nullptr,
	_SliceOps$5_FieldInfo_,
	nullptr,
	nullptr,
	&_SliceOps$5_EnclosingMethodInfo_,
	_SliceOps$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$5($Class* clazz) {
	return $of($alloc(SliceOps$5));
}

$ints* SliceOps$5::$SwitchMap$java$util$stream$StreamShape = nullptr;

void clinit$SliceOps$5($Class* class$) {
	$assignStatic(SliceOps$5::$SwitchMap$java$util$stream$StreamShape, $new($ints, $($StreamShape::values())->length));
	{
		try {
			$nc(SliceOps$5::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::REFERENCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SliceOps$5::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::INT_VALUE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SliceOps$5::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::LONG_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SliceOps$5::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::DOUBLE_VALUE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SliceOps$5::SliceOps$5() {
}

$Class* SliceOps$5::load$($String* name, bool initialize) {
	$loadClass(SliceOps$5, name, initialize, &_SliceOps$5_ClassInfo_, clinit$SliceOps$5, allocate$SliceOps$5);
	return class$;
}

$Class* SliceOps$5::class$ = nullptr;

		} // stream
	} // util
} // java