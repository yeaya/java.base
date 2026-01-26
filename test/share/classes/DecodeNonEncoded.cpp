#include <DecodeNonEncoded.h>

#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLDecoder = ::java::net::URLDecoder;

$FieldInfo _DecodeNonEncoded_FieldInfo_[] = {
	{"errorStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(DecodeNonEncoded, errorStrings)},
	{"ignoreStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(DecodeNonEncoded, ignoreStrings)},
	{}
};

$MethodInfo _DecodeNonEncoded_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DecodeNonEncoded, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DecodeNonEncoded, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _DecodeNonEncoded_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DecodeNonEncoded",
	"java.lang.Object",
	nullptr,
	_DecodeNonEncoded_FieldInfo_,
	_DecodeNonEncoded_MethodInfo_
};

$Object* allocate$DecodeNonEncoded($Class* clazz) {
	return $of($alloc(DecodeNonEncoded));
}

$StringArray* DecodeNonEncoded::errorStrings = nullptr;
$StringArray* DecodeNonEncoded::ignoreStrings = nullptr;

void DecodeNonEncoded::init$() {
}

void DecodeNonEncoded::main($StringArray* args) {
	$init(DecodeNonEncoded);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(DecodeNonEncoded::errorStrings)->length; ++i) {
		try {
			$URLDecoder::decode($nc(DecodeNonEncoded::errorStrings)->get(i));
			$throwNew($Exception, $$str({"String \""_s, $nc(DecodeNonEncoded::errorStrings)->get(i), "\" should have failed in URLDecoder.decode!"_s}));
		} catch ($IllegalArgumentException& e) {
			$nc($System::out)->println($$str({"String \""_s, $nc(DecodeNonEncoded::errorStrings)->get(i), "\" correctly threw IllegalArgumentException: "_s, $(e->getMessage())}));
		}
	}
	$var($String, temp, nullptr);
	for (int32_t i = 0; i < $nc(DecodeNonEncoded::ignoreStrings)->length; ++i) {
		$assign(temp, $URLDecoder::decode($nc(DecodeNonEncoded::ignoreStrings)->get(i)));
		if (!$nc(temp)->equals($nc(DecodeNonEncoded::ignoreStrings)->get(i))) {
			$throwNew($Exception, $$str({"String \""_s, $nc(DecodeNonEncoded::ignoreStrings)->get(i), "\" was converted to "_s, temp, " by URLDecoder.decode to "_s}));
		} else {
			$nc($System::out)->println($$str({"String \""_s, temp, "\" was left unchanged by URLDecoder.decode."_s}));
		}
	}
}

void clinit$DecodeNonEncoded($Class* class$) {
	$assignStatic(DecodeNonEncoded::errorStrings, $new($StringArray, {
		"%"_s,
		"%A"_s,
		"Hello%"_s,
		"%xy"_s,
		"%az"_s,
		"%ab%q"_s
	}));
	$assignStatic(DecodeNonEncoded::ignoreStrings, $new($StringArray, {
		"#"_s,
		"X@Y"_s,
		"Hello There"_s
	}));
}

DecodeNonEncoded::DecodeNonEncoded() {
}

$Class* DecodeNonEncoded::load$($String* name, bool initialize) {
	$loadClass(DecodeNonEncoded, name, initialize, &_DecodeNonEncoded_ClassInfo_, clinit$DecodeNonEncoded, allocate$DecodeNonEncoded);
	return class$;
}

$Class* DecodeNonEncoded::class$ = nullptr;