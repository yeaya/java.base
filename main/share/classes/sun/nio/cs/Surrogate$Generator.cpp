#include <sun/nio/cs/Surrogate$Generator.h>

#include <java/lang/AssertionError.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate.h>
#include <jcpp.h>

#undef OVERFLOW

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

$FieldInfo _Surrogate$Generator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Surrogate$Generator, $assertionsDisabled)},
	{"error", "Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $field(Surrogate$Generator, error$)},
	{}
};

$MethodInfo _Surrogate$Generator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Surrogate$Generator::*)()>(&Surrogate$Generator::init$))},
	{"error", "()Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"generate", "(IILjava/nio/CharBuffer;)I", nullptr, $PUBLIC},
	{"generate", "(II[CII)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Surrogate$Generator_InnerClassesInfo_[] = {
	{"sun.nio.cs.Surrogate$Generator", "sun.nio.cs.Surrogate", "Generator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Surrogate$Generator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.Surrogate$Generator",
	"java.lang.Object",
	nullptr,
	_Surrogate$Generator_FieldInfo_,
	_Surrogate$Generator_MethodInfo_,
	nullptr,
	nullptr,
	_Surrogate$Generator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.Surrogate"
};

$Object* allocate$Surrogate$Generator($Class* clazz) {
	return $of($alloc(Surrogate$Generator));
}

bool Surrogate$Generator::$assertionsDisabled = false;

void Surrogate$Generator::init$() {
	$init($CoderResult);
	$set(this, error$, $CoderResult::OVERFLOW);
}

$CoderResult* Surrogate$Generator::error() {
	if (!Surrogate$Generator::$assertionsDisabled && !(this->error$ != nullptr)) {
		$throwNew($AssertionError);
	}
	return this->error$;
}

int32_t Surrogate$Generator::generate(int32_t uc, int32_t len, $CharBuffer* dst) {
	if ($Character::isBmpCodePoint(uc)) {
		char16_t c = (char16_t)uc;
		if ($Character::isSurrogate(c)) {
			$set(this, error$, $CoderResult::malformedForLength(len));
			return -1;
		}
		if ($nc(dst)->remaining() < 1) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::OVERFLOW);
			return -1;
		}
		$nc(dst)->put(c);
		$set(this, error$, nullptr);
		return 1;
	} else if ($Character::isValidCodePoint(uc)) {
		if ($nc(dst)->remaining() < 2) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::OVERFLOW);
			return -1;
		}
		$nc(dst)->put($Character::highSurrogate(uc));
		dst->put($Character::lowSurrogate(uc));
		$set(this, error$, nullptr);
		return 2;
	} else {
		$set(this, error$, $CoderResult::unmappableForLength(len));
		return -1;
	}
}

int32_t Surrogate$Generator::generate(int32_t uc, int32_t len, $chars* da, int32_t dp, int32_t dl) {
	if ($Character::isBmpCodePoint(uc)) {
		char16_t c = (char16_t)uc;
		if ($Character::isSurrogate(c)) {
			$set(this, error$, $CoderResult::malformedForLength(len));
			return -1;
		}
		if (dl - dp < 1) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::OVERFLOW);
			return -1;
		}
		$nc(da)->set(dp, c);
		$set(this, error$, nullptr);
		return 1;
	} else if ($Character::isValidCodePoint(uc)) {
		if (dl - dp < 2) {
			$init($CoderResult);
			$set(this, error$, $CoderResult::OVERFLOW);
			return -1;
		}
		$nc(da)->set(dp, $Character::highSurrogate(uc));
		da->set(dp + 1, $Character::lowSurrogate(uc));
		$set(this, error$, nullptr);
		return 2;
	} else {
		$set(this, error$, $CoderResult::unmappableForLength(len));
		return -1;
	}
}

void clinit$Surrogate$Generator($Class* class$) {
	$load($Surrogate);
	Surrogate$Generator::$assertionsDisabled = !$Surrogate::class$->desiredAssertionStatus();
}

Surrogate$Generator::Surrogate$Generator() {
}

$Class* Surrogate$Generator::load$($String* name, bool initialize) {
	$loadClass(Surrogate$Generator, name, initialize, &_Surrogate$Generator_ClassInfo_, clinit$Surrogate$Generator, allocate$Surrogate$Generator);
	return class$;
}

$Class* Surrogate$Generator::class$ = nullptr;

		} // cs
	} // nio
} // sun