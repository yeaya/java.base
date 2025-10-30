#include <jdk/internal/module/ModuleResolution.h>

#include <java/lang/InternalError.h>
#include <java/lang/module/ModuleReference.h>
#include <jdk/internal/module/ModuleReferenceImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ModuleReferenceImpl = ::jdk::internal::module::ModuleReferenceImpl;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleResolution_FieldInfo_[] = {
	{"value", "I", nullptr, $FINAL, $field(ModuleResolution, value$)},
	{}
};

$MethodInfo _ModuleResolution_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ModuleResolution::*)(int32_t)>(&ModuleResolution::init$))},
	{"doNotResolveByDefault", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModuleResolution::*)()>(&ModuleResolution::doNotResolveByDefault))},
	{"doNotResolveByDefault", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ModuleReference*)>(&ModuleResolution::doNotResolveByDefault))},
	{"empty", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleResolution*(*)()>(&ModuleResolution::empty))},
	{"hasDeprecatedForRemovalWarning", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModuleResolution::*)()>(&ModuleResolution::hasDeprecatedForRemovalWarning))},
	{"hasDeprecatedWarning", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModuleResolution::*)()>(&ModuleResolution::hasDeprecatedWarning))},
	{"hasIncubatingWarning", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModuleResolution::*)()>(&ModuleResolution::hasIncubatingWarning))},
	{"hasIncubatingWarning", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ModuleReference*)>(&ModuleResolution::hasIncubatingWarning))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"value", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModuleResolution::*)()>(&ModuleResolution::value))},
	{"withDeprecated", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(static_cast<ModuleResolution*(ModuleResolution::*)()>(&ModuleResolution::withDeprecated))},
	{"withDeprecatedForRemoval", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(static_cast<ModuleResolution*(ModuleResolution::*)()>(&ModuleResolution::withDeprecatedForRemoval))},
	{"withDoNotResolveByDefault", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(static_cast<ModuleResolution*(ModuleResolution::*)()>(&ModuleResolution::withDoNotResolveByDefault))},
	{"withIncubating", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(static_cast<ModuleResolution*(ModuleResolution::*)()>(&ModuleResolution::withIncubating))},
	{}
};

$ClassInfo _ModuleResolution_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ModuleResolution",
	"java.lang.Object",
	nullptr,
	_ModuleResolution_FieldInfo_,
	_ModuleResolution_MethodInfo_
};

$Object* allocate$ModuleResolution($Class* clazz) {
	return $of($alloc(ModuleResolution));
}

void ModuleResolution::init$(int32_t value) {
	this->value$ = value;
}

int32_t ModuleResolution::value() {
	return this->value$;
}

ModuleResolution* ModuleResolution::empty() {
	return $new(ModuleResolution, 0);
}

bool ModuleResolution::doNotResolveByDefault() {
	return ((int32_t)(this->value$ & (uint32_t)1)) != 0;
}

bool ModuleResolution::hasDeprecatedWarning() {
	return ((int32_t)(this->value$ & (uint32_t)2)) != 0;
}

bool ModuleResolution::hasDeprecatedForRemovalWarning() {
	return ((int32_t)(this->value$ & (uint32_t)4)) != 0;
}

bool ModuleResolution::hasIncubatingWarning() {
	return ((int32_t)(this->value$ & (uint32_t)8)) != 0;
}

ModuleResolution* ModuleResolution::withDoNotResolveByDefault() {
	return $new(ModuleResolution, this->value$ | 1);
}

ModuleResolution* ModuleResolution::withDeprecated() {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(this->value$ & (uint32_t)(4 | 8))) != 0) {
		$throwNew($InternalError, $$str({"cannot add deprecated to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 2);
}

ModuleResolution* ModuleResolution::withDeprecatedForRemoval() {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(this->value$ & (uint32_t)(2 | 8))) != 0) {
		$throwNew($InternalError, $$str({"cannot add deprecated for removal to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 4);
}

ModuleResolution* ModuleResolution::withIncubating() {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(this->value$ & (uint32_t)(2 | 4))) != 0) {
		$throwNew($InternalError, $$str({"cannot add incubating to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 8);
}

bool ModuleResolution::doNotResolveByDefault($ModuleReference* mref) {
	if ($instanceOf($ModuleReferenceImpl, mref)) {
		$var(ModuleResolution, mres, $nc(($cast($ModuleReferenceImpl, mref)))->moduleResolution());
		if (mres != nullptr) {
			return mres->doNotResolveByDefault();
		}
	}
	return false;
}

bool ModuleResolution::hasIncubatingWarning($ModuleReference* mref) {
	if ($instanceOf($ModuleReferenceImpl, mref)) {
		$var(ModuleResolution, mres, $nc(($cast($ModuleReferenceImpl, mref)))->moduleResolution());
		if (mres != nullptr) {
			return mres->hasIncubatingWarning();
		}
	}
	return false;
}

$String* ModuleResolution::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Object::toString()), "[value="_s, $$str(this->value$), "]"_s});
}

ModuleResolution::ModuleResolution() {
}

$Class* ModuleResolution::load$($String* name, bool initialize) {
	$loadClass(ModuleResolution, name, initialize, &_ModuleResolution_ClassInfo_, allocate$ModuleResolution);
	return class$;
}

$Class* ModuleResolution::class$ = nullptr;

		} // module
	} // internal
} // jdk