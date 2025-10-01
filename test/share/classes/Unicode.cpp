#include <Unicode.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BIG
#undef BOM_LOW
#undef BOM_HIGH
#undef LITTLE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Unicode_FieldInfo_[] = {
	{"BOM_HIGH", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BOM_HIGH)},
	{"BOM_LOW", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BOM_LOW)},
	{"BIG", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, BIG)},
	{"LITTLE", "I", nullptr, $STATIC | $FINAL, $constField(Unicode, LITTLE)},
	{}
};

$MethodInfo _Unicode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unicode::*)()>(&Unicode::init$))},
	{"decode", "(Ljava/lang/String;IZ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t,bool)>(&Unicode::decode)), "java.lang.Exception"},
	{"encode", "(Ljava/lang/String;IZ)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t,bool)>(&Unicode::encode)), "java.lang.Exception"},
	{"fail", "(Ljava/lang/String;Ljava/lang/String;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,int32_t,int32_t,int32_t,int32_t)>(&Unicode::fail)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Unicode::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Unicode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unicode",
	"java.lang.Object",
	nullptr,
	_Unicode_FieldInfo_,
	_Unicode_MethodInfo_
};

$Object* allocate$Unicode($Class* clazz) {
	return $of($alloc(Unicode));
}

void Unicode::init$() {
}

void Unicode::fail($String* enc, $String* msg, int32_t e0, int32_t e1, int32_t b0, int32_t b1) {
	$var($String, var$4, $$str({enc, ": "_s, msg, ": Expected "_s, $($Integer::toHexString(e0)), " "_s}));
	$var($String, var$3, $$concat(var$4, $($Integer::toHexString(e1))));
	$var($String, var$2, $$concat(var$3, ", got "));
	$var($String, var$1, $$concat(var$2, $($Integer::toHexString(b0))));
	$var($String, var$0, $$concat(var$1, " "));
	$throwNew($Exception, $$concat(var$0, $($Integer::toHexString(b1))));
}

void Unicode::encode($String* enc, int32_t byteOrder, bool markExpected) {
	$var($String, s, "abc"_s);
	$var($bytes, b, s->getBytes(enc));
	int32_t i = 0;
	if (markExpected) {
		int32_t b0 = (int32_t)(b->get(i++) & (uint32_t)255);
		int32_t b1 = (int32_t)(b->get(i++) & (uint32_t)255);
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
		int32_t b0 = (int32_t)(b->get(i++) & (uint32_t)255);
		int32_t b1 = (int32_t)(b->get(i++) & (uint32_t)255);
		int32_t e0 = 0;
		int32_t e1 = 0;
		if (byteOrder == Unicode::BIG) {
			e0 = c >> 8;
			e1 = (int32_t)(c & (uint32_t)255);
		} else if (byteOrder == Unicode::LITTLE) {
			e0 = (int32_t)(c & (uint32_t)255);
			e1 = c >> 8;
		}
		if ((b0 != e0) || (b1 != e1)) {
			fail(enc, $$str({"Incorrect content at index "_s, $$str(j)}), e0, e1, b0, b1);
		}
	}
}

void Unicode::decode($String* enc, int32_t byteOrder, bool markit) {
	$var($String, s, "abc"_s);
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	if (markit) {
		if (byteOrder == Unicode::BIG) {
			bo->write(Unicode::BOM_HIGH);
			bo->write(Unicode::BOM_LOW);
		} else if (byteOrder == Unicode::LITTLE) {
			$nc(bo)->write(Unicode::BOM_LOW);
			bo->write(Unicode::BOM_HIGH);
		}
	}
	for (int32_t i = 0; i < s->length(); ++i) {
		char16_t c = s->charAt(i);
		if (byteOrder == Unicode::BIG) {
			bo->write(c >> 8);
			bo->write((int32_t)(c & (uint32_t)255));
		} else if (byteOrder == Unicode::LITTLE) {
			$nc(bo)->write((int32_t)(c & (uint32_t)255));
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
	$var($String, enc, $nc(args)->get(0));
	$var($String, bos, args->get(1));
	bool markExpected = $nc($($Boolean::valueOf(args->get(2))))->booleanValue();
	int32_t byteOrder = -1;
	if ($nc(bos)->equals("big"_s)) {
		byteOrder = Unicode::BIG;
	}
	if ($nc(bos)->equals("little"_s)) {
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
	$loadClass(Unicode, name, initialize, &_Unicode_ClassInfo_, allocate$Unicode);
	return class$;
}

$Class* Unicode::class$ = nullptr;