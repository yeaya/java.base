#include <Unicode.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

#undef BIG
#undef BOM_HIGH
#undef BOM_LOW
#undef LITTLE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void Unicode::init$() {
}

void Unicode::fail($String* enc, $String* msg, int32_t e0, int32_t e1, int32_t b0, int32_t b1) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(enc);
	var$0->append(": "_s);
	var$0->append(msg);
	var$0->append(": Expected "_s);
	var$0->append($($Integer::toHexString(e0)));
	var$0->append(" "_s);
	var$0->append($($Integer::toHexString(e1)));
	var$0->append(", got "_s);
	var$0->append($($Integer::toHexString(b0)));
	var$0->append(" "_s);
	var$0->append($($Integer::toHexString(b1)));
	$throwNew($Exception, $$str(var$0));
}

void Unicode::encode($String* enc, int32_t byteOrder, bool markExpected) {
	$useLocalObjectStack();
	$var($String, s, "abc"_s);
	$var($bytes, b, s->getBytes(enc));
	int32_t i = 0;
	if (markExpected) {
		int32_t b0 = b->get(i++) & 0xff;
		int32_t b1 = b->get(i++) & 0xff;
		int32_t e0 = 0;
		int32_t e1 = 0;
		if (byteOrder == Unicode::BIG) {
			e0 = Unicode::BOM_HIGH;
			e1 = Unicode::BOM_LOW;
		} else if (byteOrder == Unicode::LITTLE) {
			e0 = Unicode::BOM_LOW;
			e1 = Unicode::BOM_HIGH;
		}
		if ((b0 != e0) || (b1 != e1)) {
			fail(enc, "Incorrect or missing byte-order mark"_s, e0, e1, b0, b1);
		}
	}
	for (int32_t j = 0; j < s->length(); ++j) {
		char16_t c = s->charAt(j);
		int32_t b0 = b->get(i++) & 0xff;
		int32_t b1 = b->get(i++) & 0xff;
		int32_t e0 = 0;
		int32_t e1 = 0;
		if (byteOrder == Unicode::BIG) {
			e0 = c >> 8;
			e1 = c & 0xff;
		} else if (byteOrder == Unicode::LITTLE) {
			e0 = c & 0xff;
			e1 = c >> 8;
		}
		if ((b0 != e0) || (b1 != e1)) {
			fail(enc, $$str({"Incorrect content at index "_s, $$str(j)}), e0, e1, b0, b1);
		}
	}
}

void Unicode::decode($String* enc, int32_t byteOrder, bool markit) {
	$useLocalObjectStack();
	$var($String, s, "abc"_s);
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	if (markit) {
		if (byteOrder == Unicode::BIG) {
			bo->write(Unicode::BOM_HIGH);
			bo->write(Unicode::BOM_LOW);
		} else if (byteOrder == Unicode::LITTLE) {
			bo->write(Unicode::BOM_LOW);
			bo->write(Unicode::BOM_HIGH);
		}
	}
	for (int32_t i = 0; i < s->length(); ++i) {
		char16_t c = s->charAt(i);
		if (byteOrder == Unicode::BIG) {
			bo->write(c >> 8);
			bo->write(c & 0xff);
		} else if (byteOrder == Unicode::LITTLE) {
			bo->write(c & 0xff);
			bo->write(c >> 8);
		}
	}
	$var($bytes, b, bo->toByteArray());
	$var($String, s2, $new($String, b, enc));
	if (!s->equals(s2)) {
		$throwNew($Exception, $$str({enc, ": Decode error"_s}));
	}
}

void Unicode::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, enc, $nc(args)->get(0));
	$var($String, bos, args->get(1));
	bool markExpected = $($Boolean::valueOf(args->get(2)))->booleanValue();
	int32_t byteOrder = -1;
	if ($nc(bos)->equals("big"_s)) {
		byteOrder = Unicode::BIG;
	}
	if (bos->equals("little"_s)) {
		byteOrder = Unicode::LITTLE;
	}
	encode(enc, byteOrder, markExpected);
	encode(enc, byteOrder, markExpected);
	decode(enc, byteOrder, markExpected);
	decode(enc, byteOrder, markExpected);
}

Unicode::Unicode() {
}

$Class* Unicode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BOM_HIGH", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BOM_HIGH)},
		{"BOM_LOW", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BOM_LOW)},
		{"BIG", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BIG)},
		{"LITTLE", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, LITTLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unicode, init$, void)},
		{"decode", "(Ljava/lang/String;IZ)V", nullptr, $STATIC, $staticMethod(Unicode, decode, void, $String*, int32_t, bool), "java.lang.Exception"},
		{"encode", "(Ljava/lang/String;IZ)V", nullptr, $STATIC, $staticMethod(Unicode, encode, void, $String*, int32_t, bool), "java.lang.Exception"},
		{"fail", "(Ljava/lang/String;Ljava/lang/String;IIII)V", nullptr, $STATIC, $staticMethod(Unicode, fail, void, $String*, $String*, int32_t, int32_t, int32_t, int32_t), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Unicode, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unicode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Unicode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unicode);
	});
	return class$;
}

$Class* Unicode::class$ = nullptr;