#include <java/lang/ConditionalSpecialCasing$Entry.h>
#include <java/lang/ConditionalSpecialCasing.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ConditionalSpecialCasing$Entry::init$(int32_t ch, $chars* lower, $chars* upper, $String* lang, int32_t condition) {
	this->ch = ch;
	$set(this, lower, lower);
	$set(this, upper, upper);
	$set(this, lang, lang);
	this->condition = condition;
}

int32_t ConditionalSpecialCasing$Entry::getCodePoint() {
	return this->ch;
}

$chars* ConditionalSpecialCasing$Entry::getLowerCase() {
	return this->lower;
}

$chars* ConditionalSpecialCasing$Entry::getUpperCase() {
	return this->upper;
}

$String* ConditionalSpecialCasing$Entry::getLanguage() {
	return this->lang;
}

int32_t ConditionalSpecialCasing$Entry::getCondition() {
	return this->condition;
}

ConditionalSpecialCasing$Entry::ConditionalSpecialCasing$Entry() {
}

$Class* ConditionalSpecialCasing$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ch", "I", nullptr, 0, $field(ConditionalSpecialCasing$Entry, ch)},
		{"lower", "[C", nullptr, 0, $field(ConditionalSpecialCasing$Entry, lower)},
		{"upper", "[C", nullptr, 0, $field(ConditionalSpecialCasing$Entry, upper)},
		{"lang", "Ljava/lang/String;", nullptr, 0, $field(ConditionalSpecialCasing$Entry, lang)},
		{"condition", "I", nullptr, 0, $field(ConditionalSpecialCasing$Entry, condition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[C[CLjava/lang/String;I)V", nullptr, 0, $method(ConditionalSpecialCasing$Entry, init$, void, int32_t, $chars*, $chars*, $String*, int32_t)},
		{"getCodePoint", "()I", nullptr, 0, $virtualMethod(ConditionalSpecialCasing$Entry, getCodePoint, int32_t)},
		{"getCondition", "()I", nullptr, 0, $virtualMethod(ConditionalSpecialCasing$Entry, getCondition, int32_t)},
		{"getLanguage", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ConditionalSpecialCasing$Entry, getLanguage, $String*)},
		{"getLowerCase", "()[C", nullptr, 0, $virtualMethod(ConditionalSpecialCasing$Entry, getLowerCase, $chars*)},
		{"getUpperCase", "()[C", nullptr, 0, $virtualMethod(ConditionalSpecialCasing$Entry, getUpperCase, $chars*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ConditionalSpecialCasing$Entry", "java.lang.ConditionalSpecialCasing", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ConditionalSpecialCasing$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ConditionalSpecialCasing"
	};
	$loadClass(ConditionalSpecialCasing$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConditionalSpecialCasing$Entry);
	});
	return class$;
}

$Class* ConditionalSpecialCasing$Entry::class$ = nullptr;

	} // lang
} // java