#include <TestClassArray.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

using $ObjectArray3 = $Array<::java::lang::Object, 3>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

int32_t TestClassArray::hashCode() {
	 return this->$Serializable::hashCode();
}

bool TestClassArray::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* TestClassArray::clone() {
	 return this->$Serializable::clone();
}

$String* TestClassArray::toString() {
	 return this->$Serializable::toString();
}

void TestClassArray::finalize() {
	this->$Serializable::finalize();
}

void TestClassArray::init$() {
}

$ObjectArray3* TestClassArray::foo() {
	return nullptr;
}

TestClassArray::TestClassArray() {
}

$Class* TestClassArray::load$($String* name, bool initialize) {
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "return1"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "return3"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "return4"},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute, "METHOD_RETURN"},
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute$1, "METHOD_RETURN, location = (ARRAY,ARRAY)"},
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute$2, "METHOD_RETURN, location = (ARRAY,ARRAY,ARRAY)"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(TestClassArray, init$, void)},
		{"foo", "()[[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestClassArray, foo, $ObjectArray3*), nullptr, nullptr, nullptr, foomethodTypeAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute[] = {
		{"value", 's', "extends"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "extends2"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "implements serializable"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "implements2 serializable"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$4[] = {
		{"value", 's', "implements cloneable"},
		{}
	};
	$NamedAttribute typeAnnotations$$$namedAttribute$5[] = {
		{"value", 's', "implements2 cloneable"},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LTypeAnno;", typeAnnotations$$$namedAttribute, "CLASS_EXTENDS, type_index = 65535"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$1, "CLASS_EXTENDS, type_index = 65535"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$2, "CLASS_EXTENDS, type_index = 0"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$3, "CLASS_EXTENDS, type_index = 0"},
		{"LTypeAnno;", typeAnnotations$$$namedAttribute$4, "CLASS_EXTENDS, type_index = 2"},
		{"LTypeAnno2;", typeAnnotations$$$namedAttribute$5, "CLASS_EXTENDS, type_index = 2"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestClassArray",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Readable,java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		typeAnnotations$$
	};
	$loadClass(TestClassArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestClassArray));
	});
	return class$;
}

$Class* TestClassArray::class$ = nullptr;