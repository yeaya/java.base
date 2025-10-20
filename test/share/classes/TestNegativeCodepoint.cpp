#include <TestNegativeCodepoint.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DIRECTIONALITY_UNDEFINED
#undef UNASSIGNED

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _TestNegativeCodepoint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestNegativeCodepoint::*)()>(&TestNegativeCodepoint::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestNegativeCodepoint::main))},
	{}
};

$ClassInfo _TestNegativeCodepoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestNegativeCodepoint",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestNegativeCodepoint_MethodInfo_
};

$Object* allocate$TestNegativeCodepoint($Class* clazz) {
	return $of($alloc(TestNegativeCodepoint));
}

void TestNegativeCodepoint::init$() {
}

void TestNegativeCodepoint::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ints, invalidCodePoints, $new($ints, {
		-1,
		-(int32_t)u'a',
		0x00110000
	}));
	for (int32_t x = 0; x < invalidCodePoints->length; ++x) {
		int32_t cp = invalidCodePoints->get(x);
		$init($System);
		$nc($System::out)->println($$str({"Testing codepoint: "_s, $$str(cp)}));
		bool var$21 = $Character::isLowerCase(cp);
		bool var$20 = var$21 || $Character::isUpperCase(cp);
		bool var$19 = var$20 || $Character::isTitleCase(cp);
		bool var$18 = var$19 || $Character::isISOControl(cp);
		bool var$17 = var$18 || $Character::isLetterOrDigit(cp);
		bool var$16 = var$17 || $Character::isLetter(cp);
		bool var$15 = var$16 || $Character::isDigit(cp);
		bool var$14 = var$15 || $Character::isDefined(cp);
		bool var$13 = var$14 || $Character::isJavaIdentifierStart(cp);
		bool var$12 = var$13 || $Character::isJavaIdentifierPart(cp);
		bool var$11 = var$12 || $Character::isUnicodeIdentifierStart(cp);
		bool var$10 = var$11 || $Character::isUnicodeIdentifierPart(cp);
		bool var$9 = var$10 || $Character::isIdentifierIgnorable(cp);
		bool var$8 = var$9 || $Character::isSpaceChar(cp);
		bool var$7 = var$8 || $Character::isWhitespace(cp);
		bool var$6 = var$7 || $Character::isMirrored(cp);
		bool var$5 = var$6 || $Character::toLowerCase(cp) != cp;
		bool var$4 = var$5 || $Character::toUpperCase(cp) != cp;
		bool var$3 = var$4 || $Character::toTitleCase(cp) != cp;
		bool var$2 = var$3 || $Character::getDirectionality(cp) != $Character::DIRECTIONALITY_UNDEFINED;
		bool var$1 = var$2 || $Character::getType(cp) != $Character::UNASSIGNED;
		bool var$0 = var$1 || $Character::getNumericValue(cp) != -1;
		if (var$0 || $Character::digit(cp, 10) != -1) {
			$nc($System::out)->println("Failed."_s);
			$throwNew($RuntimeException);
		}
		$var($Character$UnicodeBlock, block, nullptr);
		try {
			$assign(block, $Character$UnicodeBlock::of(cp));
			$nc($System::out)->println("Failed."_s);
			$throwNew($RuntimeException);
		} catch ($IllegalArgumentException&) {
			$catch();
		}
	}
	$init($System);
	$nc($System::out)->println("Passed."_s);
}

TestNegativeCodepoint::TestNegativeCodepoint() {
}

$Class* TestNegativeCodepoint::load$($String* name, bool initialize) {
	$loadClass(TestNegativeCodepoint, name, initialize, &_TestNegativeCodepoint_ClassInfo_, allocate$TestNegativeCodepoint);
	return class$;
}

$Class* TestNegativeCodepoint::class$ = nullptr;