#include <java/lang/invoke/MethodHandleImpl$CasesHolder.h>

#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MethodHandleImpl$CasesHolder_FieldAnnotations_cases[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _MethodHandleImpl$CasesHolder_FieldInfo_[] = {
	{"cases", "[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(MethodHandleImpl$CasesHolder, cases), _MethodHandleImpl$CasesHolder_FieldAnnotations_cases},
	{}
};

$MethodInfo _MethodHandleImpl$CasesHolder_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(MethodHandleImpl$CasesHolder, init$, void, $MethodHandleArray*)},
	{}
};

$InnerClassInfo _MethodHandleImpl$CasesHolder_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$CasesHolder", "java.lang.invoke.MethodHandleImpl", "CasesHolder", $STATIC},
	{}
};

$ClassInfo _MethodHandleImpl$CasesHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$CasesHolder",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$CasesHolder_FieldInfo_,
	_MethodHandleImpl$CasesHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$CasesHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$CasesHolder($Class* clazz) {
	return $of($alloc(MethodHandleImpl$CasesHolder));
}

void MethodHandleImpl$CasesHolder::init$($MethodHandleArray* cases) {
	$set(this, cases, cases);
}

MethodHandleImpl$CasesHolder::MethodHandleImpl$CasesHolder() {
}

$Class* MethodHandleImpl$CasesHolder::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$CasesHolder, name, initialize, &_MethodHandleImpl$CasesHolder_ClassInfo_, allocate$MethodHandleImpl$CasesHolder);
	return class$;
}

$Class* MethodHandleImpl$CasesHolder::class$ = nullptr;

		} // invoke
	} // lang
} // java