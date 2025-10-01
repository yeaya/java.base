#include <StringPlatformChars.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef JNU_ENCODING
#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IntStream = ::java::util::stream::IntStream;

$FieldInfo _StringPlatformChars_FieldInfo_[] = {
	{"JNU_ENCODING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringPlatformChars, JNU_ENCODING)},
	{}
};

$MethodInfo _StringPlatformChars_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringPlatformChars::*)()>(&StringPlatformChars::init$))},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)($String*)>(&StringPlatformChars::getBytes))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&StringPlatformChars::main)), "java.lang.Exception"},
	{"newString", "([B)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)($bytes*)>(&StringPlatformChars::newString))},
	{"testString", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&StringPlatformChars::testString)), "java.lang.Exception"},
	{}
};

#define _METHOD_INDEX_getBytes 1
#define _METHOD_INDEX_newString 3

$ClassInfo _StringPlatformChars_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringPlatformChars",
	"java.lang.Object",
	nullptr,
	_StringPlatformChars_FieldInfo_,
	_StringPlatformChars_MethodInfo_
};

$Object* allocate$StringPlatformChars($Class* clazz) {
	return $of($alloc(StringPlatformChars));
}

$String* StringPlatformChars::JNU_ENCODING = nullptr;

void StringPlatformChars::init$() {
}

void StringPlatformChars::main($StringArray* args) {
	$init(StringPlatformChars);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::out)->println($$str({"sun.jnu.encoding: "_s, StringPlatformChars::JNU_ENCODING}));
	$System::loadLibrary("stringPlatformChars"_s);
	$var($StringBuilder, unicodeSb, $new($StringBuilder));
	$var($StringBuilder, asciiSb, $new($StringBuilder));
	$var($StringBuilder, latinSb, $new($StringBuilder));
	for (int32_t i = 0; i < 2000; ++i) {
		unicodeSb->append((char16_t)0xFEFE);
		testString($(unicodeSb->toString()));
		asciiSb->append(u'x');
		testString($(asciiSb->toString()));
		latinSb->append((char16_t)0xFE);
		testString($(latinSb->toString()));
		$var($String, var$1, $(latinSb->toString()));
		$var($String, var$0, $$concat(var$1, $(asciiSb->toString())));
		testString($$concat(var$0, $(unicodeSb->toString())));
	}
	for (char16_t c = (char16_t)0x1; c < $Character::MAX_VALUE; ++c) {
		testString($($String::valueOf(c)));
	}
	bool var$2 = $nc($(getBytes($cstr({'\0', 'a', 'b', 'c', 'd', 'e', 'f'}))))->length != 0;
	if (var$2 || $nc($(getBytes($cstr({'a', '\0', 'b', 'c', 'd', 'e', 'f'}))))->length != 1) {
		$nc($System::out)->println("Mismatching values for strings including \\u0000"_s);
		$throwNew($AssertionError);
	}
}

void StringPlatformChars::testString($String* s) {
	$init(StringPlatformChars);
	$var($bytes, nativeBytes, getBytes(s));
	$var($bytes, stringBytes, $nc(s)->getBytes(StringPlatformChars::JNU_ENCODING));
	if (!$Arrays::equals(nativeBytes, stringBytes)) {
		$init($System);
		$nc($System::out)->println($$str({"Mismatching values for: \'"_s, s, "\' "_s, $($Arrays::toString($($(s->chars())->toArray())))}));
		$nc($System::out)->println($$str({"Native: "_s, $($Arrays::toString(nativeBytes))}));
		$nc($System::out)->println($$str({"String: "_s, $($Arrays::toString(stringBytes))}));
		$throwNew($AssertionError, $of(s));
	}
	$var($String, javaNewS, $new($String, nativeBytes, StringPlatformChars::JNU_ENCODING));
	$var($String, nativeNewS, newString(nativeBytes));
	if (!javaNewS->equals(nativeNewS)) {
		$init($System);
		$nc($System::out)->println($$str({"New string via native doesn\'t match via java: \'"_s, javaNewS, "\' and \'"_s, nativeNewS, "\'"_s}));
		$throwNew($AssertionError, $of(s));
	}
}

$bytes* StringPlatformChars::getBytes($String* string) {
	$init(StringPlatformChars);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(StringPlatformChars, getBytes, $bytes*, $String* string);
	$assign($ret, $invokeNativeStatic(StringPlatformChars, getBytes, string));
	$finishNativeStatic();
	return $ret;
}

$String* StringPlatformChars::newString($bytes* bytes) {
	$init(StringPlatformChars);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(StringPlatformChars, newString, $String*, $bytes* bytes);
	$assign($ret, $invokeNativeStatic(StringPlatformChars, newString, bytes));
	$finishNativeStatic();
	return $ret;
}

void clinit$StringPlatformChars($Class* class$) {
	$assignStatic(StringPlatformChars::JNU_ENCODING, $System::getProperty("sun.jnu.encoding"_s));
}

StringPlatformChars::StringPlatformChars() {
}

$Class* StringPlatformChars::load$($String* name, bool initialize) {
	$loadClass(StringPlatformChars, name, initialize, &_StringPlatformChars_ClassInfo_, clinit$StringPlatformChars, allocate$StringPlatformChars);
	return class$;
}

$Class* StringPlatformChars::class$ = nullptr;