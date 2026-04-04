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
	return (this->value$ & 1) != 0;
}

bool ModuleResolution::hasDeprecatedWarning() {
	return (this->value$ & 2) != 0;
}

bool ModuleResolution::hasDeprecatedForRemovalWarning() {
	return (this->value$ & 4) != 0;
}

bool ModuleResolution::hasIncubatingWarning() {
	return (this->value$ & 8) != 0;
}

ModuleResolution* ModuleResolution::withDoNotResolveByDefault() {
	return $new(ModuleResolution, this->value$ | 1);
}

ModuleResolution* ModuleResolution::withDeprecated() {
	$useLocalObjectStack();
	if ((this->value$ & (4 | 8)) != 0) {
		$throwNew($InternalError, $$str({"cannot add deprecated to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 2);
}

ModuleResolution* ModuleResolution::withDeprecatedForRemoval() {
	$useLocalObjectStack();
	if ((this->value$ & (2 | 8)) != 0) {
		$throwNew($InternalError, $$str({"cannot add deprecated for removal to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 4);
}

ModuleResolution* ModuleResolution::withIncubating() {
	$useLocalObjectStack();
	if ((this->value$ & (2 | 4)) != 0) {
		$throwNew($InternalError, $$str({"cannot add incubating to "_s, $$str(this->value$)}));
	}
	return $new(ModuleResolution, this->value$ | 8);
}

bool ModuleResolution::doNotResolveByDefault($ModuleReference* mref) {
	if ($instanceOf($ModuleReferenceImpl, mref)) {
		$var(ModuleResolution, mres, $cast($ModuleReferenceImpl, mref)->moduleResolution());
		if (mres != nullptr) {
			return mres->doNotResolveByDefault();
		}
	}
	return false;
}

bool ModuleResolution::hasIncubatingWarning($ModuleReference* mref) {
	if ($instanceOf($ModuleReferenceImpl, mref)) {
		$var(ModuleResolution, mres, $cast($ModuleReferenceImpl, mref)->moduleResolution());
		if (mres != nullptr) {
			return mres->hasIncubatingWarning();
		}
	}
	return false;
}

$String* ModuleResolution::toString() {
	$useLocalObjectStack();
	return $str({$($Object::toString()), "[value="_s, $$str(this->value$), "]"_s});
}

ModuleResolution::ModuleResolution() {
}

$Class* ModuleResolution::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $FINAL, $field(ModuleResolution, value$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ModuleResolution, init$, void, int32_t)},
		{"doNotResolveByDefault", "()Z", nullptr, $PUBLIC, $method(ModuleResolution, doNotResolveByDefault, bool)},
		{"doNotResolveByDefault", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleResolution, doNotResolveByDefault, bool, $ModuleReference*)},
		{"empty", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleResolution, empty, ModuleResolution*)},
		{"hasDeprecatedForRemovalWarning", "()Z", nullptr, $PUBLIC, $method(ModuleResolution, hasDeprecatedForRemovalWarning, bool)},
		{"hasDeprecatedWarning", "()Z", nullptr, $PUBLIC, $method(ModuleResolution, hasDeprecatedWarning, bool)},
		{"hasIncubatingWarning", "()Z", nullptr, $PUBLIC, $method(ModuleResolution, hasIncubatingWarning, bool)},
		{"hasIncubatingWarning", "(Ljava/lang/module/ModuleReference;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleResolution, hasIncubatingWarning, bool, $ModuleReference*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleResolution, toString, $String*)},
		{"value", "()I", nullptr, $PUBLIC, $method(ModuleResolution, value, int32_t)},
		{"withDeprecated", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(ModuleResolution, withDeprecated, ModuleResolution*)},
		{"withDeprecatedForRemoval", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(ModuleResolution, withDeprecatedForRemoval, ModuleResolution*)},
		{"withDoNotResolveByDefault", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(ModuleResolution, withDoNotResolveByDefault, ModuleResolution*)},
		{"withIncubating", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $method(ModuleResolution, withIncubating, ModuleResolution*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleResolution",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleResolution, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleResolution);
	});
	return class$;
}

$Class* ModuleResolution::class$ = nullptr;

		} // module
	} // internal
} // jdk