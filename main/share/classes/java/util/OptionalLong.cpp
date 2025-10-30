#include <java/util/OptionalLong.h>

#include <java/lang/Runnable.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/LongSupplier.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/LongStream.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongSupplier = ::java::util::function::LongSupplier;
using $Supplier = ::java::util::function::Supplier;
using $LongStream = ::java::util::stream::LongStream;

namespace java {
	namespace util {

$CompoundAttribute _OptionalLong_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$FieldInfo _OptionalLong_FieldInfo_[] = {
	{"EMPTY", "Ljava/util/OptionalLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OptionalLong, EMPTY)},
	{"isPresent", "Z", nullptr, $PRIVATE | $FINAL, $field(OptionalLong, isPresent$)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(OptionalLong, value)},
	{}
};

$MethodInfo _OptionalLong_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OptionalLong::*)()>(&OptionalLong::init$))},
	{"<init>", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(OptionalLong::*)(int64_t)>(&OptionalLong::init$))},
	{"empty", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalLong*(*)()>(&OptionalLong::empty))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAsLong", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(OptionalLong::*)()>(&OptionalLong::getAsLong))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"ifPresent", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalLong::*)($LongConsumer*)>(&OptionalLong::ifPresent))},
	{"ifPresentOrElse", "(Ljava/util/function/LongConsumer;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionalLong::*)($LongConsumer*,$Runnable*)>(&OptionalLong::ifPresentOrElse))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalLong::*)()>(&OptionalLong::isEmpty))},
	{"isPresent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(OptionalLong::*)()>(&OptionalLong::isPresent))},
	{"of", "(J)Ljava/util/OptionalLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OptionalLong*(*)(int64_t)>(&OptionalLong::of))},
	{"orElse", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(OptionalLong::*)(int64_t)>(&OptionalLong::orElse))},
	{"orElseGet", "(Ljava/util/function/LongSupplier;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(OptionalLong::*)($LongSupplier*)>(&OptionalLong::orElseGet))},
	{"orElseThrow", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(OptionalLong::*)()>(&OptionalLong::orElseThrow))},
	{"orElseThrow", "(Ljava/util/function/Supplier;)J", "<X:Ljava/lang/Throwable;>(Ljava/util/function/Supplier<+TX;>;)J^TX;", $PUBLIC, $method(static_cast<int64_t(OptionalLong::*)($Supplier*)>(&OptionalLong::orElseThrow)), "java.lang.Throwable"},
	{"stream", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC, $method(static_cast<$LongStream*(OptionalLong::*)()>(&OptionalLong::stream))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OptionalLong_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.OptionalLong",
	"java.lang.Object",
	nullptr,
	_OptionalLong_FieldInfo_,
	_OptionalLong_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_OptionalLong_Annotations_
};

$Object* allocate$OptionalLong($Class* clazz) {
	return $of($alloc(OptionalLong));
}

OptionalLong* OptionalLong::EMPTY = nullptr;

void OptionalLong::init$() {
	this->isPresent$ = false;
	this->value = 0;
}

OptionalLong* OptionalLong::empty() {
	$init(OptionalLong);
	return OptionalLong::EMPTY;
}

void OptionalLong::init$(int64_t value) {
	this->isPresent$ = true;
	this->value = value;
}

OptionalLong* OptionalLong::of(int64_t value) {
	$init(OptionalLong);
	return $new(OptionalLong, value);
}

int64_t OptionalLong::getAsLong() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

bool OptionalLong::isPresent() {
	return this->isPresent$;
}

bool OptionalLong::isEmpty() {
	return !this->isPresent$;
}

void OptionalLong::ifPresent($LongConsumer* action) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	}
}

void OptionalLong::ifPresentOrElse($LongConsumer* action, $Runnable* emptyAction) {
	if (this->isPresent$) {
		$nc(action)->accept(this->value);
	} else {
		$nc(emptyAction)->run();
	}
}

$LongStream* OptionalLong::stream() {
	if (this->isPresent$) {
		return $LongStream::of(this->value);
	} else {
		return $LongStream::empty();
	}
}

int64_t OptionalLong::orElse(int64_t other) {
	return this->isPresent$ ? this->value : other;
}

int64_t OptionalLong::orElseGet($LongSupplier* supplier) {
	return this->isPresent$ ? this->value : $nc(supplier)->getAsLong();
}

int64_t OptionalLong::orElseThrow() {
	if (!this->isPresent$) {
		$throwNew($NoSuchElementException, "No value present"_s);
	}
	return this->value;
}

int64_t OptionalLong::orElseThrow($Supplier* exceptionSupplier) {
	if (this->isPresent$) {
		return this->value;
	} else {
		$throw($cast($Throwable, $($nc(exceptionSupplier)->get())));
	}
}

bool OptionalLong::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(OptionalLong, other, nullptr);
	bool var$1 = $instanceOf(OptionalLong, obj);
	if (var$1) {
		$assign(other, $cast(OptionalLong, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && (this->isPresent$ && $nc(other)->isPresent$ ? this->value == $nc(other)->value : this->isPresent$ == other->isPresent$);
}

int32_t OptionalLong::hashCode() {
	return this->isPresent$ ? $Long::hashCode(this->value) : 0;
}

$String* OptionalLong::toString() {
	$useLocalCurrentObjectStackCache();
	return this->isPresent$ ? $String::format("OptionalLong[%s]"_s, $$new($ObjectArray, {$($of($Long::valueOf(this->value)))})) : "OptionalLong.empty"_s;
}

void clinit$OptionalLong($Class* class$) {
	$assignStatic(OptionalLong::EMPTY, $new(OptionalLong));
}

OptionalLong::OptionalLong() {
}

$Class* OptionalLong::load$($String* name, bool initialize) {
	$loadClass(OptionalLong, name, initialize, &_OptionalLong_ClassInfo_, clinit$OptionalLong, allocate$OptionalLong);
	return class$;
}

$Class* OptionalLong::class$ = nullptr;

	} // util
} // java