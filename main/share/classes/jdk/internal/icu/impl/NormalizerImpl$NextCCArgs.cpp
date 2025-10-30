#include <jdk/internal/icu/impl/NormalizerImpl$NextCCArgs.h>

#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _NormalizerImpl$NextCCArgs_FieldInfo_[] = {
	{"source", "[C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, source)},
	{"next", "I", nullptr, 0, $field(NormalizerImpl$NextCCArgs, next)},
	{"limit", "I", nullptr, 0, $field(NormalizerImpl$NextCCArgs, limit)},
	{"c1", "C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, c1)},
	{"c2", "C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, c2)},
	{}
};

$MethodInfo _NormalizerImpl$NextCCArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerImpl$NextCCArgs::*)()>(&NormalizerImpl$NextCCArgs::init$))},
	{}
};

$InnerClassInfo _NormalizerImpl$NextCCArgs_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.NormalizerImpl$NextCCArgs", "jdk.internal.icu.impl.NormalizerImpl", "NextCCArgs", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerImpl$NextCCArgs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.NormalizerImpl$NextCCArgs",
	"java.lang.Object",
	nullptr,
	_NormalizerImpl$NextCCArgs_FieldInfo_,
	_NormalizerImpl$NextCCArgs_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerImpl$NextCCArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.NormalizerImpl"
};

$Object* allocate$NormalizerImpl$NextCCArgs($Class* clazz) {
	return $of($alloc(NormalizerImpl$NextCCArgs));
}

void NormalizerImpl$NextCCArgs::init$() {
}

NormalizerImpl$NextCCArgs::NormalizerImpl$NextCCArgs() {
}

$Class* NormalizerImpl$NextCCArgs::load$($String* name, bool initialize) {
	$loadClass(NormalizerImpl$NextCCArgs, name, initialize, &_NormalizerImpl$NextCCArgs_ClassInfo_, allocate$NormalizerImpl$NextCCArgs);
	return class$;
}

$Class* NormalizerImpl$NextCCArgs::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk