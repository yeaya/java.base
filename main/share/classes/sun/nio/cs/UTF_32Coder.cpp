#include <sun/nio/cs/UTF_32Coder.h>
#include <jcpp.h>

#undef BIG
#undef BOM_BIG
#undef BOM_LITTLE
#undef LITTLE
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_32Coder::init$() {
}

UTF_32Coder::UTF_32Coder() {
}

$Class* UTF_32Coder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BOM_BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BOM_BIG)},
		{"BOM_LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BOM_LITTLE)},
		{"NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, NONE)},
		{"BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BIG)},
		{"LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, LITTLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UTF_32Coder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_32Coder$Encoder", "sun.nio.cs.UTF_32Coder", "Encoder", $PROTECTED | $STATIC},
		{"sun.nio.cs.UTF_32Coder$Decoder", "sun.nio.cs.UTF_32Coder", "Decoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.UTF_32Coder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.UTF_32Coder$Encoder,sun.nio.cs.UTF_32Coder$Decoder"
	};
	$loadClass(UTF_32Coder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_32Coder);
	});
	return class$;
}

$Class* UTF_32Coder::class$ = nullptr;

		} // cs
	} // nio
} // sun