#include <sun/invoke/util/BytecodeName.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef DANGEROUS_CHARS
#undef DANGEROUS_CHARS_A
#undef DANGEROUS_CHARS_CA
#undef DANGEROUS_CHAR_FIRST_INDEX
#undef ESCAPE_C
#undef NULL_ESCAPE
#undef NULL_ESCAPE_C
#undef REPLACEMENT_CHARS
#undef REPLACEMENT_CHARS_A
#undef SPECIAL
#undef SPECIAL_BITMAP

using $CharacterArray = $Array<::java::lang::Character>;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace invoke {
		namespace util {

bool BytecodeName::$assertionsDisabled = false;
char16_t BytecodeName::ESCAPE_C = 0;
char16_t BytecodeName::NULL_ESCAPE_C = 0;
$String* BytecodeName::NULL_ESCAPE = nullptr;
$String* BytecodeName::DANGEROUS_CHARS = nullptr;
$String* BytecodeName::REPLACEMENT_CHARS = nullptr;
$chars* BytecodeName::DANGEROUS_CHARS_A = nullptr;
$chars* BytecodeName::REPLACEMENT_CHARS_A = nullptr;
$CharacterArray* BytecodeName::DANGEROUS_CHARS_CA = nullptr;
$longs* BytecodeName::SPECIAL_BITMAP = nullptr;

void BytecodeName::init$() {
}

$String* BytecodeName::toBytecodeName($String* s) {
	$init(BytecodeName);
	$useLocalObjectStack();
	$var($String, bn, mangle(s));
	if (!BytecodeName::$assertionsDisabled && !($equals($of(bn), s) || looksMangled(bn))) {
		$throwNew($AssertionError, $of(bn));
	}
	if (!BytecodeName::$assertionsDisabled && !($nc(s)->equals($(toSourceName(bn))))) {
		$throwNew($AssertionError, $of(s));
	}
	return bn;
}

$String* BytecodeName::toSourceName($String* s) {
	$init(BytecodeName);
	$useLocalObjectStack();
	checkSafeBytecodeName(s);
	$var($String, sn, s);
	if (looksMangled(s)) {
		$assign(sn, demangle(s));
		if (!BytecodeName::$assertionsDisabled && !($nc(s)->equals($(mangle(sn))))) {
			$throwNew($AssertionError, $$of($str({s, " => "_s, sn, " => "_s, $(mangle(sn))})));
		}
	}
	return sn;
}

$ObjectArray* BytecodeName::parseBytecodeName($String* s) {
	$init(BytecodeName);
	$useLocalObjectStack();
	int32_t slen = $nc(s)->length();
	$var($ObjectArray, res, nullptr);
	for (int32_t pass = 0; pass <= 1; ++pass) {
		int32_t fillp = 0;
		int32_t lasti = 0;
		for (int32_t i = 0; i <= slen; ++i) {
			int32_t whichDC = -1;
			if (i < slen) {
				whichDC = BytecodeName::DANGEROUS_CHARS->indexOf(s->charAt(i));
				if (whichDC < BytecodeName::DANGEROUS_CHAR_FIRST_INDEX) {
					continue;
				}
			}
			if (lasti < i) {
				if (pass != 0) {
					$nc(res)->set(fillp, $(toSourceName($(s->substring(lasti, i)))));
				}
				++fillp;
				lasti = i + 1;
			}
			if (whichDC >= BytecodeName::DANGEROUS_CHAR_FIRST_INDEX) {
				if (pass != 0) {
					$nc(res)->set(fillp, $nc(BytecodeName::DANGEROUS_CHARS_CA)->get(whichDC));
				}
				++fillp;
				lasti = i + 1;
			}
		}
		if (pass != 0) {
			break;
		}
		$assign(res, $new($ObjectArray, fillp));
		if (fillp <= 1 && lasti == 0) {
			if (fillp != 0) {
				res->set(0, $(toSourceName(s)));
			}
			break;
		}
	}
	return res;
}

$String* BytecodeName::unparseBytecodeName($ObjectArray* components$renamed) {
	$init(BytecodeName);
	$useLocalObjectStack();
	$var($ObjectArray, components, components$renamed);
	$var($ObjectArray, components0, components);
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		$var($Object, c, components->get(i));
		if ($instanceOf($String, c)) {
			$var($String, mc, toBytecodeName($cast($String, c)));
			if (i == 0 && components->length == 1) {
				return mc;
			}
			if (!$equals($of(mc), c)) {
				if (components == components0) {
					$assign(components, $cast($ObjectArray, components->clone()));
				}
				components->set(i, $assign(c, mc));
			}
		}
	}
	return appendAll(components);
}

$String* BytecodeName::appendAll($ObjectArray* components) {
	$init(BytecodeName);
	$useLocalObjectStack();
	if ($nc(components)->length <= 1) {
		if (components->length == 1) {
			return $String::valueOf(components->get(0));
		}
		return ""_s;
	}
	int32_t slen = 0;
	{
		$var($ObjectArray, arr$, components);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, c, arr$->get(i$));
			if ($instanceOf($String, c)) {
				slen += $($String::valueOf(c))->length();
			} else {
				slen += 1;
			}
		}
	}
	$var($StringBuilder, sb, $new($StringBuilder, slen));
	{
		$var($ObjectArray, arr$, components);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, c, arr$->get(i$));
			{
				sb->append(c);
			}
		}
	}
	return sb->toString();
}

$String* BytecodeName::toDisplayName($String* s) {
	$init(BytecodeName);
	$useLocalObjectStack();
	$var($ObjectArray, components, parseBytecodeName(s));
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		if (!($instanceOf($String, components->get(i)))) {
			continue;
		}
		$var($String, sn, $cast($String, components->get(i)));
		bool var$0 = !isJavaIdent(sn);
		if (var$0 || $nc(sn)->indexOf(u'$') >= 0) {
			components->set(i, $(quoteDisplay(sn)));
		}
	}
	return appendAll(components);
}

bool BytecodeName::isJavaIdent($String* s) {
	$init(BytecodeName);
	int32_t slen = $nc(s)->length();
	if (slen == 0) {
		return false;
	}
	if (!$Character::isJavaIdentifierStart(s->charAt(0))) {
		return false;
	}
	for (int32_t i = 1; i < slen; ++i) {
		if (!$Character::isJavaIdentifierPart(s->charAt(i))) {
			return false;
		}
	}
	return true;
}

$String* BytecodeName::quoteDisplay($String* s) {
	$init(BytecodeName);
	return $str({"\'"_s, $($nc(s)->replaceAll("[\'\\\\]"_s, "\\\\$0"_s)), "\'"_s});
}

void BytecodeName::checkSafeBytecodeName($String* s) {
	$init(BytecodeName);
	if (!isSafeBytecodeName(s)) {
		$throwNew($IllegalArgumentException, s);
	}
}

bool BytecodeName::isSafeBytecodeName($String* s) {
	$init(BytecodeName);
	if ($nc(s)->isEmpty()) {
		return false;
	}
	{
		$var($chars, arr$, BytecodeName::DANGEROUS_CHARS_A);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			char16_t xc = arr$->get(i$);
			{
				if (xc == BytecodeName::ESCAPE_C) {
					continue;
				}
				if (s->indexOf(xc) >= 0) {
					return false;
				}
			}
		}
	}
	return true;
}

bool BytecodeName::isSafeBytecodeChar(char16_t c) {
	$init(BytecodeName);
	return BytecodeName::DANGEROUS_CHARS->indexOf(c) < BytecodeName::DANGEROUS_CHAR_FIRST_INDEX;
}

bool BytecodeName::looksMangled($String* s) {
	$init(BytecodeName);
	return $nc(s)->charAt(0) == BytecodeName::ESCAPE_C;
}

$String* BytecodeName::mangle($String* s) {
	$init(BytecodeName);
	if ($nc(s)->isEmpty()) {
		return BytecodeName::NULL_ESCAPE;
	}
	$var($StringBuilder, sb, nullptr);
	for (int32_t i = 0, slen = s->length(); i < slen; ++i) {
		char16_t c = s->charAt(i);
		bool needEscape = false;
		if (c == BytecodeName::ESCAPE_C) {
			if (i + 1 < slen) {
				char16_t c1 = s->charAt(i + 1);
				if ((i == 0 && c1 == BytecodeName::NULL_ESCAPE_C) || c1 != originalOfReplacement(c1)) {
					needEscape = true;
				}
			}
		} else {
			needEscape = isDangerous(c);
		}
		if (!needEscape) {
			if (sb != nullptr) {
				sb->append(c);
			}
			continue;
		}
		if (sb == nullptr) {
			$assign(sb, $new($StringBuilder, s->length() + 10));
			if (s->charAt(0) != BytecodeName::ESCAPE_C && i > 0) {
				sb->append(BytecodeName::NULL_ESCAPE);
			}
			sb->append(s, 0, i);
		}
		$nc(sb)->append(BytecodeName::ESCAPE_C);
		sb->append(replacementOf(c));
	}
	if (sb != nullptr) {
		return sb->toString();
	}
	return s;
}

$String* BytecodeName::demangle($String* s) {
	$init(BytecodeName);
	$var($StringBuilder, sb, nullptr);
	int32_t stringStart = 0;
	if ($nc(s)->startsWith(BytecodeName::NULL_ESCAPE)) {
		stringStart = 2;
	}
	for (int32_t i = stringStart, slen = s->length(); i < slen; ++i) {
		char16_t c = s->charAt(i);
		if (c == BytecodeName::ESCAPE_C && i + 1 < slen) {
			char16_t rc = s->charAt(i + 1);
			char16_t oc = originalOfReplacement(rc);
			if (oc != rc) {
				if (sb == nullptr) {
					$assign(sb, $new($StringBuilder, s->length()));
					sb->append(s, stringStart, i);
				}
				++i;
				c = oc;
			}
		}
		if (sb != nullptr) {
			sb->append(c);
		}
	}
	if (sb != nullptr) {
		return sb->toString();
	}
	return s->substring(stringStart);
}

bool BytecodeName::isSpecial(char16_t c) {
	$init(BytecodeName);
	if (((int32_t)((uint32_t)c >> 6)) < BytecodeName::SPECIAL_BITMAP->length) {
		return (($sr(BytecodeName::SPECIAL_BITMAP->get((int32_t)((uint32_t)c >> 6)), c)) & 1) != 0;
	} else {
		return false;
	}
}

char16_t BytecodeName::replacementOf(char16_t c) {
	$init(BytecodeName);
	if (!isSpecial(c)) {
		return c;
	}
	int32_t i = BytecodeName::DANGEROUS_CHARS->indexOf(c);
	if (i < 0) {
		return c;
	}
	return BytecodeName::REPLACEMENT_CHARS->charAt(i);
}

char16_t BytecodeName::originalOfReplacement(char16_t c) {
	$init(BytecodeName);
	if (!isSpecial(c)) {
		return c;
	}
	int32_t i = BytecodeName::REPLACEMENT_CHARS->indexOf(c);
	if (i < 0) {
		return c;
	}
	return BytecodeName::DANGEROUS_CHARS->charAt(i);
}

bool BytecodeName::isDangerous(char16_t c) {
	$init(BytecodeName);
	if (!isSpecial(c)) {
		return false;
	}
	return (BytecodeName::DANGEROUS_CHARS->indexOf(c) >= BytecodeName::DANGEROUS_CHAR_FIRST_INDEX);
}

int32_t BytecodeName::indexOfDangerousChar($String* s, int32_t from) {
	$init(BytecodeName);
	for (int32_t i = from, slen = $nc(s)->length(); i < slen; ++i) {
		if (isDangerous(s->charAt(i))) {
			return i;
		}
	}
	return -1;
}

int32_t BytecodeName::lastIndexOfDangerousChar($String* s, int32_t from) {
	$init(BytecodeName);
	for (int32_t i = $Math::min(from, $nc(s)->length() - 1); i >= 0; --i) {
		if (isDangerous(s->charAt(i))) {
			return i;
		}
	}
	return -1;
}

void BytecodeName::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(BytecodeName::DANGEROUS_CHARS, "\\/.;:$[]<>"_s);
	$assignStatic(BytecodeName::REPLACEMENT_CHARS, "-|,?!%{}^_"_s);
	BytecodeName::$assertionsDisabled = !BytecodeName::class$->desiredAssertionStatus();
	BytecodeName::ESCAPE_C = u'\\';
	BytecodeName::NULL_ESCAPE_C = u'=';
	$assignStatic(BytecodeName::NULL_ESCAPE, $str({$$str(BytecodeName::ESCAPE_C), ""_s, $$str(BytecodeName::NULL_ESCAPE_C)}));
	$assignStatic(BytecodeName::DANGEROUS_CHARS_A, BytecodeName::DANGEROUS_CHARS->toCharArray());
	$assignStatic(BytecodeName::REPLACEMENT_CHARS_A, BytecodeName::REPLACEMENT_CHARS->toCharArray());
	{
		$var($CharacterArray, dcca, $new($CharacterArray, BytecodeName::DANGEROUS_CHARS->length()));
		for (int32_t i = 0; i < dcca->length; ++i) {
			dcca->set(i, $($Character::valueOf(BytecodeName::DANGEROUS_CHARS->charAt(i))));
		}
		$assignStatic(BytecodeName::DANGEROUS_CHARS_CA, dcca);
	}
	$assignStatic(BytecodeName::SPECIAL_BITMAP, $new($longs, 2));
	{
		$var($String, SPECIAL, $str({BytecodeName::DANGEROUS_CHARS, BytecodeName::REPLACEMENT_CHARS}));
		{
			$var($chars, arr$, SPECIAL->toCharArray());
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					(*BytecodeName::SPECIAL_BITMAP)[(int32_t)((uint32_t)c >> 6)] |= $sl((int64_t)1, c);
				}
			}
		}
	}
}

BytecodeName::BytecodeName() {
}

$Class* BytecodeName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BytecodeName, $assertionsDisabled)},
		{"ESCAPE_C", "C", nullptr, $STATIC, $staticField(BytecodeName, ESCAPE_C)},
		{"NULL_ESCAPE_C", "C", nullptr, $STATIC, $staticField(BytecodeName, NULL_ESCAPE_C)},
		{"NULL_ESCAPE", "Ljava/lang/String;", nullptr, $STATIC, $staticField(BytecodeName, NULL_ESCAPE)},
		{"DANGEROUS_CHARS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BytecodeName, DANGEROUS_CHARS)},
		{"REPLACEMENT_CHARS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BytecodeName, REPLACEMENT_CHARS)},
		{"DANGEROUS_CHAR_FIRST_INDEX", "I", nullptr, $STATIC | $FINAL, $constField(BytecodeName, DANGEROUS_CHAR_FIRST_INDEX)},
		{"DANGEROUS_CHARS_A", "[C", nullptr, $STATIC, $staticField(BytecodeName, DANGEROUS_CHARS_A)},
		{"REPLACEMENT_CHARS_A", "[C", nullptr, $STATIC, $staticField(BytecodeName, REPLACEMENT_CHARS_A)},
		{"DANGEROUS_CHARS_CA", "[Ljava/lang/Character;", nullptr, $STATIC | $FINAL, $staticField(BytecodeName, DANGEROUS_CHARS_CA)},
		{"SPECIAL_BITMAP", "[J", nullptr, $STATIC | $FINAL, $staticField(BytecodeName, SPECIAL_BITMAP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BytecodeName, init$, void)},
		{"appendAll", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, appendAll, $String*, $ObjectArray*)},
		{"checkSafeBytecodeName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, checkSafeBytecodeName, void, $String*), "java.lang.IllegalArgumentException"},
		{"demangle", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, demangle, $String*, $String*)},
		{"indexOfDangerousChar", "(Ljava/lang/String;I)I", nullptr, $STATIC, $staticMethod(BytecodeName, indexOfDangerousChar, int32_t, $String*, int32_t)},
		{"isDangerous", "(C)Z", nullptr, $STATIC, $staticMethod(BytecodeName, isDangerous, bool, char16_t)},
		{"isJavaIdent", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, isJavaIdent, bool, $String*)},
		{"isSafeBytecodeChar", "(C)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, isSafeBytecodeChar, bool, char16_t)},
		{"isSafeBytecodeName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, isSafeBytecodeName, bool, $String*)},
		{"isSpecial", "(C)Z", nullptr, $STATIC, $staticMethod(BytecodeName, isSpecial, bool, char16_t)},
		{"lastIndexOfDangerousChar", "(Ljava/lang/String;I)I", nullptr, $STATIC, $staticMethod(BytecodeName, lastIndexOfDangerousChar, int32_t, $String*, int32_t)},
		{"looksMangled", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, looksMangled, bool, $String*)},
		{"mangle", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, mangle, $String*, $String*)},
		{"originalOfReplacement", "(C)C", nullptr, $STATIC, $staticMethod(BytecodeName, originalOfReplacement, char16_t, char16_t)},
		{"parseBytecodeName", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, parseBytecodeName, $ObjectArray*, $String*)},
		{"quoteDisplay", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(BytecodeName, quoteDisplay, $String*, $String*)},
		{"replacementOf", "(C)C", nullptr, $STATIC, $staticMethod(BytecodeName, replacementOf, char16_t, char16_t)},
		{"toBytecodeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, toBytecodeName, $String*, $String*)},
		{"toDisplayName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, toDisplayName, $String*, $String*)},
		{"toSourceName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, toSourceName, $String*, $String*)},
		{"unparseBytecodeName", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BytecodeName, unparseBytecodeName, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.invoke.util.BytecodeName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BytecodeName, name, initialize, &classInfo$$, BytecodeName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BytecodeName);
	});
	return class$;
}

$Class* BytecodeName::class$ = nullptr;

		} // util
	} // invoke
} // sun