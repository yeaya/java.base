#include <java/util/OptionalInt.h>
#include <java/lang/Runnable.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntSupplier.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntSupplier = ::java::util::function::IntSupplier;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {

OptionalInt* OptionalInt::EMPTY = nullptr;

void OptionalInt::init$() {
	this->isPresent$ = false;
	this->value = 0;
}

OptionalInt* OptionalInt::empty() {
	$init(OptionalInt);
	return OptionalInt::EMPTY;
}

void OptionalInt::init$(int32_t value) {
	this->isPresent$ = true;
	this->value = value;
}

OptionalInt* OptionalInt::of(int32_t value) {
	$init(OptionalInt);
	return $new(OptionalInt, value);
}

int32_t OptionalInt::getAsInt() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

bool OptionalInt::isPresent() {
	return this->isPresent$;
}

bool OptionalInt::isEmpty() {
	return !this->isPresent$;
}

void OptionalInt::ifPresent($IntConsumer* action) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	}
}

void OptionalInt::ifPresentOrElse($IntConsumer* action, $Runnable* emptyAction) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	} else {
		$nc(emptyAction)->run();
	}
}

$IntStream* OptionalInt::stream() {
	if (this->isPresent$) {
		return $IntStream::of(this->value);
	} else {
		return $IntStream::empty();
	}
}

int32_t OptionalInt::orElse(int32_t other) {
	return this->isPresent$ ? this->value : other;
}

int32_t OptionalInt::orElseGet($IntSupplier* supplier) {
	return this->isPresent$ ? this->value : $nc(supplier)->getAsInt();
}

int32_t OptionalInt::orElseThrow() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

int32_t OptionalInt::orElseThrow($Supplier* exceptionSupplier) {
	if (this->isPresent$) {
		return this->value;
	} else {
		$throw($$cast($Throwable, $nc(exceptionSupplier)->get()));
	}
}

bool OptionalInt::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(OptionalInt, other, nullptr);
	bool var$1 = $instanceOf(OptionalInt, obj);
	if (var$1) {
		$assign(other, $cast(OptionalInt, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && (this->isPresent$ && $nc(other)->isPresent$ ? this->value == other->value : this->isPresent$ == $nc(other)->isPresent$);
}

int32_t OptionalInt::hashCode() {
	return this->isPresent$ ? $Integer::hashCode(this->value) : 0;
}

$String* OptionalInt::toString() {
	$useLocalObjectStack();
	return this->isPresent$ ? $String::format("OptionalInt[%s]"_s, $$new($ObjectArray, {$($Integer::valueOf(this->value))})) : "OptionalInt.empty"_s;
}

void OptionalInt::clinit$($Class* clazz) {
	$assignStatic(OptionalInt::EMPTY, $new(OptionalInt));
}

OptionalInt::OptionalInt() {
}

$Class* OptionalInt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "Ljava/util/OptionalInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OptionalInt, EMPTY)},
		{"isPresent", "Z", nullptr, $PRIVATE | $FINAL, $field(OptionalInt, isPresent$)},
		{"value", "I", nullptr, $PRIVATE | $FINAL, $field(OptionalInt, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OptionalInt, init$, void)},
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(OptionalInt, init$, void, int32_t)},
		{"empty", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $STATIC, $staticMethod(OptionalInt, empty, OptionalInt*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OptionalInt, equals, bool, Object$*)},
		{"getAsInt", "()I", nullptr, $PUBLIC, $method(OptionalInt, getAsInt, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(OptionalInt, hashCode, int32_t)},
		{"ifPresent", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $method(OptionalInt, ifPresent, void, $IntConsumer*)},
		{"ifPresentOrElse", "(Ljava/util/function/IntConsumer;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(OptionalInt, ifPresentOrElse, void, $IntConsumer*, $Runnable*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $method(OptionalInt, isEmpty, bool)},
		{"isPresent", "()Z", nullptr, $PUBLIC, $method(OptionalInt, isPresent, bool)},
		{"of", "(I)Ljava/util/OptionalInt;", nullptr, $PUBLIC | $STATIC, $staticMethod(OptionalInt, of, OptionalInt*, int32_t)},
		{"orElse", "(I)I", nullptr, $PUBLIC, $method(OptionalInt, orElse, int32_t, int32_t)},
		{"orElseGet", "(Ljava/util/function/IntSupplier;)I", nullptr, $PUBLIC, $method(OptionalInt, orElseGet, int32_t, $IntSupplier*)},
		{"orElseThrow", "()I", nullptr, $PUBLIC, $method(OptionalInt, orElseThrow, int32_t)},
		{"orElseThrow", "(Ljava/util/function/Supplier;)I", "<X:Ljava/lang/Throwable;>(Ljava/util/function/Supplier<+TX;>;)I^TX;", $PUBLIC, $method(OptionalInt, orElseThrow, int32_t, $Supplier*), "java.lang.Throwable"},
		{"stream", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $method(OptionalInt, stream, $IntStream*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OptionalInt, toString, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.OptionalInt",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(OptionalInt, name, initialize, &classInfo$$, OptionalInt::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OptionalInt);
	});
	return class$;
}

$Class* OptionalInt::class$ = nullptr;

	} // util
} // java