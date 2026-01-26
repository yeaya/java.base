#include <java/util/Formatter$Conversion.h>

#include <java/util/Formatter.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOOLEAN_UPPER
#undef CHARACTER
#undef CHARACTER_UPPER
#undef DATE_TIME
#undef DATE_TIME_UPPER
#undef DECIMAL_FLOAT
#undef DECIMAL_INTEGER
#undef GENERAL
#undef GENERAL_UPPER
#undef HASHCODE
#undef HASHCODE_UPPER
#undef HEXADECIMAL_FLOAT
#undef HEXADECIMAL_FLOAT_UPPER
#undef HEXADECIMAL_INTEGER
#undef HEXADECIMAL_INTEGER_UPPER
#undef LINE_SEPARATOR
#undef OCTAL_INTEGER
#undef PERCENT_SIGN
#undef SCIENTIFIC
#undef SCIENTIFIC_UPPER
#undef STRING
#undef STRING_UPPER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Formatter$Conversion_FieldInfo_[] = {
	{"DECIMAL_INTEGER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, DECIMAL_INTEGER)},
	{"OCTAL_INTEGER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, OCTAL_INTEGER)},
	{"HEXADECIMAL_INTEGER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HEXADECIMAL_INTEGER)},
	{"HEXADECIMAL_INTEGER_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HEXADECIMAL_INTEGER_UPPER)},
	{"SCIENTIFIC", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, SCIENTIFIC)},
	{"SCIENTIFIC_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, SCIENTIFIC_UPPER)},
	{"GENERAL", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, GENERAL)},
	{"GENERAL_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, GENERAL_UPPER)},
	{"DECIMAL_FLOAT", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, DECIMAL_FLOAT)},
	{"HEXADECIMAL_FLOAT", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HEXADECIMAL_FLOAT)},
	{"HEXADECIMAL_FLOAT_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HEXADECIMAL_FLOAT_UPPER)},
	{"CHARACTER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, CHARACTER)},
	{"CHARACTER_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, CHARACTER_UPPER)},
	{"DATE_TIME", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, DATE_TIME)},
	{"DATE_TIME_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, DATE_TIME_UPPER)},
	{"BOOLEAN", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, BOOLEAN)},
	{"BOOLEAN_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, BOOLEAN_UPPER)},
	{"STRING", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, STRING)},
	{"STRING_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, STRING_UPPER)},
	{"HASHCODE", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HASHCODE)},
	{"HASHCODE_UPPER", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, HASHCODE_UPPER)},
	{"LINE_SEPARATOR", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, LINE_SEPARATOR)},
	{"PERCENT_SIGN", "C", nullptr, $STATIC | $FINAL, $constField(Formatter$Conversion, PERCENT_SIGN)},
	{}
};

$MethodInfo _Formatter$Conversion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Formatter$Conversion, init$, void)},
	{"isCharacter", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isCharacter, bool, char16_t)},
	{"isFloat", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isFloat, bool, char16_t)},
	{"isGeneral", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isGeneral, bool, char16_t)},
	{"isInteger", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isInteger, bool, char16_t)},
	{"isText", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isText, bool, char16_t)},
	{"isValid", "(C)Z", nullptr, $STATIC, $staticMethod(Formatter$Conversion, isValid, bool, char16_t)},
	{}
};

$InnerClassInfo _Formatter$Conversion_InnerClassesInfo_[] = {
	{"java.util.Formatter$Conversion", "java.util.Formatter", "Conversion", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Formatter$Conversion_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Formatter$Conversion",
	"java.lang.Object",
	nullptr,
	_Formatter$Conversion_FieldInfo_,
	_Formatter$Conversion_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$Conversion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$Conversion($Class* clazz) {
	return $of($alloc(Formatter$Conversion));
}

void Formatter$Conversion::init$() {
}

bool Formatter$Conversion::isValid(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::BOOLEAN:
		{}
	case Formatter$Conversion::BOOLEAN_UPPER:
		{}
	case Formatter$Conversion::STRING:
		{}
	case Formatter$Conversion::STRING_UPPER:
		{}
	case Formatter$Conversion::HASHCODE:
		{}
	case Formatter$Conversion::HASHCODE_UPPER:
		{}
	case Formatter$Conversion::CHARACTER:
		{}
	case Formatter$Conversion::CHARACTER_UPPER:
		{}
	case Formatter$Conversion::DECIMAL_INTEGER:
		{}
	case Formatter$Conversion::OCTAL_INTEGER:
		{}
	case Formatter$Conversion::HEXADECIMAL_INTEGER:
		{}
	case Formatter$Conversion::HEXADECIMAL_INTEGER_UPPER:
		{}
	case Formatter$Conversion::SCIENTIFIC:
		{}
	case Formatter$Conversion::SCIENTIFIC_UPPER:
		{}
	case Formatter$Conversion::GENERAL:
		{}
	case Formatter$Conversion::GENERAL_UPPER:
		{}
	case Formatter$Conversion::DECIMAL_FLOAT:
		{}
	case Formatter$Conversion::HEXADECIMAL_FLOAT:
		{}
	case Formatter$Conversion::HEXADECIMAL_FLOAT_UPPER:
		{}
	case Formatter$Conversion::LINE_SEPARATOR:
		{}
	case Formatter$Conversion::PERCENT_SIGN:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

bool Formatter$Conversion::isGeneral(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::BOOLEAN:
		{}
	case Formatter$Conversion::BOOLEAN_UPPER:
		{}
	case Formatter$Conversion::STRING:
		{}
	case Formatter$Conversion::STRING_UPPER:
		{}
	case Formatter$Conversion::HASHCODE:
		{}
	case Formatter$Conversion::HASHCODE_UPPER:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

bool Formatter$Conversion::isCharacter(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::CHARACTER:
		{}
	case Formatter$Conversion::CHARACTER_UPPER:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

bool Formatter$Conversion::isInteger(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::DECIMAL_INTEGER:
		{}
	case Formatter$Conversion::OCTAL_INTEGER:
		{}
	case Formatter$Conversion::HEXADECIMAL_INTEGER:
		{}
	case Formatter$Conversion::HEXADECIMAL_INTEGER_UPPER:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

bool Formatter$Conversion::isFloat(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::SCIENTIFIC:
		{}
	case Formatter$Conversion::SCIENTIFIC_UPPER:
		{}
	case Formatter$Conversion::GENERAL:
		{}
	case Formatter$Conversion::GENERAL_UPPER:
		{}
	case Formatter$Conversion::DECIMAL_FLOAT:
		{}
	case Formatter$Conversion::HEXADECIMAL_FLOAT:
		{}
	case Formatter$Conversion::HEXADECIMAL_FLOAT_UPPER:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

bool Formatter$Conversion::isText(char16_t c) {

	bool var$0 = false;
	switch (c) {
	case Formatter$Conversion::LINE_SEPARATOR:
		{}
	case Formatter$Conversion::PERCENT_SIGN:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = false;
			break;
		}
	}
	return var$0;
}

Formatter$Conversion::Formatter$Conversion() {
}

$Class* Formatter$Conversion::load$($String* name, bool initialize) {
	$loadClass(Formatter$Conversion, name, initialize, &_Formatter$Conversion_ClassInfo_, allocate$Formatter$Conversion);
	return class$;
}

$Class* Formatter$Conversion::class$ = nullptr;

	} // util
} // java