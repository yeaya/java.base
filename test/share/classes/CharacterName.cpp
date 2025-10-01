#include <CharacterName.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef UNASSIGNED
#undef ENGLISH
#undef MAX_CODE_POINT

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

$MethodInfo _CharacterName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharacterName::*)()>(&CharacterName::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CharacterName::main))},
	{}
};

$ClassInfo _CharacterName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CharacterName",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharacterName_MethodInfo_
};

$Object* allocate$CharacterName($Class* clazz) {
	return $of($alloc(CharacterName));
}

void CharacterName::init$() {
}

void CharacterName::main($StringArray* args) {
	for (int32_t cp = 0; cp < $Character::MAX_CODE_POINT; ++cp) {
		if (!$Character::isValidCodePoint(cp)) {
			try {
				$Character::getName(cp);
			} catch ($IllegalArgumentException&) {
				$var($IllegalArgumentException, x, $catch());
				continue;
			}
			$throwNew($RuntimeException, $$str({"Invalid failed: "_s, $$str(cp)}));
		} else if ($Character::getType(cp) == $Character::UNASSIGNED) {
			if ($Character::getName(cp) != nullptr) {
				$throwNew($RuntimeException, $$str({"Unsigned failed: "_s, $$str(cp)}));
			}
		} else {
			$var($String, name, $Character::getName(cp));
			bool var$0 = cp != $Character::codePointOf(name);
			$init($Locale);
			if (var$0 || cp != $Character::codePointOf($($nc(name)->toLowerCase($Locale::ENGLISH)))) {
				$throwNew($RuntimeException, $$str({"Roundtrip failed: "_s, $$str(cp)}));
			}
		}
	}
}

CharacterName::CharacterName() {
}

$Class* CharacterName::load$($String* name, bool initialize) {
	$loadClass(CharacterName, name, initialize, &_CharacterName_ClassInfo_, allocate$CharacterName);
	return class$;
}

$Class* CharacterName::class$ = nullptr;