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

$ints* SliceOps$5::$SwitchMap$java$util$stream$StreamShape = nullptr;

void SliceOps$5::clinit$($Class* clazz) {
	$assignStatic(SliceOps$5::$SwitchMap$java$util$stream$StreamShape, $new($ints, $($StreamShape::values())->length));
	{
		try {
			SliceOps$5::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::REFERENCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SliceOps$5::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::INT_VALUE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SliceOps$5::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::LONG_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SliceOps$5::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::DOUBLE_VALUE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SliceOps$5::SliceOps$5() {
}

$Class* SliceOps$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$stream$StreamShape", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SliceOps$5, $SwitchMap$java$util$stream$StreamShape)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.SliceOps",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SliceOps$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.stream.SliceOps$5",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SliceOps"
	};
	$loadClass(SliceOps$5, name, initialize, &classInfo$$, SliceOps$5::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SliceOps$5);
	});
	return class$;
}

$Class* SliceOps$5::class$ = nullptr;

		} // stream
	} // util
} // java