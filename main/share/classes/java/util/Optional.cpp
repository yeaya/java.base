#include <java/util/Optional.h>

#include <java/lang/Runnable.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$CompoundAttribute _Optional_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$FieldInfo _Optional_FieldInfo_[] = {
	{"EMPTY", "Ljava/util/Optional;", "Ljava/util/Optional<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(Optional, EMPTY)},
	{"value", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Optional, value)},
	{}
};

$MethodInfo _Optional_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PRIVATE, $method(Optional, init$, void, Object$*)},
	{"empty", "()Ljava/util/Optional;", "<T:Ljava/lang/Object;>()Ljava/util/Optional<TT;>;", $PUBLIC | $STATIC, $staticMethod(Optional, empty, Optional*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Optional, equals, bool, Object$*)},
	{"filter", "(Ljava/util/function/Predicate;)Ljava/util/Optional;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/Optional<TT;>;", $PUBLIC, $method(Optional, filter, Optional*, $Predicate*)},
	{"flatMap", "(Ljava/util/function/Function;)Ljava/util/Optional;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/Optional<+TU;>;>;)Ljava/util/Optional<TU;>;", $PUBLIC, $method(Optional, flatMap, Optional*, $Function*)},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(Optional, get, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Optional, hashCode, int32_t)},
	{"ifPresent", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $method(Optional, ifPresent, void, $Consumer*)},
	{"ifPresentOrElse", "(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V", "(Ljava/util/function/Consumer<-TT;>;Ljava/lang/Runnable;)V", $PUBLIC, $method(Optional, ifPresentOrElse, void, $Consumer*, $Runnable*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(Optional, isEmpty, bool)},
	{"isPresent", "()Z", nullptr, $PUBLIC, $method(Optional, isPresent, bool)},
	{"map", "(Ljava/util/function/Function;)Ljava/util/Optional;", "<U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/Optional<TU;>;", $PUBLIC, $method(Optional, map, Optional*, $Function*)},
	{"of", "(Ljava/lang/Object;)Ljava/util/Optional;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/Optional<TT;>;", $PUBLIC | $STATIC, $staticMethod(Optional, of, Optional*, Object$*)},
	{"ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/Optional<TT;>;", $PUBLIC | $STATIC, $staticMethod(Optional, ofNullable, Optional*, Object$*)},
	{"or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;", "(Ljava/util/function/Supplier<+Ljava/util/Optional<+TT;>;>;)Ljava/util/Optional<TT;>;", $PUBLIC, $method(Optional, or$, Optional*, $Supplier*)},
	{"orElse", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC, $method(Optional, orElse, $Object*, Object$*)},
	{"orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;", "(Ljava/util/function/Supplier<+TT;>;)TT;", $PUBLIC, $method(Optional, orElseGet, $Object*, $Supplier*)},
	{"orElseThrow", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(Optional, orElseThrow, $Object*)},
	{"orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;", "<X:Ljava/lang/Throwable;>(Ljava/util/function/Supplier<+TX;>;)TT;^TX;", $PUBLIC, $method(Optional, orElseThrow, $Object*, $Supplier*), "java.lang.Throwable"},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC, $method(Optional, stream, $Stream*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Optional, toString, $String*)},
	{}
};

$ClassInfo _Optional_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Optional",
	"java.lang.Object",
	nullptr,
	_Optional_FieldInfo_,
	_Optional_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Optional_Annotations_
};

$Object* allocate$Optional($Class* clazz) {
	return $of($alloc(Optional));
}

Optional* Optional::EMPTY = nullptr;

Optional* Optional::empty() {
	$init(Optional);
	$var(Optional, t, Optional::EMPTY);
	return t;
}

void Optional::init$(Object$* value) {
	$set(this, value, value);
}

Optional* Optional::of(Object$* value) {
	$init(Optional);
	return $new(Optional, $Objects::requireNonNull(value));
}

Optional* Optional::ofNullable(Object$* value) {
	$init(Optional);
	return value == nullptr ? Optional::EMPTY : $new(Optional, value);
}

$Object* Optional::get() {
	if (this->value == nullptr) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return $of(this->value);
}

bool Optional::isPresent() {
	return this->value != nullptr;
}

bool Optional::isEmpty() {
	return this->value == nullptr;
}

void Optional::ifPresent($Consumer* action) {
	if (this->value != nullptr) {
		$nc(action)->accept(this->value);
	}
}

void Optional::ifPresentOrElse($Consumer* action, $Runnable* emptyAction) {
	if (this->value != nullptr) {
		$nc(action)->accept(this->value);
	} else {
		$nc(emptyAction)->run();
	}
}

Optional* Optional::filter($Predicate* predicate) {
	$Objects::requireNonNull(predicate);
	if (!isPresent()) {
		return this;
	} else {
		return predicate->test(this->value) ? this : empty();
	}
}

Optional* Optional::map($Function* mapper) {
	$Objects::requireNonNull(mapper);
	if (!isPresent()) {
		return empty();
	} else {
		return Optional::ofNullable($(mapper->apply(this->value)));
	}
}

Optional* Optional::flatMap($Function* mapper) {
	$Objects::requireNonNull(mapper);
	if (!isPresent()) {
		return empty();
	} else {
		$var(Optional, r, $cast(Optional, mapper->apply(this->value)));
		return $cast(Optional, $Objects::requireNonNull(r));
	}
}

Optional* Optional::or$($Supplier* supplier) {
	$Objects::requireNonNull(supplier);
	if (isPresent()) {
		return this;
	} else {
		$var(Optional, r, $cast(Optional, supplier->get()));
		return $cast(Optional, $Objects::requireNonNull(r));
	}
}

$Stream* Optional::stream() {
	if (!isPresent()) {
		return $Stream::empty();
	} else {
		return $Stream::of(this->value);
	}
}

$Object* Optional::orElse(Object$* other) {
	return $of(this->value != nullptr ? this->value : $of(other));
}

$Object* Optional::orElseGet($Supplier* supplier) {
	return $of(this->value != nullptr ? this->value : $nc(supplier)->get());
}

$Object* Optional::orElseThrow() {
	if (this->value == nullptr) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return $of(this->value);
}

$Object* Optional::orElseThrow($Supplier* exceptionSupplier) {
	if (this->value != nullptr) {
		return $of(this->value);
	} else {
		$throw($cast($Throwable, $($nc(exceptionSupplier)->get())));
	}
}

bool Optional::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Optional, other, nullptr);
	bool var$1 = $instanceOf(Optional, obj);
	if (var$1) {
		$assign(other, $cast(Optional, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $Objects::equals(this->value, $nc(other)->value);
}

int32_t Optional::hashCode() {
	return $Objects::hashCode(this->value);
}

$String* Optional::toString() {
	return this->value != nullptr ? $String::format("Optional[%s]"_s, $$new($ObjectArray, {this->value})) : "Optional.empty"_s;
}

void clinit$Optional($Class* class$) {
	$assignStatic(Optional::EMPTY, $new(Optional, nullptr));
}

Optional::Optional() {
}

$Class* Optional::load$($String* name, bool initialize) {
	$loadClass(Optional, name, initialize, &_Optional_ClassInfo_, clinit$Optional, allocate$Optional);
	return class$;
}

$Class* Optional::class$ = nullptr;

	} // util
} // java