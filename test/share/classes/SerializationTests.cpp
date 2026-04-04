#include <SerializationTests.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
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
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

void SerializationTests::init$() {
}

void SerializationTests::checkSerialForm($BigDecimal* bd) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, bos));
	oos->writeObject(bd);
	oos->flush();
	oos->close();
	$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, $(bos->toByteArray()))));
	$var($BigDecimal, tmp, $cast($BigDecimal, ois->readObject()));
	bool var$0 = !$nc(bd)->equals(tmp);
	if (!var$0) {
		int32_t var$1 = bd->hashCode();
		var$0 = var$1 != $nc(tmp)->hashCode();
	}
	if (var$0) {
		$nc($System::err)->print($$str({"  original : "_s, bd}));
		$System::err->println($$str({" (hash: 0x"_s, $($Integer::toHexString(bd->hashCode())), ")"_s}));
		$System::err->print($$str({"serialized : "_s, tmp}));
		$System::err->println($$str({" (hash: 0x"_s, $($Integer::toHexString($nc(tmp)->hashCode())), ")"_s}));
		$throwNew($RuntimeException, "Bad serial roundtrip"_s);
	}
}

void SerializationTests::main($StringArray* args) {
	$useLocalObjectStack();
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
		$$new($BigDecimal, $($BigInteger::valueOf(1)), 1),
		$$new($BigDecimal, $($BigInteger::valueOf(100)), 50)
	}));
	{
		$var($BigDecimalArray, arr$, values);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializationTests, init$, void)},
		{"checkSerialForm", "(Ljava/math/BigDecimal;)V", nullptr, $STATIC, $staticMethod(SerializationTests, checkSerialForm, void, $BigDecimal*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SerializationTests, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SerializationTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializationTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializationTests);
	});
	return class$;
}

$Class* SerializationTests::class$ = nullptr;