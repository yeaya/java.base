#include <java/text/PatternEntry.h>

#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Collator.h>
#include <jcpp.h>

#undef IDENTICAL
#undef PRIMARY
#undef RESET
#undef SECONDARY
#undef TERTIARY
#undef UNSET

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collator = ::java::text::Collator;

namespace java {
	namespace text {

$FieldInfo _PatternEntry_FieldInfo_[] = {
	{"RESET", "I", nullptr, $STATIC | $FINAL, $constField(PatternEntry, RESET)},
	{"UNSET", "I", nullptr, $STATIC | $FINAL, $constField(PatternEntry, UNSET)},
	{"strength", "I", nullptr, 0, $field(PatternEntry, strength)},
	{"chars", "Ljava/lang/String;", nullptr, 0, $field(PatternEntry, chars)},
	{"extension", "Ljava/lang/String;", nullptr, 0, $field(PatternEntry, extension)},
	{}
};

$MethodInfo _PatternEntry_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/StringBuffer;Ljava/lang/StringBuffer;)V", nullptr, 0, $method(static_cast<void(PatternEntry::*)(int32_t,$StringBuffer*,$StringBuffer*)>(&PatternEntry::init$))},
	{"addToBuffer", "(Ljava/lang/StringBuffer;ZZLjava/text/PatternEntry;)V", nullptr, 0},
	{"appendQuoted", "(Ljava/lang/String;Ljava/lang/StringBuffer;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$StringBuffer*)>(&PatternEntry::appendQuoted))},
	{"appendQuotedChars", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{"appendQuotedExtension", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getChars", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(PatternEntry::*)()>(&PatternEntry::getChars))},
	{"getExtension", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(PatternEntry::*)()>(&PatternEntry::getExtension))},
	{"getStrength", "()I", nullptr, $FINAL, $method(static_cast<int32_t(PatternEntry::*)()>(&PatternEntry::getStrength))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isSpecialChar", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&PatternEntry::isSpecialChar))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PatternEntry_InnerClassesInfo_[] = {
	{"java.text.PatternEntry$Parser", "java.text.PatternEntry", "Parser", $STATIC},
	{}
};

$ClassInfo _PatternEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.PatternEntry",
	"java.lang.Object",
	nullptr,
	_PatternEntry_FieldInfo_,
	_PatternEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PatternEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.PatternEntry$Parser"
};

$Object* allocate$PatternEntry($Class* clazz) {
	return $of($alloc(PatternEntry));
}

void PatternEntry::appendQuotedExtension($StringBuffer* toAddTo) {
	appendQuoted(this->extension, toAddTo);
}

void PatternEntry::appendQuotedChars($StringBuffer* toAddTo) {
	appendQuoted(this->chars, toAddTo);
}

bool PatternEntry::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	$var(PatternEntry, other, $cast(PatternEntry, obj));
	bool result = $nc(this->chars)->equals($nc(other)->chars);
	return result;
}

int32_t PatternEntry::hashCode() {
	return $nc(this->chars)->hashCode();
}

$String* PatternEntry::toString() {
	$var($StringBuffer, result, $new($StringBuffer));
	addToBuffer(result, true, false, nullptr);
	return result->toString();
}

int32_t PatternEntry::getStrength() {
	return this->strength;
}

$String* PatternEntry::getExtension() {
	return this->extension;
}

$String* PatternEntry::getChars() {
	return this->chars;
}

void PatternEntry::addToBuffer($StringBuffer* toAddTo, bool showExtension, bool showWhiteSpace, PatternEntry* lastEntry) {
	if (showWhiteSpace && $nc(toAddTo)->length() > 0) {
		if (this->strength == $Collator::PRIMARY || lastEntry != nullptr) {
			toAddTo->append(u'\n');
		} else {
			toAddTo->append(u' ');
		}
	}
	if (lastEntry != nullptr) {
		$nc(toAddTo)->append(u'&');
		if (showWhiteSpace) {
			toAddTo->append(u' ');
		}
		lastEntry->appendQuotedChars(toAddTo);
		appendQuotedExtension(toAddTo);
		if (showWhiteSpace) {
			toAddTo->append(u' ');
		}
	}

	char16_t var$0 = 0;
	switch (this->strength) {
	case $Collator::IDENTICAL:
		{
			var$0 = u'=';
			break;
		}
	case $Collator::TERTIARY:
		{
			var$0 = u',';
			break;
		}
	case $Collator::SECONDARY:
		{
			var$0 = u';';
			break;
		}
	case $Collator::PRIMARY:
		{
			var$0 = u'<';
			break;
		}
	case PatternEntry::RESET:
		{
			var$0 = u'&';
			break;
		}
	case PatternEntry::UNSET:
		{
			var$0 = u'?';
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"Unexpected value: "_s, $$str(this->strength)}));
		}
	}
	char16_t c = var$0;
	$nc(toAddTo)->append(c);
	if (showWhiteSpace) {
		toAddTo->append(u' ');
	}
	appendQuoted(this->chars, toAddTo);
	if (showExtension && !$nc(this->extension)->isEmpty()) {
		toAddTo->append(u'/');
		appendQuoted(this->extension, toAddTo);
	}
}

void PatternEntry::appendQuoted($String* chars, $StringBuffer* toAddTo) {
	bool inQuote = false;
	char16_t ch = $nc(chars)->charAt(0);
	if ($Character::isSpaceChar(ch)) {
		inQuote = true;
		$nc(toAddTo)->append(u'\'');
	} else if (PatternEntry::isSpecialChar(ch)) {
		inQuote = true;
		$nc(toAddTo)->append(u'\'');
	} else {
		switch (ch) {
		case 16:
			{}
		case u'\f':
			{}
		case u'\r':
			{}
		case u'\t':
			{}
		case u'\n':
			{}
		case u'@':
			{
				inQuote = true;
				$nc(toAddTo)->append(u'\'');
				break;
			}
		case u'\'':
			{
				inQuote = true;
				$nc(toAddTo)->append(u'\'');
				break;
			}
		default:
			{
				if (inQuote) {
					inQuote = false;
					$nc(toAddTo)->append(u'\'');
				}
				break;
			}
		}
	}
	$nc(toAddTo)->append(chars);
	if (inQuote) {
		toAddTo->append(u'\'');
	}
}

void PatternEntry::init$(int32_t strength, $StringBuffer* chars, $StringBuffer* extension) {
	this->strength = PatternEntry::UNSET;
	$set(this, chars, ""_s);
	$set(this, extension, ""_s);
	this->strength = strength;
	$set(this, chars, $nc(chars)->toString());
	$set(this, extension, ($nc(extension)->length() > 0) ? $nc(extension)->toString() : ""_s);
}

bool PatternEntry::isSpecialChar(char16_t ch) {
	return ((ch == u' ') || ((ch <= u'/') && (ch >= u'\"')) || ((ch <= u'?') && (ch >= u':')) || ((ch <= u'`') && (ch >= u'[')) || ((ch <= u'~') && (ch >= u'{')));
}

PatternEntry::PatternEntry() {
}

$Class* PatternEntry::load$($String* name, bool initialize) {
	$loadClass(PatternEntry, name, initialize, &_PatternEntry_ClassInfo_, allocate$PatternEntry);
	return class$;
}

$Class* PatternEntry::class$ = nullptr;

	} // text
} // java