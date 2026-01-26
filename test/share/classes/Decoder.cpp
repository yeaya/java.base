#include <Decoder.h>

#include <java/net/URLDecoder.h>
#include <java/net/URLEncoder.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLDecoder = ::java::net::URLDecoder;
using $URLEncoder = ::java::net::URLEncoder;

$MethodInfo _Decoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Decoder, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Decoder, main, void, $StringArray*), "java.lang.Exception"},
	{"printString", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Decoder, printString, void, $String*)},
	{}
};

$ClassInfo _Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Decoder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Decoder_MethodInfo_
};

$Object* allocate$Decoder($Class* clazz) {
	return $of($alloc(Decoder));
}

void Decoder::init$() {
}

void Decoder::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool passed = true;
	$var($String, enc, "UTF-16"_s);
	$var($StringArray, strings, $new($StringArray, {
		u"Āā"_s,
		u"Ā ā"_s,
		u"Ā āĂ"_s,
		u"Ā ā Ă"_s,
		u"ĀCā Ă"_s,
		u"ĀāĂ"_s,
		"?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&?&"_s,
		"foobar"_s,
		"foo?bar"_s
	}));
	for (int32_t i = 0; i < strings->length; ++i) {
		$var($String, encoded, $URLEncoder::encode(strings->get(i), enc));
		$nc($System::out)->println($$str({"ecnoded: "_s, encoded}));
		$var($String, decoded, $URLDecoder::decode(encoded, enc));
		$nc($System::out)->print("init:    "_s);
		printString(strings->get(i));
		$nc($System::out)->print("decoded: "_s);
		printString(decoded);
		if ($nc(strings->get(i))->equals(decoded)) {
			$nc($System::out)->println(" - correct - \n"_s);
		} else {
			$nc($System::out)->println(" - incorrect - \n"_s);
			$throwNew($RuntimeException, $$str({"Unexpected decoded output on string "_s, $$str(i)}));
		}
	}
}

void Decoder::printString($String* s) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		$nc($System::out)->print($$str({$$str((int32_t)s->charAt(i)), " "_s}));
	}
	$nc($System::out)->println();
}

Decoder::Decoder() {
}

$Class* Decoder::load$($String* name, bool initialize) {
	$loadClass(Decoder, name, initialize, &_Decoder_ClassInfo_, allocate$Decoder);
	return class$;
}

$Class* Decoder::class$ = nullptr;