#include <sun/text/IntHashtable.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOW_WATER_FACTOR
#undef HIGH_WATER_FACTOR
#undef DELETED
#undef MAX_UNUSED
#undef EMPTY
#undef PRIMES

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace text {

$FieldInfo _IntHashtable_FieldInfo_[] = {
	{"defaultValue", "I", nullptr, $PRIVATE, $field(IntHashtable, defaultValue)},
	{"primeIndex", "I", nullptr, $PRIVATE, $field(IntHashtable, primeIndex)},
	{"HIGH_WATER_FACTOR", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntHashtable, HIGH_WATER_FACTOR)},
	{"highWaterMark", "I", nullptr, $PRIVATE, $field(IntHashtable, highWaterMark)},
	{"LOW_WATER_FACTOR", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntHashtable, LOW_WATER_FACTOR)},
	{"lowWaterMark", "I", nullptr, $PRIVATE, $field(IntHashtable, lowWaterMark)},
	{"count", "I", nullptr, $PRIVATE, $field(IntHashtable, count)},
	{"values", "[I", nullptr, $PRIVATE, $field(IntHashtable, values)},
	{"keyList", "[I", nullptr, $PRIVATE, $field(IntHashtable, keyList)},
	{"EMPTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntHashtable, EMPTY)},
	{"DELETED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntHashtable, DELETED)},
	{"MAX_UNUSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntHashtable, MAX_UNUSED)},
	{"PRIMES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntHashtable, PRIMES)},
	{}
};

$MethodInfo _IntHashtable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)()>(&IntHashtable::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)(int32_t)>(&IntHashtable::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"find", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(IntHashtable::*)(int32_t)>(&IntHashtable::find))},
	{"get", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(IntHashtable::*)(int32_t)>(&IntHashtable::get))},
	{"getDefaultValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(IntHashtable::*)()>(&IntHashtable::getDefaultValue))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initialize", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IntHashtable::*)(int32_t)>(&IntHashtable::initialize))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(IntHashtable::*)()>(&IntHashtable::isEmpty))},
	{"leastGreaterPrimeIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&IntHashtable::leastGreaterPrimeIndex))},
	{"put", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)(int32_t,int32_t)>(&IntHashtable::put))},
	{"putInternal", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)(int32_t,int32_t)>(&IntHashtable::putInternal))},
	{"rehash", "()V", nullptr, $PRIVATE, $method(static_cast<void(IntHashtable::*)()>(&IntHashtable::rehash))},
	{"remove", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)(int32_t)>(&IntHashtable::remove))},
	{"setDefaultValue", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashtable::*)(int32_t)>(&IntHashtable::setDefaultValue))},
	{"size", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(IntHashtable::*)()>(&IntHashtable::size))},
	{}
};

$ClassInfo _IntHashtable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.text.IntHashtable",
	"java.lang.Object",
	nullptr,
	_IntHashtable_FieldInfo_,
	_IntHashtable_MethodInfo_
};

$Object* allocate$IntHashtable($Class* clazz) {
	return $of($alloc(IntHashtable));
}

float IntHashtable::HIGH_WATER_FACTOR = 0.0;
float IntHashtable::LOW_WATER_FACTOR = 0.0;
$ints* IntHashtable::PRIMES = nullptr;

void IntHashtable::init$() {
	this->defaultValue = 0;
	initialize(3);
}

void IntHashtable::init$(int32_t initialSize) {
	this->defaultValue = 0;
	initialize(leastGreaterPrimeIndex($cast(int32_t, ($div(initialSize, IntHashtable::HIGH_WATER_FACTOR)))));
}

int32_t IntHashtable::size() {
	return this->count;
}

bool IntHashtable::isEmpty() {
	return this->count == 0;
}

void IntHashtable::put(int32_t key, int32_t value) {
	if (this->count > this->highWaterMark) {
		rehash();
	}
	int32_t index = find(key);
	if ($nc(this->keyList)->get(index) <= IntHashtable::MAX_UNUSED) {
		$nc(this->keyList)->set(index, key);
		++this->count;
	}
	$nc(this->values)->set(index, value);
}

int32_t IntHashtable::get(int32_t key) {
	return $nc(this->values)->get(find(key));
}

void IntHashtable::remove(int32_t key) {
	int32_t index = find(key);
	if ($nc(this->keyList)->get(index) > IntHashtable::MAX_UNUSED) {
		$nc(this->keyList)->set(index, IntHashtable::DELETED);
		$nc(this->values)->set(index, this->defaultValue);
		--this->count;
		if (this->count < this->lowWaterMark) {
			rehash();
		}
	}
}

int32_t IntHashtable::getDefaultValue() {
	return this->defaultValue;
}

void IntHashtable::setDefaultValue(int32_t newValue) {
	this->defaultValue = newValue;
	rehash();
}

bool IntHashtable::equals(Object$* that) {
	if ($nc($of(that))->getClass() != $of(this)->getClass()) {
		return false;
	}
	$var(IntHashtable, other, $cast(IntHashtable, that));
	if ($nc(other)->size() != this->count || $nc(other)->defaultValue != this->defaultValue) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->keyList)->length; ++i) {
		int32_t key = $nc(this->keyList)->get(i);
		if (key > IntHashtable::MAX_UNUSED && $nc(other)->get(key) != $nc(this->values)->get(i)) {
			return false;
		}
	}
	return true;
}

int32_t IntHashtable::hashCode() {
	int32_t result = 465;
	int32_t scrambler = 0x513AA115;
	for (int32_t i = 0; i < $nc(this->keyList)->length; ++i) {
		result = result * scrambler + 1;
		result += $nc(this->keyList)->get(i);
	}
	for (int32_t i = 0; i < $nc(this->values)->length; ++i) {
		result = result * scrambler + 1;
		result += $nc(this->values)->get(i);
	}
	return result;
}

$Object* IntHashtable::clone() {
	$var(IntHashtable, result, $cast(IntHashtable, $Object::clone()));
	$set(this, values, $cast($ints, $nc(this->values)->clone()));
	$set(this, keyList, $cast($ints, $nc(this->keyList)->clone()));
	return $of(result);
}

void IntHashtable::initialize(int32_t primeIndex) {
	if (primeIndex < 0) {
		primeIndex = 0;
	} else if (primeIndex >= $nc(IntHashtable::PRIMES)->length) {
		$init($System);
		$nc($System::out)->println("TOO BIG"_s);
		primeIndex = $nc(IntHashtable::PRIMES)->length - 1;
	}
	this->primeIndex = primeIndex;
	int32_t initialSize = $nc(IntHashtable::PRIMES)->get(primeIndex);
	$set(this, values, $new($ints, initialSize));
	$set(this, keyList, $new($ints, initialSize));
	for (int32_t i = 0; i < initialSize; ++i) {
		$nc(this->keyList)->set(i, IntHashtable::EMPTY);
		$nc(this->values)->set(i, this->defaultValue);
	}
	this->count = 0;
	this->lowWaterMark = $cast(int32_t, (initialSize * IntHashtable::LOW_WATER_FACTOR));
	this->highWaterMark = $cast(int32_t, (initialSize * IntHashtable::HIGH_WATER_FACTOR));
}

void IntHashtable::rehash() {
	$var($ints, oldValues, this->values);
	$var($ints, oldkeyList, this->keyList);
	int32_t newPrimeIndex = this->primeIndex;
	if (this->count > this->highWaterMark) {
		++newPrimeIndex;
	} else if (this->count < this->lowWaterMark) {
		newPrimeIndex -= 2;
	}
	initialize(newPrimeIndex);
	for (int32_t i = $nc(oldValues)->length - 1; i >= 0; --i) {
		int32_t key = $nc(oldkeyList)->get(i);
		if (key > IntHashtable::MAX_UNUSED) {
			putInternal(key, oldValues->get(i));
		}
	}
}

void IntHashtable::putInternal(int32_t key, int32_t value) {
	int32_t index = find(key);
	if ($nc(this->keyList)->get(index) < IntHashtable::MAX_UNUSED) {
		$nc(this->keyList)->set(index, key);
		++this->count;
	}
	$nc(this->values)->set(index, value);
}

int32_t IntHashtable::find(int32_t key) {
	if (key <= IntHashtable::MAX_UNUSED) {
		$throwNew($IllegalArgumentException, "key can\'t be less than 0xFFFFFFFE"_s);
	}
	int32_t firstDeleted = -1;
	int32_t index = $mod((key ^ 0x04000000), $nc(this->keyList)->length);
	if (index < 0) {
		index = -index;
	}
	int32_t jump = 0;
	while (true) {
		int32_t tableHash = $nc(this->keyList)->get(index);
		if (tableHash == key) {
			return index;
		} else if (tableHash > IntHashtable::MAX_UNUSED) {
		} else if (tableHash == IntHashtable::EMPTY) {
			if (firstDeleted >= 0) {
				index = firstDeleted;
			}
			return index;
		} else if (firstDeleted < 0) {
			firstDeleted = index;
		}
		if (jump == 0) {
			jump = ($mod(key, ($nc(this->keyList)->length - 1)));
			if (jump < 0) {
				jump = -jump;
			}
			++jump;
		}
		index = $mod((index + jump), $nc(this->keyList)->length);
		if (index == firstDeleted) {
			return index;
		}
	}
}

int32_t IntHashtable::leastGreaterPrimeIndex(int32_t source) {
	$init(IntHashtable);
	int32_t i = 0;
	for (i = 0; i < $nc(IntHashtable::PRIMES)->length; ++i) {
		if (source < $nc(IntHashtable::PRIMES)->get(i)) {
			break;
		}
	}
	return (i == 0) ? 0 : (i - 1);
}

void clinit$IntHashtable($Class* class$) {
	IntHashtable::HIGH_WATER_FACTOR = 0.4f;
	IntHashtable::LOW_WATER_FACTOR = 0.0f;
	$assignStatic(IntHashtable::PRIMES, $new($ints, {
		17,
		37,
		67,
		131,
		257,
		521,
		1031,
		2053,
		4099,
		8209,
		16411,
		0x00008003,
		0x00010001,
		0x0002001D,
		0x00040003,
		0x00080015,
		0x00100007,
		0x00200011,
		0x0040000F,
		0x00800009,
		0x0100002B,
		0x02000023,
		0x0400000F,
		0x0800001D,
		0x10000003,
		0x2000000B,
		0x40000003,
		0x7FFFFFFF
	}));
}

IntHashtable::IntHashtable() {
}

$Class* IntHashtable::load$($String* name, bool initialize) {
	$loadClass(IntHashtable, name, initialize, &_IntHashtable_ClassInfo_, clinit$IntHashtable, allocate$IntHashtable);
	return class$;
}

$Class* IntHashtable::class$ = nullptr;

	} // text
} // sun