#include <Capacity.h>

#include <java/lang/AssertionError.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _Capacity_FieldInfo_[] = {
	{"passed", "I", nullptr, $VOLATILE, $field(Capacity, passed)},
	{"failed", "I", nullptr, $VOLATILE, $field(Capacity, failed)},
	{}
};

$MethodInfo _Capacity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Capacity::*)()>(&Capacity::init$))},
	{"check", "(Z)V", nullptr, 0},
	{"equal", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"fail", "()V", nullptr, 0},
	{"fail", "(Ljava/lang/String;)V", nullptr, 0},
	{"instanceMain", "([Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Capacity::main)), "java.lang.Throwable"},
	{"pass", "()V", nullptr, 0},
	{"test", "([Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.Throwable"},
	{"unexpected", "(Ljava/lang/Throwable;)V", nullptr, 0},
	{}
};

$ClassInfo _Capacity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Capacity",
	"java.lang.Object",
	nullptr,
	_Capacity_FieldInfo_,
	_Capacity_MethodInfo_
};

$Object* allocate$Capacity($Class* clazz) {
	return $of($alloc(Capacity));
}

void Capacity::init$() {
	this->passed = 0;
	this->failed = 0;
}

void Capacity::test($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Random, rnd, $new($Random));
	$var($ints, sizes, $new($ints, {
		0,
		1,
		rnd->nextInt(10),
		rnd->nextInt(1000)
	}));
	{
		$var($ints, arr$, sizes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t size = arr$->get(i$);
			{
				$var($Object, var$0, $of($Integer::valueOf(16)));
				equal(var$0, $($Integer::valueOf($$new($StringBuffer)->capacity())));
				$var($Object, var$1, $of($Integer::valueOf(16)));
				equal(var$1, $($Integer::valueOf($$new($StringBuilder)->capacity())));
				$var($StringBuffer, buff, $new($StringBuffer, size));
				$var($StringBuilder, bild, $new($StringBuilder, size));
				$var($Object, var$2, $of($Integer::valueOf(size)));
				equal(var$2, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$3, $of($Integer::valueOf(size)));
				equal(var$3, $($Integer::valueOf(bild->capacity())));
				buff->ensureCapacity(size);
				bild->ensureCapacity(size);
				$var($Object, var$4, $of($Integer::valueOf(size)));
				equal(var$4, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$5, $of($Integer::valueOf(size)));
				equal(var$5, $($Integer::valueOf(bild->capacity())));
				buff->ensureCapacity(size + 1);
				bild->ensureCapacity(size + 1);
				$var($Object, var$6, $of($Integer::valueOf(size * 2 + 2)));
				equal(var$6, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$7, $of($Integer::valueOf(size * 2 + 2)));
				equal(var$7, $($Integer::valueOf(bild->capacity())));
				size = buff->capacity();
				buff->ensureCapacity(size * 2 + 1);
				bild->ensureCapacity(size * 2 + 1);
				$var($Object, var$8, $of($Integer::valueOf(size * 2 + 2)));
				equal(var$8, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$9, $of($Integer::valueOf(size * 2 + 2)));
				equal(var$9, $($Integer::valueOf(bild->capacity())));
				size = buff->capacity();
				int32_t newSize = size * 2 + 3;
				buff->ensureCapacity(newSize);
				bild->ensureCapacity(newSize);
				$var($Object, var$10, $of($Integer::valueOf(newSize)));
				equal(var$10, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$11, $of($Integer::valueOf(newSize)));
				equal(var$11, $($Integer::valueOf(bild->capacity())));
				buff->ensureCapacity(0);
				bild->ensureCapacity(0);
				$var($Object, var$12, $of($Integer::valueOf(newSize)));
				equal(var$12, $($Integer::valueOf(buff->capacity())));
				$var($Object, var$13, $of($Integer::valueOf(newSize)));
				equal(var$13, $($Integer::valueOf(bild->capacity())));
			}
		}
	}
}

void Capacity::pass() {
	++this->passed;
}

void Capacity::fail() {
	++this->failed;
	$Thread::dumpStack();
}

void Capacity::fail($String* msg) {
	$nc($System::err)->println(msg);
	fail();
}

void Capacity::unexpected($Throwable* t) {
	++this->failed;
	$nc(t)->printStackTrace();
}

void Capacity::check(bool cond) {
	if (cond) {
		pass();
	} else {
		fail();
	}
}

void Capacity::equal(Object$* x, Object$* y) {
	if (x == nullptr ? y == nullptr : $nc($of(x))->equals(y)) {
		pass();
	} else {
		fail($$str({x, " not equal to "_s, y}));
	}
}

void Capacity::main($StringArray* args) {
	$$new(Capacity)->instanceMain(args);
}

void Capacity::instanceMain($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		test(args);
	} catch ($Throwable& t) {
		unexpected(t);
	}
	$nc($System::out)->printf("%nPassed = %d, failed = %d%n%n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(this->passed))),
		$($of($Integer::valueOf(this->failed)))
	}));
	if (this->failed > 0) {
		$throwNew($AssertionError, $of("Some tests failed"_s));
	}
}

Capacity::Capacity() {
}

$Class* Capacity::load$($String* name, bool initialize) {
	$loadClass(Capacity, name, initialize, &_Capacity_ClassInfo_, allocate$Capacity);
	return class$;
}

$Class* Capacity::class$ = nullptr;