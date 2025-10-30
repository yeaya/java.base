#include <java/lang/ConditionalSpecialCasing$Entry.h>

#include <java/lang/ConditionalSpecialCasing.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ConditionalSpecialCasing = ::java::lang::ConditionalSpecialCasing;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ConditionalSpecialCasing$Entry_FieldInfo_[] = {
	{"ch", "I", nullptr, 0, $field(ConditionalSpecialCasing$Entry, ch)},
	{"lower", "[C", nullptr, 0, $field(ConditionalSpecialCasing$Entry, lower)},
	{"upper", "[C", nullptr, 0, $field(ConditionalSpecialCasing$Entry, upper)},
	{"lang", "Ljava/lang/String;", nullptr, 0, $field(ConditionalSpecialCasing$Entry, lang)},
	{"condition", "I", nullptr, 0, $field(ConditionalSpecialCasing$Entry, condition)},
	{}
};

$MethodInfo _ConditionalSpecialCasing$Entry_MethodInfo_[] = {
	{"<init>", "(I[C[CLjava/lang/String;I)V", nullptr, 0, $method(static_cast<void(ConditionalSpecialCasing$Entry::*)(int32_t,$chars*,$chars*,$String*,int32_t)>(&ConditionalSpecialCasing$Entry::init$))},
	{"getCodePoint", "()I", nullptr, 0},
	{"getCondition", "()I", nullptr, 0},
	{"getLanguage", "()Ljava/lang/String;", nullptr, 0},
	{"getLowerCase", "()[C", nullptr, 0},
	{"getUpperCase", "()[C", nullptr, 0},
	{}
};

$InnerClassInfo _ConditionalSpecialCasing$Entry_InnerClassesInfo_[] = {
	{"java.lang.ConditionalSpecialCasing$Entry", "java.lang.ConditionalSpecialCasing", "Entry", $STATIC},
	{}
};

$ClassInfo _ConditionalSpecialCasing$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ConditionalSpecialCasing$Entry",
	"java.lang.Object",
	nullptr,
	_ConditionalSpecialCasing$Entry_FieldInfo_,
	_ConditionalSpecialCasing$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ConditionalSpecialCasing$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ConditionalSpecialCasing"
};

$Object* allocate$ConditionalSpecialCasing$Entry($Class* clazz) {
	return $of($alloc(ConditionalSpecialCasing$Entry));
}

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
	$loadClass(ConditionalSpecialCasing$Entry, name, initialize, &_ConditionalSpecialCasing$Entry_ClassInfo_, allocate$ConditionalSpecialCasing$Entry);
	return class$;
}

$Class* ConditionalSpecialCasing$Entry::class$ = nullptr;

	} // lang
} // java