#include <EnsureCapacity.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _EnsureCapacity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EnsureCapacity::*)()>(&EnsureCapacity::init$))},
	{"checkCapacity", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&EnsureCapacity::checkCapacity))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EnsureCapacity::main))},
	{"testStringBuffer", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&EnsureCapacity::testStringBuffer))},
	{"testStringBuilder", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&EnsureCapacity::testStringBuilder))},
	{}
};

$ClassInfo _EnsureCapacity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnsureCapacity",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnsureCapacity_MethodInfo_
};

$Object* allocate$EnsureCapacity($Class* clazz) {
	return $of($alloc(EnsureCapacity));
}

void EnsureCapacity::init$() {
}

void EnsureCapacity::main($StringArray* args) {
	testStringBuilder();
	testStringBuffer();
}

void EnsureCapacity::checkCapacity(int32_t before, int32_t after) {
	$useLocalCurrentObjectStackCache();
	if (before != after) {
		$throwNew($RuntimeException, $$str({"capacity is expected to be unchanged: before="_s, $$str(before), " after="_s, $$str(after)}));
	}
}

void EnsureCapacity::testStringBuilder() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "abc"_s));
	int32_t cap = sb->capacity();
	sb->ensureCapacity($Integer::MIN_VALUE);
	checkCapacity(cap, sb->capacity());
	try {
		$var($chars, str, $new($chars, {
			u'a',
			u'b',
			u'c',
			u'd'
		}));
		sb->append(str, 0, $Integer::MIN_VALUE + 10);
		$throwNew($RuntimeException, "IndexOutOfBoundsException not thrown"_s);
	} catch ($IndexOutOfBoundsException& ex) {
	}
}

void EnsureCapacity::testStringBuffer() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer, "abc"_s));
	int32_t cap = sb->capacity();
	sb->ensureCapacity($Integer::MIN_VALUE);
	checkCapacity(cap, sb->capacity());
	try {
		$var($chars, str, $new($chars, {
			u'a',
			u'b',
			u'c',
			u'd'
		}));
		sb->append(str, 0, $Integer::MIN_VALUE + 10);
		$throwNew($RuntimeException, "IndexOutOfBoundsException not thrown"_s);
	} catch ($IndexOutOfBoundsException& ex) {
	}
}

EnsureCapacity::EnsureCapacity() {
}

$Class* EnsureCapacity::load$($String* name, bool initialize) {
	$loadClass(EnsureCapacity, name, initialize, &_EnsureCapacity_ClassInfo_, allocate$EnsureCapacity);
	return class$;
}

$Class* EnsureCapacity::class$ = nullptr;