#include <java/lang/EnumConstantNotPresentException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void EnumConstantNotPresentException::init$($Class* enumType, $String* constantName) {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumConstantNotPresentException, serialVersionUID)},
		{"enumType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Enum;>;", $PRIVATE, $field(EnumConstantNotPresentException, enumType$)},
		{"constantName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EnumConstantNotPresentException, constantName$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<+Ljava/lang/Enum;>;Ljava/lang/String;)V", $PUBLIC, $method(EnumConstantNotPresentException, init$, void, $Class*, $String*)},
		{"constantName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumConstantNotPresentException, constantName, $String*)},
		{"enumType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/Enum;>;", $PUBLIC, $virtualMethod(EnumConstantNotPresentException, enumType, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.EnumConstantNotPresentException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EnumConstantNotPresentException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumConstantNotPresentException);
	});
	return class$;
}

$Class* EnumConstantNotPresentException::class$ = nullptr;

	} // lang
} // java