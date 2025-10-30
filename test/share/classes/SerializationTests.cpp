#include <SerializationTests.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef ONE
#undef TEN
#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _SerializationTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializationTests::*)()>(&SerializationTests::init$))},
	{"checkSerialForm", "(Ljava/math/BigDecimal;)V", nullptr, $STATIC, $method(static_cast<void(*)($BigDecimal*)>(&SerializationTests::checkSerialForm)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SerializationTests::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SerializationTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SerializationTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SerializationTests_MethodInfo_
};

$Object* allocate$SerializationTests($Class* clazz) {
	return $of($alloc(SerializationTests));
}

void SerializationTests::init$() {
}

void SerializationTests::checkSerialForm($BigDecimal* bd) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, bos));
	oos->writeObject(bd);
	oos->flush();
	oos->close();
	$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, $(bos->toByteArray()))));
	$var($BigDecimal, tmp, $cast($BigDecimal, ois->readObject()));
	bool var$0 = !$nc(bd)->equals(tmp);
	if (!var$0) {
		int32_t var$1 = $nc(bd)->hashCode();
		var$0 = var$1 != $nc(tmp)->hashCode();
	}
	if (var$0) {
		$nc($System::err)->print($$str({"  original : "_s, bd}));
		$nc($System::err)->println($$str({" (hash: 0x"_s, $($Integer::toHexString(bd->hashCode())), ")"_s}));
		$nc($System::err)->print($$str({"serialized : "_s, tmp}));
		$nc($System::err)->println($$str({" (hash: 0x"_s, $($Integer::toHexString(tmp->hashCode())), ")"_s}));
		$throwNew($RuntimeException, "Bad serial roundtrip"_s);
	}
}

void SerializationTests::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($BigDecimal);
	$var($BigDecimalArray, values, $new($BigDecimalArray, {
		$BigDecimal::ZERO,
		$BigDecimal::ONE,
		$BigDecimal::TEN,
		$$new($BigDecimal, 0),
		$$new($BigDecimal, 1),
		$$new($BigDecimal, 10),
		$$new($BigDecimal, $Integer::MAX_VALUE),
		$$new($BigDecimal, $Long::MAX_VALUE - 1),
		$$new($BigDecimal, $($BigInteger::valueOf((int64_t)1)), 1),
		$$new($BigDecimal, $($BigInteger::valueOf((int64_t)100)), 50)
	}));
	{
		$var($BigDecimalArray, arr$, values);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimal, value, arr$->get(i$));
			{
				checkSerialForm(value);
				checkSerialForm($($nc(value)->negate()));
			}
		}
	}
}

SerializationTests::SerializationTests() {
}

$Class* SerializationTests::load$($String* name, bool initialize) {
	$loadClass(SerializationTests, name, initialize, &_SerializationTests_ClassInfo_, allocate$SerializationTests);
	return class$;
}

$Class* SerializationTests::class$ = nullptr;