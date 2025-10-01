#include <java/util/stream/Nodes$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef INT_VALUE
#undef LONG_VALUE
#undef REFERENCE
#undef DOUBLE_VALUE

using $StreamShapeArray = $Array<::java::util::stream::StreamShape>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Nodes = ::java::util::stream::Nodes;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$1_FieldInfo_[] = {
	{"$SwitchMap$java$util$stream$StreamShape", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Nodes$1, $SwitchMap$java$util$stream$StreamShape)},
	{}
};

$EnclosingMethodInfo _Nodes$1_EnclosingMethodInfo_ = {
	"java.util.stream.Nodes",
	nullptr,
	nullptr
};

$InnerClassInfo _Nodes$1_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Nodes$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.stream.Nodes$1",
	"java.lang.Object",
	nullptr,
	_Nodes$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Nodes$1_EnclosingMethodInfo_,
	_Nodes$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$1($Class* clazz) {
	return $of($alloc(Nodes$1));
}

$ints* Nodes$1::$SwitchMap$java$util$stream$StreamShape = nullptr;

void clinit$Nodes$1($Class* class$) {
	$assignStatic(Nodes$1::$SwitchMap$java$util$stream$StreamShape, $new($ints, $($StreamShape::values())->length));
	{
		try {
			$nc(Nodes$1::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::REFERENCE->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Nodes$1::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::INT_VALUE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Nodes$1::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::LONG_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Nodes$1::$SwitchMap$java$util$stream$StreamShape)->set($StreamShape::DOUBLE_VALUE->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Nodes$1::Nodes$1() {
}

$Class* Nodes$1::load$($String* name, bool initialize) {
	$loadClass(Nodes$1, name, initialize, &_Nodes$1_ClassInfo_, clinit$Nodes$1, allocate$Nodes$1);
	return class$;
}

$Class* Nodes$1::class$ = nullptr;

		} // stream
	} // util
} // java