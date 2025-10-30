#include <java/util/Formatter$FixedString.h>

#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <java/util/Formatter.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;
using $Formatter$FormatString = ::java::util::Formatter$FormatString;
using $Locale = ::java::util::Locale;

namespace java {
	namespace util {

$FieldInfo _Formatter$FixedString_FieldInfo_[] = {
	{"this$0", "Ljava/util/Formatter;", nullptr, $FINAL | $SYNTHETIC, $field(Formatter$FixedString, this$0)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Formatter$FixedString, s)},
	{"start", "I", nullptr, $PRIVATE | $FINAL, $field(Formatter$FixedString, start)},
	{"end", "I", nullptr, $PRIVATE | $FINAL, $field(Formatter$FixedString, end)},
	{}
};

$MethodInfo _Formatter$FixedString_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Formatter;Ljava/lang/String;II)V", nullptr, 0, $method(static_cast<void(Formatter$FixedString::*)($Formatter*,$String*,int32_t,int32_t)>(&Formatter$FixedString::init$))},
	{"index", "()I", nullptr, $PUBLIC},
	{"print", "(Ljava/lang/Object;Ljava/util/Locale;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Formatter$FixedString_InnerClassesInfo_[] = {
	{"java.util.Formatter$FixedString", "java.util.Formatter", "FixedString", $PRIVATE},
	{"java.util.Formatter$FormatString", "java.util.Formatter", "FormatString", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Formatter$FixedString_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Formatter$FixedString",
	"java.lang.Object",
	"java.util.Formatter$FormatString",
	_Formatter$FixedString_FieldInfo_,
	_Formatter$FixedString_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$FixedString_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$FixedString($Class* clazz) {
	return $of($alloc(Formatter$FixedString));
}

void Formatter$FixedString::init$($Formatter* this$0, $String* s, int32_t start, int32_t end) {
	$set(this, this$0, this$0);
	$set(this, s, s);
	this->start = start;
	this->end = end;
}

int32_t Formatter$FixedString::index() {
	return -2;
}

void Formatter$FixedString::print(Object$* arg, $Locale* l) {
	$nc(this->this$0->a)->append(this->s, this->start, this->end);
}

$String* Formatter$FixedString::toString() {
	return $nc(this->s)->substring(this->start, this->end);
}

Formatter$FixedString::Formatter$FixedString() {
}

$Class* Formatter$FixedString::load$($String* name, bool initialize) {
	$loadClass(Formatter$FixedString, name, initialize, &_Formatter$FixedString_ClassInfo_, allocate$Formatter$FixedString);
	return class$;
}

$Class* Formatter$FixedString::class$ = nullptr;

	} // util
} // java