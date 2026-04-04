#include <BufferForwarding.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef A_STRING_BUFFER_VAL
#undef A_STRING_BUILDER_VAL
#undef A_STRING_VAL
#undef NON_EMPTY_VAL

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
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

$String* BufferForwarding::A_STRING_BUFFER_VAL = nullptr;
$String* BufferForwarding::A_STRING_BUILDER_VAL = nullptr;
$String* BufferForwarding::A_STRING_VAL = nullptr;
$String* BufferForwarding::NON_EMPTY_VAL = nullptr;

void BufferForwarding::init$() {
	$nc($System::out)->println("Starting BufferForwarding"_s);
}

void BufferForwarding::main($StringArray* args) {
	$init(BufferForwarding);
	$$new(BufferForwarding)->executeTestMethods();
}

void BufferForwarding::executeTestMethods() {
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

void BufferForwarding::appendCharSequence() {
	$useLocalObjectStack();
	$var($CharSequence, aString, BufferForwarding::A_STRING_VAL);
	$var($CharSequence, aStringBuilder, $new($StringBuilder, BufferForwarding::A_STRING_BUILDER_VAL));
	$var($CharSequence, aStringBuffer, $new($StringBuffer, BufferForwarding::A_STRING_BUFFER_VAL));
	assertEquals($($$new($StringBuilder)->append(aString)->toString()), BufferForwarding::A_STRING_VAL);
	assertEquals($($$new($StringBuilder)->append(aStringBuilder)->toString()), BufferForwarding::A_STRING_BUILDER_VAL);
	assertEquals($($$new($StringBuilder)->append(aStringBuffer)->toString()), BufferForwarding::A_STRING_BUFFER_VAL);
	assertEquals($($$new($StringBuilder, BufferForwarding::NON_EMPTY_VAL)->append(aString)->toString()), $$str({BufferForwarding::NON_EMPTY_VAL, BufferForwarding::A_STRING_VAL}));
	assertEquals($($$new($StringBuilder, BufferForwarding::NON_EMPTY_VAL)->append(aStringBuilder)->toString()), $$str({BufferForwarding::NON_EMPTY_VAL, BufferForwarding::A_STRING_BUILDER_VAL}));
	assertEquals($($$new($StringBuilder, BufferForwarding::NON_EMPTY_VAL)->append(aStringBuffer)->toString()), $$str({BufferForwarding::NON_EMPTY_VAL, BufferForwarding::A_STRING_BUFFER_VAL}));
}

void BufferForwarding::indexOfString() {
	$var($StringBuffer, sb, $new($StringBuffer, "xyz"_s));
	assertEquals(sb->indexOf("y"_s), 1);
	assertEquals(sb->indexOf("not found"_s), -1);
}

void BufferForwarding::indexOfStringint() {
	$var($StringBuffer, sb, $new($StringBuffer, "xyyz"_s));
	assertEquals(sb->indexOf("y"_s, 0), 1);
	assertEquals(sb->indexOf("y"_s, 1), 1);
	assertEquals(sb->indexOf("y"_s, 2), 2);
	assertEquals(sb->indexOf("not found"_s), -1);
}

void BufferForwarding::indexOfStringIntNull() {
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	try {
		sb->indexOf(nullptr, 1);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException& npe) {
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown NPE. Instead threw "_s, t}));
	}
}

void BufferForwarding::indexOfStringNull() {
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	try {
		sb->indexOf(nullptr);
		$throwNew($RuntimeException, "Test failed: should have thrown NPE"_s);
	} catch ($NullPointerException& npe) {
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown NPE. Instead threw "_s, t}));
	}
}

void BufferForwarding::insertintboolean() {
	$useLocalObjectStack();
	bool b = true;
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, b)->toString()), "01true2345"_s);
}

void BufferForwarding::insertintchar() {
	$useLocalObjectStack();
	char16_t c = u'C';
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, c)->toString()), "01C2345"_s);
}

void BufferForwarding::insertintCharSequence() {
	$useLocalObjectStack();
	$var($String, initString, "012345"_s);
	$var($CharSequence, aString, BufferForwarding::A_STRING_VAL);
	$var($CharSequence, aStringBuilder, $new($StringBuilder, BufferForwarding::A_STRING_BUILDER_VAL));
	$var($CharSequence, aStringBuffer, $new($StringBuffer, BufferForwarding::A_STRING_BUFFER_VAL));
	assertEquals($($$new($StringBuffer, initString)->insert(2, aString)->toString()), $$str({"01"_s, BufferForwarding::A_STRING_VAL, "2345"_s}));
	assertEquals($($$new($StringBuffer, initString)->insert(2, aStringBuilder)->toString()), $$str({"01"_s, BufferForwarding::A_STRING_BUILDER_VAL, "2345"_s}));
	assertEquals($($$new($StringBuffer, initString)->insert(2, aStringBuffer)->toString()), $$str({"01"_s, BufferForwarding::A_STRING_BUFFER_VAL, "2345"_s}));
	try {
		$$new($StringBuffer, initString)->insert(7, aString);
		$throwNew($RuntimeException, "Test failed: should have thrown IndexOutOfBoundsException"_s);
	} catch ($IndexOutOfBoundsException& soob) {
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown IndexOutOfBoundsException, but instead threw "_s, $(t->getMessage())}));
	}
}

void BufferForwarding::insertintdouble() {
	$useLocalObjectStack();
	double d = 99.0;
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, d)->toString()), "0199.02345"_s);
}

void BufferForwarding::insertintfloat() {
	$useLocalObjectStack();
	float f = 99.0f;
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, f)->toString()), "0199.02345"_s);
}

void BufferForwarding::insertintint() {
	$useLocalObjectStack();
	int32_t i = 99;
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, i)->toString()), "01992345"_s);
}

void BufferForwarding::insertintlong() {
	$useLocalObjectStack();
	int64_t l = 99;
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	assertEquals($(sb->insert(2, l)->toString()), "01992345"_s);
}

void BufferForwarding::insertintObject() {
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer, "012345"_s));
	$var($List, ls, $new($ArrayList));
	ls->add("A"_s);
	ls->add("B"_s);
	$var($String, lsString, ls->toString());
	assertEquals($(sb->insert(2, ls)->toString()), $$str({"01"_s, lsString, "2345"_s}));
	try {
		sb->insert(sb->length() + 1, ls);
		$throwNew($RuntimeException, "Test failed: should have thrown StringIndexOutOfBoundsException"_s);
	} catch ($StringIndexOutOfBoundsException& soob) {
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Test failed: should have thrown StringIndexOutOfBoundsException, but instead threw:"_s, t}));
	}
}

void BufferForwarding::lastIndexOfString() {
	$useLocalObjectStack();
	$var($String, xyz, "xyz"_s);
	$var($String, xyz3, "xyzxyzxyz"_s);
	$var($StringBuffer, sb, $new($StringBuffer, xyz3));
	int32_t pos = sb->lastIndexOf("xyz"_s);
	assertEquals(pos, 2 * xyz->length());
}

void BufferForwarding::lastIndexOfStringint() {
	$var($StringBuffer, sb, $new($StringBuffer, "xyzxyzxyz"_s));
	int32_t pos = sb->lastIndexOf("xyz"_s, 5);
	assertEquals(pos, 3);
	pos = sb->lastIndexOf("xyz"_s, 6);
	assertEquals(pos, 6);
}

void BufferForwarding::assertEquals($String* actual, $String* expected) {
	if (!$nc(actual)->equals(expected)) {
		$throwNew($RuntimeException, $$str({"Test failed: actual = \'"_s, actual, "\', expected = \'"_s, expected, "\'"_s}));
	}
}

void BufferForwarding::assertEquals(int32_t actual, int32_t expected) {
	$useLocalObjectStack();
	if (actual != expected) {
		$throwNew($RuntimeException, $$str({"Test failed: actual = \'"_s, $$str(actual), "\', expected = \'"_s, $$str(expected), "\'"_s}));
	}
}

BufferForwarding::BufferForwarding() {
}

void BufferForwarding::clinit$($Class* clazz) {
	$assignStatic(BufferForwarding::A_STRING_BUFFER_VAL, "aStringBuffer"_s);
	$assignStatic(BufferForwarding::A_STRING_BUILDER_VAL, "aStringBuilder"_s);
	$assignStatic(BufferForwarding::A_STRING_VAL, "aString"_s);
	$assignStatic(BufferForwarding::NON_EMPTY_VAL, "NonEmpty"_s);
}

$Class* BufferForwarding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"A_STRING_BUFFER_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferForwarding, A_STRING_BUFFER_VAL)},
		{"A_STRING_BUILDER_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferForwarding, A_STRING_BUILDER_VAL)},
		{"A_STRING_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferForwarding, A_STRING_VAL)},
		{"NON_EMPTY_VAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferForwarding, NON_EMPTY_VAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BufferForwarding, init$, void)},
		{"appendCharSequence", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, appendCharSequence, void)},
		{"assertEquals", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, assertEquals, void, $String*, $String*)},
		{"assertEquals", "(II)V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, assertEquals, void, int32_t, int32_t)},
		{"executeTestMethods", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, executeTestMethods, void)},
		{"indexOfString", "()V", nullptr, 0, $virtualMethod(BufferForwarding, indexOfString, void)},
		{"indexOfStringIntNull", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, indexOfStringIntNull, void)},
		{"indexOfStringNull", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, indexOfStringNull, void)},
		{"indexOfStringint", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, indexOfStringint, void)},
		{"insertintCharSequence", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintCharSequence, void)},
		{"insertintObject", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintObject, void)},
		{"insertintboolean", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintboolean, void)},
		{"insertintchar", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintchar, void)},
		{"insertintdouble", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintdouble, void)},
		{"insertintfloat", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintfloat, void)},
		{"insertintint", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintint, void)},
		{"insertintlong", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, insertintlong, void)},
		{"lastIndexOfString", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, lastIndexOfString, void)},
		{"lastIndexOfStringint", "()V", nullptr, $PUBLIC, $virtualMethod(BufferForwarding, lastIndexOfStringint, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(BufferForwarding, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BufferForwarding",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferForwarding, name, initialize, &classInfo$$, BufferForwarding::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BufferForwarding);
	});
	return class$;
}

$Class* BufferForwarding::class$ = nullptr;