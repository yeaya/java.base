#include <java/util/stream/Nodes$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/util/stream/Nodes.h>
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

$ints* Nodes$1::$SwitchMap$java$util$stream$StreamShape = nullptr;

void Nodes$1::clinit$($Class* clazz) {
	$assignStatic(Nodes$1::$SwitchMap$java$util$stream$StreamShape, $new($ints, $($StreamShape::values())->length));
	{
		try {
			Nodes$1::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::REFERENCE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Nodes$1::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::INT_VALUE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Nodes$1::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::LONG_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Nodes$1::$SwitchMap$java$util$stream$StreamShape->set($StreamShape::DOUBLE_VALUE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Nodes$1::Nodes$1() {
}

$Class* Nodes$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$stream$StreamShape", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$1, $SwitchMap$java$util$stream$StreamShape)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.Nodes",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.stream.Nodes$1",
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
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$1, name, initialize, &classInfo$$, Nodes$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$1);
	});
	return class$;
}

$Class* Nodes$1::class$ = nullptr;

		} // stream
	} // util
} // java