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

$FieldInfo _UTF_32Coder_FieldInfo_[] = {
	{"BOM_BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BOM_BIG)},
	{"BOM_LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BOM_LITTLE)},
	{"NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, NONE)},
	{"BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, BIG)},
	{"LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UTF_32Coder, LITTLE)},
	{}
};

$MethodInfo _UTF_32Coder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UTF_32Coder::*)()>(&UTF_32Coder::init$))},
	{}
};

$InnerClassInfo _UTF_32Coder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_32Coder$Encoder", "sun.nio.cs.UTF_32Coder", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.UTF_32Coder$Decoder", "sun.nio.cs.UTF_32Coder", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _UTF_32Coder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.UTF_32Coder",
	"java.lang.Object",
	nullptr,
	_UTF_32Coder_FieldInfo_,
	_UTF_32Coder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_32Coder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_32Coder$Encoder,sun.nio.cs.UTF_32Coder$Decoder"
};

$Object* allocate$UTF_32Coder($Class* clazz) {
	return $of($alloc(UTF_32Coder));
}

void UTF_32Coder::init$() {
}

UTF_32Coder::UTF_32Coder() {
}

$Class* UTF_32Coder::load$($String* name, bool initialize) {
	$loadClass(UTF_32Coder, name, initialize, &_UTF_32Coder_ClassInfo_, allocate$UTF_32Coder);
	return class$;
}

$Class* UTF_32Coder::class$ = nullptr;

		} // cs
	} // nio
} // sun