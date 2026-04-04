#include <StringPlatformChars.h>
#include <java/lang/AssertionError.h>
#include <java/util/Arrays.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef JNU_ENCODING
#undef MAX_VALUE

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

$String* StringPlatformChars::JNU_ENCODING = nullptr;

void StringPlatformChars::init$() {
}

void StringPlatformChars::main($StringArray* args) {
	$init(StringPlatformChars);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({"sun.jnu.encoding: "_s, StringPlatformChars::JNU_ENCODING}));
	$System::loadLibrary("stringPlatformChars"_s);
	$var($StringBuilder, unicodeSb, $new($StringBuilder));
	$var($StringBuilder, asciiSb, $new($StringBuilder));
	$var($StringBuilder, latinSb, $new($StringBuilder));
	for (int32_t i = 0; i < 2000; ++i) {
		unicodeSb->append((char16_t)0xfefe);
		testString($(unicodeSb->toString()));
		asciiSb->append(u'x');
		testString($(asciiSb->toString()));
		latinSb->append((char16_t)0xfe);
		testString($(latinSb->toString()));
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(latinSb->toString()));
		var$0->append($(asciiSb->toString()));
		var$0->append($(unicodeSb->toString()));
		testString($$str(var$0));
	}
	for (char16_t c = (char16_t)0x01; c < $Character::MAX_VALUE; ++c) {
		testString($($String::valueOf(c)));
	}
	bool var$1 = $nc($(getBytes($cstr({'\0', 'a', 'b', 'c', 'd', 'e', 'f'}))))->length != 0;
	if (var$1 || $nc($(getBytes($cstr({'a', '\0', 'b', 'c', 'd', 'e', 'f'}))))->length != 1) {
		$System::out->println("Mismatching values for strings including \\u0000"_s);
		$throwNew($AssertionError);
	}
}

void StringPlatformChars::testString($String* s) {
	$init(StringPlatformChars);
	$useLocalObjectStack();
	$var($bytes, nativeBytes, getBytes(s));
	$var($bytes, stringBytes, $nc(s)->getBytes(StringPlatformChars::JNU_ENCODING));
	if (!$Arrays::equals(nativeBytes, stringBytes)) {
		$nc($System::out)->println($$str({"Mismatching values for: \'"_s, s, "\' "_s, $($Arrays::toString($($(s->chars())->toArray())))}));
		$System::out->println($$str({"Native: "_s, $($Arrays::toString(nativeBytes))}));
		$System::out->println($$str({"String: "_s, $($Arrays::toString(stringBytes))}));
		$throwNew($AssertionError, $of(s));
	}
	$var($String, javaNewS, $new($String, nativeBytes, StringPlatformChars::JNU_ENCODING));
	$var($String, nativeNewS, newString(nativeBytes));
	if (!javaNewS->equals(nativeNewS)) {
		$nc($System::out)->println($$str({"New string via native doesn\'t match via java: \'"_s, javaNewS, "\' and \'"_s, nativeNewS, "\'"_s}));
		$throwNew($AssertionError, $of(s));
	}
}

$bytes* StringPlatformChars::getBytes($String* string) {
	$init(StringPlatformChars);
	$prepareNativeStatic(getBytes, $bytes*, $String* string);
	$var($bytes, $ret, $invokeNativeStaticObject(string));
	$finishNativeStatic();
	return $ret;
}

$String* StringPlatformChars::newString($bytes* bytes) {
	$init(StringPlatformChars);
	$prepareNativeStatic(newString, $String*, $bytes* bytes);
	$var($String, $ret, $invokeNativeStaticObject(bytes));
	$finishNativeStatic();
	return $ret;
}

void StringPlatformChars::clinit$($Class* clazz) {
	$assignStatic(StringPlatformChars::JNU_ENCODING, $System::getProperty("sun.jnu.encoding"_s));
}

StringPlatformChars::StringPlatformChars() {
}

$Class* StringPlatformChars::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JNU_ENCODING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringPlatformChars, JNU_ENCODING)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringPlatformChars, init$, void)},
		{"getBytes", "(Ljava/lang/String;)[B", nullptr, $STATIC | $NATIVE, $staticMethod(StringPlatformChars, getBytes, $bytes*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(StringPlatformChars, main, void, $StringArray*), "java.lang.Exception"},
		{"newString", "([B)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $staticMethod(StringPlatformChars, newString, $String*, $bytes*)},
		{"testString", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StringPlatformChars, testString, void, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StringPlatformChars",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringPlatformChars, name, initialize, &classInfo$$, StringPlatformChars::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StringPlatformChars);
	});
	return class$;
}

$Class* StringPlatformChars::class$ = nullptr;