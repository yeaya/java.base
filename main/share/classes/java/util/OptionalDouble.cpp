#include <java/util/OptionalDouble.h>

#include <java/lang/Runnable.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/DoubleSupplier.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoubleSupplier = ::java::util::function::DoubleSupplier;
using $Supplier = ::java::util::function::Supplier;
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {

$CompoundAttribute _OptionalDouble_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$FieldInfo _OptionalDouble_FieldInfo_[] = {
	{"EMPTY", "Ljava/util/OptionalDouble;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OptionalDouble, EMPTY)},
	{"isPresent", "Z", nullptr, $PRIVATE | $FINAL, $field(OptionalDouble, isPresent$)},
	{"value", "D", nullptr, $PRIVATE | $FINAL, $field(OptionalDouble, value)},
	{}
};

$MethodInfo _OptionalDouble_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OptionalDouble::*)()>(&OptionalDouble::init$))},
	{"<init>", "(D)V", nullptr, $PRIVATE, $method(static_cast<void(OptionalDouble::*)(double)>(&OptionalDouble::init$))},
	{"empty", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalDouble*(*)()>(&OptionalDouble::empty))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAsDouble", "()D", nullptr, $PUBLIC, $method(static_cast<double(OptionalDouble::*)()>(&OptionalDouble::getAsDouble))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"ifPresent", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalDouble::*)($DoubleConsumer*)>(&OptionalDouble::ifPresent))},
	{"ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalDouble::*)($DoubleConsumer*,$Runnable*)>(&OptionalDouble::ifPresentOrElse))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalDouble::*)()>(&OptionalDouble::isEmpty))},
	{"isPresent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalDouble::*)()>(&OptionalDouble::isPresent))},
	{"of", "(D)Ljava/util/OptionalDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalDouble*(*)(double)>(&OptionalDouble::of))},
	{"orElse", "(D)D", nullptr, $PUBLIC, $method(static_cast<double(OptionalDouble::*)(double)>(&OptionalDouble::orElse))},
	{"orElseGet", "(Ljava/util/function/DoubleSupplier;)D", nullptr, $PUBLIC, $method(static_cast<double(OptionalDouble::*)($DoubleSupplier*)>(&OptionalDouble::orElseGet))},
	{"orElseThrow", "()D", nullptr, $PUBLIC, $method(static_cast<double(OptionalDouble::*)()>(&OptionalDouble::orElseThrow))},
	{"orElseThrow", "(Ljava/util/function/Supplier;)D", "<X:Ljava/lang/Throwable;>(Ljava/util/function/Supplier<+TX;>;)D^TX;", $PUBLIC, $method(static_cast<double(OptionalDouble::*)($Supplier*)>(&OptionalDouble::orElseThrow)), "java.lang.Throwable"},
	{"stream", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC, $method(static_cast<$DoubleStream*(OptionalDouble::*)()>(&OptionalDouble::stream))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OptionalDouble_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.OptionalDouble",
	"java.lang.Object",
	nullptr,
	_OptionalDouble_FieldInfo_,
	_OptionalDouble_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_OptionalDouble_Annotations_
};

$Object* allocate$OptionalDouble($Class* clazz) {
	return $of($alloc(OptionalDouble));
}

OptionalDouble* OptionalDouble::EMPTY = nullptr;

void OptionalDouble::init$() {
	this->isPresent$ = false;
	$init($Double);
	this->value = $Double::NaN;
}

OptionalDouble* OptionalDouble::empty() {
	$init(OptionalDouble);
	return OptionalDouble::EMPTY;
}

void OptionalDouble::init$(double value) {
	this->isPresent$ = true;
	this->value = value;
}

OptionalDouble* OptionalDouble::of(double value) {
	$init(OptionalDouble);
	return $new(OptionalDouble, value);
}

double OptionalDouble::getAsDouble() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

bool OptionalDouble::isPresent() {
	return this->isPresent$;
}

bool OptionalDouble::isEmpty() {
	return !this->isPresent$;
}

void OptionalDouble::ifPresent($DoubleConsumer* action) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	}
}

void OptionalDouble::ifPresentOrElse($DoubleConsumer* action, $Runnable* emptyAction) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	} else {
		$nc(emptyAction)->run();
	}
}

$DoubleStream* OptionalDouble::stream() {
	if (this->isPresent$) {
		return $DoubleStream::of(this->value);
	} else {
		return $DoubleStream::empty();
	}
}

double OptionalDouble::orElse(double other) {
	return this->isPresent$ ? this->value : other;
}

double OptionalDouble::orElseGet($DoubleSupplier* supplier) {
	return this->isPresent$ ? this->value : $nc(supplier)->getAsDouble();
}

double OptionalDouble::orElseThrow() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

double OptionalDouble::orElseThrow($Supplier* exceptionSupplier) {
	if (this->isPresent$) {
		return this->value;
	} else {
		$throw($cast($Throwable, $($nc(exceptionSupplier)->get())));
	}
}

bool OptionalDouble::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(OptionalDouble, other, nullptr);
	bool var$1 = $instanceOf(OptionalDouble, obj);
	if (var$1) {
		$assign(other, $cast(OptionalDouble, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && (this->isPresent$ && $nc(other)->isPresent$ ? $Double::compare(this->value, $nc(other)->value) == 0 : this->isPresent$ == $nc(other)->isPresent$);
}

int32_t OptionalDouble::hashCode() {
	return this->isPresent$ ? $Double::hashCode(this->value) : 0;
}

$String* OptionalDouble::toString() {
	$useLocalCurrentObjectStackCache();
	return this->isPresent$ ? $String::format("OptionalDouble[%s]"_s, $$new($ObjectArray, {$($of($Double::valueOf(this->value)))})) : "OptionalDouble.empty"_s;
}

void clinit$OptionalDouble($Class* class$) {
	$assignStatic(OptionalDouble::EMPTY, $new(OptionalDouble));
}

OptionalDouble::OptionalDouble() {
}

$Class* OptionalDouble::load$($String* name, bool initialize) {
	$loadClass(OptionalDouble, name, initialize, &_OptionalDouble_ClassInfo_, clinit$OptionalDouble, allocate$OptionalDouble);
	return class$;
}

$Class* OptionalDouble::class$ = nullptr;

	} // util
} // java