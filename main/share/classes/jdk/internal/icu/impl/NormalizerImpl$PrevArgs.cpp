#include <jdk/internal/icu/impl/NormalizerImpl$PrevArgs.h>

#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _NormalizerImpl$PrevArgs_FieldInfo_[] = {
	{"src", "[C", nullptr, 0, $field(NormalizerImpl$PrevArgs, src)},
	{"start", "I", nullptr, 0, $field(NormalizerImpl$PrevArgs, start)},
	{"current", "I", nullptr, 0, $field(NormalizerImpl$PrevArgs, current)},
	{"c1", "C", nullptr, 0, $field(NormalizerImpl$PrevArgs, c1)},
	{"c2", "C", nullptr, 0, $field(NormalizerImpl$PrevArgs, c2)},
	{}
};

$MethodInfo _NormalizerImpl$PrevArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerImpl$PrevArgs::*)()>(&NormalizerImpl$PrevArgs::init$))},
	{}
};

$InnerClassInfo _NormalizerImpl$PrevArgs_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.NormalizerImpl$PrevArgs", "jdk.internal.icu.impl.NormalizerImpl", "PrevArgs", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerImpl$PrevArgs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.NormalizerImpl$PrevArgs",
	"java.lang.Object",
	nullptr,
	_NormalizerImpl$PrevArgs_FieldInfo_,
	_NormalizerImpl$PrevArgs_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerImpl$PrevArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.NormalizerImpl"
};

$Object* allocate$NormalizerImpl$PrevArgs($Class* clazz) {
	return $of($alloc(NormalizerImpl$PrevArgs));
}

void NormalizerImpl$PrevArgs::init$() {
}

NormalizerImpl$PrevArgs::NormalizerImpl$PrevArgs() {
}

$Class* NormalizerImpl$PrevArgs::load$($String* name, bool initialize) {
	$loadClass(NormalizerImpl$PrevArgs, name, initialize, &_NormalizerImpl$PrevArgs_ClassInfo_, allocate$NormalizerImpl$PrevArgs);
	return class$;
}

$Class* NormalizerImpl$PrevArgs::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk