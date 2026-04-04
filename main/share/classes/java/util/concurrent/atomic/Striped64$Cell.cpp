#include <java/util/concurrent/atomic/Striped64$Cell.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/atomic/Striped64.h>
#include <jcpp.h>

#undef TYPE
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$VarHandle* Striped64$Cell::VALUE = nullptr;

void Striped64$Cell::init$(int64_t x) {
	this->value = x;
}

bool Striped64$Cell::cas(int64_t cmp, int64_t val) {
	return $nc(Striped64$Cell::VALUE)->weakCompareAndSetRelease($$new($ObjectArray, {this, $$of(cmp), $$of(val)}));
}

void Striped64$Cell::reset() {
	$nc(Striped64$Cell::VALUE)->setVolatile($$new($ObjectArray, {this, $$of(0)}));
}

void Striped64$Cell::reset(int64_t identity) {
	$nc(Striped64$Cell::VALUE)->setVolatile($$new($ObjectArray, {this, $$of(identity)}));
}

int64_t Striped64$Cell::getAndSet(int64_t val) {
	return $longValue($nc(Striped64$Cell::VALUE)->getAndSet($$new($ObjectArray, {this, $$of(val)})));
}

void Striped64$Cell::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(Striped64$Cell::VALUE, $nc(l)->findVarHandle(Striped64$Cell::class$, "value"_s, $Long::TYPE));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

Striped64$Cell::Striped64$Cell() {
}

$Class* Striped64$Cell::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "J", nullptr, $VOLATILE, $field(Striped64$Cell, value)},
		{"VALUE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Striped64$Cell, VALUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(Striped64$Cell, init$, void, int64_t)},
		{"cas", "(JJ)Z", nullptr, $FINAL, $method(Striped64$Cell, cas, bool, int64_t, int64_t)},
		{"getAndSet", "(J)J", nullptr, $FINAL, $method(Striped64$Cell, getAndSet, int64_t, int64_t)},
		{"reset", "()V", nullptr, $FINAL, $method(Striped64$Cell, reset, void)},
		{"reset", "(J)V", nullptr, $FINAL, $method(Striped64$Cell, reset, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.Striped64$Cell", "java.util.concurrent.atomic.Striped64", "Cell", $STATIC | $FINAL},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.atomic.Striped64$Cell",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.Striped64"
	};
	$loadClass(Striped64$Cell, name, initialize, &classInfo$$, Striped64$Cell::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Striped64$Cell);
	});
	return class$;
}

$Class* Striped64$Cell::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java