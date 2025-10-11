#include <sun/nio/cs/HKSCS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef HKSCS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _HKSCS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HKSCS::*)()>(&HKSCS::init$))},
	{}
};

$InnerClassInfo _HKSCS_InnerClassesInfo_[] = {
	{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
	{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HKSCS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.HKSCS",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HKSCS_MethodInfo_,
	nullptr,
	nullptr,
	_HKSCS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.HKSCS$Encoder,sun.nio.cs.HKSCS$Decoder"
};

$Object* allocate$HKSCS($Class* clazz) {
	return $of($alloc(HKSCS));
}

void HKSCS::init$() {
}

HKSCS::HKSCS() {
}

$Class* HKSCS::load$($String* name, bool initialize) {
	$loadClass(HKSCS, name, initialize, &_HKSCS_ClassInfo_, allocate$HKSCS);
	return class$;
}

$Class* HKSCS::class$ = nullptr;

		} // cs
	} // nio
} // sun