#include <java/lang/invoke/ConstantGroup$1Impl.h>

#include <java/lang/invoke/AbstractConstantGroup$WithCache.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/util/List.h>
#include <java/util/function/IntFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup$WithCache = ::java::lang::invoke::AbstractConstantGroup$WithCache;
using $List = ::java::util::List;
using $IntFunction = ::java::util::function::IntFunction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _ConstantGroup$1Impl_FieldInfo_[] = {
	{"val$constantProvider", "Ljava/util/function/IntFunction;", nullptr, $FINAL | $SYNTHETIC, $field(ConstantGroup$1Impl, val$constantProvider)},
	{"val$ifNotPresent", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ConstantGroup$1Impl, val$ifNotPresent)},
	{"val$constants", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ConstantGroup$1Impl, val$constants)},
	{}
};

$MethodInfo _ConstantGroup$1Impl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/function/IntFunction;)V", "()V", 0, $method(static_cast<void(ConstantGroup$1Impl::*)($List*,Object$*,$IntFunction*)>(&ConstantGroup$1Impl::init$))},
	{"fillCache", "(I)Ljava/lang/Object;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _ConstantGroup$1Impl_EnclosingMethodInfo_ = {
	"java.lang.invoke.ConstantGroup",
	"makeConstantGroup",
	"(Ljava/util/List;Ljava/lang/Object;Ljava/util/function/IntFunction;)Ljava/lang/invoke/ConstantGroup;"
};

$InnerClassInfo _ConstantGroup$1Impl_InnerClassesInfo_[] = {
	{"java.lang.invoke.ConstantGroup$1Impl", nullptr, "Impl", 0},
	{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstantGroup$1Impl_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.ConstantGroup$1Impl",
	"java.lang.invoke.AbstractConstantGroup$WithCache",
	nullptr,
	_ConstantGroup$1Impl_FieldInfo_,
	_ConstantGroup$1Impl_MethodInfo_,
	nullptr,
	&_ConstantGroup$1Impl_EnclosingMethodInfo_,
	_ConstantGroup$1Impl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.ConstantGroup"
};

$Object* allocate$ConstantGroup$1Impl($Class* clazz) {
	return $of($alloc(ConstantGroup$1Impl));
}

void ConstantGroup$1Impl::init$($List* val$constants, Object$* val$ifNotPresent, $IntFunction* val$constantProvider) {
	$set(this, val$constants, val$constants);
	$set(this, val$ifNotPresent, val$ifNotPresent);
	$set(this, val$constantProvider, val$constantProvider);
	$AbstractConstantGroup$WithCache::init$($nc(val$constants)->size());
	initializeCache(this->val$constants, this->val$ifNotPresent);
}

$Object* ConstantGroup$1Impl::fillCache(int32_t index) {
	if (this->val$constantProvider == nullptr) {
		$AbstractConstantGroup$WithCache::fillCache(index);
	}
	return $of($nc(this->val$constantProvider)->apply(index));
}

ConstantGroup$1Impl::ConstantGroup$1Impl() {
}

$Class* ConstantGroup$1Impl::load$($String* name, bool initialize) {
	$loadClass(ConstantGroup$1Impl, name, initialize, &_ConstantGroup$1Impl_ClassInfo_, allocate$ConstantGroup$1Impl);
	return class$;
}

$Class* ConstantGroup$1Impl::class$ = nullptr;

		} // invoke
	} // lang
} // java