#include <CharacterName.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH
#undef MAX_CODE_POINT
#undef UNASSIGNED

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

void CharacterName::init$() {
}

void CharacterName::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t cp = 0; cp < $Character::MAX_CODE_POINT; ++cp) {
		if (!$Character::isValidCodePoint(cp)) {
			try {
				$Character::getName(cp);
			} catch ($IllegalArgumentException& x) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharacterName, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CharacterName, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CharacterName",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CharacterName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterName);
	});
	return class$;
}

$Class* CharacterName::class$ = nullptr;