#include <java/util/OptionalInt.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntSupplier = ::java::util::function::IntSupplier;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
$CompoundAttribute _OptionalInt_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};


$FieldInfo _OptionalInt_FieldInfo_[] = {
	{"EMPTY", "Ljava/util/OptionalInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OptionalInt, EMPTY)},
	{"isPresent", "Z", nullptr, $PRIVATE | $FINAL, $field(OptionalInt, isPresent$)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(OptionalInt, value)},
	{}
};

$MethodInfo _OptionalInt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OptionalInt::*)()>(&OptionalInt::init$))},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(OptionalInt::*)(int32_t)>(&OptionalInt::init$))},
	{"empty", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalInt*(*)()>(&OptionalInt::empty))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAsInt", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(OptionalInt::*)()>(&OptionalInt::getAsInt))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"ifPresent", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalInt::*)($IntConsumer*)>(&OptionalInt::ifPresent))},
	{"ifPresentOrElse", "(Ljava/util/function/IntConsumer;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalInt::*)($IntConsumer*,$Runnable*)>(&OptionalInt::ifPresentOrElse))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalInt::*)()>(&OptionalInt::isEmpty))},
	{"isPresent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalInt::*)()>(&OptionalInt::isPresent))},
	{"of", "(I)Ljava/util/OptionalInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalInt*(*)(int32_t)>(&OptionalInt::of))},
	{"orElse", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(OptionalInt::*)(int32_t)>(&OptionalInt::orElse))},
	{"orElseGet", "(Ljava/util/function/IntSupplier;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(OptionalInt::*)($IntSupplier*)>(&OptionalInt::orElseGet))},
	{"orElseThrow", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(OptionalInt::*)()>(&OptionalInt::orElseThrow))},
	{"orElseThrow", "(Ljava/util/function/Supplier;)I", "<X:Ljava/lang/Throwable;>(Ljava/util/function/Supplier<+TX;>;)I^TX;", $PUBLIC, $method(static_cast<int32_t(OptionalInt::*)($Supplier*)>(&OptionalInt::orElseThrow)), "java.lang.Throwable"},
	{"stream", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $method(static_cast<$IntStream*(OptionalInt::*)()>(&OptionalInt::stream))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OptionalInt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.OptionalInt",
	"java.lang.Object",
	nullptr,
	_OptionalInt_FieldInfo_,
	_OptionalInt_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_OptionalInt_Annotations_
};

$Object* allocate$OptionalInt($Class* clazz) {
	return $of($alloc(OptionalInt));
}


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
		$throw($cast($Throwable, $($nc(exceptionSupplier)->get())));
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
	return var$0 && (this->isPresent$ && $nc(other)->isPresent$ ? this->value == $nc(other)->value : this->isPresent$ == other->isPresent$);
}

int32_t OptionalInt::hashCode() {
	return this->isPresent$ ? $Integer::hashCode(this->value) : 0;
}

$String* OptionalInt::toString() {
	return this->isPresent$ ? $String::format("OptionalInt[%s]"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->value)))})) : "OptionalInt.empty"_s;
}

void clinit$OptionalInt($Class* class$) {
	$assignStatic(OptionalInt::EMPTY, $new(OptionalInt));
}

OptionalInt::OptionalInt() {
}

$Class* OptionalInt::load$($String* name, bool initialize) {
	$loadClass(OptionalInt, name, initialize, &_OptionalInt_ClassInfo_, clinit$OptionalInt, allocate$OptionalInt);
	return class$;
}

$Class* OptionalInt::class$ = nullptr;

	} // util
} // java