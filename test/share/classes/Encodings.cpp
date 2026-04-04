#include <Encodings.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStreamWriter.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Charset = ::java::nio::charset::Charset;

void Encodings::init$() {
}

bool Encodings::equals($bytes* a, $bytes* b) {
	if ($nc(a)->length != $nc(b)->length) {
		return false;
	}
	for (int32_t i = 0; i < a->length; ++i) {
		if (a->get(i) != b->get(i)) {
			return false;
		}
	}
	return true;
}

void Encodings::go($String* enc, $String* str, $bytes* bytes, bool bidir) {
	$useLocalObjectStack();
	$var($Charset, charset, $Charset::forName(enc));
	if (!($$new($String, bytes, enc)->equals(str))) {
		$throwNew($Exception, $$str({enc, ": String constructor failed"_s}));
	}
	if (!($$new($String, bytes, charset)->equals(str))) {
		$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
	}
	$var($String, start, $nc(str)->substring(0, 2));
	$var($String, end, str->substring(2));
	bool var$0 = $nc(enc)->equals("UTF-16BE"_s);
	if (var$0 || enc->equals("UTF-16LE"_s)) {
		if (!($$new($String, bytes, 0, 4, charset)->equals(start))) {
			$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
		}
		if (!($$new($String, bytes, 4, $nc(bytes)->length - 4, charset)->equals(end))) {
			$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
		}
	} else if (enc->equals("UTF-16"_s)) {
		if (!($$new($String, bytes, 0, 6, charset)->equals(start))) {
			$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
		}
	} else {
		if (!($$new($String, bytes, 0, 2, charset)->equals(start))) {
			$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
		}
		if (!($$new($String, bytes, 2, $nc(bytes)->length - 2, charset)->equals(end))) {
			$throwNew($Exception, $$str({charset, ": String constructor failed"_s}));
		}
	}
	$var($ByteArrayInputStream, bi, $new($ByteArrayInputStream, bytes));
	$var($InputStreamReader, r, $new($InputStreamReader, bi, enc));
	$var($String, inEnc, r->getEncoding());
	int32_t n = str->length();
	$var($chars, cs, $new($chars, n));
	for (int32_t i = 0; i < n;) {
		int32_t m = 0;
		if ((m = r->read(cs, i, n - i)) < 0) {
			$throwNew($Exception, $$str({enc, ": EOF on InputStreamReader"_s}));
		}
		i += m;
	}
	if (!($$new($String, cs)->equals(str))) {
		$throwNew($Exception, $$str({enc, ": InputStreamReader failed"_s}));
	}
	if (!bidir) {
		$nc($System::err)->println($$str({enc, " --> "_s, inEnc}));
		return;
	}
	$var($bytes, bs, str->getBytes(enc));
	if (!equals(bs, bytes)) {
		$throwNew($Exception, $$str({enc, ": String.getBytes failed"_s}));
	}
	$assign(bs, str->getBytes(charset));
	if (!equals(bs, bytes)) {
		$throwNew($Exception, $$str({charset, ": String.getBytes failed"_s}));
	}
	if ($$nc($nc(charset)->name())->equals("UTF-16BE"_s)) {
		$var($String, s, $new($String, bytes, charset));
		$var($bytes, bb, s->getBytes($($Charset::forName("UTF-16LE"_s))));
		if ($nc(bytes)->length != bb->length) {
			$throwNew($RuntimeException, $$str({"unequal length: "_s, $$str(bytes->length), " != "_s, $$str(bb->length)}));
		} else {
			bool diff = false;
			for (int32_t i = 0; i < bytes->length; ++i) {
				if (bytes->get(i) != bb->get(i)) {
					diff = true;
				}
			}
			if (!diff) {
				$throwNew($RuntimeException, "byte arrays equal"_s);
			}
		}
	}
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($OutputStreamWriter, w, $new($OutputStreamWriter, bo, enc));
	$var($String, outEnc, w->getEncoding());
	w->write(str);
	w->close();
	$assign(bs, bo->toByteArray());
	if (!equals(bs, bytes)) {
		$throwNew($Exception, $$str({enc, ": OutputStreamWriter failed"_s}));
	}
	$nc($System::err)->println($$str({enc, " --> "_s, inEnc, " / "_s, outEnc}));
}

void Encodings::go($String* enc, $String* str, $bytes* bytes) {
	go(enc, str, bytes, true);
}

void Encodings::main($StringArray* args) {
	$useLocalObjectStack();
	go("US-ASCII"_s, "abc"_s, $$new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)u'c'
	}));
	go("us-ascii"_s, "abc"_s, $$new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)u'c'
	}));
	go("ISO646-US"_s, "abc"_s, $$new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)u'c'
	}));
	go("ISO-8859-1"_s, u"abÇ"_s, $$new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)(char16_t)0xc7
	}));
	go("UTF-8"_s, u"abḉ"_s, $$new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)(0xe0 | (0x0f & (7689 >> 12))),
		(int8_t)(0x80 | (0x3f & (7689 >> 6))),
		(int8_t)(0x80 | (0x3f & 0x1e09))
	}));
	go("UTF-16BE"_s, u"abḉ"_s, $$new($bytes, {
		0,
		(int8_t)u'a',
		0,
		(int8_t)u'b',
		30,
		9
	}));
	go("UTF-16LE"_s, u"abḉ"_s, $$new($bytes, {
		(int8_t)u'a',
		0,
		(int8_t)u'b',
		0,
		9,
		30
	}));
	go("UTF-16"_s, u"abḉ"_s, $$new($bytes, {
		(int8_t)254,
		(int8_t)255,
		0,
		(int8_t)u'a',
		0,
		(int8_t)u'b',
		30,
		9
	}));
	go("UTF-16"_s, u"abḉ"_s, $$new($bytes, {
		(int8_t)255,
		(int8_t)254,
		(int8_t)u'a',
		0,
		(int8_t)u'b',
		0,
		9,
		30
	}), false);
}

Encodings::Encodings() {
}

$Class* Encodings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Encodings, init$, void)},
		{"equals", "([B[B)Z", nullptr, $STATIC, $staticMethod(Encodings, equals, bool, $bytes*, $bytes*)},
		{"go", "(Ljava/lang/String;Ljava/lang/String;[BZ)V", nullptr, $STATIC, $staticMethod(Encodings, go, void, $String*, $String*, $bytes*, bool), "java.lang.Exception"},
		{"go", "(Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC, $staticMethod(Encodings, go, void, $String*, $String*, $bytes*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Encodings, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Encodings",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Encodings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encodings);
	});
	return class$;
}

$Class* Encodings::class$ = nullptr;