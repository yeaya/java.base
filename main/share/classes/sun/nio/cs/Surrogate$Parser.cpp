#include <sun/nio/cs/Surrogate$Parser.h>

#include <java/lang/AssertionError.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate.h>
#include <jcpp.h>

#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate = ::sun::nio::cs::Surrogate;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _Surrogate$Parser_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Surrogate$Parser, $assertionsDisabled)},
	{"character", "I", nullptr, $PRIVATE, $field(Surrogate$Parser, character$)},
	{"error", "Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $field(Surrogate$Parser, error$)},
	{"isPair", "Z", nullptr, $PRIVATE, $field(Surrogate$Parser, isPair$)},
	{}
};

$MethodInfo _Surrogate$Parser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Surrogate$Parser::*)()>(&Surrogate$Parser::init$))},
	{"character", "()I", nullptr, $PUBLIC},
	{"error", "()Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"increment", "()I", nullptr, $PUBLIC},
	{"isPair", "()Z", nullptr, $PUBLIC},
	{"parse", "(CLjava/nio/CharBuffer;)I", nullptr, $PUBLIC},
	{"parse", "(C[CII)I", nullptr, $PUBLIC},
	{"unmappableResult", "()Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Surrogate$Parser_InnerClassesInfo_[] = {
	{"sun.nio.cs.Surrogate$Parser", "sun.nio.cs.Surrogate", "Parser", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Surrogate$Parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.Surrogate$Parser",
	"java.lang.Object",
	nullptr,
	_Surrogate$Parser_FieldInfo_,
	_Surrogate$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_Surrogate$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Surrogate"
};

$Object* allocate$Surrogate$Parser($Class* clazz) {
	return $of($alloc(Surrogate$Parser));
}

bool Surrogate$Parser::$assertionsDisabled = false;

void Surrogate$Parser::init$() {
	$init($CoderResult);
	$set(this, error$, $CoderResult::UNDERFLOW);
}

int32_t Surrogate$Parser::character() {
	if (!Surrogate$Parser::$assertionsDisabled && !(this->error$ == nullptr)) {
		$throwNew($AssertionError);
	}
	return this->character$;
}

bool Surrogate$Parser::isPair() {
	if (!Surrogate$Parser::$assertionsDisabled && !(this->error$ == nullptr)) {
		$throwNew($AssertionError);
	}
	return this->isPair$;
}

int32_t Surrogate$Parser::increment() {
	if (!Surrogate$Parser::$assertionsDisabled && !(this->error$ == nullptr)) {
		$throwNew($AssertionError);
	}
	return this->isPair$ ? 2 : 1;
}

$CoderResult* Surrogate$Parser::error() {
	if (!Surrogate$Parser::$assertionsDisabled && !(this->error$ != nullptr)) {
		$throwNew($AssertionError);
	}
	return this->error$;
}

$CoderResult* Surrogate$Parser::unmappableResult() {
	if (!Surrogate$Parser::$assertionsDisabled && !(this->error$ == nullptr)) {
		$throwNew($AssertionError);
	}
	return $CoderResult::unmappableForLength(this->isPair$ ? 2 : 1);
}

int32_t Surrogate$Parser::parse(char16_t c, $CharBuffer* in) {
	if ($Character::isHighSurrogate(c)) {
		if (!$nc(in)->hasRemaining()) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::UNDERFLOW);
			return -1;
		}
		char16_t d = $nc(in)->get();
		if ($Character::isLowSurrogate(d)) {
			this->character$ = $Character::toCodePoint(c, d);
			this->isPair$ = true;
			$set(this, error$, nullptr);
			return this->character$;
		}
		$set(this, error$, $CoderResult::malformedForLength(1));
		return -1;
	}
	if ($Character::isLowSurrogate(c)) {
		$set(this, error$, $CoderResult::malformedForLength(1));
		return -1;
	}
	this->character$ = c;
	this->isPair$ = false;
	$set(this, error$, nullptr);
	return this->character$;
}

int32_t Surrogate$Parser::parse(char16_t c, $chars* ia, int32_t ip, int32_t il) {
	if (!Surrogate$Parser::$assertionsDisabled && !($nc(ia)->get(ip) == c)) {
		$throwNew($AssertionError);
	}
	if ($Character::isHighSurrogate(c)) {
		if (il - ip < 2) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::UNDERFLOW);
			return -1;
		}
		char16_t d = $nc(ia)->get(ip + 1);
		if ($Character::isLowSurrogate(d)) {
			this->character$ = $Character::toCodePoint(c, d);
			this->isPair$ = true;
			$set(this, error$, nullptr);
			return this->character$;
		}
		$set(this, error$, $CoderResult::malformedForLength(1));
		return -1;
	}
	if ($Character::isLowSurrogate(c)) {
		$set(this, error$, $CoderResult::malformedForLength(1));
		return -1;
	}
	this->character$ = c;
	this->isPair$ = false;
	$set(this, error$, nullptr);
	return this->character$;
}

void clinit$Surrogate$Parser($Class* class$) {
	$load($Surrogate);
	Surrogate$Parser::$assertionsDisabled = !$Surrogate::class$->desiredAssertionStatus();
}

Surrogate$Parser::Surrogate$Parser() {
}

$Class* Surrogate$Parser::load$($String* name, bool initialize) {
	$loadClass(Surrogate$Parser, name, initialize, &_Surrogate$Parser_ClassInfo_, clinit$Surrogate$Parser, allocate$Surrogate$Parser);
	return class$;
}

$Class* Surrogate$Parser::class$ = nullptr;

		} // cs
	} // nio
} // sun