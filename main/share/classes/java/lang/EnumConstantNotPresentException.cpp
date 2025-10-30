#include <java/lang/EnumConstantNotPresentException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _EnumConstantNotPresentException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumConstantNotPresentException, serialVersionUID)},
	{"enumType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Enum;>;", $PRIVATE, $field(EnumConstantNotPresentException, enumType$)},
	{"constantName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EnumConstantNotPresentException, constantName$)},
	{}
};

$MethodInfo _EnumConstantNotPresentException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<+Ljava/lang/Enum;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(EnumConstantNotPresentException::*)($Class*,$String*)>(&EnumConstantNotPresentException::init$))},
	{"constantName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"enumType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/Enum;>;", $PUBLIC},
	{}
};

$ClassInfo _EnumConstantNotPresentException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.EnumConstantNotPresentException",
	"java.lang.RuntimeException",
	nullptr,
	_EnumConstantNotPresentException_FieldInfo_,
	_EnumConstantNotPresentException_MethodInfo_
};

$Object* allocate$EnumConstantNotPresentException($Class* clazz) {
	return $of($alloc(EnumConstantNotPresentException));
}

void EnumConstantNotPresentException::init$($Class* enumType, $String* constantName) {
	$useLocalCurrentObjectStackCache();
	$RuntimeException::init$($$str({$($nc(enumType)->getName()), "."_s, constantName}));
	$set(this, enumType$, enumType);
	$set(this, constantName$, constantName);
}

$Class* EnumConstantNotPresentException::enumType() {
	return this->enumType$;
}

$String* EnumConstantNotPresentException::constantName() {
	return this->constantName$;
}

EnumConstantNotPresentException::EnumConstantNotPresentException() {
}

EnumConstantNotPresentException::EnumConstantNotPresentException(const EnumConstantNotPresentException& e) : $RuntimeException(e) {
}

void EnumConstantNotPresentException::throw$() {
	throw *this;
}

$Class* EnumConstantNotPresentException::load$($String* name, bool initialize) {
	$loadClass(EnumConstantNotPresentException, name, initialize, &_EnumConstantNotPresentException_ClassInfo_, allocate$EnumConstantNotPresentException);
	return class$;
}

$Class* EnumConstantNotPresentException::class$ = nullptr;

	} // lang
} // java