#include <java/lang/invoke/IndirectVarHandle.h>

#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/List.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

#undef COUNT

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $List = ::java::util::List;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _IndirectVarHandle_FieldAnnotations_handleMap[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _IndirectVarHandle_MethodAnnotations_getMethodHandle5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _IndirectVarHandle_FieldInfo_[] = {
	{"handleMap", "[Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(IndirectVarHandle, handleMap), _IndirectVarHandle_FieldAnnotations_handleMap},
	{"directTarget", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $FINAL, $field(IndirectVarHandle, directTarget)},
	{"target", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $FINAL, $field(IndirectVarHandle, target$)},
	{"handleFactory", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $FINAL, $field(IndirectVarHandle, handleFactory)},
	{"value", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(IndirectVarHandle, value)},
	{"coordinates", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(IndirectVarHandle, coordinates)},
	{}
};

$MethodInfo _IndirectVarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Class;[Ljava/lang/Class;Ljava/util/function/BiFunction;)V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;Ljava/util/function/BiFunction<Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;>;)V", 0, $method(static_cast<void(IndirectVarHandle::*)($VarHandle*,$Class*,$ClassArray*,$BiFunction*)>(&IndirectVarHandle::init$))},
	{"<init>", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Class;[Ljava/lang/Class;Ljava/util/function/BiFunction;Ljava/lang/invoke/VarForm;Z)V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;Ljava/util/function/BiFunction<Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;>;Ljava/lang/invoke/VarForm;Z)V", $PRIVATE, $method(static_cast<void(IndirectVarHandle::*)($VarHandle*,$Class*,$ClassArray*,$BiFunction*,$VarForm*,bool)>(&IndirectVarHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, 0},
	{"asDirect", "()Ljava/lang/invoke/VarHandle;", nullptr, 0},
	{"coordinateTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Class<*>;>;", $PUBLIC},
	{"getMethodHandle", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, 0, nullptr, nullptr, nullptr, _IndirectVarHandle_MethodAnnotations_getMethodHandle5},
	{"isDirect", "()Z", nullptr, 0},
	{"target", "()Ljava/lang/invoke/VarHandle;", nullptr, 0},
	{"toMethodHandle", "(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"varType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IndirectVarHandle_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.IndirectVarHandle",
	"java.lang.invoke.VarHandle",
	nullptr,
	_IndirectVarHandle_FieldInfo_,
	_IndirectVarHandle_MethodInfo_
};

$Object* allocate$IndirectVarHandle($Class* clazz) {
	return $of($alloc(IndirectVarHandle));
}

void IndirectVarHandle::init$($VarHandle* target, $Class* value, $ClassArray* coordinates, $BiFunction* handleFactory) {
	IndirectVarHandle::init$(target, value, coordinates, handleFactory, $$new($VarForm, value, coordinates), false);
}

void IndirectVarHandle::init$($VarHandle* target, $Class* value, $ClassArray* coordinates, $BiFunction* handleFactory, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$init($VarHandle$AccessMode);
	$set(this, handleMap, $new($MethodHandleArray, $VarHandle$AccessMode::COUNT));
	$set(this, handleFactory, handleFactory);
	$set(this, target$, target);
	$set(this, directTarget, $nc(target)->asDirect());
	$set(this, value, value);
	$set(this, coordinates, coordinates);
}

$Class* IndirectVarHandle::varType() {
	return this->value;
}

$List* IndirectVarHandle::coordinateTypes() {
	return $List::of(this->coordinates);
}

$MethodType* IndirectVarHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, this->value, this->coordinates);
}

bool IndirectVarHandle::isDirect() {
	return false;
}

$VarHandle* IndirectVarHandle::asDirect() {
	return this->directTarget;
}

$VarHandle* IndirectVarHandle::target() {
	return this->target$;
}

$VarHandle* IndirectVarHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? static_cast<$VarHandle*>(this) : static_cast<$VarHandle*>($new(IndirectVarHandle, this->target$, this->value, this->coordinates, this->handleFactory, this->vform, true));
}

$VarHandle* IndirectVarHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? static_cast<$VarHandle*>(this) : static_cast<$VarHandle*>($new(IndirectVarHandle, this->target$, this->value, this->coordinates, this->handleFactory, this->vform, false));
}

$MethodHandle* IndirectVarHandle::getMethodHandle(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, handle, $nc(this->handleMap)->get(mode));
	if (handle == nullptr) {
		$var($MethodHandle, targetHandle, $nc(this->target$)->getMethodHandle(mode));
		$assign(handle, ($nc(this->handleMap)->set(mode, $cast($MethodHandle, $($nc(this->handleFactory)->apply($($VarHandle$AccessMode::values())->get(mode), targetHandle))))));
	}
	return handle;
}

$MethodHandle* IndirectVarHandle::toMethodHandle($VarHandle$AccessMode* accessMode) {
	return $nc($(getMethodHandle($nc(accessMode)->ordinal())))->bindTo(this->directTarget);
}

IndirectVarHandle::IndirectVarHandle() {
}

$Class* IndirectVarHandle::load$($String* name, bool initialize) {
	$loadClass(IndirectVarHandle, name, initialize, &_IndirectVarHandle_ClassInfo_, allocate$IndirectVarHandle);
	return class$;
}

$Class* IndirectVarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java