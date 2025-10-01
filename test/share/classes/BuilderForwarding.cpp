#include <BuilderForwarding.h>

#include <java/io/PrintStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef A_STRING_VAL
#undef A_STRING_BUFFER_VAL
#undef A_STRING_BUILDER_VAL
#undef NON_EMPTY_VAL

using $PrintStream = ::java::io::PrintStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

$FieldInfo _BuilderForwarding_FieldInfo_[] = {
	{"A_STRING_BUFFER_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BuilderForwarding, A_STRING_BUFFER_VAL)},
	{"A_STRING_BUILDER_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BuilderForwarding, A_STRING_BUILDER_VAL)},
	{"A_STRING_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BuilderForwarding, A_STRING_VAL)},
	{"NON_EMPTY_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BuilderForwarding, NON_EMPTY_VAL)},
	{}
};

$MethodInfo _BuilderForwarding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuilderForwarding::*)()>(&BuilderForwarding::init$))},
	{"appendCharSequence", "()V", nullptr, $PUBLIC},
	{"assertEquals", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"assertEquals", "(II)V", nullptr, $PUBLIC},
	{"executeTestMethods", "()V", nullptr, $PUBLIC},
	{"indexOfString", "()V", nullptr, $PUBLIC},
	{"indexOfStringIntNull", "()V", nullptr, $PUBLIC},
	{"indexOfStringNull", "()V", nullptr, $PUBLIC},
	{"indexOfStringint", "()V", nullptr, $PUBLIC},
	{"insertintCharSequence", "()V", nullptr, $PUBLIC},
	{"insertintObject", "()V", nullptr, $PUBLIC},
	{"insertintboolean", "()V", nullptr, $PUBLIC},
	{"insertintchar", "()V", nullptr, $PUBLIC},
	{"insertintdouble", "()V", nullptr, $PUBLIC},
	{"insertintfloat", "()V", nullptr, $PUBLIC},
	{"insertintint", "()V", nullptr, $PUBLIC},
	{"insertintlong", "()V", nullptr, $PUBLIC},
	{"lastIndexOfString", "()V", nullptr, $PUBLIC},
	{"lastIndexOfStringint", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&BuilderForwarding::main))},
	{}
};

$ClassInfo _BuilderForwarding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BuilderForwarding",
	"java.lang.Object",
	nullptr,
	_BuilderForwarding_FieldInfo_,
	_BuilderForwarding_MethodInfo_
};

$Object* allocate$BuilderForwarding($Class* clazz) {
	return $of($alloc(BuilderForwarding));
}

$String* BuilderForwarding::A_STRING_BUFFER_VAL = nullptr;
$String* BuilderForwarding::A_STRING_BUILDER_VAL = nullptr;
$String* BuilderForwarding::A_STRING_VAL = nullptr;
$String* BuilderForwarding::NON_EMPTY_VAL = nullptr;

void BuilderForwarding::init$() {
	$init($System);
	$nc($System::out)->println("Starting BuilderForwarding"_s);
}

void BuilderForwarding::main($StringArray* args) {
	$init(BuilderForwarding);
	$$new(BuilderForwarding)->executeTestMethods();
}

void BuilderForwarding::executeTestMethods() {
	appendCharSequence();
	indexOfString();
	indexOfStringIntNull();
	indexOfStringNull();
	indexOfStringint();
	insertintCharSequence();
	insertintObject();
	insertintboolean();
	insertintchar();
	insertintdouble();
	insertintfloat();
	insertintint();
	insertintlong();
	lastIndexOfString();
	lastIndexOfStringint();
}

void BuilderForwarding::appendCharSequence() {
	$var($CharSequence, aString, BuilderForwarding::A_STRING_VAL);
	$var($CharSequence, aStringBuilder, $new($StringBuilder, BuilderForwarding::A_STRING_BUILDER_VAL));
	$var($CharSequence, aStringBuffer, $new($StringBuffer, BuilderForwarding::A_STRING_BUFFER_VAL));
	assertEquals($($$new($StringBuilder)->append(aString)->toString()), BuilderForwarding::A_STRING_VAL);
	assertEquals($($$new($StringBuilder)->append(aStringBuilder)->toString()), BuilderForwarding::A_STRING_BUILDER_VAL);
	assertEquals($($$new($StringBuilder)->append(aStringBuffer)->toString()), BuilderForwarding::A_STRING_BUFFER_VAL);
	assertEquals($($$new($StringBuilder, BuilderForwarding::NON_EMPTY_VAL)->append(aString)->toString()), $$str({BuilderForwarding::NON_EMPTY_VAL, BuilderForwarding::A_STRING_VAL}));
	assertEquals($($$new($StringBuilder, BuilderForwarding::NON_EMPTY_VAL)->append(aStringBuilder)->toString()), $$str({BuilderForwarding::NON_EMPTY_VAL, BuilderForwarding::A_STRING_BUILDER_VAL}));
	assertEquals($($$new($StringBuilder, BuilderForwarding::NON_EMPTY_VAL)->append(aStringBuffer)->toString()), $$str({BuilderForwarding::NON_EMPTY_VAL, BuilderForwarding::A_STRING_BUFFER_VAL}));
}

void BuilderForwarding::indexOfString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	try {
		sb->indexOf(nullptr);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown NPE. Instead threw "_s, t}));
	}
	$assign(sb, $new($StringBuilder, "xyz"_s));
	assertEquals(sb->indexOf("y"_s), 1);
	assertEquals(sb->indexOf("not found"_s), -1);
}

void BuilderForwarding::indexOfStringint() {
	$var($StringBuilder, sb, $new($StringBuilder));
	try {
		sb->indexOf(nullptr, 1);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	}
	$assign(sb, $new($StringBuilder, "xyyz"_s));
	assertEquals(sb->indexOf("y"_s, 0), 1);
	assertEquals(sb->indexOf("y"_s, 1), 1);
	assertEquals(sb->indexOf("y"_s, 2), 2);
	assertEquals(sb->indexOf("not found"_s), -1);
}

void BuilderForwarding::indexOfStringIntNull() {
	$var($StringBuffer, sb, $new($StringBuffer));
	try {
		sb->indexOf(nullptr, 1);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown NPE. Instead threw "_s, t}));
	}
}

void BuilderForwarding::indexOfStringNull() {
	$var($StringBuilder, sb, $new($StringBuilder));
	try {
		sb->indexOf(nullptr);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown NPE. Instead threw "_s, t}));
	}
}

void BuilderForwarding::insertintboolean() {
	bool b = true;
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, b))->toString()), "01true2345"_s);
}

void BuilderForwarding::insertintchar() {
	char16_t c = u'C';
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, c))->toString()), "01C2345"_s);
}

void BuilderForwarding::insertintCharSequence() {
	$var($String, initString, "012345"_s);
	$var($CharSequence, aString, BuilderForwarding::A_STRING_VAL);
	$var($CharSequence, aStringBuilder, $new($StringBuilder, BuilderForwarding::A_STRING_BUILDER_VAL));
	$var($CharSequence, aStringBuffer, $new($StringBuffer, BuilderForwarding::A_STRING_BUFFER_VAL));
	assertEquals($($nc($$new($StringBuilder, initString)->insert(2, aString))->toString()), $$str({"01"_s, BuilderForwarding::A_STRING_VAL, "2345"_s}));
	assertEquals($($nc($$new($StringBuilder, initString)->insert(2, aStringBuilder))->toString()), $$str({"01"_s, BuilderForwarding::A_STRING_BUILDER_VAL, "2345"_s}));
	assertEquals($($nc($$new($StringBuilder, initString)->insert(2, aStringBuffer))->toString()), $$str({"01"_s, BuilderForwarding::A_STRING_BUFFER_VAL, "2345"_s}));
	try {
		$$new($StringBuilder, initString)->insert(7, aString);
		$throwNew($RuntimeException, "Test failed: should have thrown IndexOutOfBoundsException"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown IndexOutOfBoundsException, but instead threw "_s, $(t->getMessage())}));
	}
}

void BuilderForwarding::insertintdouble() {
	double d = 99.0;
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, d))->toString()), "0199.02345"_s);
}

void BuilderForwarding::insertintfloat() {
	float f = 99.0f;
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, f))->toString()), "0199.02345"_s);
}

void BuilderForwarding::insertintint() {
	int32_t i = 99;
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, i))->toString()), "01992345"_s);
}

void BuilderForwarding::insertintlong() {
	int64_t l = 99;
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	assertEquals($($nc(sb->insert(2, l))->toString()), "01992345"_s);
}

void BuilderForwarding::insertintObject() {
	$var($StringBuilder, sb, $new($StringBuilder, "012345"_s));
	$var($List, ls, $new($ArrayList));
	ls->add("A"_s);
	ls->add("B"_s);
	$var($String, lsString, $of(ls)->toString());
	assertEquals($($nc(sb->insert(2, $of(ls)))->toString()), $$str({"01"_s, lsString, "2345"_s}));
	try {
		sb->insert(sb->length() + 1, $of(ls));
		$throwNew($RuntimeException, "Test failed: should have thrown StringIndexOutOfBoundsException"_s);
	} catch ($StringIndexOutOfBoundsException&) {
		$catch();
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown StringIndexOutOfBoundsException, but instead threw:"_s, t}));
	}
}

void BuilderForwarding::lastIndexOfString() {
	$var($String, xyz, "xyz"_s);
	$var($String, xyz3, "xyzxyzxyz"_s);
	$var($StringBuilder, sb, $new($StringBuilder, xyz3));
	int32_t pos = sb->lastIndexOf("xyz"_s);
	assertEquals(pos, 2 * xyz->length());
}

void BuilderForwarding::lastIndexOfStringint() {
	$var($StringBuilder, sb, $new($StringBuilder, "xyzxyzxyz"_s));
	int32_t pos = sb->lastIndexOf("xyz"_s, 5);
	assertEquals(pos, 3);
	pos = sb->lastIndexOf("xyz"_s, 6);
	assertEquals(pos, 6);
}

void BuilderForwarding::assertEquals($String* actual, $String* expected) {
	if (!$nc(actual)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Test failed: actual = \'"_s, actual, "\', expected = \'"_s, expected, "\'"_s}));
	}
}

void BuilderForwarding::assertEquals(int32_t actual, int32_t expected) {
	if (actual != expected) {
		$throwNew($RuntimeException, $$str({"Test failed: actual = \'"_s, $$str(actual), "\', expected = \'"_s, $$str(expected), "\'"_s}));
	}
}

BuilderForwarding::BuilderForwarding() {
}

void clinit$BuilderForwarding($Class* class$) {
	$assignStatic(BuilderForwarding::A_STRING_BUFFER_VAL, "aStringBuffer"_s);
	$assignStatic(BuilderForwarding::A_STRING_BUILDER_VAL, "aStringBuilder"_s);
	$assignStatic(BuilderForwarding::A_STRING_VAL, "aString"_s);
	$assignStatic(BuilderForwarding::NON_EMPTY_VAL, "NonEmpty"_s);
}

$Class* BuilderForwarding::load$($String* name, bool initialize) {
	$loadClass(BuilderForwarding, name, initialize, &_BuilderForwarding_ClassInfo_, clinit$BuilderForwarding, allocate$BuilderForwarding);
	return class$;
}

$Class* BuilderForwarding::class$ = nullptr;